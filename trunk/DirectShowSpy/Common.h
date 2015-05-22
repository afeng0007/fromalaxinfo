////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2015
// Created by Roman Ryltsov roman@alax.info, http://alax.info
//
// This source code is published to complement DirectShowSpy developer powertoy 
// and demonstrate the internal use of APIs and tricks powering the tool. It is 
// allowed to freely re-use the portions of the code in other projects, commercial 
// or otherwise (provided that you don’t pretend that you wrote the original tool).
//
// Please keep in mind that DirectShowSpy is a developer tool, it is strongly recommended
// that it is not shipped with release grade software. It is allowed to distribute
// DirectShowSpy if only it is not registered with Windows by default and either
// used privately, or registered on specific throubleshooting request. The advice applies 
// to hooking methods used by DirectShowSpy in general as well.

#pragma once

#include "AboutDialog.h"
namespace EmailTools
{
	#include "Module_i.h"
	#undef __Module_i_h__
	#include "..\..\Repository-Private\Utilities\EmailTools\Module_i.h"
	#include "..\..\Repository-Private\Utilities\EmailTools\Message.h"
}
using namespace EmailTools;
#define  BZ_NO_STDIO
#include "..\..\Repository-Private\Utilities\DeflateTools\Bzip2Item.h"

////////////////////////////////////////////////////////////
// CProcessTokenPrivileges

class CProcessTokenPrivileges
{
public:
	CAccessToken m_ProcessToken;
	CTokenPrivileges m_OriginalProcessTokenPrivileges;
	BOOL m_bTakeOwnershipPrivilegeEnabled;
	BOOL m_bRestorePrivilegeEnabled;

public:
// CProcessTokenPrivileges
	CProcessTokenPrivileges() throw() :
		m_bTakeOwnershipPrivilegeEnabled(FALSE),
		m_bRestorePrivilegeEnabled(FALSE)
	{
	}
	~CProcessTokenPrivileges()
	{
		if(m_bTakeOwnershipPrivilegeEnabled)
		{
			__E(m_ProcessToken.EnableDisablePrivileges(m_OriginalProcessTokenPrivileges));
			m_bRestorePrivilegeEnabled = FALSE;
			m_bTakeOwnershipPrivilegeEnabled = FALSE;
		}
	}
	VOID Adjust()
	{
		_A(!m_ProcessToken.GetHandle());
		// NOTE: Enable SE_TAKE_OWNERSHIP_NAME and SE_RESTORE_NAME privileges in order to be able to access registry key permissions
		__E(m_ProcessToken.GetProcessToken(TOKEN_QUERY | TOKEN_ADJUST_PRIVILEGES));
		__E(m_ProcessToken.EnablePrivilege(SE_TAKE_OWNERSHIP_NAME, &m_OriginalProcessTokenPrivileges));
		m_bTakeOwnershipPrivilegeEnabled = TRUE;
		__E(m_ProcessToken.EnablePrivilege(SE_RESTORE_NAME));
		m_bRestorePrivilegeEnabled = TRUE;
	}
};

////////////////////////////////////////////////////////////
// CClassIdentifierRegKeySecurity

class CClassIdentifierRegKeySecurity
{
public:
	CLSID m_ClassIdentifier;
	CRegKey m_Key;
	CSecurityDesc m_OriginalSecurityDescriptor;

public:
// CClassIdentifierRegKeySecurity
	static VOID GetRegKeySecurityDescriptor(CRegKey& Key, SECURITY_INFORMATION SecurityInformation, CSecurityDesc& SecurityDescriptor)
	{
		DWORD nSecurityDescriptorSize = 0;
		Key.GetKeySecurity(SecurityInformation, NULL, &nSecurityDescriptorSize);
		CTempBuffer<SECURITY_DESCRIPTOR> pSecurityDescriptor;
		_W(pSecurityDescriptor.AllocateBytes(nSecurityDescriptorSize));
		__C(HRESULT_FROM_WIN32(Key.GetKeySecurity(SecurityInformation, pSecurityDescriptor, &nSecurityDescriptorSize)));
		SecurityDescriptor = *pSecurityDescriptor;
	}
	static CString StringFromSecurityDescriptor(CSecurityDesc& SecurityDescriptor)
	{
		CString sSecurityDescriptorString;
		__E(SecurityDescriptor.ToString(&sSecurityDescriptorString));
		return sSecurityDescriptorString;
	}
	static CString StringFromRegKeySecurityDescriptor(CRegKey& Key, SECURITY_INFORMATION SecurityInformation)
	{
		CSecurityDesc SecurityDescriptor;
		GetRegKeySecurityDescriptor(Key, SecurityInformation, SecurityDescriptor);
		return StringFromSecurityDescriptor(SecurityDescriptor);
	}
	CClassIdentifierRegKeySecurity(const CLSID& ClassIdentifier) throw() :
		m_ClassIdentifier(ClassIdentifier)
	{
	}
	~CClassIdentifierRegKeySecurity()
	{
		if(m_Key)
		{
			// QUES: Would it be more reliable to leave ownership and revert DACL only in absence of Restore privilege?
			__C(HRESULT_FROM_WIN32(m_Key.SetKeySecurity(OWNER_SECURITY_INFORMATION | DACL_SECURITY_INFORMATION, const_cast<SECURITY_DESCRIPTOR*>((const SECURITY_DESCRIPTOR*) m_OriginalSecurityDescriptor))));
			_Z4(atlTraceGeneral, 4, _T("Owner & DACL: %s\n"), StringFromRegKeySecurityDescriptor(m_Key, OWNER_SECURITY_INFORMATION | DACL_SECURITY_INFORMATION));
			__C(HRESULT_FROM_WIN32(m_Key.Close()));
		}
	}
	BOOL Adjust()
	{
		if(m_Key)
			return FALSE;
		const CString sKeyName = AtlFormatString(_T("CLSID\\%ls"), _PersistHelper::StringFromIdentifier(m_ClassIdentifier));
		__C(HRESULT_FROM_WIN32(m_Key.Open(HKEY_CLASSES_ROOT, sKeyName, READ_CONTROL | WRITE_OWNER)));
		GetRegKeySecurityDescriptor(m_Key, OWNER_SECURITY_INFORMATION | DACL_SECURITY_INFORMATION, m_OriginalSecurityDescriptor);
		// NOTE: 
		//   Windows 5.1: CLSID {E436EBB2-524F-11CE-9F53-0020AF0BA770} Key Owner: O:AB (Administrators)
		//   Windows 6.0: CLSID {E436EBB2-524F-11CE-9F53-0020AF0BA770} Key Owner: O:S-1-5-80-956008885-3418522649-1831038044-1853292631-2271478464 (TrustedInstaller)
		_Z4(atlTraceGeneral, 4, _T("ClassIdentifier %ls, m_OriginalSecurityDescriptor %s\n"), _PersistHelper::StringFromIdentifier(m_ClassIdentifier), StringFromSecurityDescriptor(m_OriginalSecurityDescriptor));
		// NOTE: Take ownership of the key to Administrators in order to be able to update key DACL
		// QUES: Would it be more reliable to take ownership to self in absence of Restore privilege?
		CSecurityDesc AdministratorsOwnerSecurityDescriptor;
		AdministratorsOwnerSecurityDescriptor.SetOwner(Sids::Admins());
		__C(HRESULT_FROM_WIN32(m_Key.SetKeySecurity(OWNER_SECURITY_INFORMATION, const_cast<SECURITY_DESCRIPTOR*>((const SECURITY_DESCRIPTOR*) AdministratorsOwnerSecurityDescriptor))));
		_Z4(atlTraceGeneral, 4, _T("Owner: %s\n"), StringFromRegKeySecurityDescriptor(m_Key, OWNER_SECURITY_INFORMATION));
		// NOTE: Reopen the key to obtain given privileges
		__C(HRESULT_FROM_WIN32(m_Key.Close()));
		__C(HRESULT_FROM_WIN32(m_Key.Open(HKEY_CLASSES_ROOT, sKeyName, READ_CONTROL | WRITE_DAC | WRITE_OWNER)));
		// NOTE: Adjust key DACL in order to make the key writable
		CSecurityDesc AccessListSecurityDescriptor = m_OriginalSecurityDescriptor;
		CDacl AccessList;
		__E(AccessListSecurityDescriptor.GetDacl(&AccessList));
		_W(AccessList.AddAllowedAce(Sids::Admins(), GENERIC_ALL, CONTAINER_INHERIT_ACE));
		AccessListSecurityDescriptor.SetDacl(AccessList);
		__C(HRESULT_FROM_WIN32(m_Key.SetKeySecurity(DACL_SECURITY_INFORMATION, const_cast<SECURITY_DESCRIPTOR*>((const SECURITY_DESCRIPTOR*) AccessListSecurityDescriptor))));
		_Z4(atlTraceGeneral, 4, _T("DACL: %s\n"), StringFromRegKeySecurityDescriptor(m_Key, DACL_SECURITY_INFORMATION));
		return TRUE;
	}
};

////////////////////////////////////////////////////////////
// TreatAsUpdateRegistryFromResource

template <typename T>
inline VOID TreatAsUpdateRegistryFromResource(const CLSID& TreatAsClassIdentifier, BOOL bRegister)
{
	_Z2(atlTraceRegistrar, 2, _T("TreatAsClassIdentifier %ls, bRegister %d\n"), _PersistHelper::StringFromIdentifier(TreatAsClassIdentifier), bRegister);
	// NOTE: Registration is more sophisticated starting Vista operating system
	const BOOL bAdjustProcessTokenPrivileges = IsWindowsVistaOrGreater();
	_Z4(atlTraceRegistrar, 4, _T("bAdjustProcessTokenPrivileges %d\n"), bAdjustProcessTokenPrivileges);
	CProcessTokenPrivileges ProcessTokenPrivileges;
	if(bAdjustProcessTokenPrivileges)
		_ATLTRY
		{
			ProcessTokenPrivileges.Adjust();
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
		}
	CLSID CurrentTreatAsClassIdentifier = CLSID_NULL;
	const HRESULT nCoGetTreatAsClassResult = CoGetTreatAsClass(TreatAsClassIdentifier, &CurrentTreatAsClassIdentifier);
	__C(nCoGetTreatAsClassResult);
	_Z4(atlTraceRegistrar, 4, _T("bRegister %d, nCoGetTreatAsClassResult 0x%08X, CurrentTreatAsClassIdentifier %ls\n"), bRegister, nCoGetTreatAsClassResult, _PersistHelper::StringFromIdentifier(CurrentTreatAsClassIdentifier));
	__D(!bRegister || nCoGetTreatAsClassResult != S_OK || CurrentTreatAsClassIdentifier == T::GetObjectCLSID(), E_UNNAMED);
	CClassIdentifierRegKeySecurity ClassIdentifierRegKeySecurity(TreatAsClassIdentifier);
	if(!bRegister && nCoGetTreatAsClassResult == S_OK)
	{
		if(bAdjustProcessTokenPrivileges)
			ClassIdentifierRegKeySecurity.Adjust();
		__C(CoTreatAsClass(TreatAsClassIdentifier, CLSID_NULL));
	}
	_A(_pAtlModule);
	UpdateRegistryFromResource<T>(bRegister);
	if(bRegister)
	{
		if(bAdjustProcessTokenPrivileges)
			ClassIdentifierRegKeySecurity.Adjust();
		#if _DEVELOPMENT
			const HRESULT nCoTreatAsClassResult = CoTreatAsClass(TreatAsClassIdentifier, T::GetObjectCLSID());
			_Z2(atlTraceRegistrar, SUCCEEDED(nCoTreatAsClassResult) ? 4 : 2, _T("nCoTreatAsClassResult 0x%08X\n"), nCoTreatAsClassResult);
			__C(nCoTreatAsClassResult);
			const HRESULT nCoGetTreatAsClassResult = CoGetTreatAsClass(TreatAsClassIdentifier, &CurrentTreatAsClassIdentifier);
			_Z4(atlTraceRegistrar, 4, _T("nCoGetTreatAsClassResult 0x%08X, CurrentTreatAsClassIdentifier %ls\n"), nCoGetTreatAsClassResult, _PersistHelper::StringFromIdentifier(CurrentTreatAsClassIdentifier));
			_A(CurrentTreatAsClassIdentifier == T::GetObjectCLSID());
		#else
			__C(CoTreatAsClass(TreatAsClassIdentifier, T::GetObjectCLSID()));
		#endif // _DEVELOPMENT
	}
}

////////////////////////////////////////////////////////////
// CBlackListAwareComCreatorT

template <typename T, const CLSID* t_pClassIdentifier>
class ATL_NO_VTABLE CTransparentCoClassT
{
public:
// CTransparentCoClassT
	static HINSTANCE CoLoadOriginalLibrary()
	{
		const HINSTANCE hModule = CoLoadLibrary(const_cast<LPOLESTR>((LPCOLESTR) CT2COLE(T::GetOriginalLibraryName())), TRUE);
		__E(hModule);
		return hModule;
	}
	static CComPtr<IUnknown> CoCreateOriginalInstance(HINSTANCE hModule, IUnknown* pControllingUnknown = NULL)
	{
		typedef HRESULT (WINAPI *DLLGETCLASSOBJECT)(REFCLSID, REFIID, VOID**);
		DLLGETCLASSOBJECT DllGetClassObject = (DLLGETCLASSOBJECT) GetProcAddress(hModule, "DllGetClassObject");
		__E(DllGetClassObject);
		CComPtr<IClassFactory> pClassFactory;
		__C(DllGetClassObject(*t_pClassIdentifier, __uuidof(IClassFactory), (VOID**) &pClassFactory));
		_A(pClassFactory);
		CComPtr<IUnknown> pUnknown;
		__C(pClassFactory->CreateInstance(pControllingUnknown, __uuidof(IUnknown), (VOID**) &pUnknown));
		return pUnknown;
	}
	static CComPtr<IUnknown> CoCreateOriginalInstance(IUnknown* pControllingUnknown = NULL)
	{
		CComPtr<IUnknown> pUnknown;
		const HINSTANCE hModule = CoLoadOriginalLibrary();
		_ATLTRY
		{
			pUnknown = CoCreateOriginalInstance(hModule, pControllingUnknown);
		}
		_ATLCATCHALL()
		{
			CoFreeLibrary(hModule);
			_ATLRETHROW;
		}
		CoFreeLibrary(hModule);
		return pUnknown;
	}
};

////////////////////////////////////////////////////////////
// CBlackListAwareComCreatorT

template <typename _ObjectClass, typename _Class, LPCTSTR* t_ppszName>
class CBlackListAwareComCreatorT :
	public CComCreator<_ObjectClass>
{
public:
// CBlackListAwareComCreatorT
	static HRESULT WINAPI CreateInstance(VOID* pvControllingUnknown, REFIID InterfaceIdentifier, VOID** ppvObject) throw()
	{
		_A(ppvObject);
		*ppvObject = NULL;
		#pragma region Check Black List
		static INT g_nBlackListed = 0; // 0 Unknown, 1 No, 2 Yes
		{
			_A(_pAtlModule);
			CComCritSecLock<CComCriticalSection> Lock(_pAtlModule->m_csStaticDataInitAndTypeInfo);
			if(!g_nBlackListed)
			{
				TCHAR pszPath[MAX_PATH] = { 0 };
				_W(GetModuleFileName(NULL, pszPath, DIM(pszPath)));
				LPTSTR pszFileName = FindFileName(pszPath);
				_A(pszFileName);
				RemoveExtension(pszFileName);
				const CString sBlackList = _RegKeyHelper::QueryStringValue(HKEY_LOCAL_MACHINE, REGISTRY_ROOT, AtlFormatString(_T("%s Black List"), *t_ppszName));
				CRoArrayT<CString> BlackListArray;
				_StringHelper::GetCommaSeparatedItems(sBlackList, BlackListArray);
				BOOL bFound = FALSE;
				for(SIZE_T nIndex = 0; nIndex < BlackListArray.GetCount(); nIndex++)
				{
					CPath sFileName = (LPCTSTR) BlackListArray[nIndex];
					sFileName.RemoveExtension();
					if(_tcsicmp(sFileName, pszFileName) == 0)
					{
						_Z2(atlTraceCOM, 2, _T("Will instantiate original COM class, sFileName \"%s\"\n"), sFileName);
						bFound = TRUE;
						break;
					}
				}
				g_nBlackListed = bFound ? 2 : 1;
			}
		}
		#pragma endregion 
		if(g_nBlackListed == 2)
			#pragma region CoCreateInstance Original Class
			_ATLTRY
			{
				_A(_pAtlModule);
				const LONG nLockResult = _pAtlModule->Lock();
				_ATLTRY
				{
					CComPtr<IUnknown> pUnknown = _Class::CoCreateOriginalInstance((IUnknown*) pvControllingUnknown);
					if(InterfaceIdentifier == __uuidof(IUnknown))
						*ppvObject = pUnknown.Detach();
					else
						__C(pUnknown->QueryInterface(InterfaceIdentifier, ppvObject));
				}
				_ATLCATCHALL()
				{
					_pAtlModule->Unlock();
					_ATLRETHROW;
				}
				const LONG nUnlockResult = _pAtlModule->Unlock();
				_Z6(atlTraceGeneral, 6, _T("nLockResult %d, nUnlockResult %d\n"), nLockResult, nUnlockResult);
				return S_OK;
			}
			_ATLCATCH(Exception)
			{
				_A(FAILED(Exception));
				_C(Exception);
			}
			#pragma endregion 
		return __super::CreateInstance(pvControllingUnknown, InterfaceIdentifier, ppvObject);
	}
};

////////////////////////////////////////////////////////////
// CHookHostT

template <typename T, typename IHook, LPCTSTR* t_ppszHookName>
class CHookHostT
{
public:

	////////////////////////////////////////////////////////
	// CHookArray

	class CHookArray :
		public CRoArrayT<CComPtr<IHook> >
	{
	public:
	// CHookArray
	};

private:
	mutable CRoCriticalSection m_HookCriticalSection;
	BOOL m_bHookArrayInitialized;
	CHookArray m_HookArray;

	VOID InitializeHookArray()
	{
		_A(m_HookArray.IsEmpty());
		CRoListT<CLSID> ClassIdentifierList;
		static const HKEY g_phParentKeys[] = { HKEY_LOCAL_MACHINE, HKEY_CURRENT_USER };
		static const LPCTSTR g_ppszKeyNameFormats[] = { _T("SOFTWARE\\Classes\\"), _T("Software\\Classes\\") };
		for(SIZE_T nKeyIndex = 0; nKeyIndex < DIM(g_phParentKeys); nKeyIndex++)
		{
			const CString sKeyName = AtlFormatString(_T("%sCLSID\\%ls\\Hooks\\%s"), g_ppszKeyNameFormats[nKeyIndex], _PersistHelper::StringFromIdentifier(T::GetObjectCLSID()), *t_ppszHookName);
			CRegKey Key;
			if(FAILED(HRESULT_FROM_WIN32(Key.Open(g_phParentKeys[nKeyIndex], sKeyName, KEY_READ))))
				continue;
			for(DWORD nIndex = 0; ; nIndex++)
			{
				DWORD nNameLength = 0;
				RegEnumKeyEx(Key, nIndex, NULL, &nNameLength, NULL, NULL, NULL, NULL);
				nNameLength = max(2 * nNameLength, 256);
				CTempBuffer<TCHAR, 4096> pszName(nNameLength);
				const HRESULT nRegEnumKeyResult = HRESULT_FROM_WIN32(RegEnumKeyEx(Key, nIndex, pszName, &nNameLength, NULL, NULL, NULL, NULL));
				if(FAILED(nRegEnumKeyResult))
				{
					__D(nRegEnumKeyResult == HRESULT_FROM_WIN32(ERROR_NO_MORE_ITEMS), nRegEnumKeyResult);
					break;
				}
				_ATLTRY
				{
					const CLSID ClassIdentifier = _PersistHelper::ClassIdentifierFromString(CT2CW(pszName));
					_Z4(atlTraceGeneral, 4, _T("ClassIdentifier %ls\n"), _PersistHelper::StringFromIdentifier(ClassIdentifier));
					__D(ClassIdentifier != CLSID_NULL, E_UNNAMED);
					if(ClassIdentifierList.Find(ClassIdentifier))
						continue;
					_W(ClassIdentifierList.AddTail(ClassIdentifier));
					CComPtr<IHook> pHook;
					__C(pHook.CoCreateInstance(ClassIdentifier));
					_W(m_HookArray.Add(pHook) >= 0);
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
				}
			}
		}
	}

public:
// CHookHostT
	CHookHostT() throw() :
		m_bHookArrayInitialized(FALSE)
	{
	}
	SIZE_T GetHookArray(CHookArray& HookArray)
	{
		_A(HookArray.IsEmpty());
		CRoCriticalSectionLock HookLock(m_HookCriticalSection);
		if(!m_bHookArrayInitialized)
			_ATLTRY
			{
				m_bHookArrayInitialized = TRUE;
				InitializeHookArray();
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
		HookArray.Append(m_HookArray);
		return HookArray.GetCount();
	}
};

#define HOOK_PROLOG(Base) \
	_ATLTRY \
	{ \
		Base::CHookArray HookArray; \
		if(Base::GetHookArray(HookArray)) \
		{ \
			T* pT = static_cast<T*>(this); \
			for(SIZE_T nIndex = 0; nIndex < HookArray.GetCount(); nIndex++) \
			{ \
				BOOL bDefault = TRUE; \
				const HRESULT nResult = HookArray[nIndex]->
						
#define HOOK_EPILOG() \
				if(!bDefault) \
					return nResult; \
				_A(SUCCEEDED(nResult)); \
			} \
		} \
	} \
	_ATLCATCHALL() \
	{ \
		_Z_EXCEPTION(); \
	}

////////////////////////////////////////////////////////////
// COptions

class COptions
{
public:

	////////////////////////////////////////////////////////
	// CNameValue

	class CNameValue
	{
	public:
		CString m_sName;
		CComVariantArray m_vValue;

	public:
	// CNameValue
	};

private:
	mutable CRoCriticalSection m_DataCriticalSection;
	CRoMapT<CString, CNameValue, CStringElementTraitsI<CString>> m_ValueMap;

public:
// COptions
	CComVariantArray GetVariant() const
	{
		CComVariantArray vValues;
		CRoCriticalSectionLock DataLock(m_DataCriticalSection);
		CRoArrayT<CComVariantArray> Array;
		for(auto&& NameValue: m_ValueMap.GetValues())
		{
			CComVariantArray vValue;
			Array.Add(vValue.FromElements(2, CComVariant(NameValue.m_sName), NameValue.m_vValue));
		}
		return vValues.FromElementArray(Array);
	}
	VOID SetVariant(CComVariantArray& vValue)
	{
		CRoCriticalSectionLock DataLock(m_DataCriticalSection);
		m_ValueMap.RemoveAll();
		if(vValue.vt > VT_NULL)
		{
			__D(vValue.IsPlainVariantArray(), E_INVALIDARG);
			CRoArrayT<CComVariantArray> ElementArray;
			vValue.ToElementArray(ElementArray);
			for(auto&& vItem: ElementArray)
			{
				__D(vItem.IsPlainVariantArray(), E_INVALIDARG);
				CRoArrayT<CComVariantArray> ValueArray;
				__D(vItem.ToElementArray(ValueArray) >= 2, E_INVALIDARG);
				__C(ValueArray[0].ChangeType(VT_BSTR));
				CString sName(ValueArray[0].bstrVal);
				CNameValue NameValue;
				NameValue.m_sName = sName;
				NameValue.m_vValue = ValueArray[1];
				_W(m_ValueMap.SetAt(sName, NameValue));
			}
		}
	}
	VOID SetVariant(VARIANT vValue)
	{
		SetVariant(reinterpret_cast<CComVariantArray&>(vValue));
	}
	COptions& operator = (const COptions& Value)
	{
		CRoCriticalSectionLock DataLock(m_DataCriticalSection);
		CRoCriticalSectionLock ValueDataLock(Value.m_DataCriticalSection);
		m_ValueMap.RemoveAll();
		for(auto&& NameValue: Value.m_ValueMap.GetValues())
			_W(m_ValueMap.SetAt(NameValue.m_sName, NameValue));
		return *this;
	}
	BOOL TryGetLongValue(const LPCTSTR pszName, LONG& nValue) //const
	{
		CRoCriticalSectionLock DataLock(m_DataCriticalSection);
		const POSITION Position = m_ValueMap.Lookup(pszName);
		if(!Position)
			return FALSE; // No Value
		CComVariant vLongValue;
		if(FAILED(vLongValue.ChangeType(VT_I4, &m_ValueMap.GetValueAt(Position).m_vValue)))
			return FALSE; // Wrong Value Type
		nValue = vLongValue.lVal;
		return TRUE;
	}
	BOOL TryGetBoolValue(const LPCTSTR pszName, BOOL& bValue) //const
	{
		CRoCriticalSectionLock DataLock(m_DataCriticalSection);
		const POSITION Position = m_ValueMap.Lookup(pszName);
		if(!Position)
			return FALSE; // No Value
		CComVariant vBoolValue;
		if(FAILED(vBoolValue.ChangeType(VT_BOOL, &m_ValueMap.GetValueAt(Position).m_vValue)))
			return FALSE; // Wrong Value Type
		bValue = vBoolValue.boolVal != ATL_VARIANT_FALSE;
		return TRUE;
	}
};

////////////////////////////////////////////////////////////
// DIRECTSHOWSPY_NAMESPACE_PREFIX

#if !defined(DIRECTSHOWSPY_NAMESPACE_PREFIX) 
	#if defined(DIRECTSHOWSPY) 
		#define DIRECTSHOWSPY_NAMESPACE_PREFIX
	#else
		#define DIRECTSHOWSPY_NAMESPACE_PREFIX AlaxInfoDirectShowSpy::
	#endif // DIRECTSHOWSPY
#endif // !defined(DIRECTSHOWSPY_NAMESPACE_PREFIX) 
