
// Local_16_96_v1_1.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CLocal_16_96_v1_1App:
// See Local_16_96_v1_1.cpp for the implementation of this class
//

class CLocal_16_96_v1_1App : public CWinApp
{
public:
	CLocal_16_96_v1_1App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CLocal_16_96_v1_1App theApp;