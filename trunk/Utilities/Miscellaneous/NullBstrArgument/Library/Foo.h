////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2013
// Created by Roman Ryltsov roman@alax.info

#pragma once

#include "resource.h"
#include <atlstr.h>
#include "Library_i.h"

using namespace ATL;

class ATL_NO_VTABLE CFoo :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CFoo, &CLSID_Foo>,
	public IDispatchImpl<IFoo, &IID_IFoo, &LIBID_LibraryLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:

DECLARE_REGISTRY_RESOURCEID(IDR_FOO)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CFoo)
	COM_INTERFACE_ENTRY(IFoo)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

public:
// IFoo
	STDMETHOD(Bar1)(BSTR* psValue) throw()
	{
		ATLTRACE("psValue 0x%p\n", psValue);
		if(psValue)
			*psValue = CComBSTR(_T("Bar1")).Detach();
		return S_OK;
	}
	STDMETHOD(Bar2)(BSTR* psValue) throw()
	{
		ATLTRACE("psValue 0x%p\n", psValue);
		if(psValue)
			*psValue = CComBSTR(_T("Bar2")).Detach();
		return S_OK;
	}
};

OBJECT_ENTRY_AUTO(__uuidof(Foo), CFoo)
