////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2006-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$
//
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#pragma once

#include <atlcoll.h>
#include <atlapp.h>
#include "roatlbase.h"

////////////////////////////////////////////////////////////
// CWtlExeModuleBase

class CWtlExeModuleBase;

__declspec(selectany) CWtlExeModuleBase* _pWtlExeModule = NULL;

#define _WtlExeModule	(*_pWtlExeModule)

class CWtlExeModuleBase
{
public:

	////////////////////////////////////////////////////////
	// CMessageLoopMap

	typedef CAtlMap<DWORD, CMessageLoop*> CMessageLoopMap;

private:
	CMessageLoopMap m_MessageLoopMap;

public:
// CWtlExeModuleBase
	VOID AddMessageLoop(CMessageLoop* pMessageLoop, DWORD nThreadIdentifier = GetCurrentThreadId())
	{
		ATLASSERT(pMessageLoop);
		ATLASSERT(!m_MessageLoopMap.Lookup(nThreadIdentifier));
		ATLVERIFY(m_MessageLoopMap.SetAt(nThreadIdentifier, pMessageLoop));
	}
	BOOL RemoveMessageLoop(DWORD nThreadIdentifier = GetCurrentThreadId()) throw()
	{
		POSITION Position = m_MessageLoopMap.Lookup(nThreadIdentifier);
		if(!Position)
			return FALSE;
		m_MessageLoopMap.RemoveAtPos(Position);
		return TRUE;
	}
	CMessageLoop* GetMessageLoop(DWORD nThreadIdentifier = GetCurrentThreadId()) const throw()
	{
		const CMessageLoopMap::CPair* pMessageLoopMapPair = m_MessageLoopMap.Lookup(nThreadIdentifier);
		return pMessageLoopMapPair ? pMessageLoopMapPair->m_value : NULL;
	}
};

////////////////////////////////////////////////////////////
// CWtlExeModuleT

template <typename T>
class CWtlExeModuleT :
	public CWtlExeModuleBase
{
public:
// CWtlExeModuleT
	CWtlExeModuleT() throw()
	{
		ATLASSERT(!_pWtlExeModule);
		_pWtlExeModule = this;
	}
};

////////////////////////////////////////////////////////////
// CModuleResourceInstanceNoCompaibility

class CModuleResourceInstanceNoCompaibility
{
public:
// CModuleResourceInstanceNoCompaibility
	static BOOL CheckResourceModuleCompatibility(HINSTANCE hModuleInstance, HINSTANCE hResourceInstance) throw()
	{
		hModuleInstance;
		hResourceInstance;
		return TRUE;
	}
};

////////////////////////////////////////////////////////////
// CModuleResourceInstanceFileVersionCompaibility

class CModuleResourceInstanceFileVersionCompaibility
{
public:
// CModuleResourceInstanceFileVersionCompaibility
	BOOL CheckResourceModuleCompatibility(HINSTANCE hModuleInstance, HINSTANCE hResourceInstance) throw()
	{
		_ATLTRY
		{
			_A(hModuleInstance && hResourceInstance);
			ULONGLONG nModuleFileVersion = _VersionInfoHelper::GetFileVersion(_VersionInfoHelper::GetModulePath(hModuleInstance));
			ULONGLONG nResourceFileVersion = _VersionInfoHelper::GetFileVersion(_VersionInfoHelper::GetModulePath(hResourceInstance));
			if(nModuleFileVersion != nResourceFileVersion)
				return FALSE;
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
			return FALSE;
		}
		return TRUE;
	}
};

////////////////////////////////////////////////////////////
// CModuleResourceInstanceProductVersionCompaibility

class CModuleResourceInstanceProductVersionCompaibility
{
public:
// CModuleResourceInstanceProductVersionCompaibility
	BOOL CheckResourceModuleCompatibility(HINSTANCE hModuleInstance, HINSTANCE hResourceInstance) throw()
	{
		_ATLTRY
		{
			_A(hModuleInstance && hResourceInstance);
			ULONGLONG nModuleProductVersion = _VersionInfoHelper::GetProductVersion(_VersionInfoHelper::GetModulePath(hModuleInstance));
			ULONGLONG nResourceProductVersion = _VersionInfoHelper::GetProductVersion(_VersionInfoHelper::GetModulePath(hResourceInstance));
			if(nModuleProductVersion != nResourceProductVersion)
				return FALSE;
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
			return FALSE;
		}
		return TRUE;
	}
};

////////////////////////////////////////////////////////////
// CModuleResourceInstanceT

template <typename T, typename _Compatibility = CModuleResourceInstanceNoCompaibility>
class CModuleResourceInstanceT :
	protected _Compatibility
{
private:
	HMODULE m_hResourceModule;

public:
// CModuleResourceInstanceT
#if defined(REGISTRY_ROOT)
	static LPCTSTR GetResourceInstanceRegistryKeyName() throw()
	{
		return REGISTRY_ROOT _T("\\Locale");
	}
#endif // defined(REGISTRY_ROOT)
	static CString GetResourceInstanceRegistryValueName(HINSTANCE hModuleInstance)
	{
		CPath sModulePath = _VersionInfoHelper::GetModulePath(hModuleInstance);
		sModulePath.RemoveExtension();
		return (LPCTSTR) sModulePath + sModulePath.FindFileName();
	}
	static LPCTSTR GetResourceInstanceRegistryDefaultValueName() throw()
	{
		static const LPCTSTR g_pszDefaultValueName = _T("Default");
		return g_pszDefaultValueName;
	}
	static LCID GetModuleLocale(HINSTANCE hModuleInstance)
	{
		CString sModuleValueName = GetResourceInstanceRegistryValueName(hModuleInstance);
		static const HKEY g_phKeys[] = { HKEY_CURRENT_USER, HKEY_LOCAL_MACHINE, };
		for(SIZE_T nKeyIndex = 0; nKeyIndex < _countof(g_phKeys); nKeyIndex++)
		{
			CRegKey Key;
			if(FAILED(HRESULT_FROM_WIN32(Key.Open(g_phKeys[nKeyIndex], T::GetResourceInstanceRegistryKeyName(), KEY_READ))))
				continue;
			DWORD nValue;
			if(_RegKeyHelper::QueryIntegerValueEx(Key, sModuleValueName, nValue))
				return nValue;
			if(_RegKeyHelper::QueryIntegerValueEx(Key, T::GetResourceInstanceRegistryDefaultValueName(), nValue))
				return nValue;
		}
		return ConvertDefaultLocale(LOCALE_USER_DEFAULT);
	}
	static CPath GetResourceModuleDirectory()
	{
		static const LPCTSTR g_pszPathValueName = _T("Satellite Path");
		CString sDirectory;
		if(_RegKeyHelper::QueryStringValue(HKEY_CURRENT_USER, T::GetResourceInstanceRegistryKeyName(), g_pszPathValueName, sDirectory))
			return (LPCTSTR) sDirectory;
		if(_RegKeyHelper::QueryStringValue(HKEY_LOCAL_MACHINE, T::GetResourceInstanceRegistryKeyName(), g_pszPathValueName, sDirectory))
			return (LPCTSTR) sDirectory;
		return (LPCTSTR) NULL;
	}
	static LPCTSTR GetResourceModuleNameFormat() throw()
	{
		// NOTE: Name, Language, Extendion
		return _T("%s.lang-%d%s");
	}
	static CString GetResourceModuleName(HINSTANCE hModuleInstance, LANGID nLanguage)
	{
		CPath sModuleName = _VersionInfoHelper::GetModulePath(hModuleInstance);
		sModuleName.RemoveExtension();
		CString sExtension = _T(".dll"); //(LPCTSTR) sModuleName + sModuleName.FindExtension();
		return AtlFormatString(T::GetResourceModuleNameFormat(), (LPCTSTR) sModuleName + sModuleName.FindFileName(), nLanguage, sExtension);
	}
	CModuleResourceInstanceT() throw() :
		m_hResourceModule(NULL)
	{
	}
	~CModuleResourceInstanceT() throw()
	{
		SetResourceModule(NULL);
	}
	HMODULE GetResourceModule() const throw()
	{
		return m_hResourceModule;
	}
	VOID SetResourceModule(HMODULE hResourceModule) throw()
	{
		if(m_hResourceModule != hResourceModule)
		{
			if(m_hResourceModule && m_hResourceModule != _AtlBaseModule.GetModuleInstance())
				_W(FreeLibrary(m_hResourceModule));
			m_hResourceModule = hResourceModule;
		}
	}
	HINSTANCE DecideResourceInstance(HINSTANCE hModuleInstance, HINSTANCE hResourceInstance)
	{
		T* pT = static_cast<T*>(this);
		CPath sResourceLibraryName = pT->GetResourceModuleName(hModuleInstance, LANGIDFROMLCID(GetModuleLocale(hModuleInstance)));
		CPath sModuleDirectory = _VersionInfoHelper::GetModulePath();
		_W(sModuleDirectory.RemoveFileSpec());
		CPath sResourceLibraryPath;
		sResourceLibraryPath.Combine(sModuleDirectory, sResourceLibraryName);
		if(!sResourceLibraryPath.FileExists())
		{
			sResourceLibraryPath.Combine(pT->GetResourceModuleDirectory(), sResourceLibraryName);
			if(!sResourceLibraryPath.FileExists())
				return hResourceInstance;
		}
		_A(sResourceLibraryPath.FileExists());
		HMODULE hResourceModule = LoadLibraryEx(sResourceLibraryPath, NULL, DONT_RESOLVE_DLL_REFERENCES);
		if(!hResourceModule)
			return hResourceInstance;
		if(!pT->CheckResourceModuleCompatibility(hModuleInstance, hResourceModule))
			return hResourceInstance;
		_Z2(atlTraceGeneral, 2, _T("Using resource library %s\n"), sResourceLibraryPath);
		SetResourceModule(hResourceModule);
		return m_hResourceModule;
	}
	HINSTANCE DecideResourceInstance()
	{
		return DecideResourceInstance(_AtlBaseModule.GetModuleInstance(), _AtlBaseModule.GetResourceInstance());
	}
};

////////////////////////////////////////////////////////////
// CMessageManagerBase

class CMessageManagerBase
{
public:

	////////////////////////////////////////////////////////
	// FACILITYMODULENAME

	typedef struct _FACILITYMODULENAME
	{
		UINT nFacility;
		LPCTSTR pszModuleName;
	} FACILITYMODULENAME;

	////////////////////////////////////////////////////////
	// FACILITYCODERANGEMODULENAMEFLAGS

	typedef enum _FACILITYCODERANGEMODULENAMEFLAGS
	{
		FACILITYCODERANGEMODULENAMEFLAGS_NONE = 0,
		FACILITYCODERANGEMODULENAMEFLAG_ANYFACILITY = 1,
		FACILITYCODERANGEMODULENAMEFLAG_ANYCODE = 2,
		FACILITYCODERANGEMODULENAMEFLAG_LOADLIBRARYASDATAFILE = 4,
		FACILITYCODERANGEMODULENAMEFLAG_CODEMESSAGEIDENTIFIER = 8,
	} FACILITYCODERANGEMODULENAMEFLAGS;

	////////////////////////////////////////////////////////
	// FACILITYCODERANGEMODULENAME

	typedef struct _FACILITYCODERANGEMODULENAME
	{
		LPCTSTR pszModuleName;
		FACILITYCODERANGEMODULENAMEFLAGS Flags;
		UINT nFacility;
		UINT nFirstCode;
		UINT nLastCode;
	} FACILITYCODERANGEMODULENAME;

public:
// CMessageManagerBase
	static CString FormatMessage(DWORD nFlags, const VOID* pvSource, DWORD nMessageIdentifier, LANGID nLanguageIdentifier = LANG_USER_DEFAULT)
	{
		_A((nFlags & FORMAT_MESSAGE_ALLOCATE_BUFFER) == 0);
		CHeapPtr<TCHAR, CLocalAllocator> pszMessage;
		DWORD nFormatMessageResult = ::FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER | nFlags, pvSource, nMessageIdentifier, nLanguageIdentifier, (LPTSTR) &pszMessage, 0, NULL);
		ATLTRACE(atlTraceGeneral, 5, _T("nMessageIdentifier 0x%08x, nFormatMessageResult 0x%08x\n"), nMessageIdentifier, HRESULT_FROM_WIN32(GetLastError()));
		nFormatMessageResult;
		return (TCHAR*) pszMessage;
	}
	static CString FormatMessageFromSystem(DWORD nMessageIdentifier, LANGID nLanguageIdentifier = LANG_USER_DEFAULT)
	{
		return FormatMessage(FORMAT_MESSAGE_FROM_SYSTEM, NULL, nMessageIdentifier, nLanguageIdentifier);
	}
	static CString FormatMessageFromModule(HMODULE hModule, DWORD nMessageIdentifier, LANGID nLanguageIdentifier = LANG_USER_DEFAULT)
	{
		return FormatMessage(FORMAT_MESSAGE_FROM_HMODULE, hModule, nMessageIdentifier, nLanguageIdentifier);
	}
	static BOOL IsEmptyMessage(CString& sMessage, const CString& sSourceMessage) throw()
	{
		sMessage = sSourceMessage;
		return sMessage.IsEmpty();
	}
	static CString FormatResultFromNativeModule(HRESULT nResult, LANGID nLanguageIdentifier = LANG_USER_DEFAULT)
	{
		return FormatMessageFromModule(_AtlBaseModule.GetResourceInstance(), nResult, nLanguageIdentifier);
	}
	static CString FormatResultFromModules(HRESULT nResult, const FACILITYMODULENAME* pModuleNames, SIZE_T nModuleNameCount, LANGID nLanguageIdentifier = LANG_USER_DEFAULT)
	{
		_A(pModuleNames);
		UINT nFacility = HRESULT_FACILITY(nResult);
		CString sMessage;
		for(SIZE_T nIndex = 0; nIndex < nModuleNameCount; nIndex++)
		{
			const FACILITYMODULENAME& ModuleName = pModuleNames[nIndex];
			if(nFacility != ModuleName.nFacility)
				continue;
			HMODULE hModule = LoadLibraryEx(ModuleName.pszModuleName, NULL, LOAD_LIBRARY_AS_DATAFILE);
			if(!hModule)
				continue;
			sMessage = FormatMessageFromModule(hModule, nResult, nLanguageIdentifier);
			_W(FreeLibrary(hModule));
			break;
		}
		return sMessage;
	}
	static CString FormatResultFromModules(HRESULT nResult, const FACILITYCODERANGEMODULENAME* pModuleNames, SIZE_T nModuleNameCount, LANGID nLanguageIdentifier = LANG_USER_DEFAULT)
	{
		_A(pModuleNames);
		CString sMessage;
		UINT nFacility = HRESULT_FACILITY(nResult);
		UINT nCode = HRESULT_CODE(nResult);
		for(SIZE_T nIndex = 0; nIndex < nModuleNameCount; nIndex++)
		{
			const FACILITYCODERANGEMODULENAME& ModuleName = pModuleNames[nIndex];
			if(!(ModuleName.Flags & FACILITYCODERANGEMODULENAMEFLAG_ANYFACILITY) && nFacility != ModuleName.nFacility)
				continue;
			if(!(ModuleName.Flags & FACILITYCODERANGEMODULENAMEFLAG_ANYCODE) && (nCode < ModuleName.nFirstCode || nCode > ModuleName.nLastCode))
				continue;
			_A(ModuleName.pszModuleName);
			HMODULE hModule = (ModuleName.Flags & FACILITYCODERANGEMODULENAMEFLAG_LOADLIBRARYASDATAFILE) ? LoadLibraryEx(ModuleName.pszModuleName, NULL, LOAD_LIBRARY_AS_DATAFILE) : GetModuleHandle(ModuleName.pszModuleName);
			if(!hModule)
				continue;
			DWORD nMessageIdentifier = (ModuleName.Flags & FACILITYCODERANGEMODULENAMEFLAG_CODEMESSAGEIDENTIFIER) ? nCode : nResult;
			sMessage = FormatMessageFromModule(hModule, nMessageIdentifier, nLanguageIdentifier);
			if(ModuleName.Flags & FACILITYCODERANGEMODULENAMEFLAG_LOADLIBRARYASDATAFILE)
				_W(FreeLibrary(hModule));
			if(!sMessage.IsEmpty())
				break;
		}
		return sMessage;
	}
};