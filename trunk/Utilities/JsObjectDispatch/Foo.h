////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

#include <atlstr.h>
#include "resource.h"       // main symbols
#include "JsObjectDispatch_i.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;

// CFoo

class ATL_NO_VTABLE CFoo :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CFoo, &CLSID_Foo>,
	public IDispatchImpl<IFoo>
{
public:

DECLARE_REGISTRY_RESOURCEID(IDR_FOO)

BEGIN_COM_MAP(CFoo)
	COM_INTERFACE_ENTRY(IFoo)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

public:
// CFoo
	static VOID TraceProperty(CComPtr<IDispatch> pDispatch, DISPID nIdentifier, BOOL bTraceGetResultFailure = TRUE)
	{
		CComVariant vPropertyValue;
		const HRESULT nGetResult = pDispatch.GetProperty(nIdentifier, &vPropertyValue);
		if(SUCCEEDED(nGetResult))
		{
			CComVariant vStringPropertyValue;
			const HRESULT nChangeTypeResult = vStringPropertyValue.ChangeType(VT_BSTR, &vPropertyValue);
			if(SUCCEEDED(nChangeTypeResult))
			{
				ATLTRACE(_T("nIdentifier 0x%x, vPropertyValue.vt 0x%x, vStringPropertyValue.bstrVal \"%s\"\n"), nIdentifier, vPropertyValue.vt, CString(vStringPropertyValue.bstrVal));
			} else
				ATLTRACE(_T("nIdentifier 0x%x, vPropertyValue.vt 0x%x, nChangeTypeResult 0x%08x\n"), nIdentifier, vPropertyValue.vt, nChangeTypeResult);
		} else
			if(bTraceGetResultFailure)
				ATLTRACE(_T("nIdentifier 0x%x, nGetResult 0x%08x\n"), nIdentifier, nGetResult);
	}
	static VOID TraceProperty(CComPtr<IDispatch> pDispatch, LPCWSTR pszName, BOOL bTraceGetResultFailure = TRUE)
	{
		ATLASSERT(pszName);
		CComVariant vPropertyValue;
		const HRESULT nGetResult = pDispatch.GetPropertyByName(pszName, &vPropertyValue);
		if(SUCCEEDED(nGetResult))
		{
			CComVariant vStringPropertyValue;
			const HRESULT nChangeTypeResult = vStringPropertyValue.ChangeType(VT_BSTR, &vPropertyValue);
			if(SUCCEEDED(nChangeTypeResult))
			{
				ATLTRACE(_T("pszName %ls, vPropertyValue.vt 0x%x, vStringPropertyValue.bstrVal \"%s\"\n"), pszName, vPropertyValue.vt, CString(vStringPropertyValue.bstrVal));
			} else
				ATLTRACE(_T("pszName %ls, vPropertyValue.vt 0x%x, nChangeTypeResult 0x%08x\n"), pszName, vPropertyValue.vt, nChangeTypeResult);
		} else
			if(bTraceGetResultFailure)
				ATLTRACE(_T("pszName %ls, nGetResult 0x%08x\n"), pszName, nGetResult);
	}

// IFoo
	STDMETHOD(Bar)(VARIANT vValue) throw()
	{
		ATLTRACE(_T("-------- vValue.vt 0x%x -------- -------- --------\n"), vValue.vt);
		if(vValue.vt != VT_DISPATCH)
		{
			ATLTRACE(_T("vValue.lVal 0x%x\n"), vValue.lVal);
			return S_FALSE;
		}
		ATLASSERT(vValue.vt == VT_DISPATCH);
		CComQIPtr<IDispatchEx> pDispatchEx = vValue.pdispVal;
		#if defined(_DEBUG)
		if(pDispatchEx)
		{
			DISPID nIdentifier = DISPID_STARTENUM;
			for(; ; )
			{
				if(pDispatchEx->GetNextDispID(fdexEnumAll, nIdentifier, &nIdentifier) != S_OK)
					break;
				CComBSTR sName;
				ATLVERIFY(SUCCEEDED(pDispatchEx->GetMemberName(nIdentifier, &sName)));
				ATLTRACE(_T("nIdentifier %d, sName %s\n"), nIdentifier, CString(sName));
				TraceProperty((IDispatchEx*) pDispatchEx, sName);
			}
		}
		#endif // defined(_DEBUG)
		//TraceProperty(vValue.pdispVal, (DISPID) DISPID_VALUE);
		for(DISPID nIdentifier = -1000; nIdentifier <= 1000; nIdentifier++)
			TraceProperty(vValue.pdispVal, nIdentifier, FALSE);
		return S_OK;
	}
};

OBJECT_ENTRY_AUTO(__uuidof(Foo), CFoo)
