////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2015
// Created by Roman Ryltsov roman@alax.info

#pragma once

#include <atlstr.h>
#include "resource.h"       // main symbols
#include "JsFunctionDispatch_i.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;

////////////////////////////////////////////////////////////
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
	static VOID Call(CComPtr<IDispatch>& pFunctionDispatch)
	{
		ATLASSERT(pFunctionDispatch);
		static LONG g_nCounter = 0;
		CString sText;
		sText.Format(_T("%d"), ++g_nCounter);
		CComVariant vText(sText), vResult;
		ATLENSURE_SUCCEEDED(pFunctionDispatch.Invoke1((DISPID) 0, &vText, &vResult));
		ATLTRACE(_T("vResult.vt 0x%X\n"), vResult.vt);
	}
	static DWORD STDMETHODCALLTYPE ThreadProc(IStream* pStream)
	{
		ATLASSERT(pStream);
		ATLVERIFY(SUCCEEDED(CoInitializeEx(NULL, COINIT_MULTITHREADED)));
		_ATLTRY
		{
			CComPtr<IDispatch> pFunctionDispatch;
			ATLENSURE_SUCCEEDED(CoGetInterfaceAndReleaseStream(pStream, __uuidof(IDispatch), (VOID**) &pFunctionDispatch));
			ATLASSERT(pFunctionDispatch);
			Call(pFunctionDispatch);
			Call(pFunctionDispatch);
		}
		_ATLCATCHALL()
		{
		}
		CoUninitialize();
		return 0;
	}

// IFoo
	STDMETHOD(Bar)(IDispatch* pFunction)
	{
		ATLTRACE(_T("pFunction 0x%p\n"), pFunction);
		_ATLTRY
		{
			CComPtr<IDispatch>& pFunctionDispatch = reinterpret_cast<CComPtr<IDispatch>&>(pFunction);
			Call(pFunctionDispatch);
			Call(pFunctionDispatch);
			CComPtr<IStream> pStream;
			ATLENSURE_SUCCEEDED(CoMarshalInterThreadInterfaceInStream(__uuidof(IDispatch), pFunctionDispatch, &pStream));
			CHandle Thread;
			Thread.Attach(AtlCreateThread<IStream>(&CFoo::ThreadProc, pStream.Detach()));
			ATLENSURE_THROW(Thread, AtlHresultFromLastError());
		}
		_ATLCATCH(Exception)
		{
			return Exception;
		}
		return S_OK;
	}
};

OBJECT_ENTRY_AUTO(__uuidof(Foo), CFoo)
