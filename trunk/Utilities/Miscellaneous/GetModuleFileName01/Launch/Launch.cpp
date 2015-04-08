#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	static LPCTSTR g_pszPath = _T("\\\\?\\D:\\Projects\\Alax.Info\\Repository-Public\\Utilities\\Miscellaneous\\GetModuleFileName01\\Debug\\123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890\\GetModuleFileName01.exe");
	STARTUPINFO StartupInfo;
	ZeroMemory(&StartupInfo, sizeof StartupInfo);
	StartupInfo.cb = sizeof StartupInfo;
	PROCESS_INFORMATION ProcessInformation;
	BOOL bResult = CreateProcess(g_pszPath, NULL, NULL, NULL, TRUE, 0, NULL, NULL, &StartupInfo, &ProcessInformation);
	if(!bResult)
	{
		_tprintf(_T("Error: %d\n"), GetLastError()); // 122 = ERROR_INSUFFICIENT_BUFFER
		TCHAR pszShortPath[MAX_PATH] = { 0 };
		ATLVERIFY(GetShortPathName(g_pszPath, pszShortPath, _countof(pszShortPath)));
		_tprintf(_T("Short Path: (%d) %s\n"), _tcslen(pszShortPath), pszShortPath);
		bResult = CreateProcess(pszShortPath, NULL, NULL, NULL, TRUE, 0, NULL, NULL, &StartupInfo, &ProcessInformation);
	}
	ATLASSERT(bResult);
	ATLVERIFY(CloseHandle(ProcessInformation.hThread));
	ATLVERIFY(CloseHandle(ProcessInformation.hProcess));
	return 0;
}

/*
Error: 122
Short Path: (90) \\?\D:\Projects\ALAX~1.INF\REPOSI~2\UTILIT~1\MISCEL~1\GETMOD~1\Debug\123456~1\GETMOD~1.EXE
(90) \\?\D:\Projects\ALAX~1.INF\REPOSI~2\UTILIT~1\MISCEL~1\GETMOD~1\Debug\123456~1\GETMOD~1.EXE
(90) \\?\D:\Projects\ALAX~1.INF\REPOSI~2\UTILIT~1\MISCEL~1\GETMOD~1\Debug\123456~1\GETMOD~1.EXE
*/