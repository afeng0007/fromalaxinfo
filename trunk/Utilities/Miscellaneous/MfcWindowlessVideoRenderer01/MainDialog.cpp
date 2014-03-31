////////////////////////////////////////////////////////////
// MainDialog.cpp : implementation file
//
// Copyright (C) Alax.Info, 2006-2008
// http://alax.info
//
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.
//
// Created by Roman Ryltsov roman@alax.info
// 
// $Id: MainDialog.cpp 14 2008-11-19 09:23:16Z alax $

#include "stdafx.h"
#include "MfcWindowlessVideoRenderer01.h"
#include "MainDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMainDialog dialog




CMainDialog::CMainDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CMainDialog::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMainDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMainDialog, CDialog)
	//{{AFX_MSG_MAP
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//ON_WM_INITDIALOG()
	ON_WM_DESTROY()
	ON_BN_CLICKED(IDC_START, &CMainDialog::OnBnClickedStart)
	ON_BN_CLICKED(IDC_STOP, &CMainDialog::OnBnClickedStop)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


// CMainDialog message handlers

BOOL CMainDialog::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
	GetDlgItem(IDC_STOP)->EnableWindow(FALSE);

	return TRUE;  // return TRUE  unless you set the focus to a control
}

VOID CMainDialog::OnDestroy()
{
	OnBnClickedStop();
	__super::OnDestroy();
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMainDialog::OnPaint()
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
		CDialog::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMainDialog::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CMainDialog::OnBnClickedStart()
{
	CreateGraph(m_pGraphs[0], IDC_VIDEO1);
	CreateGraph(m_pGraphs[1], IDC_VIDEO2);
	GetDlgItem(IDC_START)->EnableWindow(FALSE);
	GetDlgItem(IDC_STOP)->EnableWindow(TRUE);
}

void CMainDialog::OnBnClickedStop()
{
	GetDlgItem(IDC_STOP)->EnableWindow(FALSE);
	DestroyGraph(m_pGraphs[0]);
	DestroyGraph(m_pGraphs[1]);
	GetDlgItem(IDC_START)->EnableWindow(TRUE);
}

VOID CMainDialog::CreateGraph(CGraph& Graph, INT nControlIdentifier)
{
	CWnd* pWindow = GetDlgItem(nControlIdentifier);
	ASSERT(pWindow);
	ASSERT(!Graph.m_pGraphBuilder);
	CComPtr<IGraphBuilder> pGraphBuilder;
	ATLENSURE_SUCCEEDED(pGraphBuilder.CoCreateInstance(CLSID_FilterGraph));
	CComPtr<IBaseFilter> pBaseFilter;
	ATLENSURE_SUCCEEDED(pBaseFilter.CoCreateInstance(CLSID_VideoMixingRenderer9));
    ATLENSURE_SUCCEEDED(pGraphBuilder->AddFilter(pBaseFilter, NULL));
	CComQIPtr<IVMRFilterConfig9> pVmrFilterConfig9 = pBaseFilter;
	ATLENSURE_THROW(pVmrFilterConfig9, E_NOINTERFACE);
    ATLENSURE_SUCCEEDED(pVmrFilterConfig9->SetRenderingMode(VMR9Mode_Windowless));
	CComQIPtr<IVMRWindowlessControl9> pVmrWindowlessControl9 = pBaseFilter;
	ATLENSURE_THROW(pVmrWindowlessControl9, E_NOINTERFACE);
    ATLENSURE_SUCCEEDED(pVmrWindowlessControl9->SetVideoClippingWindow(pWindow->GetSafeHwnd()));
	CRect Position;
	pWindow->GetClientRect(Position);
	Position.InflateRect(4, 4);
	ATLENSURE_SUCCEEDED(pVmrWindowlessControl9->SetVideoPosition(NULL, Position));
    ATLENSURE_SUCCEEDED(pVmrWindowlessControl9->SetBorderColor(RGB(0x00, 0x00, 0x00)));
	TCHAR pszPath[MAX_PATH] = { 0 };
	ATLVERIFY(GetWindowsDirectory(pszPath, _countof(pszPath)));
	ATLVERIFY(PathCombine(pszPath, pszPath, _T("clock.avi")));
	ATLENSURE_SUCCEEDED(pGraphBuilder->RenderFile(CStringW(pszPath), NULL));
	Graph.m_pGraphBuilder = pGraphBuilder;
	Graph.m_pVmrWindowlessControl9 = pVmrWindowlessControl9;
	TRY
	{
		CComQIPtr<IMediaControl> pMediaControl = pGraphBuilder;
		ATLENSURE_THROW(pMediaControl, E_NOINTERFACE);
		ATLENSURE_SUCCEEDED(pMediaControl->Run());
	}
	CATCH_ALL(pException)
	{
		DestroyGraph(Graph);
		pException->Delete();
	}
	END_CATCH_ALL
}

VOID CMainDialog::DestroyGraph(CGraph& Graph)
{
	CComQIPtr<IMediaControl> pMediaControl = Graph.m_pGraphBuilder;
	if(pMediaControl)
		ATLVERIFY(SUCCEEDED(pMediaControl->Stop()));
	Graph.m_pVmrWindowlessControl9 = NULL;
	Graph.m_pGraphBuilder = NULL;
}

