// dtech_cadView.h : interface of the CDtech_cadView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_DTECH_CADVIEW_H__3E8BFC4F_7B6A_4E4A_AD7E_F0D6C99DC2BC__INCLUDED_)
#define AFX_DTECH_CADVIEW_H__3E8BFC4F_7B6A_4E4A_AD7E_F0D6C99DC2BC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CDtech_cadView : public CHtmlView
{
protected: // create from serialization only
	CDtech_cadView();
	DECLARE_DYNCREATE(CDtech_cadView)

// Attributes
public:
	CDtech_cadDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDtech_cadView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate(); // called first time after construct
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CDtech_cadView();
	virtual void CDtech_cadView::OnTitleChange(LPCTSTR lpszText);
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
	//ÉùÃ÷º¯Êý
	//virtual void CDtech_cadView::OnTitleChange(LPCTSTR lpszText);
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CDtech_cadView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in dtech_cadView.cpp
inline CDtech_cadDoc* CDtech_cadView::GetDocument()
   { return (CDtech_cadDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DTECH_CADVIEW_H__3E8BFC4F_7B6A_4E4A_AD7E_F0D6C99DC2BC__INCLUDED_)
