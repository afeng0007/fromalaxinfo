////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2009
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

#include "Common.h"
#include "BdaHooks_i.h"

////////////////////////////////////////////////////////////
// CConnectHook

class ATL_NO_VTABLE CConnectHook :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CConnectHook, &CLSID_ConnectHook>,
	public IDispatchImpl<IConnectHook>,
	public IFilterGraphConnectHook
{
public:
	enum { IDR = IDR_CONNECTHOOK };

//DECLARE_REGISTRY_RESOURCEID(IDR)

DECLARE_PROTECT_FINAL_CONSTRUCT()

//DECLARE_GET_CONTROLLING_UNKNOWN()

//DECLARE_QI_TRACE(CConnectHook)

BEGIN_COM_MAP(CConnectHook)
	COM_INTERFACE_ENTRY(IConnectHook)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IFilterGraphConnectHook)
END_COM_MAP()

public:
// CConnectHook
	static CString GetObjectFriendlyName()
	{
		return _StringHelper::GetLine(IDR, 2);
	}
	static HRESULT WINAPI UpdateRegistry(BOOL bRegister) throw()
	{
		_Z2(atlTraceRegistrar, 2, _T("bRegister %d\n"), bRegister);
		_ATLTRY
		{
			UpdateRegistryFromResource<CConnectHook>(bRegister);
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	CConnectHook() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%08x\n"), this);
	}
	~CConnectHook() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%08x\n"), this);
	}

// IConnectHook

// IFilterGraphConnectHook
	STDMETHOD(OnConnectDirect)(ISpy* pSpy, IUnknown* pOutputPinUnknown, IUnknown* pInputPinUnknown, const BYTE* pMediaTypeData, BOOL* pbDefault) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		_ATLTRY
		{
			const CComPtr<IPin>& pOutputPin = reinterpret_cast<const CComPtr<IPin>&>(pOutputPinUnknown);
			pSpy; pInputPinUnknown; pMediaTypeData; pbDefault;
			CComQIPtr<IScanningTuner> pScanningTuner = _FilterGraphHelper::GetPinFilter(pOutputPin);
			if(pScanningTuner)
				TraceScanningTuner(pScanningTuner);
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	STDMETHOD(OnReconnect)(ISpy* pSpy, IUnknown* pPinUnknown, BOOL* pbDefault) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		return S_OK;
	}
	STDMETHOD(OnDisconnect)(ISpy* pSpy, IUnknown* pPinUnknown, BOOL* pbDefault) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		return S_OK;
	}
	STDMETHOD(OnConnect)(ISpy* pSpy, IUnknown* pOutputPinUnknown, IUnknown* pInputPinUnknown, BOOL* pbDefault) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		_ATLTRY
		{
			const CComPtr<IPin>& pOutputPin = reinterpret_cast<const CComPtr<IPin>&>(pOutputPinUnknown);
			pSpy; pInputPinUnknown; pbDefault;
			CComQIPtr<IScanningTuner> pScanningTuner = _FilterGraphHelper::GetPinFilter(pOutputPin);
			if(pScanningTuner)
				TraceScanningTuner(pScanningTuner);
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	STDMETHOD(OnReconnectEx)(ISpy* pSpy, IUnknown* pPinUnknown, const BYTE* pMediaTypeData, BOOL* pbDefault) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		return S_OK;
	}
};

OBJECT_ENTRY_AUTO(__uuidof(ConnectHook), CConnectHook)
