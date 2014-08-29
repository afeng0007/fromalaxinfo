// Foo.h : Declaration of the CFoo

#pragma once

#include "resource.h"       // main symbols
#include "Module_i.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
	#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;

///////////////////////////////////////////////////////////
// CFooClassFactory

class ATL_NO_VTABLE CFooClassFactory :
	public CComClassFactory
{
public:
// CFooClassFactory
	CFooClassFactory()
	{
		ATLTRACE(atlTraceRefcount, 2, _T("%hs\n"), __FUNCTION__);
	}
	~CFooClassFactory()
	{
		ATLTRACE(atlTraceRefcount, 2, _T("%hs\n"), __FUNCTION__);
	}

// CComObjectRootEx
	ULONG InternalAddRef()
	{
		const ULONG nResult = __super::InternalAddRef();
		ATLTRACE(atlTraceRefcount, 2, _T("%hs: After AddRef, nResult %d\n"), __FUNCTION__, nResult);
		return nResult;
	}
	ULONG InternalRelease()
	{
		const ULONG nResult = __super::InternalRelease();
		ATLTRACE(atlTraceRefcount, 2, _T("%hs: After Release, nResult %d\n"), __FUNCTION__, nResult);
		return nResult;
	}

// IClassFactory
	STDMETHOD(CreateInstance)(_Inout_opt_ LPUNKNOWN pUnkOuter,  _In_ REFIID riid, _COM_Outptr_ void** ppvObj)
	{
		ATLTRACE(atlTraceRefcount, 2, _T("%hs, m_nLockCnt %d\n"), __FUNCTION__, _pAtlModule->m_nLockCnt);
		const HRESULT nResult = __super::CreateInstance(pUnkOuter,  riid, ppvObj);
		ATLTRACE(atlTraceRefcount, 2, _T("%hs, nResult 0x%08X, m_nLockCnt %d\n"), __FUNCTION__, nResult, _pAtlModule->m_nLockCnt);
		return nResult;
	}
	
	STDMETHOD(LockServer)(_In_ BOOL fLock)
	{
		ATLTRACE(atlTraceRefcount, 2, _T("%hs, m_nLockCnt %d\n"), __FUNCTION__, _pAtlModule->m_nLockCnt);
		const HRESULT nResult = __super::LockServer(fLock);
		ATLTRACE(atlTraceRefcount, 2, _T("%hs, nResult 0x%08X, m_nLockCnt %d\n"), __FUNCTION__, nResult, _pAtlModule->m_nLockCnt);
		return nResult;
	}
};

///////////////////////////////////////////////////////////
// CFoo

class ATL_NO_VTABLE CFoo :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CFoo, &CLSID_Foo>,
	//public IExternalConnectionImpl<IFoo>,
	public IDispatchImpl<IFoo>
{
public:

DECLARE_REGISTRY_RESOURCEID(IDR_FOO)

DECLARE_CLASSFACTORY_EX(CFooClassFactory)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CFoo)
	COM_INTERFACE_ENTRY(IFoo)
	COM_INTERFACE_ENTRY(IDispatch)
	//COM_INTERFACE_ENTRY(IExternalConnection)
END_COM_MAP()

public:
// CFoo
	CFoo()
	{
		ATLTRACE(atlTraceRefcount, 2, _T("%hs, m_nLockCnt %d\n"), __FUNCTION__, _pAtlModule->m_nLockCnt);
	}
	~CFoo()
	{
		ATLTRACE(atlTraceRefcount, 2, _T("%hs, m_nLockCnt %d\n"), __FUNCTION__, _pAtlModule->m_nLockCnt);
	}
	//HRESULT FinalConstruct()
	//{
	//	ATLTRACE(atlTraceRefcount, 2, _T("%hs, m_nLockCnt %d\n"), __FUNCTION__, _pAtlModule->m_nLockCnt);
	//	return S_OK;
	//}
	//VOID FinalRelease()
	//{
	//	ATLTRACE(atlTraceRefcount, 2, _T("%hs, m_nLockCnt %d\n"), __FUNCTION__, _pAtlModule->m_nLockCnt);
	//}

// CComObjectRootEx
	ULONG InternalAddRef()
	{
		const ULONG nResult = __super::InternalAddRef();
		ATLTRACE(atlTraceRefcount, 2, _T("%hs: After AddRef, nResult %d\n"), __FUNCTION__, nResult);
		return nResult;
	}
	ULONG InternalRelease()
	{
		const ULONG nResult = __super::InternalRelease();
		ATLTRACE(atlTraceRefcount, 2, _T("%hs: After Release, nResult %d\n"), __FUNCTION__, nResult);
		return nResult;
	}
};

OBJECT_ENTRY_AUTO(__uuidof(Foo), CFoo)
