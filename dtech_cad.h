// dtech_cad.h : main header file for the DTECH_CAD application
//

#if !defined(AFX_DTECH_CAD_H__6284D139_0C21_489A_A00C_234C17CD2FFC__INCLUDED_)
#define AFX_DTECH_CAD_H__6284D139_0C21_489A_A00C_234C17CD2FFC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CDtech_cadApp:
// See dtech_cad.cpp for the implementation of this class
//

class CDtech_cadApp : public CWinApp
{
public:
	CDtech_cadApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDtech_cadApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CDtech_cadApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DTECH_CAD_H__6284D139_0C21_489A_A00C_234C17CD2FFC__INCLUDED_)
