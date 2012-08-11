////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

#include "VbsCallback_i.h"

////////////////////////////////////////////////////////////
// CFirst

class ATL_NO_VTABLE CFirst :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CFirst, &CLSID_First>,
	public IDispatchImpl<IFirst>
{
public:

DECLARE_REGISTRY_RESOURCEID(IDR_FIRST)

BEGIN_COM_MAP(CFirst)
	COM_INTERFACE_ENTRY(IFirst)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

public:
// CFirst

// IFirst
	//STDMETHOD(OuterDo)(LONG nA, IFirstSite* pSite, LONG* pnB) throw()
	//{
	//	ATLASSERT(pSite && pnB);
	//	ATLVERIFY(SUCCEEDED(pSite->InnerDo(nA + 1, pnB)));
	//	return S_OK;
	//}
	STDMETHOD(OuterDo)(LONG nA, IDispatch* pSite, LONG* pnB) throw()
	{
		ATLASSERT(pSite && pnB);
		_ATLTRY
		{
			CComVariant vB(nA + 1);
			const CComQIPtr<IDispatchEx> pDispatchEx = pSite;
			ATLENSURE_THROW(pDispatchEx, E_NOINTERFACE);
			#if defined(_DEBUG)
			{
				DISPID nIdentifier = DISPID_STARTENUM;
				for(; ; )
				{
					if(pDispatchEx->GetNextDispID(fdexEnumAll, nIdentifier, &nIdentifier) != S_OK)
						break;
					CComBSTR sName;
					ATLVERIFY(SUCCEEDED(pDispatchEx->GetMemberName(nIdentifier, &sName)));
					ATLTRACE("nIdentifier %d, sName %s\n", nIdentifier, CString(sName));
				}
			}
			#endif // defined(_DEBUG)
			DISPID nIdentifier;
			ATLENSURE_SUCCEEDED(pDispatchEx->GetDispID(CComBSTR(L"IFirstSite_InnerDo"), 0, &nIdentifier));
			DISPPARAMS Parameters;
			ZeroMemory(&Parameters, sizeof Parameters);
			Parameters.rgvarg = &vB;
		    Parameters.cArgs = 1;
			CComVariant vResult;
			ATLENSURE_SUCCEEDED(pDispatchEx->InvokeEx(nIdentifier, 0, DISPATCH_METHOD, &Parameters, &vResult, NULL, NULL));
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

OBJECT_ENTRY_AUTO(__uuidof(First), CFirst)
