////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"

BOOL APIENTRY DllMain(HMODULE hModule, DWORD nReason, VOID* pvReserved)
{
	pvReserved;
	TCHAR pszMessage[1024] = { 0 };
	_stprintf_s(pszMessage, _T("GetCurrentProcessId() %d, hModule 0x%p, nReason %d\r\n"), GetCurrentProcessId(), hModule, nReason);
	//MessageBox(NULL /*GetActiveWindow()*/, pszMessage, _T("Debug"), MB_ICONINFORMATION | MB_OK);
	OutputDebugString(pszMessage);
	//switch(nReason)
	//{
	//case DLL_PROCESS_ATTACH:
	//case DLL_THREAD_ATTACH:
	//case DLL_THREAD_DETACH:
	//case DLL_PROCESS_DETACH:
	//	break;
	//}
	return TRUE;
}

