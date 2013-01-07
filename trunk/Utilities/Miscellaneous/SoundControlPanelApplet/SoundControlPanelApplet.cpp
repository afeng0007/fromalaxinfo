////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2012-2013
// Created by Roman Ryltsov roman@alax.info

#include "stdafx.h"
#include <commctrl.h>
#include <cpl.h>

#pragma comment(lib, "comctl32.lib")

int _tmain(int argc, _TCHAR* argv[])
{
	INITCOMMONCONTROLSEX Data = { sizeof Data, ICC_WIN95_CLASSES | ICC_STANDARD_CLASSES };
	ATLVERIFY(InitCommonControlsEx(&Data));
	HMODULE hModule = LoadLibrary(_T("mmsys.cpl"));
	typedef LONG (WINAPI *CPLAPPLET)(HWND hwndCPl, UINT uMsg, LPARAM lParam1, LPARAM lParam2);
	CPLAPPLET pCplApplet = (CPLAPPLET) GetProcAddress(hModule, "CPlApplet");
	LONG nResult;
	nResult = pCplApplet(GetActiveWindow(), CPL_INIT, 0, 0);
	if(nResult)
	{
		nResult = pCplApplet(GetActiveWindow(), CPL_GETCOUNT, 0, 0);
		_tprintf(_T("CPL_GETCOUNT: %d applets\n"), nResult);
		const INT nAppletIndex = 0;
		_tprintf(_T("nAppletIndex: %d\n"), nAppletIndex);
		#pragma region CPL_INQUIRE
		CPLINFO Information;
		ZeroMemory(&Information, sizeof Information);
		nResult = pCplApplet(GetActiveWindow(), CPL_INQUIRE, nAppletIndex, (LPARAM) &Information);
		if(!nResult)
			_tprintf(_T("CPL_INQUIRE: .idIcon %d, .idName %d, .idInfo %d, .lData 0x%p\n"), Information.idIcon, Information.idName, Information.idInfo, Information.lData);
		else
			_tprintf(_T("CPL_INQUIRE: %d\n"), nResult);
		#pragma endregion 
		#pragma region CPL_NEWINQUIRE
		NEWCPLINFO NewInformation;
		ZeroMemory(&NewInformation, sizeof NewInformation);
		NewInformation.dwSize = sizeof NewInformation;
		nResult = pCplApplet(GetActiveWindow(), CPL_NEWINQUIRE, nAppletIndex, (LPARAM) &NewInformation);
		if(!nResult)
			_tprintf(_T("CPL_NEWINQUIRE: .dwFlags 0x%x, .szName \"%s\", .szInfo \"%s\"\n"), NewInformation.dwFlags, NewInformation.szName, NewInformation.szInfo);
		else
			_tprintf(_T("CPL_NEWINQUIRE: %d\n"), nResult);
		#pragma endregion
		OSVERSIONINFOEX VersionInformation = { sizeof VersionInformation };
		GetVersionEx((OSVERSIONINFO*) &VersionInformation);
		if(VersionInformation.dwMajorVersion >= 6)
		{
			LPCTSTR g_pszParameters = _T("recording");
			pCplApplet(GetActiveWindow(), CPL_STARTWPARMS, nAppletIndex, (LPARAM) g_pszParameters);
		} else
			pCplApplet(GetActiveWindow(), CPL_DBLCLK, nAppletIndex, 2);
		pCplApplet(GetActiveWindow(), CPL_EXIT, 0, 0);
	} else
		_tprintf(_T("CPL_INIT Failure: %d\n"), nResult);
	return 0;
}

