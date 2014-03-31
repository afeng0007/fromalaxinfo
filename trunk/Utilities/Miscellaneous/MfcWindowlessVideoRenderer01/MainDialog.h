////////////////////////////////////////////////////////////
// MainDialog.h : header file
//
// Copyright (C) Alax.Info, 2006-2008
// http://alax.info
//
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.
//
// Created by Roman Ryltsov roman@alax.info
// 
// $Id: MainDialog.h 14 2008-11-19 09:23:16Z alax $

#pragma once

#include <dshow.h>
#include <d3d9.h>
#include <vmr9.h>

#pragma comment(lib, "strmiids.lib")

// CMainDialog dialog
class CMainDialog : public CDialog
{
// Construction
public:
	CMainDialog(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_MFCWINDOWLESSVIDEORENDERER01_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

// Implementation
public:

	class CGraph
	{
	public:
		CComPtr<IGraphBuilder> m_pGraphBuilder;
		CComPtr<IVMRWindowlessControl9> m_pVmrWindowlessControl9;

	public:
	// CGraph
	};

protected:
	HICON m_hIcon;
	CGraph m_pGraphs[2];

	// Generated message map functions
	afx_msg BOOL OnInitDialog();
	afx_msg VOID OnDestroy();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnBnClickedStart();
	afx_msg void OnBnClickedStop();

DECLARE_MESSAGE_MAP()

public:
	VOID CreateGraph(CGraph& Graph, INT nControlIdentifier);
	VOID DestroyGraph(CGraph& Graph);
};
