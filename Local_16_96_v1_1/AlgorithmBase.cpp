// AlgorithmBase.cpp : implementation file
//
#pragma once
#include "stdafx.h"
//#include "Local_99_99.h"
#include "SystemHeader.h"
#include "AlgorithmBase.h"
#include <stdio.h>

using namespace std;

#pragma warning( disable : 4996 )
// AlgorithmBase

IMPLEMENT_DYNAMIC(AlgorithmBase, CWnd)

AlgorithmBase::AlgorithmBase()
	: NG(0)
	, MG(0)
	, FlagDel(0)
	, NumDel(0)
	, NumbersD(NULL)
	, FlagMND(0)// flag - set to 1 if mandatory constrains are required and defined
	, NMnd(0) //no mandatory assignments
	, FlagINC(0)

{
	o.str("");
}

AlgorithmBase::~AlgorithmBase()
{
}


BEGIN_MESSAGE_MAP(AlgorithmBase, CWnd)
END_MESSAGE_MAP()



// AlgorithmBase message handlers

int AlgorithmBase::init() {
	ostringstream o0, o1, o2, o3; o0.str(""); o1.str(""); o2.str(""); o3.str("");
	string s, s1("");
//	FILE * fb;
	//targets & resources
	char   name_fil[200];
	char   d[20000];memset(d, '\0', sizeof(d));//debug log
	
	int i, j; 	 float  temp;  const char* filename = "name";	const char* name_in = "name";
	int len = strlen(filename);
//	fprintf(stdout/*stderr*/, "VP:opening %s: %s\n", name_fil, strerror(errno));

	strcpy(name_fil, name_in);
	strcat(name_fil, ".a");
	if ((fb = fopen(name_fil, "rt")) == NULL) {
		//printf("Error: Can't open file %s. \n", name_fil);
		o0 << "Error: Can't open file " << name_fil << ".  \n";
		::AfxMessageBox(_T(o0.str().c_str())); 
		my_exit(2);
	}
	read_star(5, fb);; fscanf(fb, "%d", &j); while (getc(fb) != '\n');//
	read_star(5, fb);; fscanf(fb, "%d", &NG); while (getc(fb) != '\n');////resources
	read_star(5, fb);; fscanf(fb, "%d", &MG);while (getc(fb) != '\n');////marks
	fclose(fb);
 /*

	
	//targets & resources
	int len = strlen(filename);
	memset(name_fil, '\0', sizeof(name_fil));
	memcpy_s(name_fil, sizeof(name_fil), filename, len);
//	strcpy_s(nm_fil,len, filename);
	strcat_s(name_fil, sizeof(name_fil), ".a");

	fb = fopen(name_fil, "rt");
	if ((fb = fopen(name_fil, "rt")) == NULL) {
		fprintf(stderr, "VP:opening %s: %s\n", name_fil, strerror(errno)); // HERE
//		virtprintf("Error: Can't open file %s. \n", name_fil);
		my_exit(2);
	}
	read_star(5, fb);
	fscanf_s(fb, "%d", &j); while (getc(fb) != '\n');//
	read_star(5, fb); fscanf_s(fb, "%d", &NG);while (getc(fb) != '\n');//resources
	read_star(5, fb); fscanf_s(fb, "%d", &MG);while (getc(fb) != '\n');//marks? 
	fclose(fb); 

	//excluding selected resources (Numbers of user resources, which were compulsory deleted from the initial set)
  	memset(name_fil, '\0', sizeof(name_fil));
	memcpy_s(name_fil, sizeof(name_fil), filename, len);

	strcpy_s(name_fil, sizeof(name_fil), filename);
	strcat_s(name_fil, sizeof(name_fil), ".del");

	//excluding selected resources 
	strcpy(name_fil, filename);	strcat(name_fil, ".del");
	if ((fb = fopen(name_fil, "rt")) != NULL) {
		FlagDel = 1;
		fscanf(fb, "%d", &NumDel);
		NumbersD = new int[NumDel];
		for (i = 0; i < NumDel; i++)
			fscanf(fb, "%d", &NumbersD[i]);
		fclose(fb);
	}*/

	//excluding selected resources (Numbers of user resources, which were compulsory deleted from the initial set)
	strcpy(name_fil, name_in); 	strcat(name_fil, ".del");
	if ((fb = fopen(name_fil, "rt")) != NULL) {
//		FlagDel = 1;
		fscanf(fb, "%d", &NumDel);
		o << "NumDel rescrs is " << NumDel<<": ";
		NumbersD = new int[NumDel];
		for (i = 0; i < NumDel; i++)
			fscanf(fb, "%d", &NumbersD[i]), o << NumbersD[i]<<" ";
		fclose(fb);o << ".\n"; s = o.str();
	}
	//mandatory constrains   more than 1 res may be assigned to certain target
	o << "The FlagMND (existence of mnd allocations) = "<< FlagMND;
	s = o.str();
	if (FlagMND) {
		strcpy(name_fil, name_in);
		strcat(name_fil, ".mnd");
		if ((fb = fopen(name_fil, "rb")) != NULL) {
			fread(&NMnd, 2, 1, fb);
			GMnd = new int[NMnd];
			NResMnd = new int[NMnd];
			NumbMnd = new int*[NMnd];
			for (i = 0; i < NMnd; i++) {
				fread(&GMnd[i], 2, 1, fb);
				fread(&NResMnd[i], 2, 1, fb);
				NumbMnd[i] = new int[NResMnd[i]];
				fread(NumbMnd[i], sizeof(int), NResMnd[i], fb);
			}
			fclose(fb);
		}
		else
			FlagMND = 0;
	}

	//arrays probabilities
	strcpy(name_fil, name_in);	strcat(name_fil, ".p0");
	if ((fP = fopen(name_fil, "rb")) == NULL) {
		 o0<<"Error: Can't open file"<< name_fil<<" with probabilities.\n";	
		 ::AfxMessageBox(_T((o0.str()).c_str()));		 
		 my_exit(2);
	}
	o << " \nReading the file *.p probabilities.\n ";	s = o.str();
	TRACE(_T(s.c_str()));
	fseek(fP, 0, 0);
	for (j = 0; j < NG; j++)//allocate new row of PP (ex if no memory left)
		if ((PP[j] = new float far[MG]) == NULL) {// See remarks on ""
			o0<<"Error: Not enough memory. \n";::AfxMessageBox(_T((o0.str()).c_str()));	
			my_exit(2);
		}
	for (j = 0; j < NG; j++) {
		fread(&PP[j][0], 4, MG, fP);//read next [4 * MG] bytes  to every resource's row
		o <<PP[j][0] <<"PP[j]= "<<j <<" \n";
		if (0 == j % 10)
		{
			TRACE(_T(o.str().c_str())); o.str("");
		}
	}
	fclose(fP);

	//targets and its priorities
	strcpy(name_fil, name_in);	strcat(name_fil, ".smp");
	if ((fb = fopen(name_fil, "rt")) == NULL) 
	{
		o0 << "Error: Can't open file" << name_fil << " with probabilities.\n";
		::AfxMessageBox(_T((o0.str()).c_str())); my_exit(2);
	}
//	::AfxMessageBox(_T("File name.smp is opened for reading " ));
	fscanf(fb, "%d\n", &Mcur);
	o.str("");
	o <<  "\n\nReading targets and its priorities from file *.smp \nMcur = "<< Mcur<<"\n";
	s = o.str();
	TRACE(_T(s.c_str()));
	if (Mcur > MG) 
	{
		o0 << "Error: incorrect number of targets, must be <=" << MG << ".\n"; 
		::AfxMessageBox(_T((o0.str()).c_str()));	my_exit(4);
	}
//	::AfxMessageBox(_T("Start readomg from name.smp" ));

	for (i = 0; i < Mcur; i++) {

		if (!feof(fb)) {
			fscanf(fb, "%d", &numberM[i]);
			fscanf(fb, "%e", &temp);
			if (numberM[i] > MG) {
				o0 << "Error: incorrect number of target, must be <=" << MG << ".\n";
				::AfxMessageBox(_T((o0.str()).c_str()));	my_exit(4);
			}
			//if(190 < i)
//			{
			o.str("");
			o << "numberM = -->" << numberM[i]<<"<--" ;
//			}

			numberM[i]--;   //numbers of targets
			V0[numberM[i]] = temp;
			V[numberM[i]] = temp;// init probability?
		  	o << "\tV0[numberM[i]] = " << V0[numberM[i]]; //"\n"
		  	o << "\tV[numberM[i]] = " << V[numberM[i]]<<"\n";
 				TRACE(_T(o.str().c_str()));
		}
		else
			if (i < Mcur) {
				o0 << "too few targets "<< i - 1 <<" < " << Mcur <<" .\n"  ;::AfxMessageBox(_T((o0.str()).c_str()));	my_exit(4);
			}
	}
	fclose(fb);
			s = o.str();
	//incompatibility constraints
			o << "\nIncompatibility constraints (using file *.inc\n";
			s = o.str();

	if (FlagINC) {
		strcpy(name_fil, name_in);
		strcat(name_fil, ".inc");
		if ((fb = fopen(name_fil, "rb")) != NULL) {
			o << "starting read from *.inc file....\n";
			s = o.str();

			fread(&NInc, 2, 1, fb);
			NResInc = new int[NInc];
			NumbInc = new int*[NInc];
			for (i = 0; i < NInc; i++) {
				fread(&NResInc[i], 2, 1, fb);
				NumbInc[i] = new int[NResInc[i]];
				fread(NumbInc[i], sizeof(int), NResInc[i], fb);
			}
			fclose(fb);
			ResInc = new int[NG];
			for (i = 0; i < NG; i++)ResInc[i] = 0;
			Incmp = new int*[Mcur];
			for (i = 0; i < Mcur; i++) {
				Incmp[i] = new int[NG];
				for (j = 0; j < NG; j++) Incmp[i][j] = 0;
			}
			for (i = 0; i < NInc; i++)
				for (j = 0; j < NResInc[i]; j++)
					ResInc[NumbInc[i][j] - 1] = 1;
		}
		else {
			FlagINC = 0;
			o << "Incompatibility flag FlagINC is set to 0 i.e. no incompartible pairs.\n";
			//s = o.str();
		}
	}
	o << "\nMatrix int B[i][j] (allocated in loop MAXGOALS times by rows of B[i] i is up to MAXRG  )\n";
	s = o.str();

	for (i = 0; i < MAXGOALS; i++) {
		if ((B[i] = new int[MAXRG]) == NULL) {//maximum possible number of resources, allocated to one target
			o0 << "Error: Not enough memory. \n";	::AfxMessageBox(_T((o0.str()).c_str()));	my_exit(4);
		}
		for (j = 0; j < MAXRG; j++) {
			B[i][j] = -1;
			o << "B["<<i<<"]["<<j<<"]="<< B[i][j]<< "\n";
		}
	}
			//s = o.str();

	strcpy(name_fil, name_in);
	strcat(name_fil, ".loc");
	if ((fb = fopen(name_fil, "wt")) == NULL) {
		o0 << "Error: Can't open file" << name_fil << "  .\n";::AfxMessageBox(_T((o0.str()).c_str()));	my_exit(2);
	}
	o << "\nFile *.loc is opened for writing. )\n";
	//s = o.str();



	return 0;
} 

 
double AlgorithmBase::count_eff(int & m)
{
	int i, k;
	double res = 0., mult = 1.;
/*	for (i = 0; i < m; i++) {
		k = 0;
		mult = 1.;
		while (B[i][k] > 0) {
			mult *= (1. - (double)PP[B[i][k]][numberM[i]]);
			k++;
		}
		Ft[i] = V0[numberM[i]] * (1. - mult);
		res += Ft[i];
	}
  */
	for (i = 0; i < NG; i++)
		delete[](PP[i]);
	delete[]NumbersD;
	delete[]GMnd;
	delete[]NResMnd;
	delete[]NumbMnd;
	delete[]NResInc;
	delete[]NumbInc;
	delete[]ResInc;
	delete[]Incmp;
	return res;

	return 0.0;
}
 
int AlgorithmBase::my_exit(int out)
{
//if ((fb = fopen("local.tmp", "wt")) == NULL) {
		if ((NULL == fopen_s(&fb,"local.tmp", "wt" ))) {
			//	virtprintf("Error: Can't open file tmp.\n");
		//		exit (2);
		throw 2;
	}
	fprintf(fb, "%d", out);
	fclose(fb);
	_fcloseall();
	//	exit(0);
	throw 0;
 	return 0;
}
 
int AlgorithmBase::read_star(int k, FILE * f)
{
	int i, a;
	for (i = 0; i < k; i++) {
		a = getc(f);
		if (a == 42) while ((a = getc(f)) != '\n');
		else {
			ungetc(a, f);
			break;
		}
	}
	return 0;
}


int AlgorithmBase::ReportType1()
{
	return 0;
}


int AlgorithmBase::ReportType2()
{

	return 0;
}
