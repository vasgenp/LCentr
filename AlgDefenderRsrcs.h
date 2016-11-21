#pragma once
#include "AlgorithmBase.h"
#include <time.h>       /* time */
#include "SystemHeader.h"

typedef vector<float> fV;
typedef vector<int> iV;
typedef list<float> fL;
typedef list<int> iL;
typedef vector<fV> vfV;//vector of verctors
//#define myRAND_MAX      150
//int myRAND_MAX;
class AlgDefenderRsrcs :
	public AlgorithmBase
{
public:
 	         AlgDefenderRsrcs();
	virtual ~AlgDefenderRsrcs();
/**
The initialization utility.Sets the sizes for the major players in the algorithm:
the Assets[SxS], Targets[NxN] and Defenders[MxM]
*/
	int init();
  /**
  The method used to log activity based on type debugging request
  */
  int Log(ostringstream & o);

  /**
  The method used init of all components before first iteration with random data.
  */
  int prepAllInputData();

  /**
  The Core method for implementation of the  Alg "Defender".
  */
  int AlgDefenderRsrcsImplementation();
  /**
  Initiates all parameters of algorithm for the first iteration.
  */
  int SetInitialValues();

  //Mtrx vfVc size of  nxm will have max elem in position im,jm
  /**
  The method makes search in a matrix vfVc size of  NxM in order to find float 
  value of the maximal element and its position im,jm.
  */
  float findMaxInMatr(int & nRows, int & mCols, vfV & vfVc, int & im, int & jm);

  /**
  The method prepares initial iteration os the vector m_fVb_t[N];
  */
  int PrepInitIterationfor_b_0();

  int prepInitIteration_m_fVa_0();

  /**

  */
  int ReportType21();

  /**

  */
  int compute_F_gamma_functional();


  /**

  */
  int Next_fVOMEGA_t_Iteration();
  /**

  */
  int Next_a_iteration();


  /**

  */
  int NextIterationOf_m_vOv_omgMx_t(void);//m_vOv_omgMx_t estimation
  /**

  */
  int GetDLTmax(float & dlt, int & k, int & l);


  /**

  */
  int Next_Q_iteration();

  /**

  */
  int calcDltMtrx_M_N(void);// eq (2)
  /**

  */
  float correct(float & fIn);


  /**

  */
  int Compute_m_fVB_t();

  /**

  */
  int  Transpose(vfV & A, vfV & Atr);


  float one;
  float zero;
	int m_it_;				   // iteration number 

  int m_iKmax;
  int m_iLmax;
  /**
  The parameter used to normalize the srand() characteristics.
  */
  int m_iszVRand;
/**
The vector of values in the in the vector that holds the most powerful defender.
*/
  fV m_fVMaxDltByDefender;

  /**
  The vector of the targeted by the defender with max power.
  */
  iV m_iVMaxTargByDefender;

  /**
  The vector of the the defender assigned for the current iteration.
  */
  iV m_iVAssignedDefender;

  /**
  The vector ised to keep the history of the found m_iKmax.
  */
  iV m_iV_KMax_hist;
  /**
  The vector ised to keep the history of the found m_iLmax.
  */
  iV m_iV_LMax_hist;
  /**
  The vector ised to keep the history of the found m_MaxDLT.
  */
  fV m_fV_MaxDLT_hist;

  /**
  The vector of the relative values of the S assets
  */
  fV m_fV_V;//relative value of S assets 
  /**
  Parameter used in randomization of the input data.
  */
  int m_istran;
  /**
  Parameter used in randomization of the input data.
  */
  int m_irand;   
  /**
  Parameter used in preparation of the logs.
  */
  string TAB;
  /**
  The matrix (vector of vectors) of the inter Assts interaction A[SxS]
  */
  vfV m_vOv_alpha_Mtrx;    //~  8  inter Assts interact A[S,S]

  /**
  The matrix (vector of vectors) of the inter Targets interaction T[NxN]
  */
  vfV m_vOv_beta;          //~7  beta mtx interact of T[NxN]
  /**
  The stream used for the log creation.
  */
  ostringstream m_o;
  /**
  The matrix (vector of vectors) of the Target's impact on the Assets 
  Omega[NxS] in the initial iteration.
  */
  vfV m_vOvOmegaMtrx;   //1  omg   mtrx at moment t
/**
The matrix (vector of vectors) of the Target's impact on the Assets
Omega[NxS] in the iteration t.
*/
  vfV m_vOvOmegaMtrx_t;   //1  omg   mtrx at moment t
/**
The matrix (vector of vectors) of the Target's impact on the Assets
Omega[NxS] in the iteration t-1.
*/
  vfV m_vOvOmegaMtrx_1;   //1  omg   mtrx at moment t-1

/**
The matrix (vector of vectors) of the Defender's impact on the Targets 
The "reduction" matrix Q[N][M]  in the initial iteration.
*/
  vfV m_vOv_QMtrx;      //3  Q impact reduction mtrx Q[N][M]

/**
The matrix (vector of vectors) of the Defender's impact on the Targets 
The "reduction" matrix Q[N][M]  at moment t.
*/
  vfV m_vOv_QMtrx_t;      //3  Q impact reduction mtrx Q[N][M]
/**
The matrix (vector of vectors) of the Defender's impact on the Targets 
The "reduction" matrix Q[N][M]  at moment t-1.
*/
  vfV m_vOv_QMtrx_1;    //3  Q_1 impact reduction mtrx Q[N][M]

/**
The component of vecOmega 
*/
  float m_fOMEGA_A;          //6  component of vecOmega 
/**
The vector OMEGA Vec A(S)
*/
  fV m_fV_OMEGAVectA;    //6	OMEGA Vec A(S)
/**
The vector of defenders R [M].
*/
  fV m_fV_QVectR;        //3  Q Vec R [M] 

/**
The vector of defenders R [M] on iter 0.
*/
  fV m_fV_QVectR_0;      //3  Q Vec R [M] on iter 0
/**
The vector of defenders R [M] on iter t-1.
*/
  fV m_fV_QVectR_1;      //3  Q Vec R [M] on iter -1

                         //Transposed
/**
The Transposedmatrix (vector of vectors) of the Defender's impact on the Targets 
The "reduction" matrix Q[N][M]  for the initial iteration.
*/
  vfV m_vOv_trQMtrx;      //3  Q impact reduction mtrx Q[N][M]
/**
The Transposed matrix (vector of vectors) of the Defender's impact on the Targets 
The "reduction" matrix Q[N][M]  for the   iteration t.
*/
  vfV m_vOv_trQMtrx_t;      //3  Q impact reduction mtrx Q[N][M]
/**
The Transposed matrix (vector of vectors) of the Defender's impact on the Targets 
The "reduction" matrix Q[N][M]  for the   iteration t-1.
*/
  vfV m_vOv_trQMtrx_1;    //3  Q_1 impact reduction mtrx Q[N][M]

/**
The  Probability matrix (vector of vectors) of the Defender's impact on the Targets 
The "reduction" matrix Q[N][M]  for the   iteration 0.
*/
  vfV m_vOv_Pmtrx;      //3    P[N][M]
/**
The  Probability matrix (vector of vectors) of the Defender's impact on the Targets 
The "reduction" matrix Q[N][M]  for the   iteration t.
*/
  vfV m_vOv_Pmtrx_t;      //3  P[N][M]
/**
The  Probability matrix (vector of vectors) of the Defender's impact on the Targets 
The "reduction" matrix Q[N][M]  for the   iteration t-1.
*/
  vfV m_vOv_Pmtrx_1;    //3  P[N][M]
/**
The variable used for conversion of the string to the float during initialization.
*/
  string::size_type m_st;
  /**
  The maximal element of the matrix m_vOv_trQMtrx on iteration t;
  */
  float m_fmaxQ;
  /**
  The maximal element of the matrix m_vOv_trQMtrx on iteration t-1;
  */
  float m_fmaxQ_1;
  /**
  The row number of the maximal element of the matrix m_vOv_trQMtrx;
  */
  int m_iMaxRow;
  /**
  The column number of the maximal element of the matrix m_vOv_trQMtrx;
  */
  int m_iMaxCol;
  /**
  The vector with N (szT) coordinates that describes an impact of the M defenders 
  on Targets's supression at iteration t.
  */
  fV m_fVQ_t;//v with N (szT) coordnts of impact of M defenders on T's reduction 
  /**
  The vector with N (szT) coordinates that describes an impact of the M defenders 
  on Targets's supression at iteration t-1.
  */
  fV m_fVQ_1;

  /**
  The vector with N (szT) coordinates that calculated as 1-Q at iteration t.
  */
  fV m_fVP_t;
  /**
  The vector with N (szT) coordinates that calculated as 1-Q at iteration t-1.
  */
  fV m_fVP_1;
  /**
  
  */
  fV m_fVa_t;//underperformance of 
  /**
  
  */
  fV m_fVa_1;
  /**

  */
  fV m_ftrVa_t;//transposed 
  /**
  
  */
  fV m_ftrVa_1;
  /**

  */
  float m_fMaxDLT_t;
  /**

  */
  int Next_b_iteration();

  /**

  */
  float m_fFmin;


  /**

  */
  vfV mtrxDLT_t;
  /**

  */
  vfV mtrxDLT_1;


  // Reports:
  /**

  */
  fV m_fV_DltMax;//Dlt_Max:
  /**
  
  */
  iV m_cycleCounter; //# of iteration for Dlt_Max


  /**

  */
  fV m_v_B_t;					//9 vec B of huge formula results size N (T[N])
  /**
  
  */
  fV m_v_B_1;					//9 vec B of huge formula results size N (T[N])

  /**

  */
  string m_LogName;


  /**

  */
  vfV m_vOv_QMtrx_1_NOMAX_0;  // ZEROed MAX defender;
  /**
  
  */
  vfV m_vOv_QMtrx_1_NOMAX;  // ZEROed MAX defender;


  /**
  
  */
  fV m_fVb_0;
  /**

  */
  fV m_fVb_t;//defender's multiplicative impact on T
  /**
  
  */
  fV m_fVb_1;


  /**

  */
  fV m_fVB_0;//at t=0
  /**
  
  */
  fV m_fVB_t;//defender's effect on  A asset's protection
  /**
  
  */
  fV m_fVB_1;


  /**

  */
  fV m_fVOMEGA_0;//vector OMEGA_t[S] of additive impact targets on assets
  /**
  
  */
  fV m_fVOMEGA_t;//vector OMEGA_t[S] of additive impact targets on assets
  /**
  
  */
  fV m_fVOMEGA_1;

  /**

  */
  int PrepInitIterationfom_fVOMEGA_0();

};
 