////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2009
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

#include "Common.h"
#include "BdaHooks_i.h"

////////////////////////////////////////////////////////////
// CAddRemoveHook

class ATL_NO_VTABLE CAddRemoveHook :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CAddRemoveHook, &CLSID_AddRemoveHook>,
	public IDispatchImpl<IAddRemoveHook>,
	public IFilterGraphAddRemoveHook
{
public:
	enum { IDR = IDR_ADDREMOVEHOOK };

//DECLARE_REGISTRY_RESOURCEID(IDR)

DECLARE_PROTECT_FINAL_CONSTRUCT()

//DECLARE_GET_CONTROLLING_UNKNOWN()

//DECLARE_QI_TRACE(CConnectHook)

BEGIN_COM_MAP(CAddRemoveHook)
	COM_INTERFACE_ENTRY(IAddRemoveHook)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IFilterGraphAddRemoveHook)
END_COM_MAP()

public:
// CAddRemoveHook
	static CString GetObjectFriendlyName()
	{
		return _StringHelper::GetLine(IDR, 2);
	}
	static HRESULT WINAPI UpdateRegistry(BOOL bRegister) throw()
	{
		_Z2(atlTraceRegistrar, 2, _T("bRegister %d\n"), bRegister);
		_ATLTRY
		{
			UpdateRegistryFromResource<CAddRemoveHook>(bRegister);
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	CAddRemoveHook() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%08x\n"), this);
	}
	~CAddRemoveHook() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%08x\n"), this);
	}

// IAddRemoveHook

// IFilterGraphAddRemoveHook
	STDMETHOD(OnAddFilter)(ISpy* pSpy, IUnknown* pBaseFilterUnknown, LPCWSTR pszName, BOOL* pbDefault) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		pSpy; pBaseFilterUnknown; pszName; pbDefault;
		return S_OK;
	}
	STDMETHOD(OnRemoveFilter)(ISpy* pSpy, IUnknown* pBaseFilterUnknown, BOOL* pbDefault) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		_ATLTRY
		{
			pSpy; pBaseFilterUnknown; pbDefault;
			CComQIPtr<IScanningTuner> pScanningTuner = pBaseFilterUnknown;
			if(pScanningTuner)
				TraceScanningTuner(pScanningTuner);
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	STDMETHOD(OnAddSourceFilter)(ISpy* pSpy, LPCWSTR pszFileName, LPCWSTR pszFilterName, IUnknown** ppBaseFilterUnknown, BOOL* pbDefault) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		pSpy; pszFileName; pszFilterName; ppBaseFilterUnknown; pbDefault;
		return S_OK;
	}
	STDMETHOD(OnAddSourceFilterForMoniker)(ISpy* pSpy, IUnknown* pMonikerUnknown, IUnknown* pBindCtxUnknown, LPCWSTR pszFilterName, IUnknown** ppBaseFilterUnknown, BOOL* pbDefault) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		pSpy; pMonikerUnknown; pBindCtxUnknown; pszFilterName; ppBaseFilterUnknown; pbDefault;
		return S_OK;
	}
};

OBJECT_ENTRY_AUTO(__uuidof(AddRemoveHook), CAddRemoveHook)
