////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2013
// Created by Roman Ryltsov roman@alax.info

#pragma once

#include "resource.h"
#include "Server_i.h"

////////////////////////////////////////////////////////////
// CValueMarshalT

template <typename T>
class ATL_NO_VTABLE CValueMarshalT :
	public IMarshal
{
public:
// CValueMarshalT

// IMarshal
	STDMETHOD(GetUnmarshalClass)(REFIID InterfaceIdentifier, VOID* pvInstance, DWORD nContext, VOID* pvContext, DWORD nFlags, CLSID* pClassIdentifier) throw()
	{
		_Z4(atlTraceCOM, 4, _T("InterfaceIdentifier %ls, pvInstance 0x%p, nContext %d, nFlags 0x%x\n"), _PersistHelper::StringFromInterfaceIdentifier(InterfaceIdentifier), pvInstance, nContext, nFlags);
		_ATLTRY
		{
			__D(pClassIdentifier, E_POINTER);
			InterfaceIdentifier; pvInstance; nContext; pvContext; nFlags;
			*pClassIdentifier = T::GetObjectCLSID();
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	STDMETHOD(GetMarshalSizeMax)(REFIID InterfaceIdentifier, VOID* pvInstance, DWORD nContext, VOID* pvContext, DWORD nFlags, DWORD* pnSize) throw()
	{
		_Z4(atlTraceCOM, 4, _T("InterfaceIdentifier %ls, pvInstance 0x%p, nContext %d, nFlags 0x%x\n"), _PersistHelper::StringFromInterfaceIdentifier(InterfaceIdentifier), pvInstance, nContext, nFlags);
		_ATLTRY
		{
			__D(pnSize, E_POINTER);
			InterfaceIdentifier; pvInstance; nContext; pvContext; nFlags;
			T* pT = static_cast<T*>(this);
			IPersistStreamInit* pPersistStreamInit = pT;
			ULARGE_INTEGER nSize;
			__C(pPersistStreamInit->GetSizeMax(&nSize));
			_A(!nSize.HighPart);
			*pnSize = (DWORD) nSize.LowPart;
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	STDMETHOD(MarshalInterface)(IStream* pStream, REFIID InterfaceIdentifier, VOID* pvInstance, DWORD nContext, VOID* pvContext, DWORD nFlags) throw()
	{
		_Z4(atlTraceCOM, 4, _T("InterfaceIdentifier %ls, pvInstance 0x%p, nContext %d, nFlags 0x%x\n"), _PersistHelper::StringFromInterfaceIdentifier(InterfaceIdentifier), pvInstance, nContext, nFlags);
		_ATLTRY
		{
			__D(pStream, E_INVALIDARG);
			InterfaceIdentifier; pvInstance; nContext; pvContext; nFlags;
			T* pT = static_cast<T*>(this);
			IPersistStreamInit* pPersistStreamInit = pT;
			__C(pPersistStreamInit->Save(pStream, FALSE));
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	STDMETHOD(UnmarshalInterface)(IStream* pStream, const IID& InterfaceIdentifier, VOID** ppvInstance) throw()
	{
		_Z4(atlTraceCOM, 4, _T("InterfaceIdentifier %ls\n"), _PersistHelper::StringFromInterfaceIdentifier(InterfaceIdentifier));
		_ATLTRY
		{
			T* pT = static_cast<T*>(this);
			IPersistStreamInit* pPersistStreamInit = pT;
			__C(pPersistStreamInit->Load(pStream));
			__C(pT->QueryInterface(InterfaceIdentifier, ppvInstance));
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	STDMETHOD(ReleaseMarshalData)(IStream* pStream) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		pStream;
		return S_OK;
	}
	STDMETHOD(DisconnectObject)(DWORD nReserved) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		nReserved;
		return S_OK;
	}
};

////////////////////////////////////////////////////////////
// CFoo

class ATL_NO_VTABLE CFoo :
	public CComObjectRootEx<CComMultiThreadModelNoCS>,
	public CComCoClass<CFoo, &__uuidof(Foo)>,
	public CBasePersistT<CFoo>,
	public IRoPersistStreamInitT<CFoo>,
	public CValueMarshalT<CFoo>,
	public IDispatchImpl<IFoo>
{
public:
	enum { IDR = IDR_FOO };

//DECLARE_REGISTRY_RESOURCEID(IDR)

DECLARE_PROTECT_FINAL_CONSTRUCT()

DECLARE_QI_TRACE(CFoo)

BEGIN_COM_MAP(CFoo)
	COM_INTERFACE_ENTRY(IPersist)
	COM_INTERFACE_ENTRY_IID(__uuidof(IPersistStream), IPersistStreamInit)
	COM_INTERFACE_ENTRY(IPersistStreamInit)
	COM_INTERFACE_ENTRY(IMarshal)
	COM_INTERFACE_ENTRY(IFoo)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

BEGIN_PROP_MAP(CFoo)
	PROP_ENTRY_TYPE_EX("Value", DISPID_VALUE, CLSID_NULL, __uuidof(IFoo), VT_VARIANT)
END_PROP_MAP()

private:
	mutable CRoCriticalSection m_DataCriticalSection;
	CComVariantArray m_vValue;

public:
// CFoo
	static CString GetObjectFriendlyName()
	{
		return _StringHelper::GetLine(IDR, 2);
	}
	static HRESULT WINAPI UpdateRegistry(BOOL bRegister) throw()
	{
		_Z2(atlTraceRegistrar, 2, _T("bRegister %d\n"), bRegister);
		_ATLTRY
		{
			UpdateRegistryFromResource<CFoo>(bRegister);
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	CFoo() :
		CBasePersistT<CFoo>(m_DataCriticalSection)
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	~CFoo()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}

// IFoo
	STDMETHOD(get_Value)(VARIANT* pvValue) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		_ATLTRY
		{
			__D(pvValue, E_POINTER);
			_V(CComVariant(m_vValue).Detach(pvValue));
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	STDMETHOD(put_Value)(VARIANT vValue) throw()
	{
		_Z4(atlTraceCOM, 4, _T("vValue.vt 0x%02X\n"), vValue.vt);
		_ATLTRY
		{
			m_vValue = vValue;
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
};

OBJECT_ENTRY_AUTO(__uuidof(Foo), CFoo)
