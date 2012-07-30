////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

#include <atlstr.h>
#include "resource.h"       // main symbols
#include "VbsEvents_i.h"
#include "_IFooEvents_CP.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;

////////////////////////////////////////////////////////////
// CFoo

class ATL_NO_VTABLE CFoo :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CFoo, &CLSID_Foo>,
	public IConnectionPointContainerImpl<CFoo>,
	public CProxy_IFooEvents<CFoo>,
	public IDispatchImpl<IFoo, &IID_IFoo, &LIBID_VbsEventsLib, 1, 0>,
	public IProvideClassInfo2Impl<&__uuidof(Foo), &__uuidof(_IFooEvents)>
{
public:

DECLARE_REGISTRY_RESOURCEID(IDR_FOO)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CFoo)
	COM_INTERFACE_ENTRY(IFoo)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
END_COM_MAP()

BEGIN_CONNECTION_POINT_MAP(CFoo)
	CONNECTION_POINT_ENTRY(__uuidof(_IFooEvents))
END_CONNECTION_POINT_MAP()

public:
// CFoo
	CFoo()
	{
		ATLTRACE(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}

// IFoo
	STDMETHOD(Method)(BSTR sText) throw()
	{
		ATLTRACE(atlTraceCOM, 4, _T("sText \"%s\"\n"), CString(sText));
		ATLVERIFY(SUCCEEDED(Fire_Event(sText)));
		return S_OK;
	}
};

OBJECT_ENTRY_AUTO(__uuidof(Foo), CFoo)
