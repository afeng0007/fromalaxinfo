////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

#include "VbsCallback_i.h"
#include "_IThirdEvents_CP.h"

////////////////////////////////////////////////////////////
// CThird

class ATL_NO_VTABLE CThird :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CThird, &CLSID_Third>,
	public IConnectionPointContainerImpl<CThird>,
	public CProxy_IThirdEvents<CThird>,
	public IDispatchImpl<IThird>
{
public:

DECLARE_REGISTRY_RESOURCEID(IDR_THIRD)

BEGIN_COM_MAP(CThird)
	COM_INTERFACE_ENTRY(IThird)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
END_COM_MAP()

BEGIN_CONNECTION_POINT_MAP(CThird)
	CONNECTION_POINT_ENTRY(__uuidof(_IThirdEvents))
END_CONNECTION_POINT_MAP()

public:
// CThird

// IThird
	STDMETHOD(OuterDo)(LONG nA, LONG* pnB) throw()
	{
		ATLASSERT(pnB);
		CComVariant vB(nA + 1);
		ATLVERIFY(SUCCEEDED(Fire_InnerDo(&vB)));
		ATLASSERT(vB.vt == VT_I4);
		*pnB = vB.lVal;
		return S_OK;
	}
};

OBJECT_ENTRY_AUTO(__uuidof(Third), CThird)
