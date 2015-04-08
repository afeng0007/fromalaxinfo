#include "stdafx.h"
#include <shlwapi.h>

int _tmain(int argc, _TCHAR* argv[])
{
	TCHAR pszPath[1024] = { 0 };
	ATLVERIFY(GetModuleFileName(NULL, pszPath + 4, _countof(pszPath) - 4));
	ATLVERIFY(PathRemoveFileSpec(pszPath + 4));
	pszPath[0] = _T('\\');
	pszPath[1] = _T('\\');
	pszPath[2] = _T('?');
	pszPath[3] = _T('\\');
	static const LPCTSTR g_pszSubdirectory = _T("123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890");
	_tcscat_s(pszPath, _T("\\"));
	_tcscat_s(pszPath, g_pszSubdirectory);
	_tcscat_s(pszPath, _T("\\"));
	_tcscat_s(pszPath, _T("GetModuleFileName01.exe"));
	_tprintf(_T("Path: (%d) %s\n"), _tcslen(pszPath), pszPath);
	STARTUPINFO StartupInfo;
	ZeroMemory(&StartupInfo, sizeof StartupInfo);
	StartupInfo.cb = sizeof StartupInfo;
	PROCESS_INFORMATION ProcessInformation;
	BOOL bResult = CreateProcess(pszPath, NULL, NULL, NULL, TRUE, 0, NULL, NULL, &StartupInfo, &ProcessInformation);
	if(!bResult)
	{
		const DWORD nLastError = GetLastError();
		_tprintf(_T("Error: %d\n"), nLastError);
		if(nLastError != ERROR_INSUFFICIENT_BUFFER)
			return 1;
		TCHAR pszShortPath[MAX_PATH] = { 0 };
		ATLVERIFY(GetShortPathName(pszPath, pszShortPath, _countof(pszShortPath)));
		_tprintf(_T("Short Path: (%d) %s\n"), _tcslen(pszShortPath), pszShortPath);
		bResult = CreateProcess(pszShortPath, NULL, NULL, NULL, TRUE, 0, NULL, NULL, &StartupInfo, &ProcessInformation);
	}
	ATLASSERT(bResult);
	ATLVERIFY(CloseHandle(ProcessInformation.hThread));
	ATLVERIFY(CloseHandle(ProcessInformation.hProcess));
	return 0;
}

/*

Win32:

Path: (279) \\?\D:\Projects\Alax.Info\Repository-Public\Utilities\Miscellaneous\GetModuleFileName01\_Bin\Win32\Debug\123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890\GetModuleFileName01.exe
Error: 122
Short Path: (101) \\?\D:\Projects\ALAX~1.INF\REPOSI~2\UTILIT~1\MISCEL~1\GETMOD~1\_Bin\Win32\Debug\123456~1\GETMOD~1.EXE
(101) \\?\D:\Projects\ALAX~1.INF\REPOSI~2\UTILIT~1\MISCEL~1\GETMOD~1\_Bin\Win32\Debug\123456~1\GETMOD~1.EXE
(101) \\?\D:\Projects\ALAX~1.INF\REPOSI~2\UTILIT~1\MISCEL~1\GETMOD~1\_Bin\Win32\Debug\123456~1\GETMOD~1.EXE

x64:

Path: (277) \\?\D:\Projects\Alax.Info\Repository-Public\Utilities\Miscellaneous\GetModuleFileName01\_Bin\x64\Debug\123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890\GetModuleFileName01.exe
(259) \\?\D:\Projects\Alax.Info\Repository-Public\Utilities\Miscellaneous\GetModuleFileName01\_Bin\x64\Debug\123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890\GetMo
(277) \\?\D:\Projects\Alax.Info\Repository-Public\Utilities\Miscellaneous\GetModuleFileName01\_Bin\x64\Debug\123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890\GetModuleFileName01.exe

*/