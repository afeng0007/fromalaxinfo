////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

#include <atlsafe.h>
#include "resource.h"       // main symbols
#include "Server_i.h"

using namespace ATL;

////////////////////////////////////////////////////////////
// CFoo

class ATL_NO_VTABLE CFoo :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CFoo, &CLSID_Foo>,
	public IDispatchImpl<IFoo>
{
public:

DECLARE_REGISTRY_RESOURCEID(IDR_FOO)

BEGIN_COM_MAP(CFoo)
	COM_INTERFACE_ENTRY(IFoo)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

DECLARE_PROTECT_FINAL_CONSTRUCT()

public:
// CFoo

// IFoo
	STDMETHOD(Bar)(VARIANT vInput, VARIANT* pvOutput) throw()
	{
		_ATLTRY
		{
			ATLENSURE_THROW(vInput.vt == (VT_ARRAY | VT_UI1), E_INVALIDARG);
			CComSafeArray<BYTE> pInputArray(vInput.parray);
			ATLASSERT(pInputArray.GetDimensions() == 1);
			const ULONG nCount = pInputArray.GetCount();
			CComSafeArray<BYTE> pOutputArray;
			ATLENSURE_SUCCEEDED(pOutputArray.Create(nCount));
			for(ULONG nIndex = 0; nIndex < nCount; nIndex++)
				pOutputArray[(INT) nIndex] = pInputArray[(INT) ((nCount - 1) - nIndex)];
			ATLASSERT(pvOutput);
			VariantInit(pvOutput);
			CComVariant vOutput(pOutputArray.Detach());
			ATLVERIFY(SUCCEEDED(vOutput.Detach(pvOutput)));
		}
		_ATLCATCH(Exception)
		{
			return Exception;
		}
		return S_OK;
	}
};

OBJECT_ENTRY_AUTO(__uuidof(Foo), CFoo)
