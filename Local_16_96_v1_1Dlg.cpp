
// Local_16_96_v1_1Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "Local_16_96_v1_1.h"
#include "Local_16_96_v1_1Dlg.h"
#include "AlgLocal1.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CLocal_16_96_v1_1Dlg dialog



CLocal_16_96_v1_1Dlg::CLocal_16_96_v1_1Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_LOCAL_16_96_V1_1_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
  m_vCbxItems.clear();
  m_vCbxItems.push_back(string("File with Values of Params"));
  m_vCbxItems.push_back(string("Stream of Target's Params"));
  m_vCbxItems.push_back(string("Irregular Stream"));



  m_vCbxIncomprtConstrItems.clear();//m_cBxIncompartibilityConstr;
  m_vCbxIncomprtConstrItems.push_back(string("Matrix of icompartibility"));             //m_cBxIncompartibilityConstr;
  m_vCbxIncomprtConstrItems.push_back(string("Linear function of support"));               //m_cBxIncompartibilityConstr;
  m_vCbxIncomprtConstrItems.push_back(string("Fnct of support with time limitations"));//m_cBxIncompartibilityConstr;
  m_vCbxIncomprtConstrItems.push_back(string("Support with set of penalties"));

  m_vResourceExclussionItems.clear();            //m_cBxResourceExclussion;
  m_vResourceExclussionItems.push_back(string("Unique Target Model"));;            //m_cBxResourceExclussion;
  m_vResourceExclussionItems.push_back(string("Linea Distribution Model"));;            //m_cBxResourceExclussion;
  m_vResourceExclussionItems.push_back(string("Exponential Propagation Model"));;            //m_cBxResourceExclussion;

  m_vDegradationModels.clear();
  m_vDegradationModels.push_back(string("CVSS v3.0 – type calculators"));
  m_vDegradationModels.push_back(string("CVSS v3.0 with partial randomization vector"));
  m_vDegradationModels.push_back(string("Degr.Mod with graph decomposition"));
  m_vDegradationModels.push_back(string("Degr.Mod based local alg1"));

  m_vMandatoryConstrainsModels.clear();
  m_vMandatoryConstrainsModels.push_back(string("Defined by Matrix of MndConstr"));
  m_vMandatoryConstrainsModels.push_back(string("Resource-dependent functional"));
  m_vMandatoryConstrainsModels.push_back(string("Degranation-dependent functional"));
  m_vMandatoryConstrainsModels.push_back(string("No constraints"));

  m_vCbxAlgTypes.clear();
  m_vCbxAlgTypes.push_back(string("Select Algorithm"));
  m_vCbxAlgTypes.push_back(string("Local"));
  m_vCbxAlgTypes.push_back(string("Defenders"));


}

void CLocal_16_96_v1_1Dlg::DoDataExchange(CDataExchange* pDX)
{
  CDialogEx::DoDataExchange(pDX);
  DDX_Control(pDX, IDC_CMB01_TRG_SRC, m_CBxTargSrc);
  DDX_Control(pDX, IDC_CBX08_ALG_TYPE, m_CBxAlgTypeSelector);
  DDX_Control(pDX, IDC_EDIT_DEFENDERS, m_CEditDefenders);
  DDX_Control(pDX, IDC_EDIT_TARGETS, m_CEditTargets);
  DDX_Control(pDX, IDC_EDIT_ASSETS, m_CEditAssets);
  DDX_Control(pDX, IDC_CBX02_RESRC_SRC, m_CBxRescrsInfoSrc);
  DDX_Control(pDX, IDC_CBX03_DEFENDED_ASSTS, m_CBxDefendedAsstsVal);
  DDX_Control(pDX, IDC_CBX04_DEF_DEGRAD_MOD, m_CBxDefndDegradadModel);
  DDX_Control(pDX, IDC_CBX05_DEFND_MANDAT_CONSRNS, m_CBxDefndMandConstrns);
  DDX_Control(pDX, IDC_COMBO77, m_cBxIncompartibilityConstr);
}

BEGIN_MESSAGE_MAP(CLocal_16_96_v1_1Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
  ON_BN_CLICKED(IDC_BTN_START_CALC, &CLocal_16_96_v1_1Dlg::OnBnClickedBtnStartCalc)
END_MESSAGE_MAP()


/**
CLocal_16_96_v1_1Dlg message handlers
and following extra initialization  
*/
BOOL CLocal_16_96_v1_1Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
  // Init CBx Src for targets
  sV::iterator i;

  InitCCBox(m_CBxTargSrc, m_vCbxItems);
  InitCCBox(m_CBxRescrsInfoSrc, m_vCbxItems);
  InitCCBox(m_CBxDefendedAsstsVal, m_vCbxItems);
  InitCCBox(m_CBxDefndDegradadModel, m_vDegradationModels);
  InitCCBox(m_CBxDefndMandConstrns, m_vMandatoryConstrainsModels);
  InitCCBox(m_CBxAlgTypeSelector, m_vCbxAlgTypes);
  m_CBxAlgTypeSelector.SetCurSel(1);//Local//Defenders


 





	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CLocal_16_96_v1_1Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CLocal_16_96_v1_1Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CLocal_16_96_v1_1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


int CLocal_16_96_v1_1Dlg::InitCCBox(CComboBox & cb, sV & v)
{
  sV::iterator i;
  cb.ResetContent();
  for (i = v.begin();i != v.end();i++)
      cb.AddString( _T((const char*) i->c_str()));
  cb.SetCurSel(0);
  cb.UpdateWindow();
  return 0;
}




void CLocal_16_96_v1_1Dlg::OnBnClickedBtnStartCalc()
{
  // Starting point of calculation
  //Identify selected algorithm
  int curSel = m_CBxAlgTypeSelector.GetCurSel();
  TRACE("--------CurSel is -->%s<--\n\n", _T(m_vCbxAlgTypes[curSel].c_str()));
  //Switch to the Selected Alg implementation
  if (1 == curSel)
  {
    AlgLocal1 AL;  //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    AL.Init(); //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    AL.local(); //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    AL.count_eff(AL.MG); //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
  }
  else if (2 == curSel)
  {

    //AlgDefenderRsrcs ALDef;
    m_ALDef.init();
    CString vR(_T("")), vT(_T("")), vA(_T(""));
    this->m_CEditDefenders.UpdateData(1);
    this->m_CEditDefenders.GetWindowTextA(vR);

    this->m_CEditTargets.UpdateData(1);
    this->m_CEditTargets.GetWindowTextA(vT);
    this->m_CEditAssets.UpdateData(1);
    this->m_CEditAssets.GetWindowTextA(vA);

    ostringstream oi;
    oi.str("");
    oi << "\n     12.  **********Start of AlgDefenderRsrcsImplementation() *********\n";
    Log(oi);
    TRACE(_T(oi.str().c_str()));
    oi.str("");

    m_ALDef.AlgDefenderRsrcsImplementation();
    m_ALDef.count_eff(m_ALDef.MG);

  }
}

int CLocal_16_96_v1_1Dlg::Log(ostringstream & o)
{
  CStdioFile fOut;
  char* pFile = "__LOG.TXT";//(char*)path.c_str();
  if (!fOut.Open(pFile, CFile::modeCreate | CFile::modeReadWrite | CFile::modeNoTruncate))
  {
    CString str(_T(""));str.Format("~LOG~File-%s- -can't be opened.  ", pFile);
    ::AfxMessageBox(str); return -8;
  }
  fOut.Seek(0, CFile::end);
  fOut.WriteString(_T(o.str().c_str()));  fOut.Flush(); fOut.Close();
  return 0;
}

