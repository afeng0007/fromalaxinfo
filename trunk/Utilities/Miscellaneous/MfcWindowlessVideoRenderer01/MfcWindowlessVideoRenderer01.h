////////////////////////////////////////////////////////////
// MfcWindowlessVideoRenderer01.h : main header file for the PROJECT_NAME application
//
// Copyright (C) Alax.Info, 2006-2008
// http://alax.info
//
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.
//
// Created by Roman Ryltsov roman@alax.info
// 
// $Id: MfcWindowlessVideoRenderer01.h 14 2008-11-19 09:23:16Z alax $

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols
#include "MfcWindowlessVideoRenderer01_i.h"


// CMyApplication:
// See MfcWindowlessVideoRenderer01.cpp for the implementation of this class
//

class CMyApplication : public CWinAppEx
{
public:
	CMyApplication();

// Overrides
	public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
	BOOL ExitInstance(void);
};

extern CMyApplication theApp;