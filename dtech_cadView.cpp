// dtech_cadView.cpp : implementation of the CDtech_cadView class
//

#include "stdafx.h"
#include "dtech_cad.h"

#include "dtech_cadDoc.h"
#include "dtech_cadView.h"
#include <wininet.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <shellapi.h>
#pragma comment(lib, "wininet.lib")
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


/////////////////////////////////////////////////////////////////////////////
// CDtech_cadView

IMPLEMENT_DYNCREATE(CDtech_cadView, CHtmlView)

BEGIN_MESSAGE_MAP(CDtech_cadView, CHtmlView)
	//{{AFX_MSG_MAP(CDtech_cadView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDtech_cadView construction/destruction

CDtech_cadView::CDtech_cadView()
{
	// TODO: add construction code here

}

CDtech_cadView::~CDtech_cadView()
{
}

BOOL CDtech_cadView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CHtmlView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CDtech_cadView drawing

void CDtech_cadView::OnDraw(CDC* pDC)
{
	CDtech_cadDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}
//重载OnTitleChange设置文档标题
void CDtech_cadView::OnTitleChange(LPCTSTR lpszText)
{
 // TODO: Add your specialized code here and/or call the base class
 if (m_pDocument != NULL)
  m_pDocument->SetTitle(lpszText);
// CHtmlView::OnTitleChange(lpszText);
}
void CDtech_cadView::OnInitialUpdate()
{
	CHtmlView::OnInitialUpdate();
	//获取命令行参数
	char path[256];//本软件exe所在目录
	char *ptr;
	if(__argc>1){
		CString url_temp=__argv[1];
		CString url=""; //url
		CString sid=""; //sid
		AfxExtractSubString(url, (LPCTSTR)url_temp, 0, ';');
		AfxExtractSubString(sid, (LPCTSTR)url_temp, 1, ';');
		char *sub=strchr(url,'/')+2;
		if(strlen(sub)>0 && strlen(sid)){
			InternetSetCookie(sub, "sid", sid);
		//ShellExecute(NULL, (LPCWSTR)L"open", (LPCWSTR)L"iexplore", (LPCWSTR)L"E:/work/testShow.jpg", NULL, SW_SHOWNORMAL);
		//	ShellExecute(NULL,L"open",L"notepad.exe",  L"c:\\MyLog.log", NULL, SW_SHOW );
			Navigate2(_T(sub),NULL,NULL);//显示参数路径
		}else{
			GetModuleFileName(NULL,path,256);	
			ptr=strrchr(path, '\\');
			path[ptr-path]=0;
			strcat(path,"/help.html");
			Navigate2(path,NULL,NULL);
		}
	}else{
		//如无参数，则显示帮助文档help.html
		GetModuleFileName(NULL,path,256);	
		ptr=strrchr(path, '\\');
		path[ptr-path]=0;//截断，只留exe所在路径
		strcat(path,"/help.html");	
		Navigate2(path,NULL,NULL);//显示帮助信息
	}
}

/////////////////////////////////////////////////////////////////////////////
// CDtech_cadView diagnostics

#ifdef _DEBUG
void CDtech_cadView::AssertValid() const
{
	CHtmlView::AssertValid();
}

void CDtech_cadView::Dump(CDumpContext& dc) const
{
	CHtmlView::Dump(dc);
}

CDtech_cadDoc* CDtech_cadView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDtech_cadDoc)));
	return (CDtech_cadDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CDtech_cadView message handlers
