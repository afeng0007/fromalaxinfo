////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2009
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include <atlsecurity.h>
#include "roatlbase.h"
#include "roatlcom.h"
#include "roatlmisc.h"

inline VOID ATLENSURE_THROW3(BOOL bResult, HRESULT nCode, LPCSTR pszFile, INT nLine)
{
	if(!bResult)
		_tprintf(_T("Warning, %hs(%d): Error 0x%08x\n"), strrchr(pszFile, '\\') + 1, nLine, nCode);
	ATLENSURE_THROW(bResult, nCode);
}

inline VOID ATLENSURE_THROW3(const VOID* pvResult, HRESULT nCode, LPCSTR pszFile, INT nLine)
{
	return ATLENSURE_THROW3(pvResult != NULL, nCode, pszFile, nLine);
}

#define ATLENSURE_THROW2(bResult, nCode) ATLENSURE_THROW3(bResult, nCode, __FILE__, __LINE__)

inline VOID ATLENSURE_SUCCEEDED3(HRESULT nResult, LPCSTR pszFile, INT nLine)
{
	if(FAILED(nResult))
		_tprintf(_T("Warning, %hs(%d): Error 0x%08x\n"), strrchr(pszFile, '\\') + 1, nLine, nResult);
	ATLENSURE_SUCCEEDED(nResult);
}

#define ATLENSURE_SUCCEEDED2(nResult) ATLENSURE_SUCCEEDED3(nResult, __FILE__, __LINE__)

CString StringFromSecurityDescriptor(CSecurityDesc& SecurityDescriptor)
{
	CString sSecurityDescriptorString;
	ATLENSURE_THROW2(SecurityDescriptor.ToString(&sSecurityDescriptorString), HRESULT_FROM_WIN32(GetLastError()));
	return sSecurityDescriptorString;
}

VOID GetRegKeySecurityDescriptor(CRegKey& Key, SECURITY_INFORMATION SecurityInformation, CSecurityDesc& OriginalSecurityDescriptor)
{
	DWORD nOwnerSecurityDescriptorSize = 0;
	Key.GetKeySecurity(SecurityInformation, NULL, &nOwnerSecurityDescriptorSize);
	CTempBuffer<SECURITY_DESCRIPTOR> pOwnerSecurityDescriptor;
	ATLVERIFY(pOwnerSecurityDescriptor.AllocateBytes(nOwnerSecurityDescriptorSize));
	ATLENSURE_SUCCEEDED2(HRESULT_FROM_WIN32(Key.GetKeySecurity(SecurityInformation, pOwnerSecurityDescriptor, &nOwnerSecurityDescriptorSize)));
	OriginalSecurityDescriptor = *pOwnerSecurityDescriptor;
}

CString StringFromRegKeySecurityDescriptor(CRegKey& Key, SECURITY_INFORMATION SecurityInformation)
{
	CSecurityDesc SecurityDescriptor;
	GetRegKeySecurityDescriptor(Key, SecurityInformation, SecurityDescriptor);
	return StringFromSecurityDescriptor(SecurityDescriptor);
}

int _tmain(int argc, _TCHAR* argv[])
{
	_ATLTRY
	{
		_ATLTRY
		{
			CAccessToken AccessToken;
			ATLENSURE_THROW2(AccessToken.GetProcessToken(TOKEN_QUERY | TOKEN_ADJUST_PRIVILEGES), HRESULT_FROM_WIN32(GetLastError()));
			ATLENSURE_THROW2(AccessToken.EnablePrivilege(SE_TAKE_OWNERSHIP_NAME), HRESULT_FROM_WIN32(GetLastError()));
			ATLENSURE_THROW2(AccessToken.EnablePrivilege(SE_RESTORE_NAME), HRESULT_FROM_WIN32(GetLastError()));
		}
		_ATLCATCHALL()
		{
			_tprintf(_T("Warning, could not enable privileges\n"));
		}
		static LPCTSTR g_pszClassIdentifier = _T("{E436EBB2-524F-11CE-9F53-0020AF0BA770}");
		TCHAR pszKeyName[128] = { 0 };
		_stprintf_s(pszKeyName, _T("CLSID\\%s"), g_pszClassIdentifier);
		CRegKey Key;
		ATLENSURE_SUCCEEDED2(HRESULT_FROM_WIN32(Key.Open(HKEY_CLASSES_ROOT, pszKeyName, READ_CONTROL | WRITE_OWNER)));
		CSecurityDesc OriginalSecurityDescriptor;
		// NOTE: 
		//   Windows 5.1: CLSID {E436EBB2-524F-11CE-9F53-0020AF0BA770} Key Owner: O:AB (Administrators)
		//   Windows 6.0: CLSID {E436EBB2-524F-11CE-9F53-0020AF0BA770} Key Owner: O:S-1-5-80-956008885-3418522649-1831038044-1853292631-2271478464 (TrustedInstaller)
		GetRegKeySecurityDescriptor(Key, OWNER_SECURITY_INFORMATION | DACL_SECURITY_INFORMATION, OriginalSecurityDescriptor);
		_tprintf(_T("CLSID %s Key Owner & DACL: %s\n"), g_pszClassIdentifier, StringFromSecurityDescriptor(OriginalSecurityDescriptor));
		//_tprintf(_T("CLSID %s Key Group: %s\n"), g_pszClassIdentifier, StringFromRegKeySecurityDescriptor(Key, GROUP_SECURITY_INFORMATION));
		CSecurityDesc AdministratorsOwnerSecurityDescriptor;
		AdministratorsOwnerSecurityDescriptor.SetOwner(Sids::Admins());
		ATLENSURE_SUCCEEDED2(HRESULT_FROM_WIN32(Key.SetKeySecurity(OWNER_SECURITY_INFORMATION, const_cast<SECURITY_DESCRIPTOR*>((const SECURITY_DESCRIPTOR*) AdministratorsOwnerSecurityDescriptor))));
		_tprintf(_T("Owner: %s\n"), StringFromRegKeySecurityDescriptor(Key, OWNER_SECURITY_INFORMATION));
		ATLENSURE_SUCCEEDED2(HRESULT_FROM_WIN32(Key.Close()));
		ATLENSURE_SUCCEEDED2(HRESULT_FROM_WIN32(Key.Open(HKEY_CLASSES_ROOT, pszKeyName, READ_CONTROL | WRITE_DAC | WRITE_OWNER)));
		CSecurityDesc AccessListSecurityDescriptor = OriginalSecurityDescriptor;
		CDacl AccessList;
		ATLENSURE_THROW2(AccessListSecurityDescriptor.GetDacl(&AccessList), HRESULT_FROM_WIN32(GetLastError()));
		ATLVERIFY(AccessList.AddAllowedAce(Sids::Admins(), GENERIC_ALL, CONTAINER_INHERIT_ACE));
		AccessListSecurityDescriptor.SetDacl(AccessList);
		ATLENSURE_SUCCEEDED2(HRESULT_FROM_WIN32(Key.SetKeySecurity(DACL_SECURITY_INFORMATION, const_cast<SECURITY_DESCRIPTOR*>((const SECURITY_DESCRIPTOR*) AccessListSecurityDescriptor))));
		_tprintf(_T("DACL: %s\n"), StringFromRegKeySecurityDescriptor(Key, DACL_SECURITY_INFORMATION));
#if !defined(_DEBUG)
		MessageBox(NULL, _T("Before SetKeySecurity(OWNER_SECURITY_INFORMATION | DACL_SECURITY_INFORMATION, ...)"), _T("Debug"), MB_OK);
#endif // !defined(_DEBUG);
		ATLENSURE_SUCCEEDED2(HRESULT_FROM_WIN32(Key.SetKeySecurity(OWNER_SECURITY_INFORMATION | DACL_SECURITY_INFORMATION, const_cast<SECURITY_DESCRIPTOR*>((const SECURITY_DESCRIPTOR*) OriginalSecurityDescriptor))));
		_tprintf(_T("Owner & DACL: %s\n"), StringFromRegKeySecurityDescriptor(Key, OWNER_SECURITY_INFORMATION | DACL_SECURITY_INFORMATION));
	}
	_ATLCATCH(Exception)
	{
		_tprintf(_T("Fatal Error 0x%08x (%s)\n"), (HRESULT) Exception, AtlFormatSystemMessage(Exception).TrimRight(_T("\t\n\r .")));
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Fatal Error\n"));
	}
#if !defined(_DEBUG)
	MessageBox(NULL, _T("After Everything"), _T("Debug"), MB_OK);
#endif // !defined(_DEBUG);
	return 0;
}

