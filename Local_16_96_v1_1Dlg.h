
// Local_16_96_v1_1Dlg.h : header file
//

#pragma once
 #include "AlgDefenderRsrcs.h"

#include "SystemHeader.h"

#include "afxwin.h"

using namespace std;
typedef vector<string> sV;
typedef list<string> SLIST;


// CLocal_16_96_v1_1Dlg dialog
class CLocal_16_96_v1_1Dlg : public CDialogEx
{
// Construction
public:
	CLocal_16_96_v1_1Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LOCAL_16_96_V1_1_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
  /**
  Objec class of AlgDefenderRsrcs.
  */
  AlgDefenderRsrcs m_ALDef;

  /**
  Method for initialization of the records in the combobox cb with the
  strings located in the vector of strings v.
  */
  int InitCCBox(CComboBox & cb, sV & v);

   /**
  The bject of CComboBoxclass  used to select a currently used type
  of carrier for the input source of information about the targets
  [files, streams,etc].
  */
  CComboBox m_CBxTargSrc;
   /**
  The bject of CComboBox class  used to select a currently used type  
  of carrier for the input source of information about the resouces 
  [files, streams,etc].
  */
 CComboBox m_CBxRescrsInfoSrc;
 /**
 The bject of CComboBox class  used to select a currently used type
 of carrier for the input source of information about the assets
 [files, streams,etc].
 */
  CComboBox m_CBxDefendedAsstsVal;

  CComboBox m_CBxDefndDegradadModel;

  CComboBox m_cBxIncompartibilityConstr;


  CComboBox m_CBxDefndMandConstrns;
 
  /**
  Vector of strings used to set up data items in combobox(es).
  */
  sV m_vCbxItems;//types of data
  /**
  Vector of strings used to set up data items in the 
  combobox for settings of an Incompartibility Constraints.
  */
  sV m_vCbxIncomprtConstrItems;            //m_cBxIncompartibilityConstr;
  /**
  Vector of strings used to set up data items in the 
  combobox for settings of the Degradation Models.
  */
  sV m_vDegradationModels;
  /**
  Vector of strings used to set up data items in the
  combobox for settings of the Mandatory Constraints.
  */
  sV m_vMandatoryConstrainsModels;
  /**
  Vector of strings used to set up data items in the
  combobox for settings of the Resource Exclussion Items Models.
  */
  sV m_vResourceExclussionItems;


  afx_msg void OnBnClickedBtnStartCalc();
  CComboBox m_CBxAlgTypeSelector;
  sV m_vCbxAlgTypes;//types of Alg in use

  CEdit m_CEditDefenders;
  CEdit m_CEditTargets;
  CEdit m_CEditAssets;

  int Log(ostringstream & o);

  //CComboBox m_CBxRescrsInfoSrc;
  //CComboBox m_CBxDefendedAsstsVal;
  //CComboBox m_CBxDefndDegradadModel;
 // CComboBox m_CBxDefndMandConstrns;
 // CComboBox m_cBxIncompartibilityConstr;
};
