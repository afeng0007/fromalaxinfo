////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include <atlpath.h>
#include <atlsecurity.h>
#include <atlfile.h>

VOID PrintOwner(LPCTSTR pszPath)
{
	PSID pSecurityIdentifer = NULL;
	ATLENSURE_SUCCEEDED(HRESULT_FROM_WIN32(GetNamedSecurityInfo(const_cast<LPTSTR>(pszPath), SE_FILE_OBJECT, OWNER_SECURITY_INFORMATION, &pSecurityIdentifer, NULL, NULL, NULL, NULL)));
	CSid SecurityIdentifer((const SID*) pSecurityIdentifer);
	_tprintf(_T("Owner: %s\\%s\n"), SecurityIdentifer.Domain(), SecurityIdentifer.AccountName());
}

int _tmain(int argc, _TCHAR* argv[])
{
	#pragma region Enable SeRestorePrivilege
	CAccessToken Token;
	if(!Token.GetThreadToken(TOKEN_QUERY | TOKEN_ADJUST_PRIVILEGES))
	{
		const HRESULT nResult = AtlHresultFromLastError();
		ATLENSURE_THROW(nResult == HRESULT_FROM_WIN32(ERROR_NO_TOKEN), nResult);
		ATLENSURE_THROW(Token.GetProcessToken(TOKEN_QUERY | TOKEN_ADJUST_PRIVILEGES), AtlHresultFromLastError());
	}
	ATLENSURE_THROW(Token.EnablePrivilege(SE_RESTORE_NAME), AtlHresultFromLastError());
	#pragma endregion
	static LPCTSTR g_pszPath = _T("D:\\Projects\\Alax.Info\\Repository-Public\\Utilities\\Miscellaneous\\SetFileOwner\\ReadMe.txt");
	PrintOwner(g_pszPath);
	CSid SecurityIdentifer;
	ATLENSURE_THROW(SecurityIdentifer.LoadAccount(_T("Guest")), AtlHresultFromLastError());
	_tprintf(_T("New Owner: %s\\%s\n"), SecurityIdentifer.Domain(), SecurityIdentifer.AccountName());
	ATLENSURE_SUCCEEDED(HRESULT_FROM_WIN32(SetNamedSecurityInfo(const_cast<LPTSTR>(g_pszPath), SE_FILE_OBJECT, OWNER_SECURITY_INFORMATION, const_cast<SID*>((const SID*) SecurityIdentifer), NULL, NULL, NULL)));
	PrintOwner(g_pszPath);
	return 0;
}

