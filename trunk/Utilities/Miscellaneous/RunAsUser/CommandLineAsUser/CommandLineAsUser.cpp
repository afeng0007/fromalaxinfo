#include "stdafx.h"
#include <atlsecurity.h>

int _tmain(int argc, _TCHAR* argv[])
{
	_ATLTRY
	{
		//CAccessToken ProcessToken;
		//if(!ProcessToken.GetProcessToken(TOKEN_QUERY | TOKEN_ADJUST_PRIVILEGES))
		//	AtlThrowLastWin32();
		//CTokenPrivileges IncreaseQuotaNameTokenPrivileges, AssignPrimaryTokenTokenPrivileges;
		//if(!ProcessToken.EnablePrivilege(SE_INCREASE_QUOTA_NAME, &IncreaseQuotaNameTokenPrivileges))
		//	AtlThrowLastWin32();
		//if(!ProcessToken.EnablePrivilege(SE_ASSIGNPRIMARYTOKEN_NAME, &AssignPrimaryTokenTokenPrivileges))
		//	AtlThrowLastWin32();

		//CAccessToken Token;
		//if(!Token.LogonUser(_T("Test"), _T("."), _T("tset")))
		//	AtlThrowLastWin32();
		////if(!Token.ImpersonateLoggedOnUser())
		////	AtlThrowLastWin32();

		TCHAR pszCurrentDirectory[MAX_PATH] = { 0 };
		GetCurrentDirectory(_countof(pszCurrentDirectory), pszCurrentDirectory);

		STARTUPINFO StartupInformation;
		ZeroMemory(&StartupInformation, sizeof StartupInformation);
		StartupInformation.cb = sizeof StartupInformation;
		PROCESS_INFORMATION ProcessInformation;
		ZeroMemory(&ProcessInformation, sizeof ProcessInformation);

		#define A _T("C:\\Windows\\System32\\cmd.exe")
		//#define A _T("C:\\Windows\\System32\\Taskmgr.exe")

		//if(!CreateProcess(A, NULL, NULL, NULL, FALSE, CREATE_NEW_CONSOLE, NULL, NULL, &StartupInformation, &ProcessInformation))
		//if(!CreateProcessAsUser(Token.GetHandle(), A, NULL, NULL, NULL, FALSE, CREATE_NEW_CONSOLE, NULL, NULL, &StartupInformation, &ProcessInformation))
		//if(!Token.CreateProcessAsUser(A, NULL, &ProcessInformation, &StartupInformation, CREATE_NEW_CONSOLE, TRUE))
		//	AtlThrowLastWin32();

		if(!CreateProcessWithLogonW(_T("Test"), _T("."), _T("tset"), LOGON_WITH_PROFILE, A, NULL, CREATE_NEW_CONSOLE, NULL, pszCurrentDirectory, &StartupInformation, &ProcessInformation))
			AtlThrowLastWin32();

		_tprintf(_T("Process Identifier: %d (0x%04X)\n"), ProcessInformation.dwProcessId, ProcessInformation.dwProcessId);
		_tprintf(_T("Thread Identifier: %d (0x%04X)\n"), ProcessInformation.dwThreadId, ProcessInformation.dwThreadId);
		reinterpret_cast<CHandle&>(ProcessInformation.hThread).Close();
		reinterpret_cast<CHandle&>(ProcessInformation.hProcess).Close();
	}
	_ATLCATCH(Exception)
	{
		_tprintf(_T("Error: 0x%08X\n"), (HRESULT) Exception);
	}
	return 0;
}

