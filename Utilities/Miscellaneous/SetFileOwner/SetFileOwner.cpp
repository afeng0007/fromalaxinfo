////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include <atlpath.h>
#include <atlsecurity.h>
#include <atlfile.h>

VOID EnablePrivilege(LPCTSTR pszPrivilege)
{
	CAccessToken Token;
	if(!Token.GetThreadToken(TOKEN_QUERY | TOKEN_ADJUST_PRIVILEGES))
	{
		const HRESULT nResult = AtlHresultFromLastError();
		ATLENSURE_THROW(nResult == HRESULT_FROM_WIN32(ERROR_NO_TOKEN), nResult);
		ATLENSURE_THROW(Token.GetProcessToken(TOKEN_QUERY | TOKEN_ADJUST_PRIVILEGES), AtlHresultFromLastError());
	}
	ATLENSURE_THROW(Token.EnablePrivilege(pszPrivilege), AtlHresultFromLastError());
}
VOID PrintOwner(LPCTSTR pszPath)
{
	PSID pSecurityIdentifer = NULL;
	CSecurityDesc SecurityDescriptor;
	ATLENSURE_SUCCEEDED(HRESULT_FROM_WIN32(GetNamedSecurityInfo(const_cast<LPTSTR>(pszPath), SE_FILE_OBJECT, OWNER_SECURITY_INFORMATION, &pSecurityIdentifer, NULL, NULL, NULL, reinterpret_cast<PSECURITY_DESCRIPTOR*>(&SecurityDescriptor))));
	CSid SecurityIdentifer((const SID*) pSecurityIdentifer);
	_tprintf(_T("Owner: %s\\%s\n"), SecurityIdentifer.Domain(), SecurityIdentifer.AccountName());
}
VOID SetOwner(LPCTSTR pszPath, const CSid& SecurityIdentifer)
{
	ATLENSURE_SUCCEEDED(HRESULT_FROM_WIN32(SetNamedSecurityInfo(const_cast<LPTSTR>(pszPath), SE_FILE_OBJECT, OWNER_SECURITY_INFORMATION, const_cast<SID*>((const SID*) SecurityIdentifer), NULL, NULL, NULL)));
}

int _tmain(int argc, _TCHAR* argv[])
{
	static LPCTSTR g_pszPath = _T("D:\\Projects\\Alax.Info\\Repository-Public\\Utilities\\Miscellaneous\\SetFileOwner\\ReadMe.txt");
	EnablePrivilege(SE_RESTORE_NAME);
	PrintOwner(g_pszPath);
	CSid SecurityIdentifer;
	ATLENSURE_THROW(SecurityIdentifer.LoadAccount(_T("Guest")), AtlHresultFromLastError());
	_tprintf(_T("New Owner: %s\\%s\n"), SecurityIdentifer.Domain(), SecurityIdentifer.AccountName());
	_ATLTRY
	{
		SetOwner(g_pszPath, SecurityIdentifer);
	}
	_ATLCATCH(Exception)
	{
		_tprintf(_T("Exception 0x%08x\n"), (HRESULT) Exception);
		// NOTE: This might be the worst case scenario: changing ownership is perhaps protected by DACL
		EnablePrivilege(SE_TAKE_OWNERSHIP_NAME);
		SetOwner(g_pszPath, SecurityIdentifer);
	}
	PrintOwner(g_pszPath);
	return 0;
}

