////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2013
// Created by Roman Ryltsov roman@alax.info
// 
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#include "stdafx.h"

VOID ProcessKey(LPCTSTR pszClassKeyName)
{
	_ATLTRY
	{
		CRegKey ClassKey;
		__C(HRESULT_FROM_WIN32(ClassKey.Open(HKEY_CLASSES_ROOT, pszClassKeyName, KEY_READ)));
		DWORD nIndex, nFoundCount = 0;
		for(nIndex = 0; ; nIndex++)
		{
			TCHAR pszName[1024] = { 0 };
			DWORD nNameLength = DIM(pszName);
			const HRESULT nResult = HRESULT_FROM_WIN32(ClassKey.EnumKey(nIndex, pszName, &nNameLength));
			if(FAILED(nResult))
			{
				_A(nResult == HRESULT_FROM_WIN32(ERROR_NO_MORE_ITEMS));
				break; // Done
			}
			CRegKey TreatAsKey;
			if(FAILED(HRESULT_FROM_WIN32(TreatAsKey.Open(ClassKey, AtlFormatString(_T("%s\\TreatAs"), pszName), KEY_READ))))
				continue; // No TreatAs
			CString sClassIdentifier = pszName;
			CString sClassDescription = _RegKeyHelper::QueryStringValue((HKEY) ClassKey, pszName);
			CString sTreatAsKeyClassIdentifier = _RegKeyHelper::QueryStringValue(TreatAsKey);
			CString sTreatAsKeyClassDescription;
			CRegKey TreatAsClassKey;
			if(SUCCEEDED(HRESULT_FROM_WIN32(TreatAsClassKey.Open(HKEY_CLASSES_ROOT, AtlFormatString(_T("%s\\%s"), pszClassKeyName, sTreatAsKeyClassIdentifier), KEY_READ))))
				sTreatAsKeyClassDescription = _RegKeyHelper::QueryStringValue((HKEY) ClassKey, sTreatAsKeyClassIdentifier);
			_tprintf(_StringHelper::Join<CString>(4, _T("\t"), 
				sClassIdentifier,
				sClassDescription,
				sTreatAsKeyClassIdentifier,
				sTreatAsKeyClassDescription,
				0) + _T("\n"));
			nFoundCount++;
		}
		_tprintf(_T("Processed %d keys, %d TreatAs items found\n"), nIndex, nFoundCount);
	}
	_ATLCATCH(Exception)
	{
		_tprintf(_T("Exception: 0x%08x %s\n"), (HRESULT) Exception, AtlFormatSystemMessage(Exception).TrimRight(_T("\t\n\r .")));
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	_tprintf(_T("Enumerating CLSID class identifiers...\n"));
	ProcessKey(_T("CLSID"));
	#if defined(_WIN64)
		_tprintf(_T("Enumerating WOW64 CLSID class identifiers...\n"));
		ProcessKey(_T("Wow6432Node\\CLSID"));
	#endif // defined(_WIN64)
	return 0;
}

