////////////////////////////////////////////////////////////
// Template class library; extends Widnows SDK, ATL, WTL
// 
// Copyright (C) Roman Ryltsov, 2006-2015
// Created by Roman Ryltsov roman@alax.info
//
// A permission to re-use this source code is granted as long as copyright notice and 
// reference to source website http://alax.info is retained.

#pragma once

#include <windows.h>
#include <mmsystem.h> // CTimedEvent* is compatible with MMSystem API
#include <atlsync.h>
#include <atlcoll.h>
#include "roatlbase.h"
#include "roatlcollections.h"

////////////////////////////////////////////////////////////
// Version

#if !defined(_WIN32_WINNT_WIN7)
	#define _WIN32_WINNT_WIN7 0x0601
#endif // !defined(_WIN32_WINNT_WIN7)

#if !defined(_versionhelpers_H_INCLUDED_)

inline bool IsWindowsVistaOrGreater()
{
	OSVERSIONINFOEX VersionInformation = { sizeof VersionInformation };
	GetVersionEx((OSVERSIONINFO*) &VersionInformation);
	return VersionInformation.dwMajorVersion >= 6; // Windows Vista, Windows Server 2008
}

#endif // !defined(_versionhelpers_H_INCLUDED_)

////////////////////////////////////////////////////////////
// _Z

#define _Z2_HRESULT(x)  _Z3(atlTraceGeneral,                 2, _T("%hs 0x%08X %s\n"), #x, x, FAILED(x) ? (LPCTSTR) AtlFormatSystemMessage(x).TrimRight(_T("\t\n\r .")) : _T(""))
#define _Z3_HRESULT(x)  _Z3(atlTraceGeneral,                 3, _T("%hs 0x%08X %s\n"), #x, x, FAILED(x) ? (LPCTSTR) AtlFormatSystemMessage(x).TrimRight(_T("\t\n\r .")) : _T(""))
#define _Z4_HRESULT(x)  _Z4(atlTraceGeneral,                 4, _T("%hs 0x%08X %s\n"), #x, x, FAILED(x) ? (LPCTSTR) AtlFormatSystemMessage(x).TrimRight(_T("\t\n\r .")) : _T(""))
#define _Z45_HRESULT(x) _Z4(atlTraceGeneral, FAILED(x) ? 4 : 5, _T("%hs 0x%08X %s\n"), #x, x, FAILED(x) ? (LPCTSTR) AtlFormatSystemMessage(x).TrimRight(_T("\t\n\r .")) : _T(""))
#define _Z5_HRESULT(x)  _Z5(atlTraceGeneral,                 5, _T("%hs 0x%08X %s\n"), #x, x, FAILED(x) ? (LPCTSTR) AtlFormatSystemMessage(x).TrimRight(_T("\t\n\r .")) : _T(""))
#define _Z_HRESULT(x)   _Z4_HRESULT(x)

////////////////////////////////////////////////////////////
// CSingleThreadedApartment, CMultiThreadedApartment

class CSingleThreadedApartment
{
public:
// CSingleThreadedApartment
	CSingleThreadedApartment() throw()
	{
		_V(CoInitialize(NULL));
	}
	~CSingleThreadedApartment() throw()
	{
		CoUninitialize();
	}
};

#if (_WIN32_WINNT >= 0x0400 ) || defined(_WIN32_DCOM)

class CMultiThreadedApartment
{
public:
// CMultiThreadedApartment
	CMultiThreadedApartment() throw()
	{
		_V(CoInitializeEx(NULL, COINIT_MULTITHREADED));
	}
	~CMultiThreadedApartment() throw()
	{
		CoUninitialize();
	}
};
inline BOOL IsSingleThreadedApartment() throw()
{
	const HRESULT nResult = CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);
	_A(nResult != S_OK);
	if(SUCCEEDED(nResult))
		CoUninitialize();
	return SUCCEEDED(nResult);
}
inline BOOL IsMultiThreadedApartment() throw()
{
	const HRESULT nResult = CoInitializeEx(NULL, COINIT_MULTITHREADED);
	if(SUCCEEDED(nResult))
		CoUninitialize();
	// NOTE: S_OK here means we are on implcit MTA 
	return SUCCEEDED(nResult);
}

#endif // (_WIN32_WINNT >= 0x0400 ) || defined(_WIN32_DCOM)

////////////////////////////////////////////////////////////
// DECLARE_QI_TRACE, DECLARE_REFCOUNT_TRACE

#if _TRACE

inline BOOL TryFormatInterfaceName(const IID& Identifier, CString& sName)
{
	_A(sName.IsEmpty());
	static const CEnumerationNameT<IID> g_pMap[] = 
	{
		#define A(x) { __uuidof(x), #x },
		A(IActivationFilter)
		A(IMarshal)
		//A(IProxyManager)
		A(IStdMarshalInfo)
		A(IExternalConnection)
		//A(IdentityUnmarshal)
		A(IMultiQI)
		A(IInternalUnknown)
		A(IFastRundown)
		A(INoMarshal)
		A(IDataObject)
		A(IAgileObject)
		A(IClassFactory)
		A(IClassFactory2)
		#undef A
	};
	sName = FormatEnumerationT(g_pMap, Identifier, TRUE);
	return !sName.IsEmpty();
}

#define DECLARE_QI_TRACE(_Class) \
	static HRESULT WINAPI InternalQueryInterface(VOID* pThis, const _ATL_INTMAP_ENTRY* pEntries, REFIID InterfaceIdentifier, void** ppvObject) throw()\
	{\
		const HRESULT nResult = CComObjectRootBase::InternalQueryInterface(pThis, pEntries, InterfaceIdentifier, ppvObject); \
		OLECHAR pszInterfaceIdentifier[64] = { 0 }; \
		_V(StringFromGUID2(InterfaceIdentifier, pszInterfaceIdentifier, DIM(pszInterfaceIdentifier))); \
		::CString sInterfaceName; \
		if(!TryFormatInterfaceName(InterfaceIdentifier, sInterfaceName)) \
			if(!_RegKeyHelper::QueryStringValue(HKEY_CLASSES_ROOT, AtlFormatString(_T("Interface\\%ls"), pszInterfaceIdentifier), NULL, sInterfaceName)) \
				sInterfaceName = ::CString(pszInterfaceIdentifier); \
		ATLTRACE(atlTraceQI, SUCCEEDED(nResult) ? 4 : 3, _T("0x%p, Interface %s, Result 0x%08X\n"), pThis, sInterfaceName, nResult); \
		return nResult;\
	}

#define DECLARE_REFCOUNT_TRACE(_Class) \
	ULONG InternalAddRef() throw() \
	{ \
		ULONG nCount = CComObjectRootEx<_ThreadModel>::InternalAddRef(); \
		ATLTRACE(atlTraceRefcount, 4, _T("this 0x%p, %d (+1) references\n"), _FILE, _LINE, _FUNCTION, this, nCount); \
		return nCount; \
	} \
	ULONG InternalRelease() throw() \
	{ \
		ULONG nCount = CComObjectRootEx<_ThreadModel>::InternalRelease(); \
		ATLTRACE(atlTraceRefcount, 4, _T("this 0x%p, %d (-1) references\n"), _FILE, _LINE, _FUNCTION, this, nCount); \
		return nCount; \
	}

#else

#define DECLARE_QI_TRACE(_Class)	
#define DECLARE_REFCOUNT_TRACE(_Class)	

#endif // _TRACE

////////////////////////////////////////////////////////////
// CObjectPtrT, CObjectPtr, CWeakObjectPtr

template <typename _Object, BOOL t_bStrong = TRUE, template <typename _Class> class _ComObject = CComObject>
class CObjectPtrT
{
public:
	_ComObject<_Object>* m_pObject;

	VOID Assign(_Object* pValue) throw()
	{
		Attach(pValue);
		if(t_bStrong)
			if(m_pObject)
				m_pObject->AddRef();
	}

public:
// CObjectPtrT
	CObjectPtrT() throw() :
		m_pObject(NULL)
	{
	}
	CObjectPtrT(const CObjectPtrT& pValue) throw() :
		m_pObject(NULL)
	{
		*this = pValue;
	}
	template <BOOL t_bValueStrong>
	CObjectPtrT(const CObjectPtrT<_Object, t_bValueStrong>& pValue) throw() :
		m_pObject(NULL)
	{
		*this = pValue;
	}
	CObjectPtrT(_Object* pValue) throw() :
		m_pObject(NULL)
	{
		*this = pValue;
	}
	~CObjectPtrT() throw()
	{
		Attach(NULL);
	}
	operator _Object* () const throw()
	{
		return m_pObject;
	}
	CObjectPtrT& operator = (const CObjectPtrT& pValue) throw()
	{
		Assign(pValue.m_pObject);
		return *this;
	}
	template <BOOL t_bValueStrong>
	CObjectPtrT& operator = (const CObjectPtrT<_Object, t_bValueStrong>& pValue) throw()
	{
		Assign(pValue.m_pObject);
		return *this;
	}
	CObjectPtrT& operator = (_Object* pValue) throw()
	{
		Assign(pValue);
		return *this;
	}
	_Object** operator & () throw()
	{
		ATLASSERT(!m_pObject);
		return (_Object**) &m_pObject;
	}
	_Object* operator -> () const throw()
	{
		ATLASSERT(m_pObject);
		return m_pObject;
	}
	BOOL operator == (const CObjectPtrT& pValue) const throw()
	{
		return m_pObject == pValue.m_pObject;
	}
	template <BOOL t_bValueStrong>
	BOOL operator == (const CObjectPtrT<_Object, t_bValueStrong>& pValue) const throw()
	{
		return m_pObject == pValue.m_pObject;
	}
	BOOL operator == (_Object* pValue) const throw()
	{
		return m_pObject == pValue;
	}
	BOOL operator != (const CObjectPtrT& pValue) const throw()
	{
		return !(*this == pValue);
	}
	template <BOOL t_bValueStrong>
	BOOL operator != (const CObjectPtrT<_Object, t_bValueStrong>& pValue) const throw()
	{
		return !(*this == pValue);
	}
	BOOL operator != (_Object* pValue) const throw()
	{
		return !(*this == pValue);
	}
	_Object* Attach(_Object* pObject) throw()
	{
		if(t_bStrong)
			if(m_pObject)
				m_pObject->Release();
		m_pObject = static_cast<_ComObject<_Object>*>(pObject);
		return pObject;
	}
	_Object* Detach() throw()
	{
		_Object* pObject = m_pObject;
		m_pObject = NULL;
		return pObject;
	}
	VOID Swap(_Object** ppObject) throw()
	{
		ATLASSERT(ppObject);
		_Object* pObject = m_pObject;
		m_pObject = static_cast<_ComObject<_Object>*>(*ppObject);
		*ppObject = pObject;
	}
	template <BOOL t_bStrong>
	VOID Swap(CObjectPtrT<_Object, t_bStrong>& pObject) throw()
	{
		Swap((_Object**) &pObject.m_pObject);
	}
	CObjectPtrT& Construct()
	{
		ATLASSERT(!m_pObject);
		ATLCHECK(_ComObject<_Object>::CreateInstance(&m_pObject));
		ATLASSERT(m_pObject);
		m_pObject->m_dwRef++;
		return *this;
	}
	VOID Release() throw()
	{
		Attach(NULL);
	}
};

template <typename _Object>
class CObjectPtr :
	public CObjectPtrT<_Object, TRUE>
{
public:
// CObjectPtr
	CObjectPtr() throw()
	{
	}
	CObjectPtr(const CObjectPtr& pValue) throw() :
		CObjectPtrT<_Object, TRUE>(pValue)
	{
	}
	template <BOOL t_bValueStrong>
	CObjectPtr(const CObjectPtrT<_Object, t_bValueStrong>& pValue) throw() :
		CObjectPtrT<_Object, TRUE>(pValue)
	{
	}
	CObjectPtr(_Object* pValue) throw() :
		CObjectPtrT<_Object, TRUE>(pValue)
	{
	}
	CObjectPtr& operator = (const CObjectPtr& pValue) throw()
	{
		__super::operator = (pValue);
		return *this;
	}
	template <BOOL t_bValueStrong>
	CObjectPtr& operator = (const CObjectPtrT<_Object, t_bValueStrong>& pValue) throw()
	{
		__super::operator = (pValue);
		return *this;
	}
	CObjectPtr& operator = (_Object* pValue) throw()
	{
		__super::operator = (pValue);
		return *this;
	}
};

template <typename _Object>
class CWeakObjectPtr :
	public CObjectPtrT<_Object, FALSE>
{
public:
// CWeakObjectPtr
	CWeakObjectPtr() throw()
	{
	}
	CWeakObjectPtr(const CWeakObjectPtr& pValue) throw() :
		CObjectPtrT<_Object, FALSE>(pValue)
	{
	}
	template <BOOL t_bValueStrong>
	CWeakObjectPtr(const CObjectPtrT<_Object, t_bValueStrong>& pValue) throw() :
		CObjectPtrT<_Object, FALSE>(pValue)
	{
	}
	CWeakObjectPtr(_Object* pValue) throw() :
		CObjectPtrT<_Object, FALSE>(pValue)
	{
	}
	CWeakObjectPtr& operator = (const CWeakObjectPtr& pValue) throw()
	{
		__super::operator = (pValue);
		return *this;
	}
	template <BOOL t_bValueStrong>
	CWeakObjectPtr& operator = (const CObjectPtrT<_Object, t_bValueStrong>& pValue) throw()
	{
		__super::operator = (pValue);
		return *this;
	}
	CWeakObjectPtr& operator = (_Object* pValue) throw()
	{
		__super::operator = (pValue);
		return *this;
	}
};

////////////////////////////////////////////////////////////
// CCachedObjectPtr

template <typename _Object>
class CCachedObjectPtr :
	public CObjectPtrT<_Object, TRUE, CComObjectCached>
{
public:
// CCachedHolder
	CCachedObjectPtr() throw()
	{
	}
	CCachedObjectPtr(_Object* pObject) throw() :
		CObjectPtrT<_Object, TRUE, CComObjectCached>(pObject)
	{
	}
};

////////////////////////////////////////////////////////////
// CLocalObjectPtr

template <typename _Object>
class CLocalObjectPtr
{
public:
	CComObject<_Object> m_Instance;

public:
// CObjectPtrT
	CLocalObjectPtr()
	{
		m_Instance.SetVoid(NULL);
		m_Instance.InternalFinalConstructAddRef();
		#if _MSC_VER >= 1400
			ATLVERIFY(SUCCEEDED(m_Instance._AtlInitialConstruct()));
		#endif // _MSC_VER >= 1400
		ATLVERIFY(SUCCEEDED(m_Instance.FinalConstruct()));
		ATLVERIFY(SUCCEEDED(m_Instance._AtlFinalConstruct()));
		m_Instance.InternalFinalConstructRelease();
		m_Instance.InternalAddRef();
	}
	~CLocalObjectPtr()
	{
	}
	operator const _Object* () const
	{
		return &m_Instance;
	}
	operator _Object* ()
	{
		return &m_Instance;
	}
	_Object* operator -> ()
	{
		return &m_Instance;
	}
};

////////////////////////////////////////////////////////////
// CCrossThreadPtr

template <typename _Interface, const IID* t_pInterfaceIdentifier = &__uuidof(_Interface)>
class CCrossThreadPtr
{
public:
	mutable CComAutoCriticalSection m_DataCriticalSection;
	IStream* m_pStream;

public:
	CCrossThreadPtr() throw() :
		m_pStream(NULL)
	{
	}
	~CCrossThreadPtr() throw()
	{
		_ATLTRY
		{
			Detach();
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
		}
	}
	VOID Attach(_Interface* pObject)
	{
		CComCritSecLock<CComAutoCriticalSection> DataLock(m_DataCriticalSection);
		Detach();
		if(pObject)
			__C(CoMarshalInterThreadInterfaceInStream(*t_pInterfaceIdentifier, pObject, &m_pStream));
	}
	CComPtr<_Interface> Detach()
	{
		CComPtr<_Interface> pObject;
		CComCritSecLock<CComAutoCriticalSection> DataLock(m_DataCriticalSection);
		if(m_pStream)
		{
			__C(CoGetInterfaceAndReleaseStream(m_pStream, *t_pInterfaceIdentifier, (VOID**) &pObject));
			m_pStream = NULL;
		}
		return pObject;
	}
	operator BOOL () const throw()
	{
		CComCritSecLock<CComAutoCriticalSection> DataLock(m_DataCriticalSection);
		return (m_pStream != NULL);
	}
	VOID operator = (_Interface* pObject)
	{
		Attach(pObject);
	}
};

////////////////////////////////////////////////////////////
// CConnectionPointConnectionT, CConnectionPointConnection

template <const IID* t_pInterfaceIdentifier>
class CConnectionPointConnectionT
{
private:
	BOOL m_bAdvised;
	CComPtr<IConnectionPointContainer> m_pConnectionPointContainer;
	DWORD m_nCookie;

public:
// CConnectionPointConnectionT
	CConnectionPointConnectionT() throw() :
		m_bAdvised(FALSE)
	{
	}
	~CConnectionPointConnectionT() throw()
	{
		if(m_bAdvised)
			Unadvise();
	}
	BOOL IsAdvised() const throw()
	{
		return m_bAdvised;
	}
	const CComPtr<IConnectionPointContainer>& GetConnectionPointContainer() const throw()
	{
		return m_pConnectionPointContainer;
	}
	VOID Advise(IConnectionPointContainer* pConnectionPointContainer, IUnknown* pSink)
	{
		_A(!m_bAdvised);
		__D(pConnectionPointContainer, E_NOINTERFACE);
		__C(AtlAdvise(pConnectionPointContainer, pSink, *t_pInterfaceIdentifier, &m_nCookie));
		m_bAdvised = TRUE;
		m_pConnectionPointContainer = pConnectionPointContainer;
	}
	VOID Advise(IUnknown* pConnectionPointContainerUnknown, IUnknown* pSink)
	{
		Advise(CComQIPtr<IConnectionPointContainer>(pConnectionPointContainerUnknown), pSink);
	}
	BOOL Unadvise() throw()
	{
		if(!m_bAdvised)
			return FALSE;
		HRESULT nResult = AtlUnadvise(m_pConnectionPointContainer, *t_pInterfaceIdentifier, m_nCookie);
		if(FAILED(nResult))
			ATLTRACE(atlTraceCOM, 2, _T("Failed to unadvise connection point, nResult 0x%08X\n"), nResult);
		m_bAdvised = FALSE;
		m_pConnectionPointContainer = NULL;
		return TRUE;
	}
	CConnectionPointConnectionT& operator = (CConnectionPointConnectionT& ConnectionPointConnection) throw()
	{
		// NOTE: Transfer connection
		Unadvise();
		m_bAdvised = ConnectionPointConnection.m_bAdvised;
		m_pConnectionPointContainer = ConnectionPointConnection.m_pConnectionPointContainer;
		m_nCookie = ConnectionPointConnection.m_nCookie;
		ConnectionPointConnection.m_bAdvised = FALSE;
		ConnectionPointConnection.m_pConnectionPointContainer = NULL;
		return *this;
	}
};

////////////////////////////////////////////////////////////
// _ComDynamicUnkArrayHelper

class _ComDynamicUnkArrayHelper
{
public:
	template <typename _IConnectionPointImpl>
	static VOID Fix(_IConnectionPointImpl* pInstance, UINT nSize = _DEFAULT_VECTORLENGTH)
	{
		_A(pInstance->m_vec.GetSize() == 0);
		DWORD nCookie1 = pInstance->m_vec.Add((IUnknown*) 1);
		DWORD nCookie2 = pInstance->m_vec.Add((IUnknown*) 2);
		_A(nCookie1 && nCookie2);
		_W(pInstance->m_vec.Remove(nCookie2));
		_W(pInstance->m_vec.Remove(nCookie1));
		_A(pInstance->m_vec.GetSize() == _DEFAULT_VECTORLENGTH);
	}
};

#define FIX_CONNECTIONPOINT(Class, Interface)	_ComDynamicUnkArrayHelper::Fix((IConnectionPointImpl<Class, &Interface>*) this)

////////////////////////////////////////////////////////////
// CActiveObjectT, CFakeActiveObjectHandler, CDefaultActiveObjectHandler, CRunningObjectActiveObjectHandler

class CFakeActiveObjectHandler
{
public:
// CFakeActiveObjectHandler
	static DWORD RegisterActiveObject(IUnknown* pUnknown, REFCLSID ClassIdentifier, DWORD nFlags)
	{
		pUnknown; ClassIdentifier; nFlags;
		return 1;
	}
	static VOID RevokeActiveObject(DWORD nCookie)
	{
		_A(nCookie == 1);
	}
};

class CDefaultActiveObjectHandler
{
public:
// CDefaultActiveObjectHandler
	static DWORD RegisterActiveObject(IUnknown* pUnknown, REFCLSID ClassIdentifier, DWORD nFlags)
	{
		DWORD nCookie;
		__C(::RegisterActiveObject(pUnknown, ClassIdentifier, nFlags, &nCookie));
		return nCookie;
	}
	static VOID RevokeActiveObject(DWORD nCookie)
	{
		__C(::RevokeActiveObject(nCookie, NULL));
	}
};

class CRunningObjectActiveObjectHandler
{
public:
// CRunningObjectActiveObjectHandler
	static CStringW StringFromIdentifier(const GUID& Identifier)
	{
		WCHAR pszIdentifierString[64] = { 0 };
		_W(StringFromGUID2(Identifier, pszIdentifierString, _countof(pszIdentifierString)));
		return pszIdentifierString;
	}
	static DWORD RegisterActiveObject(IUnknown* pUnknown, REFCLSID ClassIdentifier, DWORD nFlags)
	{
		// NOTE: Direct registration into ROT allows us to specify ROTFLAGS_ALLOWANYCLIENT flag and
		//       allow interaction between server *service* and client application
		_A(nFlags == ACTIVEOBJECT_STRONG);
		CComPtr<IRunningObjectTable> pRunningObjectTable;
		__C(GetRunningObjectTable(0, &pRunningObjectTable));
		CComPtr<IMoniker> pMoniker;
		__C(CreateItemMoniker(OLESTR("!"), StringFromIdentifier(ClassIdentifier), &pMoniker));
		DWORD nCookie;
		__C(pRunningObjectTable->Register(ROTFLAGS_REGISTRATIONKEEPSALIVE | ROTFLAGS_ALLOWANYCLIENT, pUnknown, pMoniker, &nCookie));
		return nCookie;
	}
	static VOID RevokeActiveObject(DWORD nCookie)
	{
		CComPtr<IRunningObjectTable> pRunningObjectTable;
		__C(GetRunningObjectTable(0, &pRunningObjectTable));
		__C(pRunningObjectTable->Revoke(nCookie));
	}
};

template <typename CHandler = CRunningObjectActiveObjectHandler>
class CActiveObjectT :
	protected CHandler
{
private:
	DWORD m_nCookie;

public:
// CActiveObjectT
	CActiveObjectT() :
		m_nCookie(0)
	{
	}
	~CActiveObjectT()
	{
		_ATLTRY
		{
			Unregister();
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
		}
	}
	DWORD GetCookie() const
	{
		return m_nCookie;
	}
	BOOL IsRegistered() const
	{
		return GetCookie() != 0;
	}
	VOID Register(IUnknown* pUnknown, const CLSID& ClassIdentifier, DWORD nFlags = ACTIVEOBJECT_STRONG)
	{
		_A(m_nCookie == 0);
		m_nCookie = RegisterActiveObject(pUnknown, ClassIdentifier, nFlags);
		_A(m_nCookie);
	}
	VOID Unregister()
	{
		if(!m_nCookie)
			return;
		RevokeActiveObject(m_nCookie);
		m_nCookie = 0;
	}
};

typedef CActiveObjectT<> CActiveObject;

////////////////////////////////////////////////////////////
// CThreadT

template <typename COwner>
class ATL_NO_VTABLE CThreadT :
	public CComObjectRootEx<CComMultiThreadModelNoCS>,
	public IUnknown
{
protected:
	typedef CThreadT<COwner> CThread;

public:

BEGIN_COM_MAP(CThreadT)
END_COM_MAP()

public:
	typedef DWORD (COwner::*OWNERTHREADPROC)(CThread* pThread, CEvent& InitializationEvent, CEvent& TerminationEvent);

	////////////////////////////////////////////////////////
	// CMessageQueue

	class CMessageQueue
	{
	public:
	// CMessageQueue
		CMessageQueue()
		{
			MSG Message;
			PeekMessage(&Message, NULL, WM_USER, WM_USER, PM_NOREMOVE);
		}
		BOOL Wait(DWORD nTimeoutTime = INFINITE)
		{
			const DWORD nWaitResult = MsgWaitForMultipleObjects(0, NULL, FALSE, nTimeoutTime, QS_POSTMESSAGE);
			_Z5_WAITRESULT(nWaitResult);
			_A(nWaitResult == WAIT_OBJECT_0 || nWaitResult == WAIT_TIMEOUT && nTimeoutTime != INFINITE);
			return nWaitResult == WAIT_OBJECT_0;
		}
		BOOL Peek(UINT& nMessage)
		{
			MSG Message;
			if(!PeekMessage(&Message, NULL, 0, 0, PM_REMOVE))
				return FALSE;
			nMessage = Message.message;
			return TRUE;
		}
		static VOID Post(DWORD nIdentifier, UINT nMessage, WPARAM wParam = 0, LPARAM lParam = 0)
		{
			_A(nIdentifier);
			_W(PostThreadMessage(nIdentifier, nMessage, wParam, lParam));
		}
	};

private:
	COwner* m_pOwner;
	OWNERTHREADPROC m_pOwnerThreadProc;
	CEvent m_InitializationEvent;
	CEvent m_TerminationEvent;
	CHandle m_Handle;
	DWORD m_nIdentifier;

	DWORD ThreadProc()
	{
		DWORD nResult;
		_ATLTRY
		{
			ATLTRACE(atlTraceGeneral, 3, _T("Starting thread %d (0x%X)\n"), GetCurrentThreadId(), GetCurrentThreadId());
			ATLASSERT(m_pOwner && m_pOwnerThreadProc);
			nResult = (m_pOwner->*m_pOwnerThreadProc)(this, m_InitializationEvent, m_TerminationEvent);
			ATLTRACE(atlTraceGeneral, 3, _T("Stopping thread %d (0x%X), result %d (0x%X)\n"), GetCurrentThreadId(), GetCurrentThreadId(), nResult, nResult);
		}
		_ATLCATCH(Exception)
		{
			//_Z_EXCEPTION();
			ATLTRACE(atlTraceException, 1, _T("An exception 0x%08X has been caught in thread %d (0x%X)\n"), (HRESULT) Exception, GetCurrentThreadId(), GetCurrentThreadId());
			nResult = (HRESULT) Exception;
		}
		_ATLCATCHALL()
		{
			//_Z_EXCEPTION();
			ATLTRACE(atlTraceException, 1, _T("An exception has been caught in thread %d (0x%X)\n"), GetCurrentThreadId(), GetCurrentThreadId());
			nResult = E_FAIL;
		}
		return nResult;
	}
	static DWORD WINAPI ThreadProc(CThreadT* pThread)
	{
		return pThread->ThreadProc();
	}

public:
// CThreadT
	CThreadT() :
		m_pOwner(NULL),
		m_pOwnerThreadProc(NULL),
		m_InitializationEvent(NULL, TRUE, FALSE, NULL),
		m_TerminationEvent(NULL, TRUE, FALSE, NULL),
		m_nIdentifier(0)
	{
		ATLTRACE(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	~CThreadT()
	{
		ATLTRACE(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		Terminate();
	}
	const CHandle& GetHandle() const
	{
		return m_Handle;
	}
	DWORD GetIdentifier() const
	{
		return m_nIdentifier;
	}
	BOOL GetExitCode(DWORD& nExitCode) const
	{
		return GetExitCodeThread(m_Handle, &nExitCode);
	}
	BOOL IsStillActive() const
	{
		if(!m_Handle)
			return FALSE;
		DWORD nExitCode;
		__E(GetExitCode(nExitCode));
		return nExitCode == STILL_ACTIVE;
	}
	VOID Initialize(COwner* pOwner, OWNERTHREADPROC pOwnerThreadProc, CEvent** ppInitializationEvent)
	{
		ATLASSERT(!m_pOwner && pOwner);
		ATLASSERT(ppInitializationEvent);
		m_pOwner = pOwner;
		m_pOwnerThreadProc = pOwnerThreadProc;
		ATLASSERT(WaitForSingleObject(m_TerminationEvent, 0) == WAIT_TIMEOUT);
		static const DWORD g_nFlags = 0; //CREATE_SUSPENDED;
		m_Handle.Attach(CreateThreadT<CThreadT>(NULL, 0, ThreadProc, this, g_nFlags, &m_nIdentifier));
		ATLWINCHECK(m_Handle);
		ATLASSERT(m_nIdentifier);
		ATLTRACE(atlTraceGeneral, 3, _T("Thread %d (0x%X) started from thread %d (0x%X)\n"), m_nIdentifier, m_nIdentifier, GetCurrentThreadId(), GetCurrentThreadId());
		//ResumeThread(m_Handle);
		*ppInitializationEvent = &m_InitializationEvent;
	}
	BOOL Initialize(COwner* pOwner, OWNERTHREADPROC pOwnerThreadProc)
	{
		CEvent* pInitializationEvent;
		Initialize(pOwner, pOwnerThreadProc, &pInitializationEvent);
		ATLASSERT(pInitializationEvent == &m_InitializationEvent);
		const HANDLE phObjects[] = { m_Handle, m_InitializationEvent };
		const DWORD nWaitResult = WaitForMultipleObjects(_countof(phObjects), phObjects, FALSE, INFINITE);
		ATLASSERT((nWaitResult - WAIT_OBJECT_0) < _countof(phObjects));
		if(nWaitResult == WAIT_OBJECT_0 + 0)
		{
			DWORD nExitCode;
			ATLVERIFY(GetExitCodeThread(m_Handle, &nExitCode));
			m_Handle.Close();
			SetLastError(nExitCode);
			return FALSE;
		}
		return TRUE;
	}
	BOOL Terminate(ULONG nTimeout = INFINITE, BOOL bForce = TRUE)
	{
		if(!m_Handle)
			return FALSE;
		ATLTRACE(atlTraceGeneral, 3, _T("Thread %d (0x%X) is being terminated from thread %d (0x%X), nTimeout %d, bForce %d\n"), m_nIdentifier, m_nIdentifier, GetCurrentThreadId(), GetCurrentThreadId(), nTimeout, bForce);
		ATLVERIFY(m_TerminationEvent.Set());
		if(GetCurrentThreadId() != m_nIdentifier)
		{
			const DWORD nWaitResult = WaitForSingleObject(m_Handle, nTimeout);
			ATLTRACE(atlTraceGeneral, 4, _T("m_nIdentifier %d (0x%X), nWaitResult 0x%X\n"), m_nIdentifier, m_nIdentifier, nWaitResult);
			ATLASSERT(nWaitResult == WAIT_OBJECT_0 || nWaitResult == WAIT_TIMEOUT && nTimeout != INFINITE);
			if(nWaitResult != WAIT_OBJECT_0)
			{
				if(!bForce)
					return FALSE;
				ATLTRACE(atlTraceGeneral, 2, _T("Thread %d (0x%X) is being forcefully terminated from thread %d (0x%X)\n"), m_nIdentifier, m_nIdentifier, GetCurrentThreadId(), GetCurrentThreadId());
				ATLVERIFY(TerminateThread(m_Handle, (DWORD) HRESULT_FROM_WIN32(ERROR_TIMEOUT)));
			}
			ATLTRACE(atlTraceGeneral, 3, _T("Thread %d (0x%x) has been terminated from thread %d\n"), m_nIdentifier, m_nIdentifier, GetCurrentThreadId());
		} else
			ATLTRACE(atlTraceGeneral, 3, _T("Thread %d (0x%X) is self-terminated\n"), m_nIdentifier, m_nIdentifier);
		m_Handle.Close();
		return TRUE;
	}
	VOID AsynchronousTerminate()
	{
		ATLVERIFY(m_TerminationEvent.Set());
	}
	VOID PostMessage(UINT nMessage, WPARAM wParam = 0, LPARAM lParam = 0)
	{
		_A(m_Handle);
		_W(PostThreadMessage(m_nIdentifier, nMessage, wParam, lParam));
	}
};

////////////////////////////////////////////////////////
// CTimedEventDaemon

// TODO: Clean up tracing
#if _MSC_VER >= 1800 // Visual Studio 2013
	#if defined(_DEBUG)
		#define atlTraceTimedEvent 0 // Disabled for stock ATLTRACE
	#else
		#define atlTraceTimedEvent ((INT) -1) // Disabled for my ATLTRACE
	#endif
#else
	#define atlTraceTimedEvent atlTraceCore
#endif

class ATL_NO_VTABLE CTimedEventDaemon :
	public CComObjectRootEx<CComMultiThreadModelNoCS>,
	public IUnknown
{
	typedef CThreadT<CTimedEventDaemon> CThread;
	typedef VOID (CALLBACK TIMECALLBACK)(UINT_PTR, UINT, DWORD_PTR, DWORD_PTR, DWORD_PTR);

public:

BEGIN_COM_MAP(CTimedEventDaemon)
END_COM_MAP()

public:

	////////////////////////////////////////////////////////
	// CTimedEvent

	class CTimedEvent
	{
	public:
		ULONG m_nDelay;
		ULONG m_nResolution;
		TIMECALLBACK* m_pTimeProc;
		DWORD_PTR m_nUser;
		UINT m_nFlags;
		ULONG m_nTime;
		BOOL m_bShot;
		BOOL m_bActive;

	public:
	// CTimedEvent
		CTimedEvent()
		{
		}
		CTimedEvent(ULONG nDelay, ULONG nResolution, TIMECALLBACK* pTimeProc, DWORD_PTR nUser, UINT nFlags) :
			m_nDelay(nDelay),
			m_nResolution(nResolution), 
			m_pTimeProc(pTimeProc), 
			m_nUser(nUser), 
			m_nFlags(nFlags),
			m_nTime(GetTickCount()),
			m_bShot(FALSE),
			m_bActive(FALSE)
		{
		}
	};

	////////////////////////////////////////////////////////
	// CTimedEventList

	class CTimedEventList :
		public CAtlList<CTimedEvent>
	{
	public:
	// CTimedEventList
		BOOL IsValidPosition(POSITION Position) const
		{
			for(POSITION CurrentPosition = GetHeadPosition(); CurrentPosition; GetNext(CurrentPosition))
				if(CurrentPosition == Position)
					return TRUE;
			return FALSE;
		}
		POSITION GetEarliestActivePosition() const
		{
			POSITION BestPosition = NULL;
			for(POSITION Position = GetHeadPosition(); Position; GetNext(Position))
			{
				const CTimedEvent& Event = GetAt(Position);
				if(!(Event.m_nFlags & TIME_PERIODIC) && Event.m_bShot)
					continue; // Inactive
				if(BestPosition)
				{
					const CTimedEvent& BestEvent = GetAt(BestPosition);
					if((LONG) ((Event.m_nTime + Event.m_nDelay) - (BestEvent.m_nTime + BestEvent.m_nDelay)) >= 0)
						continue; // Later
				}
				BestPosition = Position;
			}
			return BestPosition;
		}
	};

private:
	static BOOL g_bDefaultTimedEventDaemonTerminated;
	static CTimedEventDaemon* g_pDefaultTimedEventDaemon;
	#if _DEVELOPMENT
		DWORD m_nSignature;
	#endif // _DEVELOPMENT
	mutable CComAutoCriticalSection m_DataCriticalSection;
	CTimedEventList m_TimedEventList;
	CEvent m_ListChangeEvent;
	#if defined(_WINDLL)
		CEvent m_ThreadPreTerminationEvent;
	#endif // defined(_WINDLL)
	CObjectPtr<CThread> m_pThread;
	CEvent m_IdlenessEvent;

	static VOID STDMETHODCALLTYPE DestroyDefaultTimedEventDaemon(DWORD_PTR nParameter)
	{
		_ATLTRY
		{
			CObjectPtr<CTimedEventDaemon> pTimedEventDaemon;
			{
				_A(_pAtlModule);
				CComCritSecLock<CComCriticalSection> Lock(_pAtlModule->m_csStaticDataInitAndTypeInfo);
				g_bDefaultTimedEventDaemonTerminated = TRUE;
				if(g_pDefaultTimedEventDaemon)
				{
					#if defined(_DEBUG) || _TRACE
						// NOTE: Add a lock removed by timeSetEvent
						_pAtlModule->Lock();
					#endif // defined(_DEBUG) || _TRACE
					pTimedEventDaemon.Swap(&g_pDefaultTimedEventDaemon);
				}
			}
			if(pTimedEventDaemon)
			{
				_A(pTimedEventDaemon == (CTimedEventDaemon*) nParameter);
				pTimedEventDaemon->Terminate();
			}
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
		}
	}
	DWORD ThreadProc(CThread* pThread, CEvent& InitializationEvent, CEvent& TerminationEvent)
	{
		CMultiThreadedApartment Apartment;
		CObjectPtr<CTimedEventDaemon> pThisReference = this;
		#if defined(_WINDLL)
			CObjectPtr<CThread> pThreadReference = pThread;
		#endif // defined(_WINDLL)
		_W(InitializationEvent.Set());
		const HANDLE phObjects[] = { TerminationEvent, m_ListChangeEvent };
		for(; ; )
		{
			const DWORD nWaitResult = WaitForMultipleObjects(DIM(phObjects), phObjects, FALSE, INFINITE);
			_Z5_WAITRESULT(nWaitResult);
			_A((nWaitResult - WAIT_OBJECT_0) < DIM(phObjects));
			if(nWaitResult != WAIT_OBJECT_0 + 1) // m_ListChangeEvent
				break;
			for(; ; )
			{
				POSITION CurrentPosition = NULL;
				LONG nDelay = INFINITE;
				{
					CComCritSecLock<CComAutoCriticalSection> DataLock(m_DataCriticalSection);
					CurrentPosition = m_TimedEventList.GetEarliestActivePosition();
					_W(m_ListChangeEvent.Reset());
					_Z4(atlTraceTimedEvent, 4, _T("%d timed events on the list\n"), m_TimedEventList.GetCount());
					if(!CurrentPosition)
					{
						_Z4(atlTraceTimedEvent, 4, _T("No more active timed events found\n"));
						break;
					}
					const CTimedEvent& CurrentTimedEvent = m_TimedEventList.GetAt(CurrentPosition);
					nDelay = (LONG) (CurrentTimedEvent.m_nTime + CurrentTimedEvent.m_nDelay) - GetTickCount();
				}
				const DWORD nWaitResult = (nDelay > 0) ? WaitForMultipleObjects(DIM(phObjects), phObjects, FALSE, nDelay) : WAIT_TIMEOUT;
				_Z5_WAITRESULT(nWaitResult);
				_A((nWaitResult - WAIT_OBJECT_0) < DIM(phObjects) || nWaitResult == WAIT_TIMEOUT);
				if(nWaitResult == WAIT_OBJECT_0 + 0) // Termination
					break;
				if(nWaitResult == WAIT_OBJECT_0 + 1) // m_ListChangeEvent
				{
					_Z4(atlTraceTimedEvent, 4, _T("Timed event list changed\n"));
					continue;
				}
				TIMECALLBACK* pTimeProc = NULL;
				DWORD_PTR nUser = 0;
				{
					CComCritSecLock<CComAutoCriticalSection> DataLock(m_DataCriticalSection);
					if(!m_TimedEventList.IsValidPosition(CurrentPosition))
						continue;
					_Z4(atlTraceTimedEvent, 4, _T("Firing an event, CurrentPosition 0x%p\n"), CurrentPosition);
					CTimedEvent& CurrentTimedEvent = m_TimedEventList.GetAt(CurrentPosition);
					CurrentTimedEvent.m_nTime = GetTickCount();
					CurrentTimedEvent.m_bShot = TRUE;
					CurrentTimedEvent.m_bActive = TRUE;
					pTimeProc = CurrentTimedEvent.m_pTimeProc;
					nUser = CurrentTimedEvent.m_nUser;
					_W(m_IdlenessEvent.Reset());
				}
				if(pTimeProc)
					_ATLTRY
					{
						(*pTimeProc)((UINT) (UINT_PTR) CurrentPosition, 0, nUser, 0, 0);
					}
					_ATLCATCHALL()
					{
						_Z_EXCEPTION();
					}
				_W(m_IdlenessEvent.Set());
				{
					CComCritSecLock<CComAutoCriticalSection> DataLock(m_DataCriticalSection);
					if(m_TimedEventList.IsValidPosition(CurrentPosition))
						m_TimedEventList.GetAt(CurrentPosition).m_bActive = FALSE;
				}
			}
		}
		#if defined(_WINDLL)
			_W(m_ThreadPreTerminationEvent.Set());
			pThreadReference.Release();
		#endif // defined(_WINDLL)
		pThisReference.Release();
		return 0;
	}

public:
// CTimedEventDaemon
	static CObjectPtr<CTimedEventDaemon> GetDefaultTimedEventDaemon()
	{
		CObjectPtr<CTimedEventDaemon> pTimedEventDaemon;
		CComCritSecLock<CComCriticalSection> Lock(_pAtlModule->m_csStaticDataInitAndTypeInfo);
		if(!g_bDefaultTimedEventDaemonTerminated)
		{
			if(!g_pDefaultTimedEventDaemon)
			{
				CObjectPtr<CTimedEventDaemon> pTimedEventDaemon;
				_ATLTRY
				{
					pTimedEventDaemon.Construct()->Initialize();
					_pAtlModule->AddTermFunc(DestroyDefaultTimedEventDaemon, (DWORD_PTR) (CTimedEventDaemon*) pTimedEventDaemon);
					g_pDefaultTimedEventDaemon = pTimedEventDaemon.Detach();
					#if defined(_DEBUG) || _TRACE
						// NOTE: Exclude object's module lock so that it does not affect termination lock count report
						_pAtlModule->Unlock();
					#endif // defined(_DEBUG) || _TRACE
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
				}
			}
			pTimedEventDaemon = g_pDefaultTimedEventDaemon;
		}
		return pTimedEventDaemon;
	}
	CTimedEventDaemon() :
		m_ListChangeEvent(TRUE, FALSE),
		m_IdlenessEvent(TRUE, TRUE)
	{
		_Z4_THIS();
		#if _DEVELOPMENT
			// WARN: CTimedEventDaemon has unresolved problems with late termination, so 
			//       we mark used memory block to distinguish in head trace
			m_nSignature = 0x89674523;
		#endif // _DEVELOPMENT
	}
	~CTimedEventDaemon()
	{
		_Z4_THIS();
		_A(!m_pThread);
	}
	VOID Initialize()
	{
		#if defined(_WINDLL)
			_A(!m_ThreadPreTerminationEvent);
			__E(m_ThreadPreTerminationEvent.Create(NULL, TRUE, FALSE, NULL));
		#endif // defined(_WINDLL)
		_A(!m_pThread);
		__E(m_pThread.Construct()->Initialize(this, &CTimedEventDaemon::ThreadProc));
	}
	VOID Terminate()
	{
		CObjectPtr<CThread> pThread;
		{
			CComCritSecLock<CComAutoCriticalSection> DataLock(m_DataCriticalSection);
			m_pThread.Swap(pThread);
		}
		if(pThread)
		{
			#if defined(_WINDLL)
				_A(m_ThreadPreTerminationEvent);
				CEvent ThreadPreTerminationEvent;
				if(DuplicateHandle(GetCurrentProcess(), m_ThreadPreTerminationEvent, GetCurrentProcess(), &ThreadPreTerminationEvent.m_h, 0, FALSE, DUPLICATE_SAME_ACCESS))
				{
					CEvent Thread;
					_W(DuplicateHandle(GetCurrentProcess(), pThread->GetHandle(), GetCurrentProcess(), &Thread.m_h, 0, FALSE, DUPLICATE_SAME_ACCESS));
					pThread->AsynchronousTerminate();
					pThread.Release();
					const HANDLE phObjects[] = { ThreadPreTerminationEvent, Thread };
					const DWORD nWaitResult = WaitForMultipleObjects(DIM(phObjects), phObjects, FALSE, INFINITE);
					_Z5_WAITRESULT(nWaitResult);
					_A(nWaitResult - WAIT_OBJECT_0 < DIM(phObjects));
					return;
				}
			#endif // !defined(_WINDLL)
			pThread->Terminate();
		}
	}
	HRESULT SetEvent(ULONG nDelay, ULONG nResolution, TIMECALLBACK* pTimeProc, DWORD_PTR nUser, UINT nFlags, UINT_PTR* pnEvent)
	{
		_ATLTRY
		{
			CComCritSecLock<CComAutoCriticalSection> DataLock(m_DataCriticalSection);
			const POSITION Position = m_TimedEventList.AddTail(CTimedEvent(nDelay, nResolution, pTimeProc, nUser, nFlags));
			_A(Position);
			_W(m_ListChangeEvent.Set());
			_A(pnEvent);
			*pnEvent = (UINT_PTR) Position;
			_Z4(atlTraceTimedEvent, 4, _T("An event has been set, Position 0x%p, nDelay %d, nFlags 0x%X, %d events on the list\n"), Position, nDelay, nFlags, m_TimedEventList.GetCount());
		}
		_ATLCATCH(Exception)
		{
			_C(Exception.m_hr);
		}
		return S_OK;
	}
	HRESULT KillEvent(UINT_PTR nEvent)
	{
		BOOL bConcurrentlyActive = FALSE;
		{
			CComCritSecLock<CComAutoCriticalSection> DataLock(m_DataCriticalSection);
			const POSITION Position = (POSITION) nEvent;
			_Z4(atlTraceTimedEvent, 4, _T("An event is being killed, Position 0x%p\n"), Position);
			_D(m_TimedEventList.IsValidPosition(Position), E_INVALIDARG);
			if(m_TimedEventList.GetAt(Position).m_bActive)
				if(m_pThread && m_pThread->GetIdentifier() != GetCurrentThreadId())
					bConcurrentlyActive = TRUE;
			m_TimedEventList.RemoveAt(Position);
			_W(m_ListChangeEvent.Set());
			_Z4(atlTraceTimedEvent, 4, _T("An event has been killed, Position 0x%p, %d more events on the list\n"), Position, m_TimedEventList.GetCount());
		}
		if(bConcurrentlyActive)
		{
			static const DWORD g_nTimeout = 5 * 1000; // 5 seconds
			const DWORD nWaitResult = WaitForSingleObject(m_IdlenessEvent, g_nTimeout);
			//_Z5_WAITRESULT(nWaitResult);
			_A(nWaitResult == WAIT_OBJECT_0 || nWaitResult == WAIT_TIMEOUT);
			if(nWaitResult != WAIT_OBJECT_0)
				_Z2(atlTraceTimedEvent, 2, _T("Worker thread failed to get idle within reasonable time, nWaitResult 0x%X\n"), nWaitResult);
		}
		return S_OK;
	}

// Standard API substitution
	static MMRESULT timeSetEvent(UINT nDelay, UINT nResolution, TIMECALLBACK* pTimeProc, DWORD_PTR nUser, UINT nFlags)
	{
		_A(nFlags == (TIME_CALLBACK_FUNCTION | TIME_PERIODIC) || nFlags == (TIME_CALLBACK_FUNCTION | TIME_ONESHOT));
		UINT_PTR nEvent = 0;
		if(_pAtlModule && _pAtlModule->cbSize)
		{
			CObjectPtr<CTimedEventDaemon> pTimedEventDaemon = GetDefaultTimedEventDaemon();
			if(pTimedEventDaemon)
				_V(pTimedEventDaemon->SetEvent(nDelay, nResolution, pTimeProc, nUser, nFlags, &nEvent));
		}
		return (MMRESULT) nEvent;
	}
	static MMRESULT timeKillEvent(UINT uEvent)
	{
		MMRESULT nResult = MMSYSERR_INVALPARAM;
		if(_pAtlModule && _pAtlModule->cbSize)
		{
			CObjectPtr<CTimedEventDaemon> pTimedEventDaemon;
			{
				CComCritSecLock<CComCriticalSection> Lock(_pAtlModule->m_csStaticDataInitAndTypeInfo);
				pTimedEventDaemon = g_pDefaultTimedEventDaemon;
			}
			if(pTimedEventDaemon)
				if(SUCCEEDED(pTimedEventDaemon->KillEvent((UINT_PTR) uEvent)))
					nResult = MMSYSERR_NOERROR;
		}
		return nResult;
	}
};

__declspec(selectany) BOOL CTimedEventDaemon::g_bDefaultTimedEventDaemonTerminated = FALSE;
__declspec(selectany) CTimedEventDaemon* CTimedEventDaemon::g_pDefaultTimedEventDaemon = NULL;

////////////////////////////////////////////////////////////
// CTimedEventT, CSimpleTimedEventT

template <typename T, typename _Owner, typename _OwnerPtr = _Owner*, typename _Parameter = INT_PTR>
class CTimedEventT
{
protected:
	typedef CTimedEventT<T, _Owner, _OwnerPtr, _Parameter> CTimedEvent;
	typedef VOID (_Owner::*HANDLER)(T*);

public:
	mutable CComAutoCriticalSection m_DataCriticalSection;
	CObjectPtr<CTimedEventDaemon> m_pTimedEventDaemon;
	UINT_PTR m_nEvent;
	_OwnerPtr m_pOwner;
	_Parameter m_Parameter;
	HANDLER m_pHandler;
	CEvent m_IdlenessEvent;

	VOID TimedEventProc(UINT_PTR nEvent)
	{
		_OwnerPtr pOwner = NULL;
		_Parameter Parameter;
		HANDLER pHandler;
		{
			CComCritSecLock<CComAutoCriticalSection> DataLock(m_DataCriticalSection);
			if(m_nEvent == nEvent)
			{
				pOwner = m_pOwner;
				Parameter = m_Parameter;
				pHandler = m_pHandler;
				_A(pOwner && pHandler);
			}
		}
		if(pOwner)
		{
			// NOTE: Since the object may get destroyed insde callback, we duplicate handle required to be set
			CEvent IdlenessEvent;
			_W(DuplicateHandle(GetCurrentProcess(), m_IdlenessEvent, GetCurrentProcess(), &IdlenessEvent.m_h, 0, FALSE, DUPLICATE_SAME_ACCESS));
			_W(IdlenessEvent.Reset());
			(pOwner->*pHandler)(static_cast<T*>(this));
			_W(IdlenessEvent.Set());
		}
	}
	static VOID CALLBACK TimedEventProc(UINT_PTR nEvent, UINT, DWORD_PTR nUser, DWORD_PTR, DWORD_PTR)
	{
		_ATLTRY
		{
			((CTimedEventT*) nUser)->TimedEventProc((UINT_PTR) nEvent);
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
		}
	}

public:
// CTimedEventT
	CTimedEventT() :
		m_nEvent(0),
		m_IdlenessEvent(TRUE, TRUE)
	{
#if defined(_DEBUG)
		m_pOwner = NULL;
		m_pHandler = NULL;
#endif // defined(_DEBUG)
	}
	~CTimedEventT()
	{
		Destroy();
		static const DWORD g_nTimeout = 5 * 1000;
		const DWORD nWaitResult = WaitForSingleObject(m_IdlenessEvent, g_nTimeout);
		_Z5_WAITRESULT(nWaitResult);
		_A(nWaitResult == WAIT_OBJECT_0 || nWaitResult == WAIT_TIMEOUT);
		if(nWaitResult != WAIT_OBJECT_0)
			ATLTRACE(atlTraceGeneral, 2, _T("Worker thread failed to get idle within reasonable time, nWaitResult %d\n"), nWaitResult);
	}
	VOID Initialize(CTimedEventDaemon* pTimedEventDaemon)
	{
		_A(pTimedEventDaemon);
		CComCritSecLock<CComAutoCriticalSection> DataLock(m_DataCriticalSection);
		_A(!m_pTimedEventDaemon || m_pTimedEventDaemon == pTimedEventDaemon);
		m_pTimedEventDaemon = pTimedEventDaemon;
	}
	const _Parameter& GetParameter() const
	{
		return m_Parameter;
	}
	VOID SetParameter(_Parameter Parameter)
	{
		m_Parameter = Parameter;
	}
	UINT_PTR GetEvent() const
	{
		CComCritSecLock<CComAutoCriticalSection> DataLock(m_DataCriticalSection);
		return m_nEvent;
	}
	BOOL IsActive() const
	{
		CComCritSecLock<CComAutoCriticalSection> DataLock(m_DataCriticalSection);
		return m_nEvent != 0;
	}
	VOID Create(_Owner* pOwner, HANDLER pHandler, ULONG nDelay, ULONG nResolution, BOOL bPeriodic)
	{
		_A(pOwner && pHandler);
		CObjectPtr<CTimedEventDaemon> pTimedEventDaemon;
		UINT_PTR nPreviousEvent;
		{
			CComCritSecLock<CComAutoCriticalSection> DataLock(m_DataCriticalSection);
			if(m_pTimedEventDaemon)
			{
				pTimedEventDaemon = m_pTimedEventDaemon;
				nPreviousEvent = m_nEvent;
				UINT_PTR nEvent;
				__C(m_pTimedEventDaemon->SetEvent(nDelay, nResolution, TimedEventProc, (DWORD_PTR) this, (bPeriodic ? TIME_PERIODIC : TIME_ONESHOT), &nEvent));
				m_nEvent = nEvent;
				m_pOwner = pOwner;
				m_pHandler = pHandler;
			}
		}
		if(pTimedEventDaemon && nPreviousEvent)
			_V(pTimedEventDaemon->KillEvent(nPreviousEvent));
	}
	VOID CreateOneshot(_Owner* pOwner, HANDLER pHandler, ULONG nDelay, ULONG nResolution = 0)
	{
		return Create(pOwner, pHandler, nDelay, nResolution, FALSE);
	}
	VOID CreatePeriodic(_Owner* pOwner, HANDLER pHandler, ULONG nDelay, ULONG nResolution = 0)
	{
		return Create(pOwner, pHandler, nDelay, nResolution, TRUE);
	}
	VOID Destroy()
	{
		CObjectPtr<CTimedEventDaemon> pTimedEventDaemon;
		UINT_PTR nEvent;
		{
			CComCritSecLock<CComAutoCriticalSection> DataLock(m_DataCriticalSection);
			_A(m_pTimedEventDaemon);
			pTimedEventDaemon = m_pTimedEventDaemon;
			nEvent = m_nEvent;
			m_nEvent = 0;
			m_pOwner = NULL;
			m_pHandler = NULL;
		}
		if(pTimedEventDaemon && nEvent)
			_V(pTimedEventDaemon->KillEvent(nEvent));
	}
};

template <typename _Owner, typename _OwnerPtr = _Owner*, typename _Parameter = INT_PTR>
class CSimpleTimedEventT :
	public CTimedEventT<CSimpleTimedEventT<_Owner, _OwnerPtr, _Parameter>, _Owner, _OwnerPtr, _Parameter>
{
protected:
	typedef CSimpleTimedEventT<_Owner, _OwnerPtr, _Parameter> CSimpleTimedEvent;

public:
// CSimpleTimedEventT
	CSimpleTimedEventT()
	{
		__super::Initialize(CTimedEventDaemon::GetDefaultTimedEventDaemon());
	}
};

////////////////////////////////////////////////////////////
// CDebugTimeCheck, CDebugTimeCheck

#if defined(_M_IX86) && (defined(_DEBUG) || _TRACE)

class CDebugTimeCheck
{
public:

	////////////////////////////////////////////////////////
	// CCheck

	class ATL_NO_VTABLE CCheck :
		public CComObjectRootEx<CComMultiThreadModelNoCS>,
		public IUnknown
	{
		typedef CSimpleTimedEventT<CCheck, CObjectPtr<CCheck> > CTimedEvent;

	public:

	BEGIN_COM_MAP(CCheck)
	END_COM_MAP()

	private:
		DWORD m_nThreadIdentifier;
		CString m_sDescription;
		CInterlockedT<BOOL> m_bTerminated;
		CTimedEvent m_TimeoutEvent;
		ULONG m_nEventTimeout;
		ULONG m_nCheckTimeout;

		VOID TraceTimeout(CTimedEvent*)
		{
			_A(_pAtlModule);
			CComCritSecLock<CComCriticalSection> Lock(_pAtlModule->m_csStaticDataInitAndTypeInfo);
			if(m_bTerminated)
				return;
			m_nCheckTimeout += m_nEventTimeout;
			ATLTRACE(atlTraceGeneral, 2, _T("Timeout %d ms in thread %d, m_sDescription \"%s\"\n"), m_nCheckTimeout, m_nThreadIdentifier, m_sDescription);
			if(m_nCheckTimeout == 3 * m_nEventTimeout)
				_ATLTRY
				{
					CDebugTraceCallStack::TraceCallStack(m_nThreadIdentifier);
					// NOTE: An exception would possibly trigger an external debugger event
					AtlThrow(HRESULT_FROM_WIN32(ERROR_TIMEOUT));
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
				}
		}

	public:
	// CCheck
		CCheck() :
			m_nThreadIdentifier(0)
		{
			_Z5_THIS();
		}
		~CCheck()
		{
			_Z5_THIS();
			_A(!m_TimeoutEvent.IsActive());
		}
		VOID Initialize(const CString& sDescription, ULONG nTimeout)
		{
			_A(!m_TimeoutEvent.IsActive());
			m_nThreadIdentifier = GetCurrentThreadId();
			m_sDescription = sDescription;
			m_bTerminated = FALSE;
			m_nEventTimeout = nTimeout;
			m_nCheckTimeout = 0;
			m_TimeoutEvent.CreatePeriodic(this, &CDebugTimeCheck::CCheck::TraceTimeout, nTimeout);
		}
		VOID Terminate()
		{
			m_bTerminated = TRUE;
			_A(_pAtlModule);
			CComCritSecLock<CComCriticalSection> Lock(_pAtlModule->m_csStaticDataInitAndTypeInfo);
			m_TimeoutEvent.Destroy();
		}
	};

private:
	CObjectPtr<CCheck> m_pCheck;

public:
// CDebugTimeCheck
	static ULONG GetDefaultTimeout()
	{
		static const ULONG g_nTimeout = 5000;
		return g_nTimeout;
	}
	CDebugTimeCheck(const CString& sDescription, ULONG nTimeout = GetDefaultTimeout())
	{
		m_pCheck.Construct()->Initialize(sDescription, nTimeout);
	}
	CDebugTimeCheck(LPCTSTR pszDescription = NULL, ULONG nTimeout = GetDefaultTimeout())
	{
		m_pCheck.Construct()->Initialize(CString(pszDescription), nTimeout);
	}
	~CDebugTimeCheck()
	{
		if(m_pCheck)
			m_pCheck->Terminate();
	}
};

#else

class CDebugTimeCheck
{
public:
// CDebugTimeCheck
	CDebugTimeCheck(LPCTSTR = NULL, ULONG = 0) throw()
	{
	}
};

#endif // defined(_M_IX86) && (defined(_DEBUG) || _TRACE)

////////////////////////////////////////////////////////////
// CRoCriticalSections

#if defined(_DEBUG) || _TRACE

class CRoCriticalSections
{
private:
	static CTimedEventDaemon* g_pTimedEventDaemon;

	static VOID STDMETHODCALLTYPE DestroyTimedEventDaemon(DWORD_PTR nParameter) throw()
	{
		_ATLTRY
		{
			_A(_pAtlModule);
			CObjectPtr<CTimedEventDaemon> pTimedEventDaemon = g_pTimedEventDaemon;
			g_pTimedEventDaemon = NULL;
			_A(pTimedEventDaemon == (CTimedEventDaemon*) nParameter);
			if(pTimedEventDaemon)
			{
				_pAtlModule->Lock();
				pTimedEventDaemon->Terminate();
			}
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
		}
	}

public:
// CRoCriticalSections
	static CObjectPtr<CTimedEventDaemon> GetTimedEventDaemon()
	{
		_A(_pAtlModule);
		_A(_pAtlModule->cbSize);
		CComCritSecLock<CComCriticalSection> Lock(_pAtlModule->m_csStaticDataInitAndTypeInfo);
		if(!g_pTimedEventDaemon)
		{
			CObjectPtr<CTimedEventDaemon> pTimedEventDaemon;
			pTimedEventDaemon.Construct()->Initialize();
			_pAtlModule->Unlock();
			_pAtlModule->AddTermFunc(DestroyTimedEventDaemon, (DWORD_PTR) (CTimedEventDaemon*) pTimedEventDaemon);
			g_pTimedEventDaemon = pTimedEventDaemon.Detach();
		}
		return g_pTimedEventDaemon;
	}
	static CObjectPtr<CTimedEventDaemon> GetCurrentTimedEventDaemon() throw()
	{
		_A(_pAtlModule);
		_A(_pAtlModule->cbSize);
		CComCritSecLock<CComCriticalSection> Lock(_pAtlModule->m_csStaticDataInitAndTypeInfo);
		return g_pTimedEventDaemon;
	}
	static UINT_PTR SetEvent(UINT nDelay, UINT nResolution, VOID (CALLBACK *pTimeProc)(UINT_PTR, UINT, DWORD_PTR, DWORD_PTR, DWORD_PTR), DWORD_PTR nUser, UINT nFlags) throw()
	{
		UINT_PTR nEvent = 0;
		CObjectPtr<CTimedEventDaemon> pTimedEventDaemon = g_pTimedEventDaemon;
		if(pTimedEventDaemon)
			_V(pTimedEventDaemon->SetEvent(nDelay, nResolution, pTimeProc, nUser, nFlags, &nEvent));
		return nEvent;
	}
	static VOID KillEvent(UINT_PTR nEvent) throw()
	{
		CObjectPtr<CTimedEventDaemon> pTimedEventDaemon = g_pTimedEventDaemon;
		if(pTimedEventDaemon)
			_V(pTimedEventDaemon->KillEvent(nEvent));
	}
};

__declspec(selectany) CTimedEventDaemon* CRoCriticalSections::g_pTimedEventDaemon = NULL;

#endif // defined(_DEBUG) || _TRACE

////////////////////////////////////////////////////////////
// CRoCriticalSection, CRoCriticalSectionLock

#if defined(_DEBUG) || _TRACE

#pragma warning(disable: 4748) // warning C4748: /GS can not protect parameters and local variables from local buffer overrun because optimizations are disabled in function
#pragma optimize("", off)

class CRoCriticalSection :
	public CComAutoCriticalSection
{
public:

	////////////////////////////////////////////////////////
	// CLockContext

	class CLockContext
	{
	public:
		CRoCriticalSection& m_CriticalSection;
		DWORD m_nThreadIdentifier;
		CONTEXT& m_ThreadContext;
		ULONG m_nTimeout;
		ULONG m_nTimeoutTime;

	public:
	// CLockContext
		CLockContext(CRoCriticalSection* pCriticalSection, CONTEXT& ThreadContext, ULONG nTimeout) :
			m_CriticalSection(*pCriticalSection),
			m_nThreadIdentifier(GetCurrentThreadId()),
			m_ThreadContext(ThreadContext),
			m_nTimeout(nTimeout),
			m_nTimeoutTime(0)
		{
		}
	};

private:
	static CTlsIndex g_nContextTlsIndex;
	static CComAutoCriticalSection g_CriticalSection;
	DWORD m_nLockThreadIdentifier;
	CONTEXT m_LockThreadContext;

	VOID LockTimeout(CLockContext& LockContext)
	{
		LockContext.m_nTimeoutTime += LockContext.m_nTimeout;
		CComCritSecLock<CComAutoCriticalSection> GlobalLock(g_CriticalSection);
		ATLCORETRACE1(atlTraceGeneral, 1, _T("Critical section 0x%08X deadlock suspicion: locked in thread %d, trying to lock in thread %d, timeout %d ms\n"), this, m_nLockThreadIdentifier, LockContext.m_nThreadIdentifier, LockContext.m_nTimeoutTime);
		const UINT nTimeoutCount = LockContext.m_nTimeoutTime / LockContext.m_nTimeout;
		if(nTimeoutCount % 64 == 3)
		{
			DWORD nLockThreadIdentifier = m_nLockThreadIdentifier;
			CONTEXT LockedThreadContext = m_LockThreadContext;
			CONTEXT LockingThreadContext = LockContext.m_ThreadContext;
			CComCritSecLock<CComAutoCriticalSection> Lock(CDebugSymbols::GetGlobalCriticalSection());
			#if defined(_DEBUG)
				// NOTE: Debug builds don't have functions inlined so lock time stack is likely to be damaged anyway, let us just skip it
				LockedThreadContext.ContextFlags = 0;
			#endif // defined(_DEBUG)
			if(LockedThreadContext.ContextFlags)
			{
				ATLCORETRACE3(LockedThreadContext)(atlTraceGeneral, 2, _T("Thread %d locked the critical section 0x%p, lock time call stack follows:\n"), nLockThreadIdentifier, this);
				CDebugTraceCallStack::TraceCallStack(nLockThreadIdentifier, LockedThreadContext);
			} else
				ATLCORETRACE3(LockedThreadContext)(atlTraceGeneral, 2, _T("Thread %d locked the critical section 0x%p\n"), nLockThreadIdentifier, this);
			ATLCORETRACE1(atlTraceGeneral, 2, _T("Thread %d current stack follows:\n"), nLockThreadIdentifier, this);
			CDebugTraceCallStack::TraceCallStack(nLockThreadIdentifier);
			ATLCORETRACE3(LockingThreadContext)(atlTraceGeneral, 2, _T("Thread %d is trying to lock the critical section 0x%p, call stack follows:\n"), LockContext.m_nThreadIdentifier, this);
			CDebugTraceCallStack::TraceCallStack(LockContext.m_nThreadIdentifier, LockingThreadContext);
			#pragma region MiniDump
			#if defined(_WINDLL) && !defined(_WIN64) 
				#if !defined(_DEBUG) && _TRACE
					if(nTimeoutCount == 3)
					{
						typedef HRESULT (STDAPICALLTYPE *WRITEMINIDUMP)();
						WRITEMINIDUMP pWriteMiniDump = (WRITEMINIDUMP) GetProcAddress(_AtlBaseModule.GetModuleInstance(), "WriteMiniDump");
						if(pWriteMiniDump)
						{
							TCHAR pszRunDllPath[MAX_PATH] = { 0 };
							ATLVERIFY(GetSystemDirectory(pszRunDllPath, DIM(pszRunDllPath)));
							Combine(pszRunDllPath, pszRunDllPath, _T("rundll32.exe"));
							TCHAR pszModuleName[MAX_PATH] = { 0 };
							ATLVERIFY(GetModuleFileName(_AtlBaseModule.GetModuleInstance(), pszModuleName, DIM(pszModuleName)));
							CRoArrayT<CString> Array;
							_W(Array.Add(AtlFormatString(_T("%d"), GetCurrentProcessId())) >= 0);
							TCHAR pszProcessModulePath[MAX_PATH] = { 0 }, pszModulePath[MAX_PATH] = { 0 };
							_W(GetModuleFileName(NULL, pszProcessModulePath, DIM(pszProcessModulePath)));
							_W(GetModuleFileName(_AtlBaseModule.GetModuleInstance(), pszModulePath, DIM(pszModulePath)));
							_W(Array.Add(pszProcessModulePath) >= 0);
							_W(Array.Add(pszModulePath) >= 0);
							_W(Array.Add(_T("Deadlock")) >= 0);
							STARTUPINFO StartupInformation;
							ZeroMemory(&StartupInformation, sizeof StartupInformation);
							StartupInformation.cb = sizeof StartupInformation;
							PROCESS_INFORMATION ProcessInformation;
							if(CreateProcess(NULL, const_cast<LPTSTR>((LPCTSTR) AtlFormatString(_T("\"%s\" \"%s\",WriteMiniDump %s"), pszRunDllPath, pszModuleName, _StringHelper::GetCommaSeparatedValue(Array))), NULL, NULL, FALSE, 0, NULL, NULL, &StartupInformation, &ProcessInformation))
							{
								reinterpret_cast<CHandle&>(ProcessInformation.hProcess).Close();
								reinterpret_cast<CHandle&>(ProcessInformation.hThread).Close();
							} else
								ATLCORETRACE3(LockedThreadContext)(atlTraceGeneral, 2, _T("Failed to CreateProcess: 0x%08X\n"), nLockThreadIdentifier, AtlHresultFromLastError());
						}
					}
				#endif // !defined(_DEBUG) && _TRACE
			#endif // defined(_WINDLL) && !defined(_WIN64)
			#pragma endregion
			#if defined(_DEBUG)
				_CrtDbgBreak(); // Break into debugger to investigate the issue
			#endif // defined(_DEBUG)
		}
	}
	static VOID CALLBACK LockTimeout(UINT_PTR nEvent, UINT, DWORD_PTR nParameter, DWORD_PTR, DWORD_PTR)
	{
		CLockContext* pLockContext = (CLockContext*) nParameter;
		_A(pLockContext);
		_ATLTRY
		{
			pLockContext->m_CriticalSection.LockTimeout(*pLockContext);
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
		}
	}
	CRoCriticalSection(const CRoCriticalSection&);
	CRoCriticalSection& operator = (const CRoCriticalSection&);

public:
// CRoCriticalSection
	CRoCriticalSection()
	{
		m_nLockThreadIdentifier = 0;
		ZeroMemory(&m_LockThreadContext, sizeof m_LockThreadContext);
	}
	~CRoCriticalSection()
	{
		_A(m_sec.LockCount < 0);
	}
	HRESULT Lock()
	{
		_ATLTRY
		{
			CONTEXT ThreadContext;
			if(!GetCurrentThreadContext(&ThreadContext))
				ThreadContext.ContextFlags = 0;
			CObjectPtr<CTimedEventDaemon> pTimedEventDaemon = CRoCriticalSections::GetTimedEventDaemon();
			static const ULONG g_nTimeout = 5 * 1000; // 5 seconds
			CLockContext LockContext(this, ThreadContext, g_nTimeout);
			UINT_PTR nEvent;
			__C(pTimedEventDaemon->SetEvent(g_nTimeout, 0, LockTimeout, (DWORD_PTR) &LockContext, TIME_PERIODIC, &nEvent));
			if(!VerifyCriticalSectionLocked(*this))
			{
//				for(SIZE_T nInnerIndex = 0; nInnerIndex < m_Section.m_InnerCriticalSectionArray.GetCount(); nInnerIndex++)
//					__A(m_Section.m_InnerCriticalSectionArray[nInnerIndex]->VerifyNotLocked());
			}
			__C(__super::Lock());
			__C(pTimedEventDaemon->KillEvent(nEvent));
			const CInterlockedT<LONG>& nRecursionCount = reinterpret_cast<CInterlockedT<LONG>&>(m_sec.RecursionCount);
			if(nRecursionCount == (LONG) 1) // First lock
			{
				CComCritSecLock<CComAutoCriticalSection> GlobalLock(g_CriticalSection);
				m_nLockThreadIdentifier = GetCurrentThreadId();
				m_LockThreadContext = ThreadContext;
			}
			if(LockContext.m_nTimeoutTime)
				ATLCORETRACE1(atlTraceGeneral, 2, _T("Critical section 0x%08X deadlock suspicion: entered in thread %d after timeout %d ms\n"), this, GetCurrentThreadId(), LockContext.m_nTimeoutTime);
		}
		_ATLCATCH(Exception)
		{
			_Z_ATLEXCEPTION(Exception);
			return Exception;
		}
		return S_OK;
	}
	HRESULT Unlock()
	{
		{
			CComCritSecLock<CComAutoCriticalSection> GlobalLock(g_CriticalSection);
			_A(VerifyCriticalSectionLocked(*this));
			const CInterlockedT<LONG>& nRecursionCount = reinterpret_cast<CInterlockedT<LONG>&>(m_sec.RecursionCount);
			if(nRecursionCount == (LONG) 1) // Last lock
			{
				m_nLockThreadIdentifier = 0;
				m_LockThreadContext.ContextFlags = 0; //ZeroMemory(&m_LockThreadContext, sizeof m_LockThreadContext);
			}
		}
		return __super::Unlock();
	}
	VOID AddInnerCriticalSection(CRoCriticalSection& Section)
	{
		// TODO: CRoCriticalSection::AddInnerCriticalSection
	}
};

__declspec(selectany) CComAutoCriticalSection CRoCriticalSection::g_CriticalSection;

#if !defined(_WIN64) && defined(_WINDLL)
	#if !defined(_DEBUG) && _TRACE

		#define AVAILABILITY_INTERNALWRITEMINIDUMP

		//#pragma comment(linker, "/EXPORT:WriteMiniDump=_WriteMiniDump@16,PRIVATE")

		//extern "C" // __declspec(dllexport) 
		ATLINLINE HRESULT STDMETHODCALLTYPE InternalWriteMiniDump(HWND hParentWindow, HINSTANCE hInstance, LPSTR pszCommandLine, INT nShowCommand)
		{
			_ATLTRY
			{
				hParentWindow; hInstance; nShowCommand;
				//MessageBox(GetActiveWindow(), AtlFormatString(_T("pszCommandLine \"%hs\""), pszCommandLine), _T("Debug"), MB_ICONWARNING | MB_OK);
				CRoArrayT<CString> Array;
				_StringHelper::GetCommaSeparatedItems(CA2CT(pszCommandLine), Array);
				__D(Array.GetCount() >= 4, E_UNNAMED);
				INT nProcessIdentifier;
				__D(StrToIntEx(Array[0], STIF_SUPPORT_HEX, &nProcessIdentifier), E_UNNAMED);
				CHandle Process;
				Process.Attach(OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, FALSE, nProcessIdentifier));
				__E(Process);
				TCHAR pszDirectory[MAX_PATH] = { 0 };
				if(IsWindowsVistaOrGreater())
				{
					_W(SHGetSpecialFolderPath(NULL, pszDirectory, CSIDL_COMMON_APPDATA, TRUE));
				} else
				{
					_W(GetWindowsDirectory(pszDirectory, _countof(pszDirectory)));
					_W(PathStripToRoot(pszDirectory));
				}
				CPath sPath;
				sPath.Combine(pszDirectory, AtlFormatString(_T("%s-%d-%s-%s-%d.dmp"), 
					FindFileName(Array[1]), // Process Host Module Path
					nProcessIdentifier, 
					FindFileName(Array[2]), // Module Path
					FindFileName(Array[3]), // Comment
					GetCurrentProcessId(), 
					0));
				CAtlFile File;
				__C(File.Create(sPath, GENERIC_WRITE, FILE_SHARE_READ, CREATE_ALWAYS));
				MINIDUMP_TYPE Type = MiniDumpNormal;
				#if defined(REGISTRY_ROOT)
					DWORD nType = (DWORD) Type;
					if(_RegKeyHelper::QueryIntegerValueEx(HKEY_CURRENT_USER, REGISTRY_ROOT _T("\\Debug"), _T("MiniDump Type"), nType) || 
						_RegKeyHelper::QueryIntegerValueEx(HKEY_LOCAL_MACHINE, REGISTRY_ROOT _T("\\Debug"), _T("MiniDump Type"), nType))
						Type = (MINIDUMP_TYPE) nType;
				#endif // defined(REGISTRY_ROOT)
				__E(MiniDumpWriteDump(Process, nProcessIdentifier, File, Type, NULL, NULL, NULL));
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}

	#endif // !defined(_DEBUG) && _TRACE
#endif // !defined(_WIN64) && defined(_WINDLL)

#pragma optimize("", on)
#pragma warning(default: 4748)

#else

typedef CComAutoCriticalSection CRoCriticalSection;

#endif // defined(_DEBUG) || _TRACE

typedef CComAutoCriticalSection CRoLightCriticalSection;

#if TRUE

template <typename CCriticalSection>
inline BOOL TryLock(CCriticalSection& CriticalSection);

#if _WIN32_WINNT >= 0x0400
	template <>
	inline BOOL TryLock<CComCriticalSection>(CComCriticalSection& CriticalSection)
	{
		return TryEnterCriticalSection(&CriticalSection.m_sec);
	}
	template <>
	inline BOOL TryLock<CRoCriticalSection>(CRoCriticalSection& CriticalSection)
	{
		return TryEnterCriticalSection(&CriticalSection.m_sec);
	}
#endif // _WIN32_WINNT >= 0x0400

template <typename CCriticalSection>
class CRoCriticalSectionLockT
{
private:
	CCriticalSection& m_CriticalSection;
	BOOL m_bLocked;

	CRoCriticalSectionLockT(const CRoCriticalSectionLockT&);
	CRoCriticalSectionLockT& operator = (const CRoCriticalSectionLockT&);

public:
// CRoCriticalSectionLockT
	CRoCriticalSectionLockT(CCriticalSection& CriticalSection, BOOL bInitialLock = TRUE) :
		m_CriticalSection(CriticalSection),
		m_bLocked(FALSE)
	{
		if(bInitialLock)
			Lock();
	}
	~CRoCriticalSectionLockT()
	{
		if(m_bLocked)
			Unlock();
	}
	VOID Lock()
	{
		_A(!m_bLocked);
		_V(m_CriticalSection.Lock());
		m_bLocked = TRUE;
	}
	BOOL TryLock()
	{
		_A(!m_bLocked);
		if(!::TryLock(m_CriticalSection))
			return FALSE;
		m_bLocked = TRUE;
		return TRUE;
	}
	VOID Unlock()
	{
		ATLASSUME(m_bLocked);
		m_CriticalSection.Unlock();
		m_bLocked = FALSE;
	}
	BOOL IsLocked() const
	{
		return m_bLocked;
	}
};

typedef CRoCriticalSectionLockT<CRoCriticalSection> CRoCriticalSectionLock;

#else

typedef CComCritSecLock<CRoCriticalSection> CRoCriticalSectionLock;

#endif

typedef CComCritSecLock<CRoLightCriticalSection> CRoLightCriticalSectionLock;

/////////////////////////////////////////////////////////////////////////////
// DeadlockCriticalSectionT

template <typename _CriticalSection>
inline DWORD WINAPI DeadlockCriticalSectionThreadProcT(_CriticalSection* pCriticalSection)
{
	CComCritSecLock<_CriticalSection> Lock(*pCriticalSection);
	_A(FALSE);
	return 0;
}

template <typename _CriticalSection>
inline VOID DeadlockCriticalSectionT(_CriticalSection& CriticalSection)
{
	CComCritSecLock<_CriticalSection> Lock(CriticalSection);
	// WARN: GetThreadId is WinVista+, so we have to use CreateThreadT instead of AtlCreateThread
	DWORD nThreadIdentifier;
	CHandle ThreadHandle;
	ThreadHandle.Attach(CreateThreadT<_CriticalSection>(NULL, 0, DeadlockCriticalSectionThreadProcT<_CriticalSection>, &CriticalSection, 0, &nThreadIdentifier));
	ATLTRACE(atlTraceGeneral, 1, _T("Deadlocked in threads %d and %d (spawned)\n"), GetCurrentThreadId(), nThreadIdentifier);
	WaitForSingleObject(ThreadHandle, INFINITE);
	_A(FALSE);
}

/////////////////////////////////////////////////////////////////////////////
// CComCritSecUnlock

template <typename CCriticalSection>
class CComCritSecUnlock
{
private:
	CCriticalSection& m_CriticalSection;
	BOOL m_bUnlocked;

	CComCritSecUnlock(const CComCritSecUnlock&);
	CComCritSecUnlock& operator = (const CComCritSecUnlock&);

public:
// CComCritSecUnlock
	CComCritSecUnlock(CCriticalSection& CriticalSection, BOOL bInitialUnlock = TRUE) :
		m_CriticalSection(CriticalSection),
		m_bUnlocked(FALSE)
	{
		if(bInitialUnlock)
			Unlock();
	}
	~CComCritSecUnlock()
	{
		if(m_bUnlocked)
			Lock();
	}
	VOID Unlock()
	{
		_A(!m_bUnlocked);
		_V(m_CriticalSection.Unlock());
		m_bUnlocked = TRUE;
	}
	VOID Lock()
	{
		_A(m_bUnlocked);
		m_CriticalSection.Lock();
		m_bUnlocked = FALSE;
	}
	BOOL TryLock()
	{
		_A(m_bUnlocked);
		if(!::TryLock(m_CriticalSection))
			return FALSE;
		m_bUnlocked = FALSE;
		return TRUE;
	}
	BOOL IsLocked() const
	{
		return m_bLocked;
	}
};

typedef CComCritSecUnlock<CRoCriticalSection> CRoCriticalSectionUnlock;

// TODO: Condition Variables and One-Time Initialization

////////////////////////////////////////////////////////////
// CApiComReleaseReaderWriterLock
//
// NOTE: Requires Windows Vista or Windows Server 2008

#if _WIN32_WINNT >= 0x0600

class CApiComReleaseReaderWriterLock
{
protected:
	SRWLOCK m_Lock;

public:
// CApiComReleaseReaderWriterLock
	CApiComReleaseReaderWriterLock()
	{
		memset(&m_Lock, 0, sizeof m_Lock);
	}
	~CApiComReleaseReaderWriterLock()
	{
	}
	VOID Initialize()
	{
		InitializeSRWLock(&m_Lock);
	}
	VOID Terminate()
	{
	}
	BOOL VerifyAcquiredExclusive() const
	{
		return TRUE; // No way to verify
	}
	VOID AcquireExclusive()
	{
		AcquireSRWLockExclusive(&m_Lock);
	}
	#if _WIN32_WINNT >= _WIN32_WINNT_WIN7
		BOOLEAN TryAcquireExclusive()
	{
		return TryAcquireSRWLockExclusive(&m_Lock);
	}
	#endif // _WIN32_WINNT >= _WIN32_WINNT_WIN7
	VOID ReleaseExclusive()
	{
		ReleaseSRWLockExclusive(&m_Lock);
	}
	BOOL VerifyAcquiredShared() const
	{
		return TRUE; // No way to verify
	}
	VOID AcquireShared()
	{
		AcquireSRWLockShared(&m_Lock);
	}
	#if _WIN32_WINNT >= _WIN32_WINNT_WIN7
		BOOLEAN TryAcquireShared()
	{
		return TryAcquireSRWLockShared(&m_Lock);
	}
	#endif // _WIN32_WINNT >= _WIN32_WINNT_WIN7
	VOID ReleaseShared()
	{
		ReleaseSRWLockShared(&m_Lock);
	}
};

#endif // _WIN32_WINNT >= 0x0600

////////////////////////////////////////////////////////////
// CNativeComReleaseReaderWriterLock

template <UINT t_nDefaultSpinCount = 1>
class CNativeComReleaseReaderWriterLockT
{
protected:
	CInterlockedLong m_nLock;

public:
// CNativeComReleaseReaderWriterLockT
	CNativeComReleaseReaderWriterLockT() :
		m_nLock(0)
	{
	}
	~CNativeComReleaseReaderWriterLockT()
	{
	}
	VOID Initialize()
	{
		m_nLock = 0;
	}
	VOID Terminate()
	{
	}
	BOOL VerifyAcquiredExclusive() const
	{
		return TRUE; // No way to reliably verify
	}
	VOID AcquireExclusiveNoSpin()
	{
		for(; ; )
		{
			if(m_nLock.ExchangeAdd(-0x10000) == 0)
				break;
			m_nLock.ExchangeAdd(+0x10000);
			SwitchToThread();
		}
	}
	VOID AcquireExclusiveSpin(UINT nSpinCount)
	{
		for(UINT nSpinIndex = 0; ; nSpinIndex++)
		{
			if(m_nLock.ExchangeAdd(-0x10000) == 0)
				break;
			m_nLock.ExchangeAdd(+0x10000);
			if(nSpinIndex < nSpinCount)
				continue;
			SwitchToThread();
			nSpinIndex = 0;
		}
	}
	VOID AcquireExclusive()
	{
		(t_nDefaultSpinCount > 0) ? AcquireExclusiveSpin(t_nDefaultSpinCount) : AcquireExclusiveNoSpin();
	}
	BOOLEAN TryAcquireExclusive()
	{
		if(m_nLock.ExchangeAdd(-0x10000) == 0)
			return TRUE;
		m_nLock.ExchangeAdd(+0x10000);
		return FALSE;
	}
	VOID ReleaseExclusive()
	{
		_A(m_nLock < -0x10000 / 2);
		m_nLock.ExchangeAdd(+0x10000);
	}
	BOOL VerifyAcquiredShared() const
	{
		return TRUE; // No way to reliably verify
	}
	VOID AcquireSharedNoSpin()
	{
		for(; ; )
		{
			if(m_nLock.Increment() > 0)
				break;
			m_nLock.Decrement();
			SwitchToThread();
		}
	}
	VOID AcquireSharedSpin(UINT nSpinCount)
	{
		for(UINT nSpinIndex = 0; ; nSpinIndex++)
		{
			if(m_nLock.Increment() > 0)
				break;
			m_nLock.Decrement();
			if(nSpinIndex < nSpinCount)
				continue;
			SwitchToThread();
			nSpinIndex = 0;
		}
	}
	VOID AcquireShared()
	{
		(t_nDefaultSpinCount > 0) ? AcquireSharedSpin(t_nDefaultSpinCount) : AcquireSharedNoSpin();
	}
	BOOLEAN TryAcquireShared()
	{
		if(m_nLock.Increment() > 0)
			return TRUE;
		m_nLock.Decrement();
		return FALSE;
	}
	VOID ReleaseShared()
	{
		m_nLock.Decrement();
	}
};

typedef CNativeComReleaseReaderWriterLockT<> CNativeComReleaseReaderWriterLock;

////////////////////////////////////////////////////////////
// CComReleaseReaderWriterLock, CComDebugReaderWriterLock, CRoReaderWriterLock

//typedef CApiComReleaseReaderWriterLock CComReleaseReaderWriterLock;
typedef CNativeComReleaseReaderWriterLock CComReleaseReaderWriterLock;

#if defined(_DEBUG)

class CComDebugReaderWriterLock :
	private CComReleaseReaderWriterLock
{
private:

	////////////////////////////////////////////////////////
	// CAcquirement

	class CAcquirement
	{
	public:
		DWORD m_nThreadIdentifier;
		BOOL m_bExclusive;

	public:
	// CAcquirement
		static BOOL IsEqualThreadIdentifier(const CAcquirement& Acquirement, DWORD nThreadIdentifier)
		{
			return Acquirement.m_nThreadIdentifier == nThreadIdentifier;
		}
		CAcquirement()
		{
		}
		CAcquirement(DWORD nThreadIdentifier, BOOL bExclusive) :
			m_nThreadIdentifier(nThreadIdentifier),
			m_bExclusive(bExclusive)
		{
		}
	};

	////////////////////////////////////////////////////////
	// CAcquirementList

	class CAcquirementList :
		private CRoListT<CAcquirement>
	{
	private:
		mutable CComReleaseReaderWriterLock m_DataReaderWriterLock;

	public:
	// CAcquirementList
		BOOL IsEmpty() const
		{
			m_DataReaderWriterLock.AcquireShared();
			const BOOL bResult = __super::IsEmpty();
			m_DataReaderWriterLock.ReleaseShared();
			return bResult;
		}
		BOOL Find(DWORD nThreadIdentifier = GetCurrentThreadId()) const
		{
			POSITION Position = NULL;
			m_DataReaderWriterLock.AcquireShared();
			__super::FindFirstThatT(&CAcquirement::IsEqualThreadIdentifier, nThreadIdentifier, &Position);
			m_DataReaderWriterLock.ReleaseShared();
			return Position != NULL;
		}
		BOOL Find(BOOL& bExclusive, DWORD nThreadIdentifier = GetCurrentThreadId()) const
		{
			POSITION Position = NULL;
			m_DataReaderWriterLock.AcquireShared();
			__super::FindFirstThatT(&CAcquirement::IsEqualThreadIdentifier, nThreadIdentifier, &Position);
			if(Position)
				bExclusive = GetAt(Position).m_bExclusive;
			m_DataReaderWriterLock.ReleaseShared();
			return Position != NULL;
		}
		VOID Add(BOOL bExclusive, DWORD nThreadIdentifier = GetCurrentThreadId())
		{
			m_DataReaderWriterLock.AcquireExclusive();
			__super::AddTail(CAcquirement(nThreadIdentifier, bExclusive));
			m_DataReaderWriterLock.ReleaseExclusive();
		}
		BOOL RemoveLast(DWORD nThreadIdentifier = GetCurrentThreadId())
		{
			POSITION Position;
			m_DataReaderWriterLock.AcquireExclusive();
			if(__super::FindLastThatT(&CAcquirement::IsEqualThreadIdentifier, nThreadIdentifier, &Position))
				__super::RemoveAt(Position);
			m_DataReaderWriterLock.ReleaseExclusive();
			return Position != NULL;
		}
	};

protected:
	CAcquirementList m_AcquirementList;

public:
// CComDebugReaderWriterLock
	CComDebugReaderWriterLock()
	{
	}
	~CComDebugReaderWriterLock()
	{
	}
	VOID Initialize()
	{
		__super::Initialize();
		_A(m_AcquirementList.IsEmpty());
	}
	VOID Terminate()
	{
		_A(m_AcquirementList.IsEmpty());
	}
	BOOL VerifyAcquiredExclusive() const
	{
		BOOL bExclusive;
		if(!m_AcquirementList.Find(bExclusive))
			return FALSE;
		return bExclusive;
	}
	VOID AcquireExclusive()
	{
		_A(!m_AcquirementList.Find());
		__super::AcquireExclusive();
		m_AcquirementList.Add(TRUE);
	}
	BOOLEAN TryAcquireExclusive()
	{
		_A(!m_AcquirementList.Find());
		if(!__super::TryAcquireExclusive())
			return FALSE;
		m_AcquirementList.Add(TRUE);
		return TRUE;
	}
	VOID ReleaseExclusive()
	{
		_W(m_AcquirementList.RemoveLast());
		__super::ReleaseExclusive();
		_A(!m_AcquirementList.Find());
	}
	BOOL VerifyAcquiredShared() const
	{
		BOOL bExclusive;
		if(!m_AcquirementList.Find(bExclusive))
			return FALSE;
		return !bExclusive;
	}
	VOID AcquireShared()
	{
		_A(!m_AcquirementList.Find());
		__super::AcquireShared();
		m_AcquirementList.Add(FALSE);
	}
	BOOLEAN TryAcquireShared()
	{
		_A(!m_AcquirementList.Find());
		if(!__super::TryAcquireShared())
			return FALSE;
		m_AcquirementList.Add(FALSE);
		return TRUE;
	}
	VOID ReleaseShared()
	{
		_W(m_AcquirementList.RemoveLast());
		__super::ReleaseShared();
		_A(!m_AcquirementList.Find());
	}
};

#endif // defined(_DEBUG)

#if defined(_DEBUG)
typedef CComDebugReaderWriterLock CComReaderWriterLock;
#else
typedef CComReleaseReaderWriterLock CComReaderWriterLock;
#endif // defined(_DEBUG)

class CComAutoReaderWriterLock : 
	public CComReaderWriterLock
{
private:
	VOID Initialize();
	VOID Terminate();

public:
// CComAutoReaderWriterLock
	CComAutoReaderWriterLock()
	{
		__super::Initialize();
	}
	~CComAutoReaderWriterLock()
	{
		__super::Terminate();
	}
};

// SUGG: Merge classes to have shared lock/unlock classes with traits/bases to lock shared/exclusive

template <typename _ReaderWriterLock>
class CComReaderWriterLockExclusiveLockT
{
private:
	_ReaderWriterLock& m_Lock;
	BOOL m_bLocked;

	CComReaderWriterLockExclusiveLockT(const CComReaderWriterLockExclusiveLockT&);
	CComReaderWriterLockExclusiveLockT& operator = (const CComReaderWriterLockExclusiveLockT&);

public:
// CComReaderWriterLockExclusiveLockT
	CComReaderWriterLockExclusiveLockT(_ReaderWriterLock& ReaderWriterLock, BOOL bInitialLock = TRUE) :
		m_Lock(ReaderWriterLock),
		m_bLocked(FALSE)
	{
		if(bInitialLock)
			Lock();
	}
	~CComReaderWriterLockExclusiveLockT()
	{
		if(m_bLocked)
			Unlock();
	}
	VOID Lock()
	{
		_A(!m_bLocked);
		m_Lock.AcquireExclusive();
		m_bLocked = TRUE;
	}
//#if _WIN32_WINNT >= _WIN32_WINNT_WIN7
	BOOL TryLock()
	{
		_A(!m_bLocked);
		if(!m_Lock.TryAcquireExclusive())
			return FALSE;
		m_bLocked = TRUE;
		return TRUE;
	}
//#endif // _WIN32_WINNT >= _WIN32_WINNT_WIN7
	VOID Unlock()
	{
		ATLASSUME(m_bLocked);
		m_Lock.ReleaseExclusive();
		m_bLocked = FALSE;
	}
};

template <typename _ReaderWriterLock>
class CComReaderWriterLockExclusiveUnlockT
{
private:
	_ReaderWriterLock& m_Lock;
	BOOL m_bUnlocked;

	CComReaderWriterLockExclusiveUnlockT(const CComReaderWriterLockExclusiveUnlockT&);
	CComReaderWriterLockExclusiveUnlockT& operator = (const CComReaderWriterLockExclusiveUnlockT&);

public:
// CComReaderWriterLockExclusiveUnlockT
	CComReaderWriterLockExclusiveUnlockT(_ReaderWriterLock& ReaderWriterLock, BOOL bInitialUnlock = TRUE) :
		m_Lock(ReaderWriterLock),
		m_bUnlocked(FALSE)
	{
		if(bInitialUnlock)
			Unlock();
	}
	~CComReaderWriterLockExclusiveUnlockT()
	{
		if(m_bUnlocked)
			Lock();
	}
	VOID Unlock()
	{
		_A(!m_bUnlocked);
		m_Lock.ReleaseExclusive();
		m_bUnlocked = TRUE;
	}
	VOID Lock()
	{
		ATLASSUME(m_bUnlocked);
		m_Lock.AcquireExclusive();
		m_bUnlocked = FALSE;
	}
//#if _WIN32_WINNT >= _WIN32_WINNT_WIN7
	BOOL TryLock()
	{
		_A(!m_bLocked);
		if(!m_Lock.TryAcquireExclusive())
			return FALSE;
		m_bLocked = TRUE;
		return TRUE;
	}
//#endif // _WIN32_WINNT >= _WIN32_WINNT_WIN7
};

template <typename _ReaderWriterLock>
class CComReaderWriterLockSharedLockT
{
private:
	_ReaderWriterLock& m_Lock;
	BOOL m_bLocked;

	CComReaderWriterLockSharedLockT(const CComReaderWriterLockSharedLockT&);
	CComReaderWriterLockSharedLockT& operator = (const CComReaderWriterLockSharedLockT&);

public:
// CComReaderWriterLockSharedLockT
	CComReaderWriterLockSharedLockT(_ReaderWriterLock& ReaderWriterLock, BOOL bInitialLock = TRUE) :
		m_Lock(ReaderWriterLock),
		m_bLocked(FALSE)
	{
		if(bInitialLock)
			Lock();
	}
	~CComReaderWriterLockSharedLockT()
	{
		if(m_bLocked)
			Unlock();
	}
	VOID Lock()
	{
		_A(!m_bLocked);
		m_Lock.AcquireShared();
		m_bLocked = TRUE;
	}
//#if _WIN32_WINNT >= _WIN32_WINNT_WIN7
	BOOL TryLock()
	{
		_A(!m_bLocked);
		if(!m_Lock.TryAcquireShared())
			return FALSE;
		m_bLocked = TRUE;
		return TRUE;
	}
//#endif // _WIN32_WINNT >= _WIN32_WINNT_WIN7
	VOID Unlock()
	{
		ATLASSUME(m_bLocked);
		m_Lock.ReleaseShared();
		m_bLocked = FALSE;
	}
};

template <typename _ReaderWriterLock>
class CComReaderWriterLockSharedUnlockT
{
private:
	_ReaderWriterLock& m_Lock;
	BOOL m_bUnlocked;

	CComReaderWriterLockSharedUnlockT(const CComReaderWriterLockSharedUnlockT&);
	CComReaderWriterLockSharedUnlockT& operator = (const CComReaderWriterLockSharedUnlockT&);

public:
// CComReaderWriterLockSharedUnlockT
	CComReaderWriterLockSharedUnlockT(_ReaderWriterLock& ReaderWriterLock, BOOL bInitialUnlock = TRUE) :
		m_Lock(ReaderWriterLock),
		m_bUnlocked(FALSE)
	{
		if(bInitialUnlock)
			Unlock();
	}
	~CComReaderWriterLockSharedUnlockT()
	{
		if(m_bUnlocked)
			Lock();
	}
	VOID Unlock()
	{
		_A(!m_bUnlocked);
		m_Lock.ReleaseShared();
		m_bUnlocked = TRUE;
	}
	VOID Lock()
	{
		ATLASSUME(m_bUnlocked);
		m_Lock.AcquireShared();
		m_bUnlocked = FALSE;
	}
//#if _WIN32_WINNT >= _WIN32_WINNT_WIN7
	BOOL TryLock()
	{
		_A(!m_bLocked);
		if(!m_Lock.TryAcquireShared())
			return FALSE;
		m_bLocked = TRUE;
		return TRUE;
	}
//#endif // _WIN32_WINNT >= _WIN32_WINNT_WIN7
};

// TODO: Deadlock-aware Debug/Trace versions

//#if !defined(SRWLOCK_THROUGH_CRITICALSECTION)
//#if !defined(_WIN32_WINNT) || _WIN32_WINNT < 0x0600
//#define SRWLOCK_THROUGH_CRITICALSECTION
//#endif
//#endif

#if defined(SRWLOCK_THROUGH_CRITICALSECTION)
typedef CRoCriticalSection CRoReaderWriterLock;
typedef CRoCriticalSectionLock CRoReaderWriterLockExclusiveLock;
typedef CRoCriticalSectionUnlock CRoReaderWriterLockExclusiveUnlock;
typedef CRoCriticalSectionLock CRoReaderWriterLockSharedLock;
typedef CRoCriticalSectionUnlock CRoReaderWriterLockSharedUnlock;
#else
typedef CComAutoReaderWriterLock CRoReaderWriterLock;
typedef CComReaderWriterLockExclusiveLockT<CRoReaderWriterLock> CRoReaderWriterLockExclusiveLock;
typedef CComReaderWriterLockExclusiveUnlockT<CRoReaderWriterLock> CRoReaderWriterLockExclusiveUnlock;
typedef CComReaderWriterLockSharedLockT<CRoReaderWriterLock> CRoReaderWriterLockSharedLock;
typedef CComReaderWriterLockSharedUnlockT<CRoReaderWriterLock> CRoReaderWriterLockSharedUnlock;
#endif

////////////////////////////////////////////////////////////
// CLocalObjectMap

class CLocalObjectMap
{
private:
	_ATL_OBJMAP_ENTRY* m_pObjectMap;
	BOOL m_bRegistered;

public:
// CLocalObjectMap
	CLocalObjectMap(_ATL_OBJMAP_ENTRY* pObjectMap) throw() :
		m_pObjectMap(pObjectMap),
		m_bRegistered(FALSE)
	{
		_A(m_pObjectMap);
	}
	CLocalObjectMap(_ATL_OBJMAP_ENTRY* pObjectMap, BOOL bRegister) :
		m_pObjectMap(pObjectMap),
		m_bRegistered(FALSE)
	{
		if(bRegister)
			Register();
		_A(m_bRegistered == bRegister);
	}
	~CLocalObjectMap() throw()
	{
		if(m_bRegistered)
			_ATLTRY
			{
				Revoke();
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
	}
	VOID Register()
	{
		_A(!m_bRegistered);
		SIZE_T nIndex = 0;
		_ATLTRY
		{
			for(; m_pObjectMap[nIndex].pclsid; nIndex++)
				__C(m_pObjectMap[nIndex].RegisterClassObject(CLSCTX_INPROC_SERVER, REGCLS_MULTIPLEUSE));
		}
		_ATLCATCHALL()
		{
			for(nIndex--; nIndex + 1 > 0; nIndex--)
				_V(m_pObjectMap[nIndex].RevokeClassObject());
			_ATLRETHROW;
		}
		m_bRegistered = TRUE;
	}
	VOID Revoke()
	{
		_A(m_bRegistered);
		for(SIZE_T nIndex = 0; m_pObjectMap[nIndex].pclsid; nIndex++)
			__C(m_pObjectMap[nIndex].RevokeClassObject());
		m_bRegistered = FALSE;
	}
};

////////////////////////////////////////////////////////////
// CInProcessServerLibrary

class CInProcessServerLibrary
{
private:
	HMODULE m_hModule;

public:
// CInProcessServerLibrary
	CInProcessServerLibrary() throw() :
		m_hModule(NULL)
	{
	}
	CInProcessServerLibrary(HMODULE hModule) throw() :
		m_hModule(NULL)
	{
		Initialize(hModule);
	}
	CInProcessServerLibrary(LPCTSTR pszPath) :
		m_hModule(NULL)
	{
		Initialize(pszPath);
	}
	~CInProcessServerLibrary() throw()
	{
		Terminate();
	}
	VOID Initialize(HMODULE hModule) throw()
	{
		Terminate();
		m_hModule = hModule;
	}
	static CPath PathFromModuleDirectoryAndName(LPCTSTR pszName, HMODULE hModule = _AtlBaseModule.GetModuleInstance())
	{
		TCHAR pszDirectory[MAX_PATH] = { 0 };
		_W(GetModuleFileName(hModule, pszDirectory, DIM(pszDirectory)));
		_W(ATLPath::RemoveFileSpec(pszDirectory));
		CPath sPath;
		sPath.Combine(pszDirectory, pszName);
		return sPath;
	}
	VOID Initialize(LPCTSTR pszPath)
	{
		Terminate();
		m_hModule = LoadLibrary(pszPath);
		__E(m_hModule);
	}
	BOOL TryInitialize(LPCTSTR pszPath) throw()
	{
		const HMODULE hModule = LoadLibrary(pszPath);
		if(!hModule)
			return FALSE;
		Terminate();
		m_hModule = hModule;
		return TRUE;
	}
	VOID Terminate()
	{
		if(m_hModule)
		{
			FreeLibrary(m_hModule);
			m_hModule = NULL;
		}
	}
	HMODULE GetModule() const throw()
	{
		return m_hModule;
	}
	operator HMODULE () const throw()
	{
		return GetModule();
	}
	template <typename IObject>
	HRESULT CreateInstance(CComPtr<IObject>& pObject, const CLSID& ClassIdentifier, IUnknown* pOuterUnknown = NULL)
	{
		if(!m_hModule)
			return HRESULT_FROM_WIN32(ERROR_MOD_NOT_FOUND);
		typedef HRESULT (STDMETHODCALLTYPE *DLLGETCLASSOBJECT)(__in REFCLSID ClassIdentifier, __in REFIID InterfaceIdentifier, __out VOID** ppvObject);
		const DLLGETCLASSOBJECT pDllGetClassObject = (DLLGETCLASSOBJECT) GetProcAddress(m_hModule, "DllGetClassObject");
		if(!pDllGetClassObject)
			return AtlHresultFromLastError();
		CComPtr<IClassFactory> pClassFactory;
		_C((pDllGetClassObject)(ClassIdentifier, __uuidof(IClassFactory), (VOID**) &pClassFactory));
		_A(pClassFactory);
		_C(pClassFactory->CreateInstance(pOuterUnknown, __uuidof(IObject), (VOID**) &pObject));
		return S_OK;
	}
};

////////////////////////////////////////////////////////////
// CPrivateDispatchTypeInfoT

template <typename T, typename IObject>
class ATL_NO_VTABLE CPrivateDispatchTypeInfoT
{
protected:
	typedef CPrivateDispatchTypeInfoT<T, IObject> CPrivateDispatchTypeInfo;

public:

	////////////////////////////////////////////////////////
	// CObjectDispatch

	class ATL_NO_VTABLE CObjectDispatch :
		public IDispatchImpl<IObject>
	{
	public:
	// CObjectDispatch
		typename IDispatchImpl<IObject>::_tihclass& GetTypeInfoHolder() throw()
		{
			return _tih;
		}
	};

protected:
	mutable CRoCriticalSection m_TypeCriticalSection;
	CComPtr<ITypeLib> m_pTypeLib;

public:
// CPrivateDispatchTypeInfoT
	VOID LoadTypeInfo(INT nResourceIdentifier = 0)
	{
		TCHAR pszPath[MAX_PATH] = { 0 };
		_W(GetModuleFileName(_AtlBaseModule.GetModuleInstance(), pszPath, DIM(pszPath)));
		if(nResourceIdentifier)
		{
			const SIZE_T nPathLength = _tcslen(pszPath);
			_stprintf_s(pszPath + nPathLength, DIM(pszPath) - nPathLength, _T("\\%d"), nResourceIdentifier);
		}
		// SUGG: Put type library pointer on global collection for reuse
		CRoCriticalSectionLock TypeLock(m_TypeCriticalSection);
		CComPtr<ITypeLib> pTypeLib;
		if(!m_pTypeLib)
		{
			__C(LoadTypeLib(CT2OLE(pszPath), &pTypeLib));
			m_pTypeLib = pTypeLib;
		} else
			pTypeLib = m_pTypeLib;
		CComPtr<ITypeInfo> pTypeInfo;
		__C(pTypeLib->GetTypeInfoOfGuid(__uuidof(IObject), &pTypeInfo));
		_A(pTypeInfo);
		IDispatchImpl<IObject>* pDispath = static_cast<IDispatchImpl<IObject>*>(static_cast<T*>(this));
		CComTypeInfoHolder& TypeInfoHolder = static_cast<CObjectDispatch*>(pDispath)->GetTypeInfoHolder();
		TypeInfoHolder.m_pInfo = pTypeInfo;
		TypeInfoHolder.LoadNameCache(pTypeInfo);
	}
};

////////////////////////////////////////////////////////////
// CSupportErrorInfoBase

INT_PTR AtlMessageBoxEx(HWND hParentWindow, ATL::_U_STRINGorID Text, ATL::_U_STRINGorID Caption, UINT nType) throw();

class CSupportErrorInfoBase
{
public:

	////////////////////////////////////////////////////////
	// CErrorContext

	class CErrorContext
	{
	public:
		CErrorContext* m_pPrevious;

	public:
	// CErrorContext
		CErrorContext() :
			m_pPrevious(NULL)
		{
		}
		virtual CString GetText() = 0;
	};

	////////////////////////////////////////////////////////
	// CLocalErrorInfo
	//
	// NOTE: Local COM method context to hold pending error information

	class CLocalErrorInfo
	{
	private:
		static CRoListT<CLocalErrorInfo*>* g_pList;
		DWORD m_nThreadIdentifier;
		HRESULT m_nResult;
		CErrorContext* m_pContext;
		CComPtr<IErrorInfo> m_pErrorInfo;

	public:
	// CLocalErrorInfo
		static CLocalErrorInfo* GetCurrent()
		{
			const DWORD nThreadIdentifier = GetCurrentThreadId();
			_A(_pAtlModule);
			CComCritSecLock<CComCriticalSection> Lock(_pAtlModule->m_csStaticDataInitAndTypeInfo);
			if(g_pList)
			{
				for(POSITION Position = g_pList->GetTailPosition(); Position; g_pList->GetPrev(Position))
				{
					CLocalErrorInfo* pLocalErrorInfo = g_pList->GetAt(Position);
					_A(pLocalErrorInfo);
					if(pLocalErrorInfo->m_nThreadIdentifier == nThreadIdentifier)
						return pLocalErrorInfo;
				}
			}
			return NULL;
		}
		static CString GetCurrentDescription()
		{
			CString sDescription;
			CLocalErrorInfo* pLocalErrorInfo = GetCurrent();
			if(pLocalErrorInfo)
				GetErrorDescription(pLocalErrorInfo->m_pErrorInfo, sDescription);
			return sDescription;
		}
		CLocalErrorInfo() :
			m_nThreadIdentifier(GetCurrentThreadId()),
			m_nResult(S_OK),
			m_pContext(NULL)
		{
			_ATLTRY
			{
				CComCritSecLock<CComCriticalSection> Lock(_pAtlModule->m_csStaticDataInitAndTypeInfo);
				if(!g_pList)
					g_pList = new CRoListT<CLocalErrorInfo*>();
				_W(g_pList->AddTail(this));
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
			_V(SetErrorInfo(0, NULL));
		}
		~CLocalErrorInfo()
		{
			CComCritSecLock<CComCriticalSection> Lock(_pAtlModule->m_csStaticDataInitAndTypeInfo);
			if(g_pList)
			{
				const POSITION Position = g_pList->Find(this);
				if(Position)
					g_pList->RemoveAt(Position);
				if(g_pList->IsEmpty())
				{
					delete g_pList;
					g_pList = NULL;
				}
			}
		}
		VOID Initialize(HRESULT nResult)
		{
			m_nResult = nResult;
			m_pErrorInfo.Release();
			_V(GetErrorInfo(0, &m_pErrorInfo));
		}
		HRESULT GetResult() const
		{
			return m_nResult;
		}
		CErrorContext* GetContext()
		{
			return m_pContext;
		}
		VOID AddContext(CErrorContext* pContext)
		{
			_A(pContext);
			_A(!pContext->m_pPrevious);
			pContext->m_pPrevious = m_pContext;
			m_pContext = pContext;
		}
		VOID RemoveContext(CErrorContext* pContext)
		{
			_A(pContext);
			_A(m_pContext == pContext);
			m_pContext = pContext->m_pPrevious;
		}
		BOOL UpdateErrorInfo()
		{
			if(m_pErrorInfo)
			{
				_V(SetErrorInfo(0, m_pErrorInfo));
				return TRUE;
			}
			return FALSE;
		}
		BOOL UpdateErrorInfo(HRESULT nResult)
		{
			if(nResult == m_nResult && m_pErrorInfo)
			{
				_V(SetErrorInfo(0, m_pErrorInfo));
				return TRUE;
			}
			return FALSE;
		}
	};

	////////////////////////////////////////////////////////
	// CTextErrorContext

	class CTextErrorContext :
		public CErrorContext
	{
	private:
		CLocalErrorInfo* m_pLocalErrorInfo;
		CString m_sText;
		#if _TRACE
			BOOL m_bDestructorTrace;
		#endif // _TRACE

		VOID SetLocalErrorInfo()
		{
			m_pLocalErrorInfo = CLocalErrorInfo::GetCurrent();
			if(m_pLocalErrorInfo)
				m_pLocalErrorInfo->AddContext(this);
		}

	public:
	// CTextErrorContext
		CTextErrorContext(BOOL bDestructorTrace = FALSE)
		{
			bDestructorTrace;
			#if _TRACE
				m_bDestructorTrace = bDestructorTrace;
			#endif // _TRACE
			SetLocalErrorInfo();
		}
		CTextErrorContext(const CString& sText, BOOL bDestructorTrace = FALSE)
		{
			bDestructorTrace;
			m_sText = sText;
			#if _TRACE
				m_bDestructorTrace = bDestructorTrace;
			#endif // _TRACE
			SetLocalErrorInfo();
		}
		CTextErrorContext(const CString& sText, BOOL bDestructorTrace, LPCTSTR pszConstructorTraceText)
		{
			bDestructorTrace; pszConstructorTraceText;
			m_sText = sText;
			#if _TRACE
				m_bDestructorTrace = bDestructorTrace;
				const BOOL bConstructorTrace = pszConstructorTraceText != NULL;
				if(bConstructorTrace)
					_Z3(atlTraceException, 3, _T("Entering Context, %s, %s, 0x%p\n"), m_sText, CString(pszConstructorTraceText), this);
			#endif // _TRACE
			SetLocalErrorInfo();
		}
		~CTextErrorContext()
		{
			#if _TRACE
				if(m_bDestructorTrace && !m_sText.IsEmpty())
					_Z2(atlTraceException, 2, _T("Leaving Context, %s, 0x%p\n"), m_sText, this);
			#endif // _TRACE
			Terminate();
		}
		VOID Terminate()
		{
			if(m_pLocalErrorInfo)
			{
				m_pLocalErrorInfo->RemoveContext(this);
				m_pLocalErrorInfo = NULL;
			}
		}
		VOID SetText(const CString& sText)
		{
			m_sText = sText;
		}
		VOID SetDestructorTrace(BOOL bDestructorTrace)
		{
			#if _TRACE
				m_bDestructorTrace = bDestructorTrace;
			#endif // _TRACE
		}

	// CErrorContext
		CString GetText()
		{
			return m_sText;
		}
	};

	////////////////////////////////////////////////////////
	// CErrorT, CReportErrorTraits, CError
	//
	// NOTE: Custom HRESULT producing class to additionally to communicate to current CLocalErrorInfo instance, if available

	template <typename T, typename CReportErrorTraits>
	class CErrorT
	{
	private:
		CLocalErrorInfo* m_pLocalErrorInfo;
		HRESULT m_nResult;
		CString m_sMessage;

		VOID AppendContextText(CString& sText) const
		{
			if(!m_pLocalErrorInfo)
				return;
			CErrorContext* pContext = m_pLocalErrorInfo->GetContext();
			if(!pContext)
				return;
			CRoArrayT<CString> Array;
			for(; pContext; pContext = pContext->m_pPrevious)
			{
				const CString sText = pContext->GetText();
				if(!sText.IsEmpty())
					Array.InsertAt(0, sText);
			}
			if(Array.IsEmpty())
				return;
			const CString sContextText = _StringHelper::Join(Array, _T("; "));
			if(!sText.IsEmpty())
				sText += AtlFormatString(_T(" [%s]"), sContextText);
			else
				sText = sContextText;
		}

	public:
	// CErrorT
		static LPCTSTR GetGenericFormat()
		{
			return _T("Error 0x%08X");
		}
		static CString FormatResult(HRESULT nResult, LPCTSTR pszGenericFormat = NULL)
		{
			CString sMessage = AtlFormatSystemMessage(nResult);
			sMessage.TrimRight(_T("\t\n\r ."));
			if(sMessage.IsEmpty() && pszGenericFormat)
				sMessage = AtlFormatString(pszGenericFormat, nResult);
			return sMessage;
		}
		static HRESULT SetErrorMessage(HRESULT nResult, LPCTSTR pszMessage)
		{
			CString sMessage;
			if(!pszMessage || !_tcslen(pszMessage))
			{
				sMessage = T::FormatResult(nResult, GetGenericFormat());
				pszMessage = sMessage;
			}
			return CReportErrorTraits::ReportError(nResult, pszMessage);
		}
		static inline VOID Throw(HRESULT nResult, LPCTSTR pszMessage = NULL, INT nLine = 0)
		{
			CString sText;
			if(pszMessage)
				sText = pszMessage;
			CString sResultMessage = T::FormatResult(nResult, T::GetGenericFormat());
			if(!sResultMessage.IsEmpty() && !sText.IsEmpty())
				sText += _T(": ");
			sText += sResultMessage;
			if(nLine)
				sText += AtlFormatString(_T(" #%d"), nLine);
			AtlThrow(T(nResult, sText));
		}
		static inline VOID ThrowFailed(HRESULT nResult, LPCTSTR pszMessage = NULL, INT nLine = 0)
		{
			if(SUCCEEDED(nResult))
				return;
			CString sMessage;
			if(!pszMessage && GetErrorDescription(sMessage))
				AtlThrow(T(nResult, sMessage));
			Throw(nResult, pszMessage, nLine);
		}
		static inline VOID ThrowFalse(BOOL bValue, LPCTSTR pszMessage = NULL, HRESULT nResult = E_UNNAMED, INT nLine = 0)
		{
			if(bValue)
				return;
			CString sMessage;
			if(!pszMessage && GetErrorDescription(sMessage))
				AtlThrow(T(nResult, sMessage));
			Throw(nResult, pszMessage, nLine);
		}
		static inline VOID ThrowFalse(const VOID* pvValue, LPCTSTR pszMessage = NULL, HRESULT nResult = E_UNNAMED, INT nLine = 0)
		{
			if(pvValue)
				return;
			CString sMessage;
			if(!pszMessage && GetErrorDescription(sMessage))
				AtlThrow(T(nResult, sMessage));
			Throw(nResult, pszMessage, nLine);
		}
		CErrorT(HRESULT nResult, LPCTSTR pszMessage = NULL) :
			m_pLocalErrorInfo(CLocalErrorInfo::GetCurrent()),
			m_nResult(nResult),
			m_sMessage(pszMessage)
		{
		}
		CErrorT(CLocalErrorInfo& LocalErrorInfo, HRESULT nResult, LPCTSTR pszMessage = NULL) :
			m_pLocalErrorInfo(&LocalErrorInfo),
			m_nResult(nResult),
			m_sMessage(pszMessage)
		{
		}
		HRESULT GetResult() const
		{
			return m_nResult;
		}
		operator HRESULT () const
		{
			const T* pT = static_cast<const T*>(this);
			HRESULT nResult;
			if(m_pLocalErrorInfo)
			{
				CString sMessage = m_sMessage;
				AppendContextText(sMessage);
				nResult = pT->SetErrorMessage(m_nResult, sMessage);
				m_pLocalErrorInfo->Initialize(nResult);
			} else
				nResult = pT->SetErrorMessage(m_nResult, m_sMessage);
			return nResult;
		}
		static CString Concatenate(SIZE_T nCount, LPCTSTR pszSeparator, LPCTSTR pszFirstMessage, ...)
		{
			_A(nCount > 0 && pszSeparator);
			CString sMessage = pszFirstMessage;
			va_list Arguments;
			va_start(Arguments, pszFirstMessage);
			for(SIZE_T nIndex = 1; nIndex < nCount; nIndex++)
			{
				LPCTSTR pszNextMessage = va_arg(Arguments, LPCTSTR);
				if(!pszNextMessage || !*pszNextMessage)
					continue;
				if(!sMessage.IsEmpty())
					sMessage.Append(pszSeparator);
				sMessage.Append(pszNextMessage);
			}
			va_end(Arguments);
			return sMessage;
		}
		static INT_PTR MessageBox(HWND hParentWindow, const CLocalErrorInfo& ErrorInfo, _U_STRINGorID Caption, UINT nType = MB_ICONERROR | MB_OK)
		{
			CString sMessage;
			const CString sGenericMessage = AtlFormatString(T::GetGenericFormat(), ErrorInfo.GetResult());
			CString sDescription = ErrorInfo.GetCurrentDescription();
			BOOL bAppendResult = TRUE;
			if(sDescription.IsEmpty())
			{
				sMessage = T::FormatResult(ErrorInfo.GetResult());
				if(sMessage.IsEmpty())
				{
					sMessage = sGenericMessage;
					bAppendResult = FALSE;
				}
			} else
			{
				sMessage = sDescription;
				if(sMessage.Compare(sGenericMessage) == 0)
					bAppendResult = FALSE;
			}
			if(bAppendResult)
				sMessage.AppendFormat(_T(" (0x%08X)"), ErrorInfo.GetResult());
			return AtlMessageBoxEx(hParentWindow, (LPCTSTR) sMessage, Caption, nType);
		}
	};

	class CReportErrorTraits
	{
	public:
	// CReportErrorTraits
		static HRESULT ReportError(HRESULT nResult, LPCTSTR pszMessage)
		{
			_A(pszMessage);
			return AtlReportError(CLSID_NULL, pszMessage, 0, NULL, IID_NULL, nResult);
		}
	};

	class CError :
		public CErrorT<CError, CReportErrorTraits>
	{
	public:
	// CError
		CError(HRESULT nResult, LPCTSTR pszMessage = NULL) :
			CErrorT<CError, CReportErrorTraits>(nResult, pszMessage)
		{
		}
	};

	////////////////////////////////////////////////////////
	// CExceptionErrorInfo
	//
	// NOTE: Converts exception into HRESULT existing from COM method, updating error information

	class CExceptionErrorInfo
	{
	protected:
		HRESULT m_nResult;

	public:
	// CExceptionErrorInfo
		CExceptionErrorInfo()
		{
		}
		CExceptionErrorInfo(HRESULT nResult, CLocalErrorInfo& LocalErrorInfo)
		{
			Initialize(nResult, LocalErrorInfo);
		}
		VOID Initialize(HRESULT nResult, CLocalErrorInfo& LocalErrorInfo)
		{
			LocalErrorInfo.UpdateErrorInfo(nResult);
			m_nResult = nResult;
		}
		operator HRESULT () const
		{
			return m_nResult;
		}
	};

public:
// CSupportErrorInfoBase
	static BOOL GetErrorInformation(CComPtr<IErrorInfo>& pErrorInfo)
	{
		_A(!pErrorInfo);
		GetErrorInfo(0, &pErrorInfo);
		return pErrorInfo != NULL;
	}
	static BOOL GetErrorDescription(IErrorInfo* pErrorInfo, CString& sDescription)
	{
		if(!pErrorInfo)
			return FALSE;
		CComBSTR sDescriptionW;
		pErrorInfo->GetDescription(&sDescriptionW);
		sDescription = CString(sDescriptionW);
		return !sDescription.IsEmpty();
	}
	static BOOL GetErrorDescription(CString& sMessage)
	{
		CComPtr<IErrorInfo> pErrorInfo;
		if(!GetErrorInformation(pErrorInfo))
			return FALSE;
		return GetErrorDescription(pErrorInfo, sMessage);
	}
};

////////////////////////////////////////////////////////////
// CSimpleSupportErrorInfoT

template <typename T, typename _Interface>
class ATL_NO_VTABLE CSimpleSupportErrorInfoT :
	public ISupportErrorInfoImpl<&__uuidof(_Interface)>,
	public CSupportErrorInfoBase
{
protected:
	typedef CSimpleSupportErrorInfoT<T, _Interface> CSimpleSupportErrorInfo;

public:

	////////////////////////////////////////////////////////
	// CSupportErrorInfoReportErrorTraits, CErrorT, CError

	class CSupportErrorInfoReportErrorTraits
	{
	public:
	// CSupportErrorInfoReportErrorTraits
		static HRESULT ReportError(HRESULT nResult, LPCTSTR pszMessage)
		{
			_A(pszMessage);
			return AtlReportError(T::GetObjectCLSID(), pszMessage, 0, NULL, __uuidof(_Interface), nResult);
		}
	};

	template <typename T>
	class CErrorT :
		public CSupportErrorInfoBase::CErrorT<T, CSupportErrorInfoReportErrorTraits>
	{
	public:
	// CErrorT
		CErrorT(HRESULT nResult, LPCTSTR pszMessage = NULL) :
			CSupportErrorInfoBase::CErrorT<T, CSupportErrorInfoReportErrorTraits>(nResult, pszMessage)
		{
		}
		CErrorT(CLocalErrorInfo& LocalErrorInfo, HRESULT nResult, LPCTSTR pszMessage = NULL) :
			CSupportErrorInfoBase::CErrorT<T, CSupportErrorInfoReportErrorTraits>(LocalErrorInfo, nResult, pszMessage)
		{
		}
	};

	class CError :
		public CErrorT<CError>
	{
	public:
	// CError
		CError(HRESULT nResult, LPCTSTR pszMessage = NULL) :
			CErrorT<CError>(nResult, pszMessage)
		{
		}
	};

public:
// CSimpleSupportErrorInfoT
	//static HRESULT SetErrorInfo(HRESULT nResult, LPCTSTR pszMessage)
	//{
	//	return CSupportErrorInfoReportErrorTraits::ReportError(nResult, pszMessage);
	//}
};

__declspec(selectany) CRoListT<CSupportErrorInfoBase::CLocalErrorInfo*>* CSupportErrorInfoBase::CLocalErrorInfo::g_pList = NULL;

//template <typename T, typename _Interface>
//__declspec(selectany) CRoListT<typename CSimpleSupportErrorInfoT<T, _Interface>::CLocalErrorInfo*>* CSimpleSupportErrorInfoT<T, _Interface>::CLocalErrorInfo::g_pList = NULL;

////////////////////////////////////////////////////////////
// CMsAccurateFileTime

class CMsAccurateFileTime
{
private:

public:
// CMsAccurateFileTime
	static ULONGLONG IntegerFromFileTime(const FILETIME& FileTime) throw()
	{
		return ((ULONGLONG) FileTime.dwHighDateTime << 32) + FileTime.dwLowDateTime;
	}
	static ULONGLONG GetTime() throw()
	{
		FILETIME AnchorFileTime;
		GetSystemTimeAsFileTime(&AnchorFileTime);
		return IntegerFromFileTime(AnchorFileTime);
	}
};

////////////////////////////////////////////////////////////
// CUsAccurateFileTime

class CUsAccurateFileTime
{
private:
	static const ULONGLONG g_nFileTimeFrequency = 1000 * 10000; // 100 ns units
	static CUsAccurateFileTime g_Instance;
	mutable CRoReaderWriterLock m_DataReaderWriterLock;
	ULONGLONG m_nCurrentFrequency;
	ULONGLONG m_nAnchorCounter;
	ULONGLONG m_nAnchorFileTime;

	static ULONGLONG IntegerFromFileTime(const FILETIME& FileTime) throw()
	{
		return CMsAccurateFileTime::IntegerFromFileTime(FileTime);
	}
	ULONGLONG InternalGetTime() throw()
	{
		static const ULONGLONG g_nSynchronizationInterval = 20 * 60; // 20 minutes
		const ULONGLONG nCounter = GetBaseCounter();
		ULONGLONG nRelativeCounter;
		ULONGLONG nUnsynchronizedFileTime;
		{
			CRoReaderWriterLockSharedLock DataLock(m_DataReaderWriterLock);
			nRelativeCounter = nCounter - m_nAnchorCounter;
			nUnsynchronizedFileTime = m_nAnchorFileTime + (nRelativeCounter * g_nFileTimeFrequency) / m_nCurrentFrequency;
			if(nRelativeCounter < g_nSynchronizationInterval * m_nFrequency)
				return nUnsynchronizedFileTime;
		}
		FILETIME FileTime;
		GetSystemTimeAsFileTime(&FileTime);
		const ULONGLONG nFileTime = IntegerFromFileTime(FileTime);
		CRoReaderWriterLockExclusiveLock DataLock(m_DataReaderWriterLock);
		ULONGLONG nFrequency = (g_nFileTimeFrequency * nRelativeCounter) / (nFileTime - m_nAnchorFileTime);
		#pragma region Warn if currency frequency goes into unexpected range
		const UINT nRelativeFrequency = (UINT) ((nFrequency * 128) / m_nFrequency);
        if(nRelativeFrequency < (128 - 12) || nRelativeFrequency > (128 + 12))
        {
			_Z2(atlTraceGeneral, 2, _T("Current frequency is out of reasonable range, m_nFrequency %I64d, m_nCurrentFrequency %I64d, nFrequency %I64d, nRelativeFrequency %d\n"), m_nFrequency, m_nCurrentFrequency, nFrequency, nRelativeFrequency);
            if(nFrequency < (128 - 16) * m_nFrequency / 128)
                nFrequency = (128 - 16) * m_nFrequency / 128;
            else if(nFrequency > (128 + 16) * m_nFrequency / 128)
                nFrequency = (128 + 16) * m_nFrequency / 128;
        }
		#pragma endregion 
		m_nAnchorCounter = nCounter;
		m_nAnchorFileTime = nUnsynchronizedFileTime;
		m_nCurrentFrequency = nFrequency;
		return nUnsynchronizedFileTime;
	}

public:
	const ULONGLONG m_nFrequency;

public:
// CUsAccurateFileTime
	static ULONGLONG GetBaseFrequency() throw()
	{
		LARGE_INTEGER Frequency;
		_W(QueryPerformanceFrequency(&Frequency));
		return (ULONGLONG) Frequency.QuadPart;
	}
	static ULONGLONG GetBaseCounter() throw()
	{
		LARGE_INTEGER Counter;
		_W(QueryPerformanceCounter(&Counter));
		return (ULONGLONG) Counter.QuadPart;
	}
	static ULONGLONG GetTime() throw()
	{
		return g_Instance.InternalGetTime();
	}
	CUsAccurateFileTime() throw() :
		m_nFrequency(GetBaseFrequency())
	{
		_A(m_nFrequency > 0);
		m_nCurrentFrequency = m_nFrequency;
		m_nAnchorCounter = GetBaseCounter();
		FILETIME AnchorFileTime;
		GetSystemTimeAsFileTime(&AnchorFileTime);
		m_nAnchorFileTime = IntegerFromFileTime(AnchorFileTime);
	}
};

__declspec(selectany) CUsAccurateFileTime CUsAccurateFileTime::g_Instance;

