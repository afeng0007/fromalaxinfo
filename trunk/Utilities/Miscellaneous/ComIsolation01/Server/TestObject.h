////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2015
// Created by Roman Ryltsov roman@alax.info
// 
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#pragma once

#include "resource.h"       // main symbols
#include "Server_i.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
	#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;

// CTestObject

class ATL_NO_VTABLE CTestObject :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CTestObject, &CLSID_TestObject>,
	public IDispatchImpl<ITestObject>
{
public:

DECLARE_REGISTRY_RESOURCEID(IDR_TESTOBJECT)

BEGIN_COM_MAP(CTestObject)
	COM_INTERFACE_ENTRY(ITestObject)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

public:
// CTestObject

// ITestObject
	STDMETHOD(TestMethod)(BSTR* psPath, LONG* pnBitness)
	{
		ATLASSERT(psPath && pnBitness);
		TCHAR pszPath[MAX_PATH] = { 0 };
		ATLVERIFY(GetModuleFileName(_AtlBaseModule.GetModuleInstance(), pszPath, _countof(pszPath)));
		*psPath = CComBSTR(pszPath).Detach();
		#if defined(_WIN64)
			*pnBitness = 64;
		#else
			*pnBitness = 32;
		#endif
		return S_OK;
	}
};

OBJECT_ENTRY_AUTO(__uuidof(TestObject), CTestObject)
