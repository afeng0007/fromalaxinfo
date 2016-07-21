////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2016
// Created by Roman Ryltsov roman@alax.info
//
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#include "stdafx.h"
#include "resource.h"
#include "Module.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CModule Module;
	_ATLTRY
	{
		Module.WinMain(SW_SHOWNORMAL);
	}
	_ATLCATCH(Exception)
	{
		_Z_ATLEXCEPTION(Exception);
		CString sMessage = AtlFormatSystemMessage(Exception);
		if(sMessage.IsEmpty())
			sMessage = AtlFormatString(_T("Error 0x%08X"), (HRESULT) Exception);
		sMessage.TrimRight(_T("\t\n\r ."));
		_tprintf(_T("Fatal Error: %s\n"), (LPCTSTR) sMessage);
		_A((HRESULT) Exception != S_OK);
		return (HRESULT) Exception;
	}
	_ATLCATCHALL()
	{
		_Z_EXCEPTION();
		_tprintf(_T("Fatal Error\n"));
		return -1;
	}
	return 0;
}

