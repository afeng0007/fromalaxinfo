#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	TCHAR pszPath1[MAX_PATH] = { 0 };
	GetModuleFileName(NULL, pszPath1, _countof(pszPath1));
	_tprintf(_T("(%d) %s\n"), _tcslen(pszPath1), pszPath1);
	TCHAR pszPath2[2048] = { 0 };
	GetModuleFileName(NULL, pszPath2, _countof(pszPath2));
	_tprintf(_T("(%d) %s\n"), _tcslen(pszPath2), pszPath2);
	return 0;
}

