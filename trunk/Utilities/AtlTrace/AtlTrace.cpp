////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"

class CAtlTrace
{
private:
	LPCSTR m_pszFileName;
	INT m_nLine;
	LPCSTR m_pszSymbol;

	CAtlTrace& __cdecl operator = (const CAtlTrace&);

public:
// CAtlTrace
	CAtlTrace(LPCSTR pszFileName, INT nLine, LPCSTR pszSymbol) : 
		m_pszFileName(pszFileName), 
		m_nLine(nLine),
		m_pszSymbol(pszSymbol)
	{
	}
	VOID Trace(LPCSTR pszFormat, va_list Arguments) const
	{
		CHAR pszText[16 << 10] = { 0 };
		sprintf_s(pszText, "%hs(%d): %hs: ", m_pszFileName, m_nLine, m_pszSymbol);
		LPSTR pszTextPointer = pszText + strlen(pszText);
		vsprintf_s(pszTextPointer, pszText + _countof(pszText) - pszTextPointer, pszFormat, Arguments);
		OutputDebugStringA(pszText);
	}
	VOID Trace(LPCWSTR pszFormat, va_list Arguments) const
	{
		TCHAR pszText[16 << 10] = { 0 };
		swprintf_s(pszText, _T("%hs(%d): %hs: "), m_pszFileName, m_nLine, m_pszSymbol);
		LPTSTR pszTextPointer = pszText + _tcslen(pszText);
		vswprintf_s(pszTextPointer, pszText + _countof(pszText) - pszTextPointer, pszFormat, Arguments);
		//_tcscat_s(pszTextPointer, _T("\n"));
		OutputDebugStringW(pszText);
	}
	VOID __cdecl operator() (LPCSTR pszFormat, ...) const
	{
		va_list Arguments; 
		va_start(Arguments, pszFormat); 
		Trace(pszFormat, Arguments);
		va_end(Arguments);
	}
	VOID __cdecl operator() (LPCWSTR pszFormat, ...) const
	{
		va_list Arguments; 
		va_start(Arguments, pszFormat); 
		Trace(pszFormat, Arguments);
		va_end(Arguments);
	}
	VOID __cdecl operator() (DWORD_PTR nCategory, UINT nLevel, LPCSTR pszFormat, ...) const
	{
		nCategory; nLevel;
		va_list Arguments; 
		va_start(Arguments, pszFormat); 
		Trace(pszFormat, Arguments);
		va_end(Arguments);
	}
	VOID __cdecl operator() (DWORD_PTR nCategory, UINT nLevel, LPCWSTR pszFormat, ...) const
	{
		nCategory; nLevel;
		va_list Arguments; 
		va_start(Arguments, pszFormat); 
		Trace(pszFormat, Arguments);
		va_end(Arguments);
	}
};

#pragma push_macro("ATLTRACE")
#pragma push_macro("ATLTRACE2")

#undef ATLTRACE
#undef ATLTRACE2

#define ATLTRACE2 CAtlTrace(__FILE__, __LINE__, __FUNCTION__)
#define ATLTRACE ATLTRACE2

int _tmain(int argc, _TCHAR* argv[])
{
	// NOTE: See better implementation at
	//       http://www.alax.info/trac/public/browser/trunk/Utilities/Miscellaneous/AtlReleaseTrace

	ATLTRACE("First: %d\n", __LINE__);
	ATLTRACE(L"Second: %d\n", __LINE__);
	ATLTRACE2(atlTraceGeneral, 2, "Third: %d\n", __LINE__);
	ATLTRACE2(atlTraceGeneral, 2, L"Fourth: %d\n", __LINE__);
	return 0;
}

#pragma pop_macro("ATLTRACE2")
#pragma pop_macro("ATLTRACE")
