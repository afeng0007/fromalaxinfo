////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2009
// Created by Roman Ryltsov roman@alax.info
// 
// $Id: ConstantSpecialItems.cpp 144 2009-06-21 10:58:12Z alax $

#include "stdafx.h"
#include <windows.h>
#include <shlobj.h>

int _tmain(int argc, _TCHAR* argv[])
{
	OSVERSIONINFOEX VersionInformation = { sizeof VersionInformation };
	ATLVERIFY(GetVersionEx((OSVERSIONINFO*) &VersionInformation));
	_tprintf(_T("Windows version %d.%d, Build %d\n"), VersionInformation.dwMajorVersion, VersionInformation.dwMinorVersion, VersionInformation.dwBuildNumber);
	_tprintf(_T("\n"));
	static const struct
	{
		INT nIdentifier;
		LPCTSTR pszName;
	} g_pMap[] = 
	{
		{ CSIDL_DESKTOP, _T("CSIDL_DESKTOP"), },
		{ CSIDL_INTERNET, _T("CSIDL_INTERNET"), },
		{ CSIDL_PROGRAMS, _T("CSIDL_PROGRAMS"), },
		{ CSIDL_CONTROLS, _T("CSIDL_CONTROLS"), },
		{ CSIDL_PRINTERS, _T("CSIDL_PRINTERS"), },
		{ CSIDL_PERSONAL, _T("CSIDL_PERSONAL"), },
		{ CSIDL_FAVORITES, _T("CSIDL_FAVORITES"), },
		{ CSIDL_STARTUP, _T("CSIDL_STARTUP"), },
		{ CSIDL_RECENT, _T("CSIDL_RECENT"), },
		{ CSIDL_SENDTO, _T("CSIDL_SENDTO"), },
		{ CSIDL_BITBUCKET, _T("CSIDL_BITBUCKET"), },
		{ CSIDL_STARTMENU, _T("CSIDL_STARTMENU"), },
		{ CSIDL_MYDOCUMENTS, _T("CSIDL_MYDOCUMENTS"), },
		{ CSIDL_MYMUSIC, _T("CSIDL_MYMUSIC"), },
		{ CSIDL_MYVIDEO, _T("CSIDL_MYVIDEO"), },
		{ CSIDL_DESKTOPDIRECTORY, _T("CSIDL_DESKTOPDIRECTORY"), },
		{ CSIDL_DRIVES, _T("CSIDL_DRIVES"), },
		{ CSIDL_NETWORK, _T("CSIDL_NETWORK"), },
		{ CSIDL_NETHOOD, _T("CSIDL_NETHOOD"), },
		{ CSIDL_FONTS, _T("CSIDL_FONTS"), },
		{ CSIDL_TEMPLATES, _T("CSIDL_TEMPLATES"), },
		{ CSIDL_COMMON_STARTMENU, _T("CSIDL_COMMON_STARTMENU"), },
		{ CSIDL_COMMON_PROGRAMS, _T("CSIDL_COMMON_PROGRAMS"), },
		{ CSIDL_COMMON_STARTUP, _T("CSIDL_COMMON_STARTUP"), },
		{ CSIDL_COMMON_DESKTOPDIRECTORY, _T("CSIDL_COMMON_DESKTOPDIRECTORY"), },
		{ CSIDL_APPDATA, _T("CSIDL_APPDATA"), },
		{ CSIDL_PRINTHOOD, _T("CSIDL_PRINTHOOD"), },
		{ CSIDL_LOCAL_APPDATA, _T("CSIDL_LOCAL_APPDATA"), },
		{ CSIDL_ALTSTARTUP, _T("CSIDL_ALTSTARTUP"), },
		{ CSIDL_COMMON_ALTSTARTUP, _T("CSIDL_COMMON_ALTSTARTUP"), },
		{ CSIDL_COMMON_FAVORITES, _T("CSIDL_COMMON_FAVORITES"), },
		{ CSIDL_INTERNET_CACHE, _T("CSIDL_INTERNET_CACHE"), },
		{ CSIDL_COOKIES, _T("CSIDL_COOKIES"), },
		{ CSIDL_HISTORY, _T("CSIDL_HISTORY"), },
		{ CSIDL_COMMON_APPDATA, _T("CSIDL_COMMON_APPDATA"), },
		{ CSIDL_WINDOWS, _T("CSIDL_WINDOWS"), },
		{ CSIDL_SYSTEM, _T("CSIDL_SYSTEM"), },
		{ CSIDL_PROGRAM_FILES, _T("CSIDL_PROGRAM_FILES"), },
		{ CSIDL_MYPICTURES, _T("CSIDL_MYPICTURES"), },
		{ CSIDL_PROFILE, _T("CSIDL_PROFILE"), },
		{ CSIDL_SYSTEMX86, _T("CSIDL_SYSTEMX86"), },
		{ CSIDL_PROGRAM_FILESX86, _T("CSIDL_PROGRAM_FILESX86"), },
		{ CSIDL_PROGRAM_FILES_COMMON, _T("CSIDL_PROGRAM_FILES_COMMON"), },
		{ CSIDL_PROGRAM_FILES_COMMONX86, _T("CSIDL_PROGRAM_FILES_COMMONX86"), },
		{ CSIDL_COMMON_TEMPLATES, _T("CSIDL_COMMON_TEMPLATES"), },
		{ CSIDL_COMMON_DOCUMENTS, _T("CSIDL_COMMON_DOCUMENTS"), },
		{ CSIDL_COMMON_ADMINTOOLS, _T("CSIDL_COMMON_ADMINTOOLS"), },
		{ CSIDL_ADMINTOOLS, _T("CSIDL_ADMINTOOLS"), },
		{ CSIDL_CONNECTIONS, _T("CSIDL_CONNECTIONS"), },
		{ CSIDL_COMMON_MUSIC, _T("CSIDL_COMMON_MUSIC"), },
		{ CSIDL_COMMON_PICTURES, _T("CSIDL_COMMON_PICTURES"), },
		{ CSIDL_COMMON_VIDEO, _T("CSIDL_COMMON_VIDEO"), },
		{ CSIDL_RESOURCES, _T("CSIDL_RESOURCES"), },
		{ CSIDL_RESOURCES_LOCALIZED, _T("CSIDL_RESOURCES_LOCALIZED"), },
		{ CSIDL_COMMON_OEM_LINKS, _T("CSIDL_COMMON_OEM_LINKS"), },
		{ CSIDL_CDBURN_AREA, _T("CSIDL_CDBURN_AREA"), },
		{ CSIDL_COMPUTERSNEARME, _T("CSIDL_COMPUTERSNEARME"), },
	};
	_tprintf(_T("CSIDL paths:\n"));
	for(SIZE_T nIndex = 0; nIndex < _countof(g_pMap); nIndex++)
	{
		TCHAR pszPath[MAX_PATH] = { 0 };
		if(SHGetSpecialFolderPath(NULL, pszPath, g_pMap[nIndex].nIdentifier, FALSE))
			_tprintf(_T("%s: %s\n"), g_pMap[nIndex].pszName, pszPath);
		else
			_tprintf(_T("%s not found\n"), g_pMap[nIndex].pszName);
	}
	_tprintf(_T("\n"));
	return 0;
}

