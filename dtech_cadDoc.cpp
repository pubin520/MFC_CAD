// dtech_cadDoc.cpp : implementation of the CDtech_cadDoc class
//

#include "stdafx.h"
#include "dtech_cad.h"

#include "dtech_cadDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDtech_cadDoc

IMPLEMENT_DYNCREATE(CDtech_cadDoc, CDocument)

BEGIN_MESSAGE_MAP(CDtech_cadDoc, CDocument)
	//{{AFX_MSG_MAP(CDtech_cadDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDtech_cadDoc construction/destruction

CDtech_cadDoc::CDtech_cadDoc()
{
	// TODO: add one-time construction code here

}

CDtech_cadDoc::~CDtech_cadDoc()
{
}

BOOL CDtech_cadDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CDtech_cadDoc serialization

void CDtech_cadDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CDtech_cadDoc diagnostics

#ifdef _DEBUG
void CDtech_cadDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CDtech_cadDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CDtech_cadDoc commands
