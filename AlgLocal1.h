//  AlgLocal1.h


#pragma once
#include "AlgorithmBase.h"


using namespace std;
// AlgLocal1
/* #define MAXRESOURCES 10000  //maximum possible number of resources
#define MAXGOALS 2000   //maximum possible number of targets
#define MAXRG  200   //maximum possible number of resources, allocated to one target
#define MAXPATH  200   //maximum possible length of the path for the file???
*/
///#define rst read_star(5, fb)
//#define rend while (getc (fb) != '\n');


class AlgLocal1 : public AlgorithmBase// CWnd
{
	DECLARE_DYNAMIC(AlgLocal1)

public:
	AlgLocal1();
	virtual ~AlgLocal1();

protected:
	DECLARE_MESSAGE_MAP()
public:
	int local();
	int localMnd();
	int AddInc(int & goal, int & res);
public:
	/*
	int FlagDel, NG, NumDel, MG, FlagMND, Mcur, FlagIN, numberMC, FlagINC, qmax;
	int mark[5], NumbersD[5], Ft[5], Incmp[ 23][23], numberM[4], ResInc[4],B[23][23], lenB[4];
	//int * lenB
	double F;
	double V[4], PP[23][23];
	DWORD TimE, TimB;
	FILE * pFile,   fb;
	;*/

	/*int NG, MG, Mcur;*/// #goals,#tarbets
	/*float far *PP[MAXRESOURCES];*/
	//int *B[MAXGOALS]/*array of ptrs to resource's targets  */, 
	//	lenB[MAXGOALS];
	//int mark[MAXRESOURCES], flag_fil, numberM[MAXGOALS], markM[MAXGOALS];
//	int num_cycl, num_var, /*NumDel, *NumbersD, FlagDel, FlagMND,*/ FlagINC;
	/*int NMnd, *GMnd, *NResMnd, **NumbMnd;*/
//	int NInc, *NResInc, **NumbInc, **Incmp, *ResInc;
//	double F, Ft[MAXGOALS], V[MAXGOALS]/*value/effectiveness*/, V0[MAXGOALS];
	/*FILE *fP, *fb;*/
	char name_fil[MAXPATH] = { "NO" }, name_in[MAXPATH];
	DWORD TimB, TimE;

  // 
  /** 
  Overriden base Init() 
  */
  int Init();
};


