// dtech_cadDoc.h : interface of the CDtech_cadDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_DTECH_CADDOC_H__AA8D61F9_0013_42D6_A145_5863218B1CDB__INCLUDED_)
#define AFX_DTECH_CADDOC_H__AA8D61F9_0013_42D6_A145_5863218B1CDB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CDtech_cadDoc : public CDocument
{
protected: // create from serialization only
	CDtech_cadDoc();
	DECLARE_DYNCREATE(CDtech_cadDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDtech_cadDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CDtech_cadDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CDtech_cadDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DTECH_CADDOC_H__AA8D61F9_0013_42D6_A145_5863218B1CDB__INCLUDED_)
