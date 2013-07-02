////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2013
// Created by Roman Ryltsov roman@alax.info

#include "stdafx.h"
#include "rodshow.h"

////////////////////////////////////////////////////////////
// CModule

class CModule : 
	public CAtlExeModuleT<CModule>
{
public:
	CPath m_sPath;
	CRoArrayT<CStringA> m_FilterArray;
	BOOL m_bFullFile;
	BOOL m_bIgnoreCase;

public:
// CModule
	CModule() throw()
	{
		AtlTraceSetDefaultSettings();
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		m_bFullFile = FALSE;
		m_bIgnoreCase = FALSE;
	}
	~CModule() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	HRESULT PreMessageLoop(INT nShowCommand)
	{
		__C(__super::PreMessageLoop(nShowCommand));
		return S_OK;
	}
	VOID RunMessageLoop()
	{
		#pragma region Input Validation and Syntax
		if(!_tcslen(m_sPath) || m_FilterArray.IsEmpty())
		{
			_tprintf(_T("Syntax: CheckLog <options> <log-path> <filter-1> [<filter-2> ...]\n"));
			_tprintf(_T("  /f - full file check, not from current position\n"));
			_tprintf(_T("  /i - ignore case\n"));
			AtlThrow(S_FALSE);
		}
		#pragma endregion 
		_tprintf(_T("Path: %s\n"), m_sPath);
		CAtlFile File;
		__C(File.Create(m_sPath, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, OPEN_EXISTING));
		if(!m_bFullFile)
			__C(File.Seek(0, FILE_END));
		ULONGLONG nPosition;
		__C(File.GetPosition(nPosition));
		_tprintf(_T("File Position: %I64d\n"), nPosition);
		_tprintf(_T("Filter: %d items\n"), m_FilterArray.GetCount());
		for(SIZE_T nIndex = 0; nIndex < m_FilterArray.GetCount(); nIndex++)
			_tprintf(_T("\t") _T("%hs\n"), m_FilterArray[nIndex]);
		_tprintf(_T("\n"), m_sPath);
		// SUGG: Implement Console Control Handler
		static const SIZE_T g_nDataCapacity = 64 << 10; // 64 KB
		CHeapPtr<CHAR> pszData;
		__D(pszData.Allocate(g_nDataCapacity + 1), E_OUTOFMEMORY);
		SIZE_T nDataSize = 0;
		BOOL bWaitUpdate = FALSE;
		for(; ; )
		{
			// SUGG: Read Directory Changes
			if(bWaitUpdate)
				Sleep(1000);
			bWaitUpdate = TRUE;
			const SIZE_T nLockSize = g_nDataCapacity - nDataSize;
			const HRESULT nLockRangeResult = File.LockRange(nPosition, nLockSize);
			_Z45_HRESULT(nLockRangeResult);
			if(FAILED(nLockRangeResult))
				continue;
			DWORD nReadDataSize = 0;
			_ATLTRY
			{
				__C(File.Read(pszData + nDataSize, (DWORD) nLockSize, nReadDataSize));
			}
			_ATLCATCHALL()
			{
				_V(File.UnlockRange(nPosition, nLockSize));
				_ATLRETHROW;
			}
			__C(File.UnlockRange(nPosition, nLockSize));
			if(!nReadDataSize)
				continue;
			bWaitUpdate = FALSE;
			nDataSize += nReadDataSize;
			nPosition += nReadDataSize;
			pszData[nDataSize] = 0;
			LPSTR pszDataPointer = pszData;
			for(; ; )
			{
				LPSTR pszSeparator = strchr(pszDataPointer, '\n');
				if(!pszSeparator)
					break;
				*pszSeparator = 0;
				if(pszSeparator > pszDataPointer && pszSeparator[-1] == '\r')
					pszSeparator[-1] = 0;
				BOOL bFound = FALSE;
				for(SIZE_T nIndex = 0; nIndex < m_FilterArray.GetCount(); nIndex++)
				{
					LPSTR pszLocation = m_bIgnoreCase ? StrStrIA(pszDataPointer, m_FilterArray[nIndex]) : strstr(pszDataPointer, m_FilterArray[nIndex]);
					if(pszLocation)
					{
						bFound = TRUE;
						break;
					}
				}
				if(bFound)
					_tprintf(_T("%hs\n"), pszDataPointer);
				pszDataPointer = pszSeparator + 1;
			}
			_A(pszDataPointer >= pszData);
			if(pszDataPointer <= pszData)
				continue;
			_A(pszDataPointer <= pszData + g_nDataCapacity);
			nDataSize = pszData + nDataSize - pszDataPointer;
			memmove(pszData, pszDataPointer, nDataSize);
		}
	}
};

////////////////////////////////////////////////////////////
// Main

int _tmain(int argc, _TCHAR* argv[])
{
	_ATLTRY
	{
		CModule Module;
		#pragma region Parse Command Line
		for(INT nIndex = 1; nIndex < argc; nIndex++)
		{
			CString sArgument = argv[nIndex];
			_A(!sArgument.IsEmpty());
			#pragma region Switches
			if(_tcschr(_T("-/"), sArgument[0]))
			{
				sArgument.Delete(0);
				#pragma region Switch Value/Specification
				CString sArgumentValue;
				if(sArgument.GetLength() > 1)
				{
					SIZE_T nIndex = 1;
					if(sArgument[1] == _T(':'))
						nIndex++;
					sArgumentValue = (LPCTSTR) sArgument + nIndex;
				}
				INT nIntegerArgumentValue = 0;
				const BOOL bIntegerArgumentValueValid = !sArgumentValue.IsEmpty() ? AtlStringToInteger(sArgumentValue, nIntegerArgumentValue) : FALSE;
				#pragma endregion
				//if(_tcschr(_T("Ff"), sArgument[0])) // Full File
				//{
				//	//__D(bIntegerArgumentValueValid, E_INVALIDARG);
				//	//_tprintf(_T("Option: Sample Rate, %d\n"), nIntegerArgumentValue);
				//	Module.m_bFullFile = TRUE;
				//} else
				if(_tcschr(_T("Ff"), sArgument[0])) // Full File
				{
					Module.m_bFullFile = TRUE;
				} else
				if(_tcschr(_T("Ii"), sArgument[0])) // Ignore Case
				{
					Module.m_bIgnoreCase = TRUE;
				}
				continue;
			}
			#pragma endregion 
			if(sArgument.GetLength() >= 2 && sArgument[0] == _T('"') && sArgument[sArgument.GetLength() - 1] == _T('"'))
				sArgument = sArgument.Mid(1, sArgument.GetLength() - 2);
			if(!_tcslen(Module.m_sPath))
				Module.m_sPath = (LPCTSTR) sArgument;
			else
				_W(Module.m_FilterArray.Add(CStringA(sArgument)) >= 0);
		}
		#pragma endregion
		Module.WinMain(SW_SHOWNORMAL);
	}
	_ATLCATCH(Exception)
	{
		if(FAILED((HRESULT) Exception))
			_tprintf(_T("Error 0x%08X: %s\n"), (HRESULT) Exception, AtlFormatSystemMessage(Exception).TrimRight(_T("\t\n\r .")));
		return (INT) (HRESULT) Exception;
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Fatal Error\n"));
		return (INT) E_FAIL;
	}
	return 0;
}
