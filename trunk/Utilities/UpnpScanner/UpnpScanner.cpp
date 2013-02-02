////////////////////////////////////////////////////////////
// UpnpScanner.cpp - 
//
// Copyright (C) Alax.Info, 2006-2009
// http://alax.info
//
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#include "stdafx.h"
#include "resource.h"
#include "MainDialog.h"

CAppModule _Module;

INT WINAPI _tWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR, INT)
{
	CSingleThreadedApartment Apartment;
	DefWindowProc(NULL, 0, 0, 0L);
	AtlInitCommonControls(ICC_WIN95_CLASSES);
	_V(_Module.Init(NULL, hInstance));
	CExceptionFilter::Initialize();
	{
#if defined(_DEBUG)
		AtlTraceLoadSettings(NULL);
#endif // defined(_DEBUG)
		CMainDialog Dialog;
		Dialog.DoModal();
	}
	CExceptionFilter::Terminate();
	_Module.Term();
	return 0;
}
