////////////////////////////////////////////////////////////
// Copyright (C) Alax.Info, 2006-2015
// http://alax.info
//
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.
// 
// Created by Roman Ryltsov roman@alax.info

#include "stdafx.h"
#include <atlframe.h>
#include <atlctrls.h>
#include <atldlgs.h>
#include "resource.h"
#include "MainDialog.h"

CAppModule _Module;

INT WINAPI _tWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR, INT)
{
	//AtlTraceLoadSettings(NULL);
	ATLVERIFY(SUCCEEDED(CoInitialize(NULL)));
	DefWindowProc(NULL, 0, 0, 0);
	AtlInitCommonControls(ICC_BAR_CLASSES);	// add flags to support other controls
	ATLVERIFY(SUCCEEDED(_Module.Init(NULL, hInstance)));
	CMainDialog Dialog;
	Dialog.DoModal();
	_Module.Term();
	CoUninitialize();
	return 0;
}
