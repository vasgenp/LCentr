// AlgLocal1.cpp : implementation file
//

#include "stdafx.h"
#include "SystemHeader.h"
//#include "Local_99_99.h"
#include "AlgLocal1.h"

using namespace std;




// AlgLocal1

IMPLEMENT_DYNAMIC(AlgLocal1, CWnd)

AlgLocal1::AlgLocal1()
{

}

AlgLocal1::~AlgLocal1()
{
  int a(0);//Init();
}


BEGIN_MESSAGE_MAP(AlgLocal1, CWnd)
END_MESSAGE_MAP()



// AlgLocal1 message handlers
/*
int FlagDel, NG, NumDel, MG, FlagMND, Mcur, FlagIN, numberMC, FlagINC, qmax;
int mark[5], NumbersD[5], Ft[5], Incmp[ 23][23], numberM[4], ResInc[4],B[23][23], lenB[4];
//int * lenB
double F;
double V[4], PP[23][23];
DWORD TimE, TimB;
FILE * pFile,   fb;
;*/


int AlgLocal1::local()
{
	/* 	1. FlagDel - sample	*/
	int i(0), j(0), k(0), t(0), q(0), kmax(0), qmax(0), sumR(0);
	double e, r, rmax = -1.;
	o.str("");string s("");
	//FlagINC = 0;
	for (t = 0; t < NG; t++) mark[t] = 0; //targets 
	if (FlagDel)
		for (t = 0; t < NumDel; t++)  			
			mark[NumbersD[t] - 1] = 1;
	F = 0.;
	for (t = 0; t < MG; t++) Ft[t] = 0;

	// --------------------- end of init--------------------	
	//virtprintf("Please wait ");
	// vp if (NG > 1000)  virtprintf("\n");	
	TimB = GetCurrentTime();   
	DWORD ticks = ::GetTickCount();
	//Mandatory allocation - when some resources MUST be used (check: "or targets require allocation as min as X resources") 
	if (FlagMND)  
		localMnd();
	/*	This block will calculate values of r and e and find max of r (naming it rmax)	*/
	for (t = 0; t < NG; t++)//outer resrcs loop
	{
		o<<"\nStarting inner loop : ...\n";
		for (k = 0; k < NG; k++)//inner resrcs loop
		{
//			o << "\t\tfor all that are not  marked as already assigned : ...\n";
//			o << "."<<k;

			if (!mark[k]) //for all that are not  marked as already assigned 
			{
				for (q = 0; q < Mcur; q++)	{
				//	o << ".";
					if (!FlagINC || !Incmp[q][k])// not incompartible by definition or by Incmp()
					{  //V(alue?) may be considered as effectiveness of the resource
						r = (double)V[numberM[q]] * (double)PP[k][numberM[q]]; //r[k][q]
						if (r >= rmax) {
							rmax = r, e = 1. - (double)PP[k][numberM[q]], kmax = k, qmax = q;
							o<<"\t\t rmax = "<<r<<"\t e ="<<e<<"\t kmax = "<<k<<"\t qmax = "<<q<<"\n";
						}
					}
				}
			}
		}
		s = o.str();
		if (rmax != -1)// "if at least one rmax is updated i.e. = something done"
		{
			B[qmax][lenB[qmax]] = kmax; //number of resource
			lenB[qmax]++;		  
			V[numberM[qmax]] *= e;		  
			mark[kmax] = 1;		  // this is mark that sets fact of allocation
			F =  rmax/1.0+F;		// new value of the "functional of quality" (after new allocation)	  
			//F +=  rmax/1.0+0.0;			  
			Ft[qmax] += rmax;      // the same as F (just with coordinates)
			if (FlagINC && ResInc[kmax])	//if resource is incompartible with target (can't shoot it) 			 
				AddInc(qmax, kmax); 
		}
		else
			rmax = -1;
		rmax = -1.;
		if (!(t % 10)) 
			printf(".");
// printf("\nVar= %3d   M=%2d    %3d    res=%3d  trg=%3d  r=%e  F=%7.2f\n",	num_var, Mcur, t, kmax + 1, qmax + 1, (float)rmax, (float)F);
		o << "\nVar= "<< num_var <<"  Mcur=" << Mcur <<"   t=" << t<< "  res= " << kmax + 1 
             << "  trg= " << qmax + 1 << "  r= " << (float)rmax << "  F= " << (float)F << "\n";
	}// end for   outer resrcs loop 
	s = o.str();

		TimE = GetCurrentTime();	 
		fprintf(fb, "%d  - user chosen number of targets\n", Mcur);
		fprintf(fb, "target#, its utility, number of resources allocated to this target and its numbers\n");//, Mcur
	for (i = 0; i < Mcur; i++)
	{
		fprintf(fb, "%3d       %8.5f     %4d:   ", numberM[i] + 1, Ft[i], lenB[i]);
		if (lenB[i])
			sumR += lenB[i];
		for (j = 0; j < lenB[i]; j++)
			fprintf(fb, "%5d", B[i][j] + 1);
		fprintf(fb, "\n");
	}
	fprintf(fb, "\nnumber of resources N=%3d   \n",NG);
	fprintf(fb, "Utility function F=%.5f  \n", F); 	 fprintf(fb, "local time  %.3f sec\n", (float)(TimE - TimB) / 1000.); 	 fprintf(fb, "sum of resources = %d\n", sumR);
	fclose(fb);
	::AfxMessageBox(_T("Execution of the LOCAL is finished. The results are in the file name.loc"));

	return 0;
}

int AlgLocal1::localMnd()
{
/*
For future usage of naming convention: NMnd  Mcur  GMnd[i]  NResMnd[i]   NumbMnd[i][j]  
B[q][lenB[q]] # of mandatory allocated resources
mark[num]
V[numberM[q]] 
numberM[q]
PP[num][numberM[q]];
F
Ft[q]
FlagINC
ResInc[num]
*/ 
	int i, j, q, num;
	double e, r;
	for (i = 0; i < NMnd; i++) {
		for (q = 0; q < Mcur; q++) {
			if (GMnd[i] - 1 == numberM[q]) {
				for (j = 0; j < NResMnd[i]; j++) {
					num = NumbMnd[i][j] - 1;
					if (!mark[num]) {
						B[q][lenB[q]] = num; //number of mandatory allocated resources
						lenB[q]++;
						mark[num] = 1;
						r = V[numberM[q]] * (double)PP[num][numberM[q]];
						e = 1. - (double)PP[num][numberM[q]];
						V[numberM[q]] *= e;
						F += r;
						Ft[q] += r;
						if (FlagINC && ResInc[num])
							AddInc(q, num);
					}
				}
			}
		}
	}

	return 0;
}

/*
NInc  NResInc  Incmp[goal]
*/
int AlgLocal1::AddInc(int & goal,int & res)
{
	/*
	For future usage of naming convention:
	NInc
	NResInc[i]
	NumbInc[i][j]
	Incmp[goal][NumbInc[i][k] - 1]

	NMnd  Mcur  GMnd[i]  NResMnd[i]   NumbMnd[i][j]
	B[q][lenB[q]] # of mandatory allocated resources
	mark[num]
	V[numberM[q]]
	numberM[q]
	PP[num][numberM[q]];
	F
	Ft[q]
	FlagINC
.	*/
	int i, j, k, out;
	for (i = 0; i < NInc; i++) {
		for (j = out = 0; !out && j < NResInc[i]; j++) {
			if (res == NumbInc[i][j] - 1) {  //if resource is exhausted or resource is incompartible with target
				out = 1;
				for (k = 0; k < NResInc[i]; k++)
					Incmp[goal][NumbInc[i][k] - 1] = 1;
			}
		}
	}

	return 0;
}


// /** Overriden base Init() */
int AlgLocal1::Init()
{
//  this->Log(o);

  o.str("");
  o << "\n -----------------The first version of the init - inherited from the AlgorithmBase-----------------\n ";
  TRACE( _T(o.str().c_str())); 
  init();
  return 0;
}
