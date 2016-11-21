#pragma once
#include "stdafx.h"
#include "AlgDefenderRsrcs.h"
#include <stdio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "SystemHeader.h"

using namespace std;

#pragma warning( disable : 4996 )

AlgDefenderRsrcs::AlgDefenderRsrcs():
	m_it_(0)
{
  float uno(1.0);
  one = uno;
  float nothng(0.);
  zero = nothng;
 
/*  m_LogName = string("");
  TAB = string("\t");
  m_o.str("");
 m_iV_KMax_hist.clear();
  m_iV_LMax_hist.clear();
  m_fV_MaxDLT_hist.clear();
  qMax4Def.clear();//qMax
  DefNmb.clear();
  BestTarg4Def.clear();//best target for defender
  m_alreadyAssigned.clear();
  m_iLIdx.clear();
  m_iVinx.clear();
  m_fVMaxq_t.clear();
  m_fVMaxDltByDefender.clear();
  m_iVMaxTargByDefender.clear();
  m_iVAssignedDefender.clear();
  m_fLDlt.clear();
  m_iqIdx.clear();
  m_fqMax.clear();//list of the q to find max
  m_fVAssetValueVec.clear();  //0 assts_val vec
  m_fV_a_Vec.clear();		  //00 a- vec probab 1-omega
  m_fV_OMEGA_Vec.clear();	   //000 a- vec probab 1-omega
  m_fVOmegaVectT.clear();     //1  omg  Vec
  m_fVEpsilonVectT.clear();   //2  epsi Vec
  m_fV_QVectR.clear();        //3  Q Vec R [M] 
  m_fV_QVectR_0.clear();      //3  Q Vec R [M] on iter 0
  m_fV_QVectR_1.clear();      //3  Q Vec R [M] on iter -1
  m_fV_bVectR.clear();        //4  b Vec R(M)  b[nu] at t=0 =PI_rM(q[r][nu])
  m_fV_aVectA.clear();        //5  a Vec A(S) 
  m_fV_OMEGAVectA.clear();    //6	OMEGA Vec A(S)
  m_v_beta.clear();             //~  7 vec (column) of mtrx interac T(N,N)
  m_v_alpha.clear();             //~ 8 vec (column) of mtrx alpha A[S,S]
  m_v_B_t.clear();					//9 vec B of huge formula results size N (T[N])
  m_v_B_1.clear();					//9 vec B of huge formula results size N (T[N])
  m_fVInterTargetValVect.clear();
  m_fVOneTargetImpactVect.clear();
  m_fVInterAssetValVect.clear();
  m_fV_OMG_t.clear();        //1  omg   V at moment t
  m_fV_OMG_1.clear();        //1  omg  V at moment t-1
  m_vOv_omgMx_t.clear();   //1  omg   mtrx at moment t
  m_vOv_omgMx_1.clear();   //1  omg   mtrx at moment t-1
  m_vOvOmegaMtrx.clear();   //1  omg   mtrx at moment t
  m_vOvOmegaMtrx_t.clear();   //1  omg   mtrx at moment t
  m_vOvOmegaMtrx_1.clear();   //1  omg   mtrx at moment t-1
  m_vOfvFlEpsilonMtrx.clear(); //2  epsi  mtrx
  m_vOv_QMtrx.clear();      //3  Q impact reduction mtrx Q[N][M]
  m_vOv_QMtrx_t.clear();      //3  Q impact reduction mtrx Q[N][M]
  m_vOv_QMtrx_1.clear();    //3  Q_1 impact reduction mtrx Q[N][M]
  m_vOv_QMtrx_1_NOMAX_0.clear();  // ZEROed MAX defender;
  m_vOv_QMtrx_1_NOMAX.clear();  // ZEROed MAX defender;
  m_vOv_trQMtrx.clear();      //3  Q impact reduction mtrx Q[N][M]
  m_vOv_trQMtrx_t.clear();      //3  Q impact reduction mtrx Q[N][M]
  m_vOv_trQMtrx_1.clear();    //3  Q_1 impact reduction mtrx Q[N][M]
  m_vOv_Pmtrx.clear();      //3    P[N][M]
  m_vOv_Pmtrx_t.clear();      //3  P[N][M]
  m_vOv_Pmtrx_1.clear();    //3  P[N][M]
  m_vOv_beta.clear();          //~7  beta mtx interact of T[N,N]
  m_vOv_alpha_Mtrx.clear();    //~  8  inter Assts interact A[S,S]
  m_vOffVargetInterctnMtrx.clear();
  m_vOffVargetImpactMtrx.clear();
  m_vOfvFlImpactReducingMtrx.clear();
  m_fV_V.clear();//relative value of S assets 
  m_fVa_t.clear();//underperformance of 
  m_fVa_1.clear();
  m_ftrVa_t.clear();//transposed 
  m_ftrVa_1.clear();
  m_fVA_t.clear();//underperformance of 
  m_fVA_1.clear();
  m_fVB_0.clear();//at t=0
  m_fVB_t.clear();//defender's effect on  A asset's protection
  m_fVB_1.clear();
  m_fVb_0.clear();
  m_fVb_t.clear();//defender's multiplicative impact on T
  m_fVb_1.clear();
  m_fVP_t.clear();
  m_fVP_1.clear();
  m_fVQ_t.clear();//v with N (szT) coordnts of impact of M defenders on T's reduction 
  m_fVQ_1.clear();
  m_fVOMEGA_0.clear();//vector OMEGA_t[S] of additive impact targets on assets
  m_fVOMEGA_t.clear();//vector OMEGA_t[S] of additive impact targets on assets
  m_fVOMEGA_1.clear();
  m_vfVP.clear(); //derives from Q/omega
  mtrxBeta.clear();
  mtrxDLT_t.clear();
  mtrxDLT_1.clear();
  vRand.clear();
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

   m_fV_DltMax.clear();//Dlt_Max:
   m_cycleCounter.clear(); //# of iteration for Dlt_Max


//	m_fVTargets.clear();
*/
}
 
/**
Destructor of the class
*/
AlgDefenderRsrcs::~AlgDefenderRsrcs()
{
   
}

/**
The initialization method for the objects of the class AlgDefenderRsrcs.
Sets dimentions of major components of the class 

*/
int AlgDefenderRsrcs::init()
{/*Local vs init:  PP[NGxMG]  vs PP [NGxMG] DPP[(NGxMG)xDG]  */
  TRACE(_T( "\n\n  1.   $$$$$$$$$$$$$$$$$$$$$$$$$  STARTING INIT() $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n"));
  o << "\n\n  1.   $$$$$$$$$$$$$$$$$$$$$$$$$  STARTING INIT() $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n";
  time_t rawtime;   
  time(&rawtime);
  //printf("The current local time is: %s", ctime(&rawtime));
  o  << " ------Start Of Program at   " << ctime(&rawtime) << "  \n";


  srand((unsigned)time(NULL));

  ostringstream o0, o1, o2, o3; o0.str(""); o1.str(""); o2.str(""); o3.str("");
  string s, s1("");

 // deprecated:  usedVersion = 0;//1 - all sizes will be the same szA=szT=szR
  szR = 4;   //# of derenders/reducers of impact of T to A
  szT = 4;    // Size of NxN
  szA = 6;        // Size of Assets vector
  TN2TN = szT*szT;  //TNxTN size of matrix of targets NxN
  TNxAS = szT*szA;// Size of the impact matrix;
  AsxAsm = szA*szA;//Sz of interaction mtrx for the assets
                   //Rm = 10;		//Sz of vector of defenders (impact reducers)
  Imr = szR*szT;    //sz of impact reducing mtrx Qmn;
  
  this->Log(o);
  o.str("");


  //           V     Alpha    Tagrg       beta    Omga       
  m_iszVRand = szA  +AsxAsm  + szT    +   TN2TN + TNxAS  

  //   szR       Q     
      + szR  +  Imr ;
  o << "  szR =  " << szR << "\t"
    << "  szT =  " << szT << "\t"
    << "  szA =  " << szA << "\t\n\n";
  Log(o);
  o.str("");
  //myRAND_MAX = m_iszVRand;
  //if (myRAND_MAX < 2 * m_iszVRand)
  //  myRAND_MAX = 2 * m_iszVRand;
 // {
  //  ::AfxMessageBox(_T("Increase myRAND_MAX")); exit(0);
 // }

 
  
  prepAllInputData();//subs  prepArrays4Assets();  prepArrays4Targets(); prepArrays4Defenders();
//  time_t rawtime1;   time(&rawtime1);
  //printf("The current local time is: %s", ctime(&rawtime));

// init for minding maximums
 m_fVMaxDltByDefender.clear();
 m_iVMaxTargByDefender.clear();
 m_iVAssignedDefender.clear();
 m_iV_KMax_hist.clear();
 m_iV_LMax_hist.clear();
 m_fV_MaxDLT_hist.clear();
 for (int i = 0;i < szR;i++) {
   m_fVMaxDltByDefender.push_back(zero);
   m_iVMaxTargByDefender.push_back(0);
   m_iVAssignedDefender.push_back(0);
 }

 time_t rawtime1;   time(&rawtime1);
  o << "\n   ------prepAllInputData() finished at " << ctime(&rawtime1) << "  \n";
  Log(o);
  o.str("");
//  o << "\n\n------- 1. -  11.  ----  Init  for initial assignments and maximums is done-----\n";
//  this->Log(o);//o.str("");
//  TRACE(_T(o.str().c_str()));
 //   o.str("");
  return 0;

}

int AlgDefenderRsrcs::Log(ostringstream & o)
{
  CStdioFile fOut;
  ostringstream o1;o1.str("");
  time_t rawtime;
  struct tm * timeinfo;

  time(&rawtime);
  timeinfo = localtime(&rawtime);
  if (0 == m_LogName.length())
  {
    string tm(string(asctime(timeinfo)));
    int frst = tm.find(":", 0);
    tm.replace(frst, 1, "\n");
    tm.replace(frst, 1, "_");
    int sc = tm.find(":", 0);
    tm.replace(sc, 1, "_");
    string nm("_Log_");
    nm.append(tm);
    nm.append(".TXT");
    int tt = nm.find("\n", 0);
    o1.str(""); o1 << "_" << szR << "_" << szT << "_" << szA;
    string sub(o1.str());
    nm.replace(tt, 1, sub);
    m_LogName.append(nm);
    //   m_LogName.append(string(".TXT"));
    //    m_LogName.append(nm);

  }
  /*  string tm(string(asctime(timeinfo)));
  int frst = tm.find(":", 0);
  tm.replace(frst, 1, "\n");
  tm.replace(frst, 1, "_");
  int sc = tm.find(":", 0);
  tm.replace(sc, 1, "_");
  string nm("_Log_");
  nm.append(tm);
  nm.append(".TXT");
  int tt = nm.find("\n", 0);
  nm.replace(tt, 1, "");
  //tm.replace(":", "_");

  //printf("The current date/time is: %s", asctime(timeinfo));
  */
   
  char* pFile =(char*)m_LogName.c_str();//"__LOG.TXT";//(char*)path.c_str();
  if (!fOut.Open(pFile, CFile::modeCreate | CFile::modeReadWrite | CFile::modeNoTruncate))
  {
  CString str(_T(""));str.Format("~LOG~File-%s- -can't be opened.  ", pFile);
  ::AfxMessageBox(str); return -8;
  }
  fOut.Seek(0, CFile::end);
  fOut.WriteString(_T(o.str().c_str()));  fOut.Flush(); fOut.Close();
  return 0;
  }


 
int AlgDefenderRsrcs::AlgDefenderRsrcsImplementation()
{
  ostringstream oL ;  oL.str("");  
  time_t rawtime;   time(&rawtime);
  oL<<"\n -Call to SetInitialValues()- --Start   at " << ctime(&rawtime)   << "  \n" ;
  Log(oL); 
	m_it_ = 0;
  oL.str("");
	SetInitialValues();
  oL<<"\n    ----- Start of the Main loop   ------ \n" ;
  Log(oL);
  TRACE(_T(oL.str().c_str()));
  oL.str("");
  //  calcDltMtrx_M_N();


for (m_it_ = 1;m_it_ <= szR;m_it_++) {
  Compute_m_fVB_t();
  calcDltMtrx_M_N();//finds   m_fMaxDLT_t =  mtrxDLT_t[m_iLmax])[m_iKmax];
  //Recalculate Q(t),P(t), omg(t), a(t) [both , including transposed], b(t), OMG(g)
  if (m_it_ < szR )
  {
    oL << "\n After finalizing iteration " << m_it_ 
      << " start data preparation for next iter. \n" 
    << "\n **** 1 ****   Next_Q_iteration():\n ";
    Log(oL);     oL.str("");
    /* 1 */ Next_Q_iteration();//version 

    oL << "\n **** 2 ****   NextIterationOf_m_vOv_omgMx_t():\n ";
    Log(oL);     oL.str("");
    /* 2 */ NextIterationOf_m_vOv_omgMx_t();

    oL << "\n **** 3 ****   Next_a_iteration():\n ";
    Log(oL);     oL.str("");
    /* 3 */ Next_a_iteration();

    oL << "\n **** 4 ****   Next_b_iteration():\n ";
    Log(oL);     oL.str("");
    /* 4 */ Next_b_iteration();

    oL << "\n **** 5 ****   Next_fVOMEGA_t_Iteration():\n ";
    Log(oL);     oL.str("");
    /* 5 */ Next_fVOMEGA_t_Iteration();
  }

/*
    Get_m_fVQ_t();     //m_iLmax = 0;  m_iKmax = 0;
  	ReportType1();//
    ServiceArea();//keeps track reiteration procedures */
	}//end of main loop t iterations

		compute_F_gamma_functional();
    time_t rawtimeEnd;   time(&rawtimeEnd);
    oL << "\n Program ended at " << ctime(&rawtimeEnd) << "  \n";
    Log(oL);oL.str("");



 	ReportType21();
    Log(oL);oL.str("");
//  ::AfxMessageBox(_T("------ End of calculation module ------"));
    TRACE(_T("------ End of calculation module ------"));
    ::AfxMessageBox(_T("Done"));
  return 0;
}



//This for v2 for better randomization //subs  prepArrays4Assets();  prepArrays4Targets(); prepArrays4Defenders();
int AlgDefenderRsrcs::prepAllInputData()
{
//	 
//subs  prepArrays4Assets();  prepArrays4Targets(); prepArrays4Defenders();
  ostringstream o, o0, o1, o2, o3;
  o.str(""); o0.str(""); o1.str(""); o2.str(""); o3.str("");
  string s, s1("");
  string::size_type st;
  int myRAND_MAX = m_iszVRand;
  srand((unsigned)time(NULL));
  //myRAND_MAX =

  //subs  prepArrays4Assets();
  //===================================================
  //it consist of prepVectOfAssetsValues(); // m_fV_V 
  //          and   prepMtrxAssetsInteraction();// m_vOv_alpha_Mtrx
  //prepVectOfAssetsValues(); // m_fV_V 
  //``````````````````````````````````````````````````````
  //V_s Assts[] defined in base also m_fV_aVectA
   TRACE(_T(
     " \n\n  2.          *****Start creation of Assts vector m_fV_V  with values V ********************** \n"));

   o << " \n\n   2.          *****Start creation of Assts vector m_fV_V  with values V ********************** \n";
  Log(o); o.str("");
  int szA_suplmnt(szA);
  if (1 > szA)   { int szA_suplmnt(1);  ::AfxMessageBox(_T("Size of A is 0 - program will not work"));     exit(0);}

  o1.str(""); o1 << szA; float fszA(stof(o1.str().c_str(), &st));
  o1.str(""); o1 << myRAND_MAX + 1;  float frm(stof(o1.str().c_str(), &st));
  m_fV_V.clear();
  o << "\n";
  o.str("");o1 <<   ""<<m_it_<<"\n\n   2.1     ====== Initializing m_fV_V =====\n";
  o << "\n\n szA ="<< szA<<"\n\n";   
  for (int j = 0; j < szA; j++) {
    o1.str("");  o1 << myRAND_MAX;
    m_irand = rand() % myRAND_MAX;  m_istran = rand() % myRAND_MAX; //m_o << TAB << m_irand << TAB << m_istran << "\n";
    o1.str("");     o1 << (m_irand);    float fr(stof(o1.str().c_str(), &st));    float rnd = fr / frm;
    if (rnd >= one) 
      rnd = (float)(rnd / frm);
    m_fV_V.push_back(rnd);
    o << TAB << "m_fV_V[" << j << "]=" << m_fV_V[j] << " \n";
  }
  Log(o);
  //o << "\n\n   2.1--------- end of initialization m_fV_V -------------\n\n";
  //TRACE(_T(o.str().c_str())); 
  //Log(o); o.str("");
  o.str("");
 
  //`````````````````````````e1```````````````````````````
  //prepMtrxAssetsInteraction();// m_vOv_alpha_Mtrx
  //````````````````````````b2````````````````````````````
  // m_vOv_alpha_Mtrx of SxS
 // {
    // ---------------Asset's matrix of own interaction (szAxszA)
  o<< "\n\n  3.         *****Creation of ((fV)m_vOv_alpha_Mtrx[S])[S] - mtrx of Assets interaction *********\n";
 //   srand((unsigned)time(NULL));
    fV fVbuf;
    for (int i = 0; i < szA; i++) {
      fVbuf.clear();
      for (int j = 0; j < szA; j++) {
        o1.str("");  o1 << myRAND_MAX;
        m_irand = rand() % myRAND_MAX;  m_istran = rand() % myRAND_MAX;;// m_o << TAB << m_irand << TAB << m_istran << "\n";
        o1.str("");   o1 << (m_irand); float fr(stof(o1.str().c_str(), &st));  float rnd = fr / frm;
        if (rnd >= one)
          rnd = (float)(rnd / frm);
        if (i != j)
          fVbuf.push_back(rnd);
        else
          fVbuf.push_back(one);
      }//eO loop by j(v)
      m_vOv_alpha_Mtrx.push_back(fVbuf);
    }//eO loop i by S alpha vectors for A

     // Tracing: 
    string sb("");
    for (int j = 0; j < szA; j++) {
      for (int i = 0; i < szA; i++) {
        o << TAB << "m_vOv_alpha_Mtrx[" << i << "][" << j << "]=" << ((fV)m_vOv_alpha_Mtrx[i])[j]; o << "\n";
        sb = (o.str().c_str());
      }//eo loop i szA--------------------------------------------- 
    }//eo loop j  szT---------------------------------------------- 
    Log(o);
//o << "\n\n     3 ----------------- end of initialization for m_vOv_alpha_Mtrx of matrix A-------------\n";
    TRACE(_T(o.str().c_str()));
//    Log(o); o.str("");
    o.str("");
 // }
  //`````````````````````````e2````````````````````````````
  //========================E1==========================
  //========================B2==========================
  //prepArrays4Targets consist of 	prepInterTargetsCooperationMtrx();// m_vOv_beta [NxN]
  //m_vOvOmegaMtrx  [TxA]  & m_fV_OMEGAVectA
	// and prepTargets2AssetsImpactMtrx();  //m_vOvOmegaMtrx  [TxA]  & m_fV_OMEGAVectA

  //`````````````````````````b1`````prepInterTargetsCooperationMtrx```
  //m_vOvOmegaMtrx  [TxA]
  // ---------------Targets matrix of own interaction (szTxszT)
    TRACE(_T("\n\n  4.    *****Creation of T p - mtrx of trgt's interaction***beta**********\n"));
    o<<"\n\n  4.    *****Creation of T p - mtrx of trgt's interaction***beta**********\n";
    Log(o); o.str("");

    o0 << szT; float fszT(stof(o0.str().c_str(), &m_st));
//    o1 << myRAND_MAX; float frm(stof(o1.str().c_str(), &m_st));
    m_vOv_beta.clear();
    for (int i = 0; i < szT; i++) { //---loop start-----------
      fVbuf.clear();
   //   o << "vector m_v_alpha  #  " << i << "\n";
      for (int j = 0; j < szT; j++) { //---loop start-----------
        o1.str(""); o1 << myRAND_MAX;
        m_irand = rand() % myRAND_MAX;  m_istran = rand() % myRAND_MAX;; 
        m_o << TAB << m_irand << TAB << m_istran << "\n";
        o1.str("");        o1 << (m_irand);        
        float fr(stof(o1.str().c_str(), &m_st));        float rnd = fr / frm;
         if (rnd >= one)
          rnd = (float)(rnd / frm);
         if (i != j)
           fVbuf.push_back(rnd);
         else
           fVbuf.push_back(one);
      }//eO loop by j(v).......................................
      m_vOv_beta.push_back(fVbuf);
    }//eO loop i by S beta vectors for T.......................

     // Tracing: 
    o.str("");
    o << "\n\n";
    for (int j = 0; j < szT; j++) {
      for (int i = 0; i < szT; i++) {
        o << TAB << "m_vOv_beta[" << i << "][" << j << "]=" << ((fV)m_vOv_beta[i])[j];  o << "\n";
      }//eo loop i szA--------------------------------------------- 
    }//eo loop j  szT----------------------------------------------
    Log(o);
   // TRACE(_T(o.str().c_str()));    o.str("");    
   // o << "\n\n   4.  ----------------- end of beta components of matrix T-------------\n";
   // TRACE(_T(o.str().c_str()));   
   /// Log(o);
    o.str("");
    //`````````````````````````e1````````````````````````````
  //`````````````````````````b2`````prepTargets2AssetsImpactMtrx````
  // --impact mtrx of Targ to Assts the same as m_vOvOmegaMtrx  and m_fV_OMEGAVectA
    TRACE(_T("\n\n    5.  *****Start creation of impact mtrx of Targ on Assts m_vOvOmegaMtrx\n"));
    o << "\n\n    5.  *****Start creation of impact mtrx of Targ on Assts m_vOvOmegaMtrx\n";
    Log(o);
    o.str("");
    //  m_vOv_beta.clear();//  int j(0);
    string tab("");
    m_vOvOmegaMtrx.clear();      //3  Q impact   mtrx Q[N][S]
    for (int j = 0; j < szA; j++) {
      m_fV_OMEGAVectA.clear();
      for (int i = 0; i < szT; i++) {
        //o1.str(""); o1 << myRAND_MAX;
        m_irand = rand() % myRAND_MAX;  m_istran = rand() % myRAND_MAX;;// m_o << TAB << m_irand << TAB << m_istran << "\n";
        o1.str("");  o1 << (m_irand);  float fr(stof(o1.str().c_str(), &m_st));        float rnd = fr / frm;
        if (rnd >= one)
          rnd = (float)(rnd / frm);
        m_fV_OMEGAVectA.push_back(rnd);
      }//eo loop i szA--------------------------------------------- 
      m_vOvOmegaMtrx.push_back(m_fV_OMEGAVectA);
    }//eo loop j  szT---------------------------------------------- 

     // Tracing: 
    o.str("");    o << "\n\n";
    for (int j = 0; j < szA; j++) {
      for (int i = 0; i < szT; i++) {
        o << TAB << "m_vOvOmegaMtrx[" << j << "][" << i << "]=" << ((fV)m_vOvOmegaMtrx[j])[i];  o << "\n";
      }//eo loop i szA--------------------------------------------- 
    }//eo loop j  szT---------------------------------------------- 
    Log(o);
   // o << "\n\n   5.  ----------- end of m_vOvOmegaMtrx initialization ( mtrx T vs A)-------------\n";
   // TRACE(_T(o.str().c_str()));  
   // Log(o);
    o.str("");
 
  
  //========================B3====================prepArrays4Defenders======


  // ---------------Qmn  impact of defenders on Targs -------------------------------------
    TRACE(_T("\n\n  6.  ***Arrays for defenders**Start creation of Qmn - mtrx of impact defenders R on Targ (to reduce impact on Assts)\n"));
    o << "\n\n  6.  ***Arrays for defenders**Start creation of Qmn - mtrx of impact defenders R on Targ (to reduce impact on Assts)\n";
    Log(o);
    o.str("");
    m_vOv_QMtrx.clear();
    for (int j = 0; j <szT; j++) {//.........QMtrx [MxN]...............
      m_fV_QVectR.clear();        //3  Q Vec R [M]
      for (int i = 0;i <szR;i++) {//.................................
        /*
        o1.str("");        m_irand = rand() % (myRAND_MAX  );     m_istran = rand() % (myRAND_MAX  );// m_o << TAB << m_irand << TAB << m_istran << "\n";
        o1 << (m_irand% szR + 1);  float fr(stof(o1.str().c_str(), &m_st));  float rnd = fr / frm;
        if (rnd >= one)
          rnd = (float)(rnd / frm);
        */
          
        o1.str(""); o1 << myRAND_MAX;
        m_irand = rand() % myRAND_MAX;  m_istran = rand() % myRAND_MAX;;// m_o << TAB << m_irand << TAB << m_istran << "\n";
        o1.str("");        o1 << (m_irand);        float fr(stof(o1.str().c_str(), &m_st));        float rnd = fr / frm;
        if (rnd >= one)
          rnd = (float)(rnd / frm);

        m_fV_QVectR.push_back(rnd);
      }//eo loop i szR--------------------------------------------- 
      m_vOv_QMtrx.push_back(m_fV_QVectR);
    }//eo loop j  szT---------------------------------------------- 

     //Transposed
    fV fb;    vfV fm;
    fb.clear();
    for (int j = 0; j <szR; j++) {//.........QMtrx [MxN]...............
      fb.clear();        //3  Q Vec R [M]
      for (int i = 0;i <szT;i++) {//.................................
        fb.push_back(((fV)m_vOv_QMtrx[i])[j]);
      }//eo loop i szT--------------------------------------------- 
      m_vOv_trQMtrx.push_back(fb);
    }//eo loop j  szR---------------------------------------------- 
    fm = m_vOv_trQMtrx;
 
    // Tracing: 
    o.str("");   
      
    for (int j = 0; j < szT; j++) {
      for (int i = 0; i < szR; i++) {
        o << TAB << "m_vOv_QMtrx[" << j << "][" << i << "]=" << ((fV)m_vOv_QMtrx[j])[i];        o << "\n";
      }//eo loop i szR--------------------------------------------- 
    }//eo loop j  szT---------------------------------------------- 
    Log(o);
 //   o << "\n\n  --6---end of Effect  defenders against targets----.-- end of m_vOv_QMtrx initialization  -------------\n";
 //   TRACE(_T(o.str().c_str()));    
 //   Log(o);
    o.str("");

    o<<  "\n\n     6.T  ****   trans    Transposed  m_vOv_trQMtrx    *****  \n";


    for (int j = 0; j < szR; j++) {
      for (int i = 0; i < szT; i++) {
        o << TAB << "m_vOv_trQMtrx[" << j << "][" << i << "]=" << ((fV)m_vOv_trQMtrx[j])[i];        o << "\n";
      }//eo loop i sz -------------------------------------------- 
    }//eo loop j  sz ---------------------------------------------- 
    Log(o);
 //   o << "\n\n  --6---end of Effect  defenders against targets----.-- end of m_vOv_QMtrx initialization  -------------\n";
 //   TRACE(_T(o.str().c_str()));    
 //   Log(o);
    o.str("");

    //m_vOv_Pmtrx
    TRACE(_T("\n\n  6.1  *** P = 1-Q Arrays for defenders************** \n"));
    o << "\n\n  6.1  *** P = 1-Q Arrays for defenders************** \n";
     m_vOv_Pmtrx.clear();
    for (int j = 0; j < szT; j++) {
//      fV fVbuf;
      fVbuf.clear();
      for (int i = 0; i < szR; i++) {
        float fb = one - ((fV)m_vOv_QMtrx[j])[i];
        fVbuf.push_back(fb);
      }//eo loop i szR--------------------------------------------- 
      m_vOv_Pmtrx.push_back(fVbuf);
    }//eo loop j  szT---------------------------------------------- 

     // Tracing: 
    o.str("");    o << "\n\n";
    for (int j = 0; j < szT; j++) {
      for (int i = 0; i < szR; i++) {
        o << TAB << "m_vOv_Pmtrx[" << j << "][" << i << "]=" << ((fV)m_vOv_Pmtrx[j])[i]; o << "\n";
      }//eo loop i szR--------------------------------------------- 
    }//eo loop j  szT---------------------------------------------- 
    Log(o);
  //  o << "\n\n  --6.1---end of Effect  defenders against targets----.-- end of m_vOv_Pmtrx initialization  -------------\n";
  //  TRACE(_T(o.str().c_str())); 
  //  Log(o);
    o.str("");


  	return 0;
}



int AlgDefenderRsrcs::SetInitialValues()
{
  ostringstream o1;
  o1.str("");
  string s, s1("");
  o1 << "\n\n  14.   *****SetInitialValues()  for the firt iteration *********\n";
  //"start with most powefull defender")
  //1. Q_0 vector
  o1 << "\n\n @@@@@@@@@@@@@@@@\t\t 1.start Q_0 vector preparation (MOST POWEFULL DEFENDER):";
  Log(o1);
  TRACE(_T(o1.str().c_str()));
  o1.str("");

  m_fmaxQ = findMaxInMatr(szR, szT, m_vOv_trQMtrx, m_iMaxRow, m_iMaxCol);
  m_fmaxQ_1 = m_fmaxQ;
  m_fVQ_1.clear();
  m_fVQ_1 = m_fVQ_t;
  //   fV b;b.clear(); b = m_vOv_trQMtrx[m_iMaxRow];
  //   for (int i = 0;i < m_vOv_trQMtrx[m_iMaxRow].size();i++)
  //       m_fVQ_1.push_back(m_vOv_trQMtrx[m_iMaxRow][i]);

  //      m_fVQ_1= (fV)m_vOv_QMtrx[m_iMaxCol];
  m_fVP_1.clear();
  for (int i = 0;i < szT;i++)
    m_fVP_1.push_back(one - m_fVQ_1[i]);

  //   o1 << "" << m_it_ << "\n\n @@@@@@@@@@@@@@@@\t\t 1.end of  Q_0 vector preparation\n";
  //2 Omega_0 = Just equal to OMEGa
  o1 << "" << m_it_ << "\n\n @@@@@@@@@@@@@@@@\t\t 2.start m_vOv_omgMx_t:\n";
  o1 << "" << m_it_ << "\n\n  Matrix  m_vOv_omgMx_t on init = m_vOvOmegaMtrx \n";
  //  o1 << ""<<m_it_<<"\n\n @@@@@@@@@@@@@@@@\t\t t2.end of  Matrix Omega_0 preparation \n";

  //3 b_nu_0 that is vector of fR2T = fR2T*((fV)m_vOv_QMtrx[mu])[k];
  o1 << "\n\n @@@@@@@@@@@@@@@@\t\t   3.start m_fVb_0 preparation:\n";
  Log(o1);
  TRACE(_T(o1.str().c_str()));
  o1.str("");
  PrepInitIterationfor_b_0();//m_fVB_0 [N]
                             // o1 << "\n\n @@@@@@@@@@@@@@@@\t\t   3.end of  m_fVb_0 preparation \n";
  Log(o1);
  TRACE(_T(o1.str().c_str()));
  o1.str("");


  //4 b_nu_0 that is vector of a_t = a_t*(one - (vb[mu]));
  o1 << "\n\n @@@@@@@@@@@@@@@@\t\t  4.start m_fVa_0 preparation:\n ";
  Log(o1);
  TRACE(_T(o1.str().c_str()));
  o1.str("");
  prepInitIteration_m_fVa_0();// 
                              //  o1 << "\n\n @@@@@@@@@@@@@@@@\t\t  4.end of m_fVa_0 preparation \n";
  Log(o1);
  TRACE(_T(o1.str().c_str()));
  o1.str("");

  //5 b_nu_0 that is vector of m_fVOMEGA_t[S]= 1.
  o1 << "\n\n @@@@@@@@@@@@@@@@\t\t 5.start m_fVa_0 preparation:\n";
  Log(o1);
  TRACE(_T(o1.str().c_str()));
  o1.str("");
  PrepInitIterationfom_fVOMEGA_0(); //init sets  to v of 1.
                                    //  o1 << "\n\n @@@@@@@@@@@@@@@@\t\t 5.end of m_fVa_0 preparation \n\n";
  Log(o1);
  TRACE(_T(o1.str().c_str()));
  o1.str("");


  //prep_Q_Information();//core items iV DefNmb[], iV BestTarg4Def[],  fV qMax4Def[]
  return 0;

}

//Mtrx vfVc size of  nxm will have max elem in position im,jm
float AlgDefenderRsrcs::findMaxInMatr(int & nRows, int & mCols, vfV & vfVc, int & im, int & jm) //<--im is COLUMN jm is ROW
{
  ostringstream o2;o2.str("");
  o2 << "\n  After iter = " << m_it_ << "--- to Find max elem in  matrix: method findMaxInMatr(...) \n";
  Log(o2);
  TRACE(_T(o2.str().c_str()));
  o2.str("");
  //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

  float curQMax = zero;
  im = jm = 0;
  for (int j = 0;j < nRows;j++) {//................................. 1...Row    jm
                                 //   o << "\n     ---- "<< nRows <<" lements  of the vfVc col ["<< j <<"]--------------  ";
    for (int i = 0;i < mCols;i++) {//............................... 2...Column im
      float fz = ((((fV)vfVc[j])[i]));
      if (curQMax < fz)
      {
        curQMax = fz; jm = j;  im = i;
      }
    }//eo i loop 2 ----------
  }//eo i loop 1   ----------
  o2 << "\n\n ---  Found max elem = " << curQMax << " that located in the row  " << jm
    << " (total rows " << nRows << ") at position (column)  " << im << " (total rows " << mCols << ")  --- \n";

  o2 << "\n Elements of the MOST POWERFUL row  m_fVQ_t are:";
  m_fVQ_t.clear();
  m_fVQ_t = vfVc[jm];
  for (int i = 0;i < mCols;i++)
    o2 << "\n After iteration =" << m_it_ << " \t\t  m_fVQ_t[" << i << "] =" << ((((fV)vfVc[jm])[i]));
  o2 << "\n";
  Log(o2);
  TRACE(_T(o2.str().c_str()));
  o2.str("");


  o2 << "\n .....  Now for future : prep new value for \n"
    << "m_vOv_QMtrx_1_NOMAX with zeros on this max Defender............ \n";
  // set  m_vOv_QMtrx_1_NOMAX  = m_vOv_QMtrx_1_NOMAX = vfVc;
  m_vOv_QMtrx_1_NOMAX.clear();
  Log(o2);
  TRACE(_T(o2.str().c_str()));
  o2.str("");



  for (int j = 0;j < nRows;j++) {//................................. 1...Row    j
    fV z;z.clear();z = vfVc[j];
    for (int i = 0;i < mCols;i++) {//............................... 2...Column im
      if (jm == j)
        z[i] = zero;
      continue;
    }//eo i loop 2 ----------
    m_vOv_QMtrx_1_NOMAX.push_back(z);
  }//eo i loop 1   ----------
   /*
   o2 << "\n\n        \n\nMatrix m_vOv_QMtrx_1_NOMAX  looks like this: \n\n";
   Log(o2);
   TRACE(_T(o2.str().c_str()));
   o2.str("");
   */
    
   for (int j = 0;j < nRows;j++) {//................................. 1...Row    j
   fV z;z.clear();z = m_vOv_QMtrx_1_NOMAX[j];
   for (int i = 0;i < mCols;i++) {//............................... 2...Column im
   o2 << "" << m_it_ << " NOMAX [" << j << "][" << i << "] = " << m_vOv_QMtrx_1_NOMAX[j][i] << "\n";
   }//eo i loop 2 ----------
   //    o2 << "\n";
   }//eo i loop 1   ----------


   // o2 << "\n        ******** Done with m_vOv_QMtrx_1_NOMAX ***********   \n";
   Log(o2);
   TRACE(_T(o2.str().c_str()));
   o2.str("");

   return curQMax;
   }


   int AlgDefenderRsrcs::PrepInitIterationfor_b_0()//m_fVb_0 [N]
   {
   //      TRACE(_T("\n\n\n\n    9.      n*****Calc of init iteration of m_fVb_t[N]   *********\n"));
   o.str("");// o0, o1, o2, o3;  o.str(""); o0.str(""); o1.str(""); o2.str(""); o3.str("");
   //string s("");

   o << "\n\n     9. *****Calc of init iteration of m_fVb_t[N]   ********* \n";
   o << "That is  fR2T = fR2T*((fV)m_vOv_QMtrx[mu])[k]:\n";
   o << "(see how N = " << szT << " coordinates of this vector are changed during calculation)\n";


   m_fVb_0.clear();
   for (int mu = 0;mu < szT;mu++) {
   float  fR2T =  one;
   o << "Calculation of element   m_fVb_0 [" << mu << "]\n\n ";
   fV bf;bf.clear();
   bf = (fV)m_vOv_QMtrx[mu];
   for (int k = 0;k < szR;k++) {
   //fR2T = fR2T*((fV)m_vOv_QMtrx[mu])[k];;//was m_vOfvFl_QMtrx
   fR2T = fR2T  *  bf[k];;//was m_vOfvFl_QMtrx
   o << "coord of vector #" << mu << "  m_fVb_0 [" << k << "]   =" << fR2T << " at iteration " << k << ";\n";
   }//end of loop by mu (impact by R on T)
   m_fVb_0.push_back(fR2T);
   }//end of loop by mu (impact by R[k,mu] on T[mu])
   m_fVb_1.clear();
   m_fVb_1 = m_fVb_0;

   // Tracing:
   //     o.str("");
   o << "\n\n  Result of m_fVb_0 calculation is:\n";
   for (int mu = 0;mu < szT;mu++) {
   o << TAB << "m_fVb_0[ " << mu << "]=" << m_fVb_0[mu]<< "\n";
   }//eo loop i szT---------------------------------------------
   //     TRACE(_T(o.str().c_str()));      o.str("");
   // o << "\n\n------  9.   ----------- end of init calc for m_fVB_0  -------------\n";
   Log(o);
   TRACE(_T(o.str().c_str()));
   o.str("");
   return 0;
   }


   //init sets  to v of 1.
   int  AlgDefenderRsrcs::PrepInitIterationfom_fVOMEGA_0()//[S] =1 for all of S
   {
     o.str("");
     TRACE(_T("\n 10.      *****Calc of Init iteration for m_fVOMEGA_t[S]   *********\n"));
     o << "\n 10.      *****Calc of Init iteration for m_fVOMEGA_t[S]   *********\n";
     Log(o);
     o.str("");

     //     ostringstream o, o0, o1, o2, o3;
     // o0.str(""); o1.str(""); o2.str(""); o3.str("");
     string s, s1("");

     m_fVOMEGA_0.clear();
     for (int j = 0; j < szA; j++) {//........................
       m_fVOMEGA_0.push_back(one);
     }//end of loop by j (asset number)---------------------- 
     m_fVOMEGA_1.clear();
     m_fVOMEGA_1 = m_fVOMEGA_0;

     // Tracing: 
     o.str(" ");
     o << "\n";
     for (int j = 0; j < szA; j++) {
       o << TAB << "m_fVOMEGA_0[ " << j << "]=" << m_fVOMEGA_0[j];
       o << "\n";
     }//eo loop i szA--------------------------------------------- 
      //  o << "\n\n-------  10.  ---------- end of calc for omot iter m_fVOMEGA_1  -------------\n";
     Log(o);
     TRACE(_T(o.str().c_str()));
     o.str("");

     return 0;
   }




   int  AlgDefenderRsrcs::prepInitIteration_m_fVa_0()//m_fVa_t [N]
   { //multyplicative effect of R to Target 
     TRACE(_T("\n\n      8.    ***** Before Transposing Init Iteration  of m_fVa_t -  **********\n"));
     o.str("");
     o << "\n      8.    ***** Before Transposing Init Iteration  of m_fVa_t:  **********\n";
     Log(o);
     o.str("");
     if (m_it_ > 0)
     {
       m_fVa_1.clear();
       m_fVa_1 = m_fVa_t;
     }

     m_fVa_t.clear();
     for (int j = 0;j < szA;j++) {
       float a_t = one; //  
       fV vb;vb.clear();
       vb = ((fV)m_vOvOmegaMtrx[j]);
       for (int mu = 0;mu < szT;mu++) {
         a_t = a_t*(one - (vb[mu]));        //a_t = a_t*(one - ((fV)m_vOvOmegaMtrx[j])[mu]);

       }//end of loop by Assets-------------------------
       m_fVa_t.push_back(a_t);
     }//end of loop by Targets--------------------------
     if (m_it_ == 0)
     {
       m_fVa_1.clear();
       m_fVa_1 = m_fVa_t;
     }

     // Tracing: 

     o.str("");
     o << "\n\n";
     for (int j = 0;j < szA;j++) {
       o << TAB << "m_fVa_t[" << j << "]=" << m_fVa_t[j];  o << "\n";
     }//eo loop j  szT---------------------------------------------- 
     Log(o);
     TRACE(_T(o.str().c_str()));
     o.str("");
     //  o << "\n\n      n----------------- end of  8  calc of init iter for  m_fVa_t = m_fVa_1 -------------\n";
     //  TRACE(_T(o.str().c_str()));
     //  o.str("");
     //return 0;

     TRACE(_T("\n\n      8.A    *****     Thansposed  m_ftrVa_t    Init Iteration  of m_fVa_t -  **********\n"));
     o << "\n\n     8.A    *****     Thansposed  m_ftrVa_t    Init Iteration  of m_fVa_t -  **********\n";

     //Transpose m_vOvOmegaMtrx
     vfV  Atr;Atr.clear();
     if (m_it_ > 0)
     {
       m_ftrVa_1.clear();
       m_ftrVa_1 = m_ftrVa_t;
     }


     m_ftrVa_t.clear();
     //      fV aN;aN.clear();
     Transpose(m_vOvOmegaMtrx, Atr);
     fV aN;aN.clear();
     for (int j = 0;j < szT;j++) {//szA
       float a_t = one; //  
       fV vb;vb.clear();
       vb = ((fV)Atr[j]);
       for (int mu = 0;mu < szA;mu++) {//was szA
         a_t = a_t*(one - (vb[mu]));        //a_t = a_t*(one - ((fV)m_vOvOmegaMtrx[j])[mu]);
       }//end of loop by Assets-------------------------
       m_ftrVa_t.push_back(a_t);
     }//end of loop by Targets--------------------------
     if (m_it_ == 0)
     {
       m_ftrVa_1.clear();
       m_ftrVa_1 = m_ftrVa_t;
     }



     // Tracing: 

     o.str("");
     o << "\n\n ";
     for (int j = 0;j < szT;j++) {
       o << TAB << "Transposed:  m_fytVa_t[" << j << "]=" << m_ftrVa_t[j] << "\n";
     }//eo loop j  szT---------------------------------------------- 
     Log(o);
     TRACE(_T(o.str().c_str()));
     o.str("");
     return 0;


   }


   int  AlgDefenderRsrcs::Transpose(vfV & A, vfV & Atr)//transpose A to Atr
   {
     int rowCnt(0), colCnt(0);
     fV fb, b;
     vfV fm;
     int irows(A.size());
     int icols(A[0].size());
     fb.clear();b.clear();
     //      for (int it = 0;it < icols;it++) {
     //       fb.clear();        //3  Q Vec R [M]
     //       for (int jt = 0;jt < irows;jt++) {

     for (int j = 0; j < irows; j++) {//.........QMtrx [MxN]...............
       for (int i = 0;i < icols;i++) {//.................................
         fb.push_back(((fV)A[j])[i]);
       }
     }//eo loop i szT--------------------------------------------- 
     int a(0);
     int irowsN = icols;
     int icolsN = irows;
     for (int j = 0; j < irowsN; j++) {//.........QMtrx [MxN]...............
       for (int i = 0;i < icolsN;i++) {//.................................
         b.push_back(fb[irowsN*i + j]);
       }
       Atr.push_back(b);
       b.clear();
     }//eo loop i szT--------------------------------------------- 

      //  }
     return 0;
   }

   int AlgDefenderRsrcs::Compute_m_fVB_t()
   {
     ostringstream ob, o0, o1, o2, o3, ot;
     ob.str(""); o0.str(""); o1.str(""); o2.str(""); o3.str("");ot.str("");
     time_t rawtime;   time(&rawtime);
     ot << "\n\n   15.      *****Call to Compute_m_fVB_t()********* Start   at " << ctime(&rawtime) << "  \n";
     Log(ot);
     ot.str("");

     TRACE(_T("\n    15.      *****Computation of vector m_v_B   *********\n"));
     string s, s1("");
     float p1(one);//_(1-b_eta_x_beta_eta_my)
     float p2(one);//_1-omega_mu_i_x_p1
     float p31(one);//1-p2_x_alpha_j_i
                    //for p32 j_i used p32=p32*(1-(1-a_j)*alpha_j_i) 
                    //where a_j = a_j*(1.-omega_mu_j);
                    //	float p32(one0);//
     float a_j(one);// a_j*(1.-omega_mu_j)
     float p32(one);//1-(1-)x_alpha_j_i

     float p33(one);// all in square brackets
                    // Additive p4= p4+V[i]*alpha[zeta][i]*33

     float p3333(zero); // this to show how the use of last component a_j changes the picture
     float p4444(zero); // the same for additive level
     float p444(zero);
     float f1(zero);
     float f2(zero);
     float f4(zero);
     float p4(0.);

     float p5(0.);
     float cns1(zero), cns2(zero);//float cns2(0.);
     int i(0);
     int j(0);
     int zeta(0);
     int n(0);
     p31 = one;
     p32 = one;
     p33 = zero;
     float ajx(one);
     if (1 != m_it_)
     {
       m_v_B_1.clear();
       m_v_B_1 = m_v_B_t;
     }



     m_v_B_t.clear();
     for (int L = 0;L <szT;L++) {// L  for B_t  >>>>>>>>>>>>>>>>>
       cns2 = zero;
       for (zeta = 0;zeta < szA;zeta++) {//zeta for Sum til szA>>>> 
         p4 = zero; p444 = zero;
         for (i = 0;i < szA;i++) {// i for Sum up to  szA>>>>>>>>>>>>>>>>>
           p33 = zero; a_j = one;

           for (j = 0;j < szA;j++) {
             p2 = one;
             ajx = one;
             for (int mu = 0;mu < szT;mu++) {//22222222222222222
               p1 = one; fV v;v.clear();v = m_vOv_beta[mu];
               f1 = zero;f2 = zero;
               for (int nu = 0;nu <szT;nu++) {//11111111111111111
                 f2 = v[nu];//((fV)m_vOv_beta[mu])[nu];
                 if (1 == m_it_)
                   f1 = one - m_fVb_0[nu] * f2;// (1-b*beta) 
                 else
                   f1 = one - m_fVb_t[nu] * f2;       //           float f3 = f1*f2;
                 f4 = one - f1;//  {1-(1-b*beta)}
                 p1 = p1 *f4;
               }// end of nu loop--------111111111111111111111
               if (1 == m_it_)
                 p2 = p2* (one - (m_vOvOmegaMtrx[j])[mu] * p1);
               else
                 p2 = p2* (one - (m_vOvOmegaMtrx_t[j])[mu] * p1);

               //ajx = ajx*(one - (m_vOvOmegaMtrx[i])[mu]);    p444 = ajx;
               ajx = ajx*(one - m_fVa_t[j]);  //  p444 = ajx; !!!!!!!!!!!!!!!!!!!!!!!!!!!
             }// end of mu loop    ---22222222222222222222222222222
             p31 = p31 * (one - p2*(((fV)m_vOv_alpha_Mtrx[i])[j]));

             a_j = a_j*(one - (one - ajx)*((fV)m_vOv_alpha_Mtrx[i])[j]);
             //				p32 = p32 * (one - a_j*(((fV)m_vOv_alpha_Mtrx[i])[j]));
             //				p33 = p31 - p32;
             p33 = p31;// position of this  -a_j; changes everything
                       /*Attn - negative values of p31*/
             p3333 = p31 - a_j;
           }// end of j loop
           p4 = p4 + m_fV_V[i] * (((fV)m_vOv_alpha_Mtrx[zeta])[i]) * p33;
           p4444 = p4444 + m_fV_V[i] * (((fV)m_vOv_alpha_Mtrx[zeta])[i]) * p3333;

         }// end of i loop
         cns1 = zero;
         //
         if (1 == m_it_)
         {
           for (n = 0; n < szA; n++) {// cns1 - denomenutar [S]>>>>>>>>>
             cns1 = cns1 + (((fV)m_vOv_alpha_Mtrx[zeta])[n])*m_fVOMEGA_0[n];  //[n])[zeta]
           }//eo n for denomenator [s] <<<<----------------<<<<<<<<<<
         }
         else
         {/////////ATT: need to update demomenator
           for (n = 0; n < szA; n++) {// cns1 - denomenutor [S]>>>>>>>>>
             cns1 = cns1 + (((fV)m_vOv_alpha_Mtrx[zeta])[n])*m_fVOMEGA_t[n];  //[n])[zeta]
           }//eo n for denomenator [s] <<<<----------------<<<<<<<<<<
         }
         if (0. != cns1)
         {
           if (1 == m_it_)
             cns2 = cns2 + ((m_vOvOmegaMtrx[zeta])[L] / cns1)*p4;             //
           else
             cns2 = cns2 + ((m_vOvOmegaMtrx_t[zeta])[L] / cns1)*p4;             //

         }
         else
         {
           ::AfxMessageBox(_T("in the v B_t denomenator is zero")); exit(0);
         }
       }// end of zeta loop
       p5 = cns2;// (cns1 / cns2)*p4;
       m_v_B_t.push_back(p5);
     }// end of L loop -------------------------<<<<<<<<<<<<<<<<<
     if (1 == m_it_)
     {
       m_v_B_1.clear();  m_v_B_1 = m_v_B_t;
     }


     // Tracing:
     ob.str("");
     ob << "\n       15.   --------m_v_B_t components of vector T-------------\n";
     ob << "  CYCLE m_it_ = " << m_it_ << "     ajx  = " << ajx << " \n";

     for (int L = 0; L < szT; L++) {
       ob << TAB << "  m_v_B_t[" << L << "]=" << m_v_B_t[L] << "\n";
     }//eo loop l  szT----------------------------------------------
     Log(ob);
     TRACE(_T(ob.str().c_str()));
     ob.str("");

     return 0;

   }



   int AlgDefenderRsrcs::calcDltMtrx_M_N(void)
   {
     o.str(""); //o0.str(""); o1.str(""); o2.str(""); o3.str("");
     o << "\n    23.      *****Computation of mtrxDLT_t    *****version#1 ****\n";
     Log(o);
     o.str("");
     TRACE(_T("\n    23.      *****Computation of mtrxDLT_t   *****version#1 ****\n"));


     mtrxDLT_t.clear();

     //ostringstream o, o0, o1, o2, o3;
     // string s, s1("");
     //************************************************************************
     /*-------------------------Forming Dlt[k,L]---------------------------

     Dlt_t[k,L]=Sum(  mlt1 )=

     =Sum(  B *  (  fr11  -  fr21 *  mlt2 ) ) =

     = Sum(m_fVB_1[mu] * ( n11/d11 - n21/d21 * n1/d1  ) )
     --------------------------------------------------------------------*/
     //************************************************************************


     //-----Used to calculate mult2

     float n11 = zero;//numerator n11
     float d11 = one;//denominator d11

                     //-----Used to calculate mult1 that consist of fractions  
                     //fr1 and fr2 with numerators/denomerators n11,n21,d11,d21
     float n21 = zero;//numerator n21
     float d21 = one;//denominator d21
     float fr11 = zero;//fraction 11
     float fr21 = zero;//fraction 21
     float mlt1 = one;//multyplicator mlt1
     float mlt2 = one;//multyplicator mlt2

     float n22 = one;
     float d22 = one;
     float adtv = zero;//additives
     fV vBuf;

     //	int k = 0;//coordinate of mtrxDLT_t,Q_t [k] for vecs  Q_1,a, P.
     //	int l = 0;//the same as above but different direction (coordinates)

     //l<szRm   k<szTm  mu<szTm  nu<szTm    Tm; Rm  are  min of A,T,R
     float fLargeNeative(-100000.);
     m_fMaxDLT_t = fLargeNeative;
     int minsz(0);
     //    if (szA >= szR && szT>=szR)            minsz = szR;
     //   else if (szA >= szT && szR>=szT)       minsz = szT;
     //   else if (szT >= szA && szR>=szA)       minsz = szA;
     //   else TRACE(_T("\n\n\n  9999 Never should be here 999\n\n\n"));
     //   int szAm(minsz), szTm(minsz), szRm(minsz);
     //   int szAm(minsz), szTm(minsz), szRm(minsz);
     int szAm(szA), szTm(szT), szRm(szR);

     //    if (1 == this->usedVersion)
     //    {
     //      calcDltMtrx_M_N__normSz(minsz);
     //    return 0;

     //    }

     //==========================================================

     o.str("");     o << "\n   Process of calculation: \n";


     for (int L = 0; L < szRm; L++) {
       vBuf.clear();
       for (int k = 0; k < szTm; k++) {
         for (int mu = 0; mu < szTm; mu++) {

           /*-------------------------Forming Dlt[k,L]---------------------------
           Dlt_t[k,L]=Sum(mlt1)=Sum(  B  *  (  fr11   -    fr21 *  mlt2 ) ) =
           = Sum(m_fVB_1[mu] * ( n11/d11 - n21/d21 * n1/d1  ) ) =
           --------------------------------------------------------------------*/
           //      N               NxM                       NxN
           n11 = m_fVQ_1[L] * ((fV)m_vOv_Pmtrx[k])[L] * ((fV)m_vOv_beta[L])[mu];//<-- ck#1
                                                                                //          float n11_1 = m_fVQ_1[L] * ((fV)m_vOv_Pmtrx_t[k])[L];
                                                                                //          float n11_2 = n11_1 * ((fV)m_vOv_Pmtrx_t[k])[L];

                                                                                //             N                 NxN
           d11 = one - m_fVP_1[L] * ((fV)m_vOv_beta[L])[mu];
           if (zero == d11)
             d11 = correct(d11);
           fr11 = n11 / d11;
           //                    N              N              5x5    T   R
           n21 = one - (one - m_fVQ_1[L] * m_ftrVa_1[L]) *((fV)m_vOv_beta[mu])[L];//
           d21 = one - (one - m_fVQ_1[L] * m_ftrVa_t[L]) *((fV)m_vOv_beta[mu])[L];
           if (zero == d21)
             d21 = correct(d21);
           fr21 = n21 / d21;


           n22 = one;//numerator n1
           d22 = one;//denominator d2
           for (int nu = 0; nu < szTm; nu++) {
             //L<szR   k<szT  mu<szT  nu<szT
             //                        2x1            3x1   A             5x5
             n22 = n22*(one - (one - m_fVQ_1[nu] * m_ftrVa_t[nu])*((fV)m_vOv_beta[nu])[mu]);
             //n22 = n22*(one - (one - m_fVQ_1[nu] * m_fVa_t[nu])*((fV)m_vOv_beta[nu])[mu]);
             //                        5x2                                 5x5
             d22 = d22*(one - m_fVP_1[nu] * ((fV)m_vOv_beta[nu])[mu]);

           }//end for the muticative loop by Targets T[N]

           if (d22 == zero)
             d22 = correct(d22);
           mlt2 = n22 / d22;
           mlt1 = m_v_B_1[mu] * (fr11 - fr21*mlt2);


           adtv = adtv + mlt1*mlt2;
         }//end for the additive loop by Targets T[N]
          //((fV)mtrxDLT_t[k])[L] = adtv;
         this->GetDLTmax(adtv, k, L);
         //--------------Dltmax------------------------

         o << "\n->look  for max of DLT";
         o << " Cur dlt" << L << "][" << k << "]= " << adtv << " and   m_fMaxDLT_t [" << m_iLmax << "][" << m_iKmax << "]=" << m_fMaxDLT_t;

         Log(o);
         o.str("");
         //--------------Dltmax--------------------- 
         vBuf.push_back(adtv);
       }//end of the loop k
       mtrxDLT_t.push_back(vBuf);
     }//end of the loop l

     o << "   Done         \n ";
     Log(o);
     o.str("");
     //    TRACE(_T(o.str().c_str()));        o.str("");

     // Tracing: 
     //o.str("");
     o << "" << m_it_ << "\n  Result of calculation: \n";
     for (int L = 0; L < szTm; L++) {
       for (int k = 0; k < szRm; k++) {
         o << TAB << "mtrxDLT_t[" << L << "][" << k << "]=" << ((fV)mtrxDLT_t[k])[L];
         o << "\n";
       }//eo loop l szR--------------------------------------------- 
     }//eo loop k  szT---------------------------------------------- 

     o << "\n  ##########################################################";
     o << "\n  Iteration = " << m_it_;
     o << "\n  m_fMaxDLT_t[" << m_iLmax << "][" << m_iKmax << "]=" << ((fV)mtrxDLT_t[m_iLmax])[m_iKmax];
     o << " \n  the same are to be m_fMaxDLT_t =" << m_fMaxDLT_t << "";
     o << "\n  ##########################################################";

     //    o << "\n\n      23.   --------- end of mtrxDLT_t-------------\n";
     Log(o);
     TRACE(_T(o.str().c_str()));
     o.str("");
     m_fV_DltMax.push_back(((fV)mtrxDLT_t[m_iLmax])[m_iKmax]);             // report Dlt_Max
     m_cycleCounter.push_back(m_it_);;          // report # of iteration for Dlt_Max
     return 0;
   }


int  AlgDefenderRsrcs::Next_Q_iteration()//assignes curMax from   fV qMax4Def;  iV DefNmb;  iV BestTarg4Def;//best target for defender
{
  ostringstream o1;      o1.str("");
  o1 << "\n Finished iteration =" << m_it_ << "\n  27.   *********  Next_Q_iteration - use next most powefull defender *********\n";
  vfV y; y.clear();//just buffer to keep 
  // create y - buffer to keep copy of the m_vOv_QMtrx_1_NOMAX
  for (int i = 0;i < m_vOv_QMtrx_1_NOMAX.size();i++)
    y.push_back(m_vOv_QMtrx_1_NOMAX[i]);

  if (m_it_ > 0)
  {
    m_fVQ_1.clear();     m_fVQ_1 = m_fVQ_t;
  }
  o1 << "\n After iter =" << m_it_ << "  coordinates of the  m_fVQ_1: \n";
  for (int i = 0;i < szT;i++)
  {
    //     m_fVQ_1.push_back(m_fVQ_1[i]);
    o1 << " m_fVQ_1[" << i << " = " << m_fVQ_1[i] << "\n";
  }

  o1 << "\n After iter =" << m_it_ << "    coordinates of the  m_fVP_1: \n";
  m_fVP_1.clear();
  for (int i = 0;i < szT;i++)
  {
    m_fVP_1.push_back(one - m_fVQ_1[i]);
    o1 << "  m_fVP_1[" << i << "] = " << m_fVP_1[i] << "\n";
  }

  Log(o1);
  o1.str("");

  m_fmaxQ_1 = m_fmaxQ;
  o1 << "\n Running  findMaxInMatr using as input y = m_vOv_QMtrx_1_NOMAX\n"
    <<" and reassigning m_vOv_QMtrx_1_NOMAX\n";
  m_fmaxQ = findMaxInMatr(szR, szT, y, m_iMaxRow, m_iMaxCol);

  o1 << " \n   Again: coordinates of the  m_fVQ_t (most powerful from avalable defenders): \n";


  for (int i = 0;i < szT;i++)
  {
    //     m_fVP_t.push_back(one-m_fVQ_t[i]);
    o1 << " m_fVQ_t[" << i << " = " << m_fVQ_t[i] << "\n";
  }
  o1 << " \n\n ";


  for (int i = 0;i < szT;i++)
  {
    m_fVP_1.push_back(one - m_fVQ_1[i]);
    o1 << "" << m_it_ << "    m_fVP_1[" << i << " = " << m_fVP_1[i] << "\n";
  }
  o1 << "\n\n\n ";



  m_fVP_t.clear();
  o1 << "" << m_it_ << "\n\n  coordinates of the  m_fVP_t:\n\n";
  for (int i = 0;i < szT;i++)
  {
    m_fVP_t.push_back(one - m_fVQ_t[i]);
    o1 << "" << m_it_ << "   m_fVP_t[" << i << "] = " << m_fVP_t[i] << "\n";
  }
  o1 << "" << m_it_ << " \n\n ";

  o1 << "" << m_it_ << " \n  27.emd   *********  Next_Q_iteration - use next most powefull defender *********\n";
  TRACE(_T(o1.str().c_str()));    o1.str("");

  return 0;
}


int AlgDefenderRsrcs::NextIterationOf_m_vOv_omgMx_t(void)
{
  o.str("");   //     string s("");
  TRACE(_T("\n   18.  *** m_vOv_omgMx_t  ************** \n"));
  o << "\n After iter=" << m_it_ << "   18.  ******Create new iter of  m_vOv_omgMx_t  ****  "
    << " Updated m_vOvOmegaMtrx_1:\n";
  Log(o);
  o.str("");

  /* if (1 == m_it_)
  {
  // m_vOvOmegaMtrx;
  m_vOvOmegaMtrx_1.clear();//        m_vOvOmegaMtrx_t.clear();
  for (int j = 0; j < szA; j++) {
  fV fVbuf;  fVbuf.clear();
  fVbuf = m_vOvOmegaMtrx[j];
  for (int i = 0; i < szT; i++) {
  float fb = ((fV)m_vOvOmegaMtrx[j])[i];
  o << "After inter =" << m_it_ << "   m_vOvOmegaMtrx_1 [" << i << "][" << j << "] =" << fb << "\n ";
  fVbuf.push_back(fb);
  }//eo loop i szT---------------------------------------------
  m_vOvOmegaMtrx_1.push_back(fVbuf);
  }//eo loop j  szT----------------------------------------------

  }//end of if
  else //later iterations
  {*/
   
  m_vOvOmegaMtrx_1.clear();
  for (int j = 0; j < szA; j++) {
  fV fVbuf, fVbuf1;
  fVbuf.clear();
  for (int i = 0; i < szT; i++) {
  float fb(zero);
  if (1 == m_it_)
  fb = ((fV)m_vOvOmegaMtrx[j])[i];
  else
  fb = ((fV)m_vOvOmegaMtrx_t[j])[i];
  o << "After inter =" << m_it_ << "  m_vOvOmegaMtrx_1 [" << i << "][" << j << "] =" << fb << "\n ";
  fVbuf.push_back(fb);
  }//eo loop i szR---------------------------------------------
  m_vOvOmegaMtrx_1.push_back(fVbuf);
  }//eo loop j  szT----------------------------------------------
  // }
  Log(o);
  o.str("");

  o << "\n Prepared for the next iter ("<<m_it_ +1  <<") is  m_vOvOmegaMtrx_t:\n";

  //        m_vOvOmegaMtrx_t.clear();
  vfV omegaBuf; omegaBuf.clear();
  //  m_vOvOmegaMtrx_t = m_vOvOmegaMtrx_1;
  m_vOvOmegaMtrx_t.clear();

  for (int j = 0; j < szA; j++) {
  fV b;b.clear();
  for (int mu = 0; mu < szT; mu++) {
  float res(zero);
  float num =  (one - (one - m_fmaxQ) *((fV)m_vOv_beta[m_iLmax])[mu]) ;
  float den =  (one - (one -m_fmaxQ_1)*((fV)m_vOv_beta[m_iLmax])[mu]) ;
  if (zero == den)
  den = correct(den);
  //  float res_mu_j = ((fV)m_vOvOmegaMtrx_1[j])[mu]
  //    * ((one - (one - /*m_fVQ_t[m_iLmax]*/ m_fmaxQ) *((fV)m_vOv_beta[m_iLmax])[mu])
  //      / den);
  //  b.push_back(res_mu_j);
  //    ((fV)m_vOvOmegaMtrx_t[j])[mu] = zero;
  res = ((fV)m_vOvOmegaMtrx_1[j])[mu] * num / den;
  b.push_back(res);
  //    * ((one - (one -  m_fmaxQ) *((fV)m_vOv_beta[m_iLmax])[mu])  / den);

  }//end of loop by mu ()----------------------------
  m_vOvOmegaMtrx_t.push_back(b);
  }//end of loop by j  ---------------------------------

  //Tracing:

  for (int j = 0; j < szA; j++) {
  for (int mu = 0; mu < szT; mu++) {
  o << "After it=" << m_it_ << "     m_vOvOmegaMtrx_t [" << mu << "][" << j << "] ="
  << ((fV)m_vOvOmegaMtrx_t[j])[mu] << "\n ";
  }
  }
  o << "\n ";
  Log(o);
  TRACE(_T(o.str().c_str()));
  o.str("");


  return 0;



  }


int AlgDefenderRsrcs::Next_a_iteration()
{
  m_fVa_1.clear();
  m_fVa_1 = m_fVa_t;

  o.str("");
  TRACE(_T("\n\n      8AA.    ***** Before Transposing the Next Iteration  of m_fVa_t -  **********\n"));
  m_fVa_t.clear();
  for (int j = 0;j < szA;j++) {
    float a_t = one; //  
    fV vb;vb.clear();
    vb = ((fV)m_vOvOmegaMtrx_t[j]);
    for (int mu = 0;mu < szT;mu++) {
      a_t = a_t*(one - (vb[mu]));        //a_t = a_t*(one - ((fV)m_vOvOmegaMtrx[j])[mu]);

    }//end of loop by Assets-------------------------
    m_fVa_t.push_back(a_t);
  }//end of loop by Targets--------------------------

   // Tracing: 

  o.str("");
  o << "\n" << m_it_ << "  \n";
  for (int j = 0;j < szA;j++) {
    o << TAB << "" << m_it_ << "  nm_fVa_t[" << j << "]=" << m_fVa_t[j];
    o << "\n";
  }//eo loop j  szT---------------------------------------------- 
  o << "\n\n";
  TRACE(_T(o.str().c_str()));
  o.str("");
  o << "\n" << m_it_ << " \n\n";
  o << "       ----------------- end of  8  calc of Next iter for  m_fVa_t = m_fVa_1 -------------\n";
  TRACE(_T(o.str().c_str()));
  o.str("");
  //return 0;

  o << "\n\n";
  TRACE(_T("\n\n      8.A    *****     Thansposed  m_ftrVa_t  On NEXT Iteration  of m_fVa_t -  **********\n"));

  //Transpose m_vOvOmegaMtrx

  m_ftrVa_1.clear();
  m_ftrVa_1 = m_ftrVa_t;

  vfV  Atr;Atr.clear();
  m_ftrVa_t.clear();
  //      fV aN;aN.clear();
  Transpose(m_vOvOmegaMtrx_t, Atr);
  fV aN;aN.clear();
  for (int j = 0;j < szT;j++) {//szA
    float a_t = one; //  
    fV vb;vb.clear();
    vb = ((fV)Atr[j]);
    for (int mu = 0;mu < szT;mu++) {//was szA
      a_t = a_t*(one - (vb[mu]));        //a_t = a_t*(one - ((fV)m_vOvOmegaMtrx[j])[mu]);
    }//end of loop by Assets-------------------------
    m_ftrVa_t.push_back(a_t);
  }//end of loop by Targets--------------------------


   // Tracing: 
  o.str("");
  o << "\n";
  o << "" << m_it_ << "  \n";
  for (int j = 0;j < szT;j++) {
    o << TAB << "" << m_it_ << "  Transposed:  m_ftrVa_t[" << j << "]=" << m_ftrVa_t[j];
    o << "\n";
  }//eo loop j  szT---------------------------------------------- 
  o << "\n\n";
  TRACE(_T(o.str().c_str()));
  o.str("");
  o << "\n" << m_it_ << " \n      n----------------- end of  8 & 8A (Transposing)  calc of Next iter for  m_fVa_t = m_fVa_1 -------------\n";
  o << "\n" << m_it_ << " \n";
  TRACE(_T(o.str().c_str()));
  o.str("");
  return 0;

}



int AlgDefenderRsrcs::Next_b_iteration()
{

  o.str("");
  o << "\n" << m_it_ << " \n    109. *****Calc of NEXT iteration of m_fVb_t[N]   *********\n\n";
  o << "That is  m_fVb_t = m_fVb_1*((fV)m_vOv_QMtrx[mu])[m_iMaxCol]:\n";
  o << "" << m_it_ << " \n(see how N = " << szT << " coordinates of this vector are changed during calculation)\n";

  if (1 == m_it_)
  {
    m_fVb_1.clear();
    m_fVb_1 = m_fVb_0;
  }
  else
  {
    m_fVb_1.clear();
    m_fVb_1 = m_fVb_t;
  }


  m_fVb_t.clear();
  for (int mu = 0;mu < szT;mu++) {
    m_fVb_t.push_back(m_fVb_1[mu] * ((fV)m_vOv_QMtrx[mu])[m_iMaxCol]);
  }//end of loop by mu (impact by R[k,mu] on T[mu])


   // Tracing:   //     o.str("");
  o << "\n" << m_it_ << " \n";
  for (int mu = 0;mu < szT;mu++) {
    o << TAB << "" << m_it_ << "m_fVb_t[ " << mu << "]=" << m_fVb_t[mu] << "\n";
  }//eo loop i szT--------------------------------------------- 

  o << "\n" << m_it_ << " \n------ 109.   ----------- end of NEXT calc for m_fVB_0  -------------\n";
  Log(o);
  TRACE(_T(o.str().c_str()));
  o.str("");

  return 0;
}


int AlgDefenderRsrcs::Next_fVOMEGA_t_Iteration()
{
  o.str("");
  o << "\nIter =" << m_it_ << "  110.      *****Calc of Next iteration for m_fVOMEGA_t    *********\n";
  m_fVOMEGA_t.clear();

  for (int j = 0; j < szA; j++) {//........................
    float f(zero);
    for (int i = 0; i < szT; i++) {//........................
      f = f + ((fV)m_vOvOmegaMtrx_t[j])[i];
    }//end of loop by i  -------------
    m_fVOMEGA_t.push_back(f);
  }//end of loop by j (asset number)---------------------- 
  m_fVOMEGA_0.clear();
  m_fVOMEGA_0 = m_fVOMEGA_t;


  // Tracing: 
  o.str(" ");
  for (int j = 0; j < szA; j++) {
    o << "Iteration =" << m_it_ << "    m_fVOMEGA_t[ " << j << "]=" << m_fVOMEGA_t[j] << "\n";
  }//eo loop i szA--------------------------------------------- 
   // o << "\n" << m_it_ << " \n\n-------  110.  ---------- end of calc for NEXT iter m_fVOMEGA_t or 0  ------------- \n";
  Log(o);
  TRACE(_T(o.str().c_str()));
  o.str("");


  return 0;
}


int  AlgDefenderRsrcs::compute_F_gamma_functional()
{
  float fGamma = 0.;
  for (int i = 0; i < szA;i++) {
    float mltEps = 1.;
    for (int j = 0; j < szA; j++) {
      float epsi = one;
      for (int mu = 1; mu < szT; mu++) {
        float mlt_defInter = one;
        for (int nu = 0; nu < szT; nu++) {
          float mult_q = 1.;
          for (int r = 0; r < szR; r++) {
            mult_q = mult_q* ((fV)m_vOv_QMtrx[nu])[r];// was m_vOfvFl_QMtrx
          }//end of loop by r (for q params of defenders)
          mlt_defInter = mlt_defInter*(one - (one - mult_q)*((fV)m_vOv_beta[nu])[mu]);
        }//eO loop by nu (for q params of defenders)
        epsi = epsi* (one - ((fV)m_vOvOmegaMtrx[j])[mu] * mlt_defInter);//!Atn! formula erroneous here
      }//eO loop by mu (for omega [S] params of T)
      mltEps = mltEps*(one - (one - epsi)*((fV)m_vOv_alpha_Mtrx[j])[i]);
    }//eO loop by j (for epsi of A)
    fGamma = fGamma + m_fV_V[i] * (one - mltEps);
  }//eO loop by i (for V of A)
  m_fFmin = fGamma;
  return 0;
}


int AlgDefenderRsrcs::ReportType21()
{
  o.str("");
  o << ""<<m_it_<<"\n\n\n==============================The DltMax changes (final report) :============================\n\n";
  int sr(m_fV_DltMax.size());
  for (int i = 0; i < m_fV_DltMax.size(); i++) {
    o << "iteration # " << m_cycleCounter[i] << "\t DltMax = " << m_fV_DltMax[i] <<" \n";
   }
  o << "================"<<m_it_<<"\n\n\n End of report =============="<<m_it_<<"\n\n\n\n End of execution\n\n\n\n";
  TRACE(_T(o.str().c_str()));o.str("");
  o.str("");
  return 0;
}


int AlgDefenderRsrcs::GetDLTmax(float & dlt, int & k, int & L)
{


  if (m_fMaxDLT_t < dlt)
  {
    m_iKmax = k;
    m_iLmax = L;
    m_fMaxDLT_t = dlt;
    /*
    m_iVMaxTargByDefender[k] = m_iLmax;
    m_fVMaxDltByDefender[k] = m_fMaxDLT_t;

    m_iVAssignedDefender[k]= may we re-assign? My guess - No
    */

    return 1;
  }
  return 0;
}


float AlgDefenderRsrcs::correct(float & fIn)
{
  //	::AfxMessageBox(_T("Attn: dx trying to \
  	//	get out of range...Corrected."));
  float f(one);
  float f2(10.);
  return f / f2;
}





/* 
 

/*
int AlgDefenderRsrcs::prepArrays4Assets()// m_fV_V  // m_vOv_alpha_Mtrx
{//ZZZZZZZZZZZZ
	prepVectOfAssetsValues(); // m_fV_V 
	prepMtrxAssetsInteraction();// m_vOv_alpha_Mtrx
	return 0;
}
*/
/* int AlgDefenderRsrcs::prepVectOfAssetsValues()//m_fV_V
{//ZZZZZZZZZZZZZZZZZZZ
	// ---------------vector of Asset's values  
	//V_s Assts[] defined in base also m_fV_aVectA
	TRACE(_T(" \n\n\n   2.          *****Start creation of Assts vector m_fV_V  with values V ********************** \n"));
  ostringstream o, o0, o1, o2, o3;
  o.str(""); o0.str(""); o1.str(""); o2.str(""); o3.str("");
  string s, s1("");
  string::size_type st;
  int szA_suplmnt(szA);
  if (1 > szA)
  {
    int szA_suplmnt(1);
    ::AfxMessageBox(_T("Size of A is 0 - program will not work"));
    exit(0);
  }
  TRACE(_T("\n\n   2.1     ====== Initializing m_fV_V =====\n")); 
  srand((unsigned)time(NULL));
  o1 << szA;
  float fszA(stof(o1.str().c_str(), &st));
  o1.str(""); o1 << myRAND_MAX+1;
  float frm(stof(o1.str().c_str(), &st));
  m_fV_V.clear();
  o << "\n";
  for (int j = 0; j <  szA; j++) {
    o1.str(""); 
    o1 << myRAND_MAX;
    m_irand = rand() % myRAND_MAX;  m_istran = rand() % myRAND_MAX; m_o << TAB << m_irand << TAB << m_istran << "\n";
    o1.str(""); 
    o1 << (m_irand );
    float fr(stof(o1.str().c_str(), &st));
    float rnd = fr / frm;
    if (rnd >= 1.0000)
      rnd = (float)(rnd / frm);
    m_fV_V.push_back(rnd);
    o << TAB << "m_fV_V[" << j << "]=" << m_fV_V[j]  << " \n";
  }
  TRACE(_T(o.str().c_str())); o.str("");

  o.str("");
  o << "\n   2.1--------- end of initialization m_fV_V -------------\n\n";
  TRACE(_T(o.str().c_str()));
  o.str("");

  return 0;

 

}
*/
/*// m_vOv_alpha_Mtrx of SxS
int AlgDefenderRsrcs::prepMtrxAssetsInteraction()//m_vOv_alpha_Mtrx
{	//ZZZZZZZZZZZZZZZZZZZZZ
	// ---------------Asset's matrix of own interaction (szAxszA)
	TRACE(_T("\n\n  3.         *****Creation of ((fV)m_vOv_alpha_Mtrx[S])[S] - mtrx of Assets interaction *********\n"));
	ostringstream o,o0, o1, o2, o3; 
  o.str(""); o0.str(""); o1.str(""); o2.str(""); o3.str("");
	string s, s1("");
  string::size_type st;

  srand((unsigned)time(NULL));
  o0 << szA<<".";
  float fszA(stof(o0.str().c_str(), &st));
  o1 << myRAND_MAX;
  float frm(stof(o1.str().c_str(), &st));
  fV fVbuf;
  for (int i = 0; i < szA; i++) {
    fVbuf.clear();
    for (int j = 0; j < szA; j++) {
      o1.str(""); 
      o1 << myRAND_MAX;
      m_irand = rand() % myRAND_MAX;  m_istran = rand() % myRAND_MAX;; m_o << TAB << m_irand << TAB << m_istran << "\n";
      o1.str("");
      o1 << (m_irand);
      float fr(stof(o1.str().c_str(), &st));
      float rnd = fr / frm;
//      Sleep(123);

      if (rnd >= 1.0)
        rnd = (float)(rnd / frm);
      fVbuf.push_back(rnd);
    }//eO loop by j(v)
    m_vOv_alpha_Mtrx.push_back(fVbuf);
  }//eO loop i by S alpha vectors for A
 
             // Tracing: 
  o.str("");
  string sb("");
    for (int j = 0; j < szA; j++) {
      for (int i = 0; i < szA; i++) {
        o << TAB << "m_vOv_alpha_Mtrx[" << i << "][" << j << "]=" << ((fV)m_vOv_alpha_Mtrx[i])[j];
        o << "\n";
        sb=(o.str().c_str());
      }//eo loop i szA--------------------------------------------- 
    }//eo loop j  szT---------------------------------------------- 
    TRACE(_T(o.str().c_str()));
    o.str("");
    o << "\n\n     3 ----------------- end of initialization for m_vOv_alpha_Mtrx of matrix A-------------\n";
    TRACE(_T(o.str().c_str()));
    o.str("");
 
	return 0;
}
*/
/*
// m_vOv_beta [NxN] m_vOvOmegaMtrx [TxA]
int AlgDefenderRsrcs::prepArrays4Targets() 
{//??????????????????????????
	prepInterTargetsCooperationMtrx();// m_vOv_beta [NxN]
  //m_vOvOmegaMtrx  [TxA]  & m_fV_OMEGAVectA
	prepTargets2AssetsImpactMtrx();  //m_vOvOmegaMtrx  [TxA]  & m_fV_OMEGAVectA
	return 0;
}
*/

/*
int AlgDefenderRsrcs::prepInterTargetsCooperationMtrx()// m_vOv_beta  [NxN]
{//ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ
	// ---------------Targets matrix of own interaction (szTxszT)
	TRACE(_T("\n\n  4.    *****Creation of T p - mtrx of trgt's interaction***beta**********\n"));
  ostringstream o, o0, o1, o2, o3;
  o.str(""); o0.str(""); o1.str(""); o2.str(""); o3.str("");
  string s, s1("");
  srand((unsigned)time(NULL));
  o0 << szT;
  float fszT(stof(o0.str().c_str(), &m_st));
  o1 << myRAND_MAX;
  float frm(stof(o1.str().c_str(), &m_st));
  fV fVbuf;
  m_vOv_beta.clear();
  for (int i = 0; i < szT; i++) { //---loop start-----------
    fVbuf.clear();
    o << "vector m_v_alpha  #  " << i << "\n";
    for (int j = 0; j < szT; j++) { //---loop start-----------
      o1.str(""); o1 << myRAND_MAX;
      m_irand = rand() % myRAND_MAX;  m_istran = rand() % myRAND_MAX;; m_o << TAB << m_irand << TAB << m_istran << "\n";
      o1.str("");
      o1 << (m_irand);
      float fr(stof(o1.str().c_str(), &m_st));
      float rnd = fr / frm;

      if (rnd >= 1.0)
        rnd = (float)(rnd / frm);
      fVbuf.push_back(rnd);
    }//eO loop by j(v).......................................
    m_vOv_beta.push_back(fVbuf);
  }//eO loop i by S beta vectors for T.......................

  //fill vRand
  vRand.clear();
  for (int j = 0; j <1000; j++) { //---loop start-----------
    o1.str(""); o1 << myRAND_MAX;
    m_irand = rand() % myRAND_MAX;  m_istran = rand() % myRAND_MAX;; m_o << TAB << m_irand << TAB << m_istran << "\n";
    o1.str("");
    o1 << (m_irand);
    float fr(stof(o1.str().c_str(), &m_st));
    float rnd = fr / frm;

    if (rnd >= 1.0)
      rnd = (float)(rnd / frm);
    vRand.push_back(rnd);
  }//eO loop by j(v).......................................


  // Tracing: 
  o.str("");
  o << "\n\n";
  for (int j = 0; j < szT; j++) {
    for (int i = 0; i < szT; i++) {
      o << TAB << "m_vOv_beta[" << i << "][" << j << "]=" << ((fV)m_vOv_beta[i])[j];
      o << "\n";
    }//eo loop i szA--------------------------------------------- 
  }//eo loop j  szT---------------------------------------------- 
  TRACE(_T(o.str().c_str()));
  o.str("");
  o << "\n\n   4.  ----------------- end of beta components of matrix T-------------\n";
  TRACE(_T(o.str().c_str()));
  o.str("");
 
  return 0;
 
}
*/
 /*//IMP is m_fV_OMEGAVectA,m_vOfvFl_QMtrx
int AlgDefenderRsrcs::prepTargets2AssetsImpactMtrx() //m_vOvOmegaMtrx  [TxA]
{  //zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz
	// --impact mtrx of Targ to Assts the same as m_vOvOmegaMtrx  and m_fV_OMEGAVectA
	TRACE(_T("\n\n    5.  *****Start creation of impact mtrx of Targ on Assts m_vOvOmegaMtrx\n"));
  ostringstream o, o0, o1, o2, o3;
  o.str(""); o0.str(""); o1.str(""); o2.str(""); o3.str("");
  string s, s1("");
  float rnd_old(zero);
  int iz(0);
  fV v;
  v.clear();
  srand((unsigned)time(NULL)); // o0 << szT; // float fszT(stof(o0.str().c_str(), &m_st));
  o1 << myRAND_MAX;
  float frm(stof(o1.str().c_str(), &m_st));
  fV fVbuf;
//  m_vOv_beta.clear();//  int j(0);
  string tab("");
  m_vOvOmegaMtrx.clear();      //3  Q impact   mtrx Q[N][S]
  for (int j = 0; j < szA; j++) {
    m_fV_OMEGAVectA.clear();
    for (int i = 0; i < szT; i++) {
BB:      o1.str("");
      m_irand = rand()% myRAND_MAX;     m_istran = rand() % myRAND_MAX;; m_o << TAB << m_irand << TAB << m_istran << "\n";
      o1 << (m_irand% szT + 1);
      float fr(stof(o1.str().c_str(), &m_st));
      float rnd = fr / frm;
      if (rnd >= 1.0)
        rnd = (float)(rnd / frm);
      if (100 > iz) {
        iz++;
        if (1 == isRndUsed(v, rnd))
          goto BB;

      }
      iz = 0;
      rnd_old = rnd;
      m_fV_OMEGAVectA.push_back(rnd);
      v.push_back(rnd);
    }//eo loop i szA--------------------------------------------- 
    m_vOvOmegaMtrx.push_back(m_fV_OMEGAVectA);
  }//eo loop j  szT---------------------------------------------- 

  // Tracing: 
  o.str("");
  o << "\n\n";
  for (int j = 0; j < szA; j++) {
    for (int i = 0; i < szT; i++) {
      o << TAB << "m_vOvOmegaMtrx[" << j << "][" << i << "]=" << ((fV)m_vOvOmegaMtrx[j])[i];
      o << "\n";
    }//eo loop i szA--------------------------------------------- 
   }//eo loop j  szT---------------------------------------------- 
  o << "\n\n   5.  ----------- end of m_vOvOmegaMtrx initialization ( mtrx T vs A)-------------\n";
  TRACE(_T(o.str().c_str()));
  o.str("");

  /////////////////////////////////////////////////////
  //dups    
  ///////////////////////////////////////////////////// 
  return 0;

 
}
*/
/* dbg  
// m_vOv_QMtrx [RxT]  m_vOv_Pmtrx
int AlgDefenderRsrcs::prepArrays4Defenders()// m_vOv_QMtrx [RxT]  m_vOv_Pmtrx
{
	// ---------------Qmn  impact of defenders on Targs -------------------------------------
	TRACE(_T("\n\n  6.  ***Arrays for defenders**Start creation of Qmn - mtrx of impact defenders R on Targ (to reduce impact on Assts)\n"));
  float rnd_old(zero);
  ostringstream o, o0, o1, o2, o3;
  o.str(""); o0.str(""); o1.str(""); o2.str(""); o3.str("");
  string s, s1("");
  ::srand((unsigned)time(NULL)); // o0 << szT; // float fszT(stof(o0.str().c_str(), &m_st));
  o1 << myRAND_MAX;
  float frm(stof(o1.str().c_str(), &m_st));
  m_vOv_QMtrx.clear();
  for (int j = 0; j <szT; j++) {//.........QMtrx [MxN]...............
    m_fV_QVectR.clear();        //3  Q Vec R [M]
    for (int i = 0;i <szR;i++) {//.................................
AA:      o1.str("");

      m_irand = rand() % (myRAND_MAX/3);     m_istran = rand() %( myRAND_MAX/3); m_o << TAB << m_irand << TAB << m_istran << "\n";
      o1 << (m_irand% szR + 1);
      float fr(stof(o1.str().c_str(), &m_st));
      float rnd = fr / frm;
      if (rnd >= 1.0)
        rnd = (float)(rnd / frm);
      if (rnd_old == rnd) 
        goto AA;
      rnd_old = rnd;
      m_fV_QVectR.push_back(rnd);
    }//eo loop i szR--------------------------------------------- 
    m_vOv_QMtrx.push_back(m_fV_QVectR);
  }//eo loop j  szT---------------------------------------------- 

//  float fz = ((((fV)m_vOv_trQMtrx[j])[i]));
//  o << "\n" << TAB << "m_vOv_trQMtrx [" << j << "][" << i << "]=" << ((fV)m_vOv_trQMtrx[j])[i];



  //Transposed
  fV fb;
  vfV fm;
  
  fb.clear();
  for (int j = 0; j <szR; j++) {//.........QMtrx [MxN]...............
    fb.clear();        //3  Q Vec R [M]
    for (int i = 0;i <szT;i++) {//.................................
      fb.push_back(((fV)m_vOv_QMtrx[i])[j]);
    }//eo loop i szT--------------------------------------------- 
    m_vOv_trQMtrx.push_back(fb);
  }//eo loop j  szR---------------------------------------------- 
  fm = m_vOv_trQMtrx;

  int aaa = 1;

  /*
  for (int j = 0; j <szT; j++) {//.........QMtrx [MxN]...............
    m_fV_QVectR.clear();        //3  Q Vec R [M]
    for (int i = 0;i <szR;i++) {//.................................
      o1.str("");
      m_irand = rand();     m_istran = rand() % myRAND_MAX; m_o << TAB << m_irand << TAB << m_istran << "\n";
      o1 << (m_irand% szR + 1);
      float fr(stof(o1.str().c_str(), &m_st));
      float rnd = fr / frm;
      if (rnd >= 1.0)
        rnd = (float)(rnd / frm);
      m_fV_QVectR.push_back(rnd);
    }//eo loop i szR--------------------------------------------- 
    m_vOv_QMtrx.push_back(m_fV_QVectR);
  }//eo loop j  szT---------------------------------------------- 
*/
/* dbg 
  

   // Tracing: 
  o.str("");
  o << "\n\n";
  for (int j = 0; j < szT; j++) {
    for (int i = 0; i < szR; i++) {
      o << TAB << "m_vOv_QMtrx[" <<j << "][" << i << "]=" << ((fV)m_vOv_QMtrx[j])[i];
      o << "\n";
    }//eo loop i szR--------------------------------------------- 
  }//eo loop j  szT---------------------------------------------- 
  o << "\n\n  --6---end of Effect  defenders against targets----.-- end of m_vOv_QMtrx initialization  -------------\n";
  TRACE(_T(o.str().c_str()));
  o.str("");

  //m_vOv_Pmtrx
  TRACE(_T("\n\n  6.1  *** P = 1-Q Arrays for defenders************** \n"));
  o.str("");
  m_vOv_Pmtrx.clear();
 for (int j = 0; j < szT; j++) {
   fV fVbuf;
   fVbuf.clear();
     for (int i = 0; i < szR; i++) {
        float fb = one - ((fV)m_vOv_QMtrx[j])[i];
        fVbuf.push_back(fb);
    }//eo loop i szR--------------------------------------------- 
     m_vOv_Pmtrx.push_back(fVbuf);
  }//eo loop j  szT---------------------------------------------- 

   // Tracing: 
  o.str("");
  o << "\n\n";
  for (int j = 0; j < szT; j++) {
    for (int i = 0; i < szR; i++) {
      o << TAB << "m_vOv_Pmtrx[" <<j << "][" << i << "]=" << ((fV)m_vOv_Pmtrx[j])[i];
      o << "\n";
    }//eo loop i szR--------------------------------------------- 
  }//eo loop j  szT---------------------------------------------- 
  o << "\n\n  --6.1---end of Effect  defenders against targets----.-- end of m_vOv_Pmtrx initialization  -------------\n";
  TRACE(_T(o.str().c_str()));
  o.str("");
  return 0;
}




int AlgDefenderRsrcs::prepOmega_vec_mtrx_EpsilonMtrx_aVectA()
{
		ostringstream o0; o0.str("");
		string s, s1("");
	//==========Prep OmegaMtrx,EpsilonMtrx,aVectA, OMEGAVectAm AssetValueVec ==========
	TRACE("\n\n========= omega[mu,j] on %i iteration = elem of  mtrx OMEGA \
     [N=%i,S=%i] aka as mtrx of impact coeffs ot T on A (see this matrix above) =======\n\
	\t\t During iteration =0 these elements used as is (initialized as probabilities).\n",m_it_ ,szT,szA);
	srand((unsigned)time(NULL));



	TRACE("\n\n====================Impact reduction for every target T[n]: b(0)_nu ============================ \n");
	string tab("");
	o.str("");
	float b0_nu = 0.;
	for (int j = 0;j < szT;j++) {

	  float	b0 = 1.;
		for (int i = 0; i < szR;i++) {
			int szxR = m_vOv_QMtrx.size();
			int szxT = ((fV)m_vOv_QMtrx[j]).size();// was ((fV)m_vOfvFl_QMtrx[j]).size();
			b0 = b0*((fV)m_vOv_QMtrx[j])[i];//was m_vOfvFl_QMtrx
		}//eo -------------------- calc of b_t -----------------
		 o << tab << "b0_nu = _PI_["<< szR<<"](m_fV_bVectR[" << j << "]) = " << b0 << " \n";
		TRACE(_T(o.str().c_str()));
	tab.append("\t");

	}  // eO iter for  b(0)_nu based on impact reduction q 

	TRACE("\n\n ============= Omega and epsilon (1-omega) ============================");

	m_fVAssetValueVec.clear();    //0 asset_val Vect V(S)
	m_vOvOmegaMtrx.clear();
	m_vOfvFlEpsilonMtrx.clear();  //omega =1-epsilon
	m_fV_aVectA.clear();        //5  a Vec A(S) 
	m_fV_OMEGAVectA.clear();    //6	OMEGA Vec A(S)
	for (int i = 0;i < szA; i++){
		m_fVOmegaVectT.clear();
		m_fVEpsilonVectT.clear();
		m_fas = one;
		m_fOMEGA_A = 0.0;
		float fAsstVal = 0.0;
		for (int j = 0;j < szT; j++){
			//			DOUBLE rm = ((DOUBLE)myRAND_MAX / szT);
			//			float rnd = (float)((float)(rand() % szT + 1) / ((DOUBLE)myRAND_MAX / szT));
			float rnd = (float)((float)(rand() % myRAND_MAX) / ((DOUBLE)myRAND_MAX));
			if (rnd >= one)
				rnd = (float)(rnd /(float) 10.0);
			m_fVOmegaVectT.push_back(rnd);
      float pi(3.);
			fAsstVal =((float) rnd )/pi;
			m_fVEpsilonVectT.push_back((float)(1.000 - rnd));
			m_fas = m_fas*((float)(one - rnd));
			m_fOMEGA_A = m_fOMEGA_A + (float)(rnd);
		}
		m_fVAssetValueVec.push_back(fAsstVal);
		m_vOvOmegaMtrx.push_back(m_fVOmegaVectT);
		m_vOfvFlEpsilonMtrx.push_back(m_fVEpsilonVectT);
		m_fV_aVectA.push_back(m_fas);
		m_fV_OMEGAVectA.push_back(m_fOMEGA_A);
	}//end of preparation of m_fV_aVectA for 0 iteration.

	TRACE(_T("%i-Created %i Vecs of omg mtrx size of %i (# of the Targs) \
i.e. transposed T[N,S] mtrx of impact coeffs.\n"), -1, szA, szT);
	TRACE(_T("\t Also created epsilon and vector a size of %i (# of Assets)"), szA);

//	string tab("");
	m_fas = 0;
	for (int i = 0;i < szA; i++)
	{
		fV vb, vb1;
		vb.clear();
		vb = m_vOvOmegaMtrx[i];
		vb1.clear();
		vb1 = m_vOfvFlEpsilonMtrx[i];
		m_fas = m_fV_aVectA[i];
		m_fOMEGA_A = m_fV_OMEGAVectA[i];

		TRACE(_T("%s Vector Omg   %i \t\t Vector Eps   %i       \n")
			, _T(tab.c_str()), i, i);
		for (int j = 0;j < szT; j++)
		{
			float rndOmg = vb[j];
			float rndEps = vb1[j];
			TRACE(_T("\t\t%s omg[%i,%i]= %8.6f\t  Eps[%i,%i]= %8.6f \t\ta=%12.10f\t\t OMEGA=%8.6f\n")
				, _T(tab.c_str()), i, j, rndOmg, i, j, rndEps, m_fas, m_fOMEGA_A);
		}
		tab.append("\t");
	}

	return 0;
}

int AlgDefenderRsrcs::prep_vOfvFl_QMtrx()
{
	//==========Prep Q - related=QMtrx=bVectR===============================
	TRACE(_T("\n\n========= Q[M,N]  tt Testing Q[M,N] mtrx of impact reducers:=======\n"));
  m_vOv_QMtrx.clear();//was m_vOfvFl_QMtrx
	m_fV_bVectR.clear();
	for (int i = 0;i < szT; i++)
	{
		m_fV_QVectR.clear();
		m_fbn = one;
		for (int j = 0;j < szR; j++)
		{
			float rnd = (float)((float)(rand() % myRAND_MAX + 10000) / ((DOUBLE)myRAND_MAX));
			if (rnd >= 1.0000)
				rnd = (float)(rnd / 10.0);
			m_fV_QVectR.push_back(rnd);
			m_fbn = m_fbn*rnd;
		}
    m_vOv_QMtrx.push_back(m_fV_QVectR);//was m_vOfvFl_QMtrx
		m_fV_bVectR.push_back(m_fbn);
	}

	TRACE(_T("\n\n Created     Vecs (len=%i =#of defenders, # of vecs is %i =# Targs) for \
Impact reduction matrix m_vOv_QMtrx \n"), szR, szT);
		string tab("");
	for (int i = 0;i < szT; i++)
	{
		fV vb, vb1;
		vb.clear();
		vb = m_vOv_QMtrx[i];
		m_fbn = m_fV_bVectR[i];
		TRACE(_T("%s Vector Q   %i \t\t\tComponent of vbn \n"), _T(tab.c_str()), i);
		for (int j = 0;j < szR; j++)
		{
			float rndQ = vb[j];
			TRACE(_T("\t\t%s Q[%i,%i]= %8.6f\t\t\t %12.10f \n")
				, _T(tab.c_str()), i, j, rndQ, m_fbn);
		}
		tab.append("\t");
	}

	return 0;
}

int  AlgDefenderRsrcs::prep_vOv_beta()//~
{
  ostringstream o, o0, o1, o2, o3;
  o.str(""); o0.str(""); o1.str(""); o2.str(""); o3.str("");
  string s, s1("");

	//====================Prep beta=====================================
	TRACE(_T("\n\n========= beta [N,N]     mtrx of interact targets:=======\n"));
	m_vOv_beta.clear();
  float fszT(stof(o1.str().c_str(), &m_st));
  o1.str(""); o1 << myRAND_MAX;
  float frm(stof(o1.str().c_str(), &m_st));
  for (int i = 0;i < szT; i++){
		m_v_beta.clear();
		float m_fbn = one;
    o << "\n";
		for (int j = 0;j < szT; j++){
      o1.str("");
      o1 << (rand() % szA + 1);
      float fr(stof(o1.str().c_str(), &m_st));
      float rnd = fr / frm;
      if (rnd >= 1.0000)
        rnd = (float)(rnd / frm);
      m_v_beta.push_back(rnd);
//      o << TAB << "m_v_beta[" << i << "][" << j << "] = " << m_v_beta[i][j] << " \n";
      TRACE(_T(o.str().c_str())); o.str("");
		}//eO loop for j
		m_vOv_beta.push_back(m_v_beta);
	}//eO loop for j
  TRACE(_T("/n======== end of matrix m_vOv_beta prep ==============/n")); o.str("");
	return 0;
}





int AlgDefenderRsrcs::prep_vOv_alpha_Mtrx()
{
	//===================Prep alpha ======================================
	TRACE(_T("\n\n========= alpha [S,S]   mtrx of interact targets:=======\n"));
	m_vOv_alpha_Mtrx.clear();
	for (int i = 0;i < szA; i++)
	{
		m_v_alpha.clear();
		m_fbn = one;
		for (int j = 0;j < szA; j++)
		{
			float rnd = (float)((float)(rand() % myRAND_MAX + 10000) / ((DOUBLE)myRAND_MAX));
			if (rnd >= 1.0000)
				rnd = (float)(rnd / 10.0);
			if (i == j)
				rnd = m_fbn;
			m_v_alpha.push_back(rnd);
		}
		m_vOv_alpha_Mtrx.push_back(m_v_alpha);
	}
	return 0;
}

int AlgDefenderRsrcs::prepFirstIterationValues_OmegaMtrx___v_B__a_Vec__OMEGA_Vec()
{
	//-------------OmegaMtrx for t=0
	for (int i = 0;i < N;i++) {//start of loop for first iter of m_vOvOmegaMtrx
		for (int j = 0;j < N;j++) {
			(((fV)m_vOvOmegaMtrx[i])[j]) = (((fV)m_vOvOmegaMtrx[i])[j]);
		}
	}

	//-------------m_v_B for t=0 (used in huge formula (3))
	m_v_B_t.clear();
	for (int j = 0;j <szA;j++) {
    m_v_B_t.push_back(one);//coordinate of v B
		for (int i = 0;i < szR;i++) {
      m_v_B_t[j] = m_v_B_t[j] * (((fV)m_vOv_QMtrx[j])[i]);// was m_vOfvFl_QMtrx
		}
	}


	//-------------m_fV_a_Vec for t=0 ((1-omega)= probab targ  is missing
	m_fV_a_Vec.clear();
	for (int j = 0;j <szA;j++) {// 
		m_fV_a_Vec.push_back(one);//coordinate of v B
		for (int i = 0;i < N;i++) {
			m_fV_a_Vec[j] = m_fV_a_Vec[j] * (one - (((fV)m_vOvOmegaMtrx[j])[i]));
		}
	}

	//-------------m_fV_OMEGA_Vec for t=0 ((1-omega)= probab targ  is missing
	m_fV_OMEGA_Vec.clear();
	for (int j = 0;j <szA;j++) {// 
		m_fV_OMEGA_Vec.push_back(0.00);//coordinate of v B
		for (int i = 0;i < N;i++) {
			m_fV_OMEGA_Vec[j] = m_fV_a_Vec[j] + (((fV)m_vOvOmegaMtrx[i])[j]);
		}
	}

	return 0;
}





/*

int AlgDefenderRsrcs::computeVec_Qt(int & iter)
{
int nu(0);
int k(0);
for (k = 0;k < szT;k++) {
for (nu = 0;nu < N;nu++) {
if (0 == iter)
{
if (k == nu)
{
//put here init diagonal element

}
else
{	//non diagonal

}
}
else
{// iter>0
if (k == nu)
{
for (int ii = 0;ii < szT;ii++) {
m_fV_QVectR[ii] = m_fV_QVectR_1[ii] *(((fV)m_vOfvFl_QMtrx[k])[nu]);
}
}
else
{
m_fV_QVectR[nu] = m_fV_QVectR_1[nu];
}
}
}// end of loop nu / N

}//end of loop nu / K

return 0;
}


*/

/*
int AlgDefenderRsrcs::SelectIdcs2MaxDlt()
{

	return 0;
}
*/