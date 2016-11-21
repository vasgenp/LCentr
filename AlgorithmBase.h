//AlgorithmBase.h
#pragma once
#include <stdio.h>
#include "SystemHeader.h"

using namespace std;

#define MAXRESOURCES 100//00  //maximum possible number of resources
#define MAXGOALS 20//00   //maximum possible number of targets
#define MAXRG  20//0   //maximum possible number of resources, allocated to one target
#define MAXPATH  20//0   //maximum possible length of the path for the file???

#define TN2TN_MAX  20//0   //maximum possible sz of interaction mtrix of targets
#define IMPszNS_Max  20//0 //maximum possible sz of impact  mtrix of T->A [NxS]
#define MAXDEFENDERS 10//0  //maximum possible number of defenders/impact reductors Rm
#define MAXszDFNDRSxT 10//0   //maximum possible sz of impact reduction mtrx

#define AmaxAmax 1//00  // max 
#define Smax  10   //len of A max 


// AlgorithmBase

class AlgorithmBase : public CWnd
{
	DECLARE_DYNAMIC(AlgorithmBase)

public:
	AlgorithmBase();
	virtual ~AlgorithmBase();

protected:
	DECLARE_MESSAGE_MAP()
public:
	int read_star(int k, FILE * f);
 		double count_eff(int & m);
		int my_exit(int out);
 		
	FILE *fP, * fb;
	//----------Specifics of -DF1---------------------------
	//------------------ Assets
	int N;
	int szA;            // size S of the assets vector with values Vi  
	float /*far*/ * Assts[Smax]; // Assets - A [S]that are carrying value Vi (1,2,..,S)
 	int AsxAsm;
    float /**/far *AP[AmaxAmax];//inter-Assts  with interraction matrix sz of SxS 
	//------------------ targets
	int szT; //   size of vector of targets   
	int TN2TN;// size of interaction matrix for Targets
	float far *TP[TN2TN_MAX];//TNxTN matrix of targets interaction
	int TNxAS;              //size of impact matrix
	float far *IMP[IMPszNS_Max];//TNxAS impact mtrx of targets to Assets
	//-----------------  Defenders
	int szR;     // Defenders / impact reductors - count of M acting agains of Trgts count of M
	int Imr;	// sz of impact reducing mtrx 
	float far * Qmn[MAXDEFENDERS];// "Impact reduction coeffs" of defenders MxN mtrx
	//-------------------------------------------------------
	//---------Just LOCAL
	float far *PP[MAXRESOURCES];
	int NG;// & resources
	int MG;//targets & resources
	int FlagMND;// flag - set to 1 if mandatory constrains are required and defined
	int Mcur;//
	int FlagDel;
	int NumDel;//total # of excluded resources 
	int *NumbersD;//array of indexes (in array of NG size) of excluded resources 
	int NMnd, *GMnd, *NResMnd, **NumbMnd;//#mandatory assignments amd indexes of  targ/res 
	int mark[MAXRESOURCES], numberM[MAXGOALS], markM[MAXGOALS];
	int *B[MAXGOALS]/*array of ptrs to resource's targets  */,
		lenB[MAXGOALS];
	int FlagINC, NInc, *NResInc, **NumbInc, **Incmp, *ResInc;
	double F, Ft[MAXGOALS], V[MAXGOALS]/*value/effectiveness*/, V0[MAXGOALS];
	
	int num_cycl, num_var;
	ostringstream o;

	int init();
  
	int ReportType1();//While iterating
	int ReportType2();//Final report
};

