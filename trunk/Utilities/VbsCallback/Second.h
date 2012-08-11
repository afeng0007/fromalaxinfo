////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

#include "VbsCallback_i.h"

////////////////////////////////////////////////////////////
// CSecond

class ATL_NO_VTABLE CSecond :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CSecond, &CLSID_Second>,
	public IDispatchImpl<ISecond>
{
public:

DECLARE_REGISTRY_RESOURCEID(IDR_SECOND)

BEGIN_COM_MAP(CSecond)
	COM_INTERFACE_ENTRY(ISecond)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

public:
// CSecond

// ISecond
	STDMETHOD(OuterDo)(LONG nA, IDispatch* pSite, LONG* pnB) throw()
	{
		ATLASSERT(pSite && pnB);
		_ATLTRY
		{
			CComVariant vB(nA + 1);
			DISPPARAMS Parameters;
			ZeroMemory(&Parameters, sizeof Parameters);
			Parameters.rgvarg = &vB;
		    Parameters.cArgs = 1;
			CComVariant vResult;
			ATLENSURE_SUCCEEDED(pSite->Invoke(0, IID_NULL, 0, DISPATCH_METHOD, &Parameters, &vResult, NULL, NULL));
			ATLASSERT(vResult.vt == VT_I4);
			*pnB = vResult.lVal;
		}
		_ATLCATCH(Exception)
		{
			return Exception;
		}
		return S_OK;
	}
};

OBJECT_ENTRY_AUTO(__uuidof(Second), CSecond)
