#include "stdafx.h"
#include <VersionHelpers.h>
#include <atlsecurity.h>
//#include <conio.h>

#define U _T("Roman")
#define P _T("***")

int _tmain(int argc, _TCHAR* argv[])
{
	_ATLTRY
	{
		TCHAR pszUserName[128] = { 0 };
		DWORD nUserNameLength = _countof(pszUserName);
		GetUserName(pszUserName, &nUserNameLength);
		_tprintf(_T("User Name: %s\n"), pszUserName);
		if(_tcsicmp(pszUserName, U) != 0)
		{
			TCHAR pszModuleFileName[MAX_PATH] = { 0 };
			GetModuleFileName(NULL, pszModuleFileName, _countof(pszModuleFileName));
			TCHAR pszCurrentDirectory[MAX_PATH] = { 0 };
			GetCurrentDirectory(_countof(pszCurrentDirectory), pszCurrentDirectory);
			STARTUPINFO StartupInformation;
			ZeroMemory(&StartupInformation, sizeof StartupInformation);
			StartupInformation.cb = sizeof StartupInformation;
			PROCESS_INFORMATION ProcessInformation;
			ZeroMemory(&ProcessInformation, sizeof ProcessInformation);
			if(!CreateProcessWithLogonW(U, _T("."), P, LOGON_WITH_PROFILE, pszModuleFileName, NULL, 0, NULL, pszCurrentDirectory, &StartupInformation, &ProcessInformation))
				AtlThrowLastWin32();
			_tprintf(_T("Process Identifier: %d (0x%04X)\n"), ProcessInformation.dwProcessId, ProcessInformation.dwProcessId);
			WaitForSingleObject(ProcessInformation.hProcess, INFINITE);
			reinterpret_cast<CHandle&>(ProcessInformation.hThread).Close();
			reinterpret_cast<CHandle&>(ProcessInformation.hProcess).Close();
			return 1;
		}

		CAccessToken ProcessToken;
		if(!ProcessToken.GetProcessToken(TOKEN_QUERY | TOKEN_ADJUST_PRIVILEGES))
			AtlThrowLastWin32();
		_tprintf(_T("GetProcessToken Succeeded\n"));

		if(IsWindowsVistaOrGreater())
		{
			TOKEN_ELEVATION TokenElevation;
			DWORD nTokenElevationSize;
			if(!GetTokenInformation(ProcessToken.GetHandle(), TOKEN_INFORMATION_CLASS::TokenElevation, &TokenElevation, sizeof TokenElevation, &nTokenElevationSize))
				AtlThrowLastWin32();
			ATLASSERT(nTokenElevationSize == sizeof TokenElevation);
			_tprintf(_T("Process Token Elevation: %d\n"), TokenElevation.TokenIsElevated);
			if(!TokenElevation.TokenIsElevated)
			{
				TCHAR pszModuleFileName[MAX_PATH] = { 0 };
				GetModuleFileName(NULL, pszModuleFileName, _countof(pszModuleFileName));
				TCHAR pszCurrentDirectory[MAX_PATH] = { 0 };
				GetCurrentDirectory(_countof(pszCurrentDirectory), pszCurrentDirectory);
				SHELLEXECUTEINFO Information;
				ZeroMemory(&Information, sizeof Information);
				Information.cbSize = sizeof Information;
				Information.fMask = SEE_MASK_NOCLOSEPROCESS;  
				Information.lpVerb = _T("runas");
				Information.lpFile = pszModuleFileName;
				Information.nShow = SW_SHOWNORMAL;  
				//Information.lpParameters = ; 
				if(!ShellExecuteEx(&Information))
					AtlThrowLastWin32();
				WaitForSingleObject(Information.hProcess, INFINITE);
				reinterpret_cast<CHandle&>(Information.hProcess).Close();
				return 2;
			}
		}		

		//if(!ProcessToken.EnablePrivilege(SE_DEBUG_NAME))
		//	AtlThrowLastWin32();
		//_tprintf(_T("EnablePrivilege SE_DEBUG_NAME Succeeded\n"));

		//CAccessToken Token;
		//if(!Token.LogonUser(_T("Roman"), _T("."), _T("9692")))
		//	AtlThrowLastWin32();
		//_tprintf(_T("LogonUser Succeeded\n"));
		//if(!Token.ImpersonateLoggedOnUser())
		//	AtlThrowLastWin32();
		//_tprintf(_T("ImpersonateLoggedOnUser Succeeded\n"));
		//TCHAR pszUserName[128] = { 0 };
		//DWORD nUserNameLength = _countof(pszUserName);
		//GetUserName(pszUserName, &nUserNameLength);
		//_tprintf(_T("User Name: %s\n"), pszUserName);

		//MessageBox(GetActiveWindow(), _T("Debug"), _T("Debug"), MB_OK);

		CHandle Process;
		Process.Attach(OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_SET_INFORMATION, FALSE, 9632));
		if(!Process)
			AtlThrowLastWin32();
		DWORD nPriorityClass = GetPriorityClass(Process);
		_tprintf(_T("Priority Class: %d\n"), nPriorityClass);
		nPriorityClass = (nPriorityClass == NORMAL_PRIORITY_CLASS) ? BELOW_NORMAL_PRIORITY_CLASS : NORMAL_PRIORITY_CLASS;
		if(!SetPriorityClass(Process, nPriorityClass))
			AtlThrowLastWin32();
		nPriorityClass = GetPriorityClass(Process);
		_tprintf(_T("Priority Class: %d\n"), nPriorityClass);
	}
	_ATLCATCH(Exception)
	{
		switch((HRESULT) Exception)
		{
		case E_ACCESSDENIED:
			_tprintf(_T("Error: E_ACCESSDENIED (0x%08X)\n"), (HRESULT) Exception);
			break;
		default:
			_tprintf(_T("Error: 0x%08X\n"), (HRESULT) Exception);
		}
	}
	//_tprintf(_T("Type any key to exit...\n"));
	//_gettch();
	return 0;
}

