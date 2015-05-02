////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2015
// Created by Roman Ryltsov roman@alax.info
//
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#include "stdafx.h"
//#include "resource.h"
#include "Module.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CModule Module;
	_ATLTRY
	{
		//Module.ParseCommandLineEx(argc, argv);
		Module.WinMain(SW_SHOWNORMAL);
	}
	_ATLCATCH(Exception)
	{
		_Z_ATLEXCEPTION(Exception);
		_tprintf(_T("Fatal Error: 0x%08X\n"), (HRESULT) Exception);
	}
	_ATLCATCHALL()
	{
		_Z_EXCEPTION();
		_tprintf(_T("Fatal Error\n"));
	}
	return 0;
}
