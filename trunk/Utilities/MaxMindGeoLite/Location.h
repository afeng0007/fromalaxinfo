////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

#include <atlenc.h>
#include "rosockets.h"
#include "MaxMindGeoLite_i.h"

////////////////////////////////////////////////////////////
// GeoLiteCity

namespace GeoLiteCity
{
	////////////////////////////////////////////////////////////
	// CLocation

	class CLocation
	{
	public:
		INT m_nIdentifier;
		CStringA m_sCountryCode;
		CStringA m_sRegion;
		CStringA m_sCity;
		CStringA m_sPostalCode;
		DOUBLE m_fLatitude;
		DOUBLE m_fLongitude;
		CStringA m_sMetroCode;
		CStringA m_sAreaCode;

	public:
	// CLocation
		CLocation() throw()
		{
		}
		CLocation(LPCSTR pszString)
		{
			Initialize(pszString);
		}
		VOID Initialize(LPCSTR pszString)
		{
			CRoArrayT<CStringA> Array;
			__D(_StringHelper::GetCommaSeparatedItems(pszString, Array) >= 7, E_UNNAMED);
			__D(AtlStringToInteger(Array[0], m_nIdentifier), E_UNNAMED);
			m_sCountryCode = Array[1];
			m_sRegion = Array[2];
			m_sCity = Array[3];
			m_sPostalCode = Array[4];
			__D(AtlStringToDouble(Array[5], m_fLatitude), E_UNNAMED);
			__D(AtlStringToDouble(Array[6], m_fLongitude), E_UNNAMED);
			if(Array.GetCount() >= 8)
				m_sMetroCode = Array[7];
			if(Array.GetCount() >= 9)
				m_sAreaCode = Array[8];
		}
	};

	////////////////////////////////////////////////////////////
	// CLocationArray

	class CLocationArray :
		protected CRoArrayT<CLocation>
	{
	public:
	// CLocationArray
		CLocationArray() throw()
		{
		}
		CLocationArray(const CPath& sPath)
		{
			Initialize(sPath);
		}
		VOID Initialize(const CPath& sPath)
		{
			CAtlFile File;
			__C(File.Create(sPath, GENERIC_READ, FILE_SHARE_READ, OPEN_EXISTING));
			ULONGLONG nSize;
			__C(File.GetSize(nSize));
			CHeapPtr<CHAR> pszData;
			__D(pszData.Allocate((SIZE_T) nSize + 1), E_OUTOFMEMORY);
			__C(File.Read(pszData, (DWORD) nSize));
			pszData[nSize] = 0;
			LPCSTR pszDataPointer = pszData;
			pszDataPointer = strchr(pszDataPointer, '\n') + 1; // Copyright line
			pszDataPointer = strchr(pszDataPointer, '\n') + 1; // Header line
			for(; *pszDataPointer; )
			{
				LPCSTR pszSeparator = strchr(pszDataPointer, '\n');
				if(!pszSeparator)
					break;
				const SIZE_T nLength = pszSeparator - pszDataPointer;
				CTempBufferT<CHAR> pszLine(nLength + 1);
				strncpy_s(pszLine, nLength + 1, pszDataPointer, _TRUNCATE);
				const SIZE_T nIndex = Add();
				CLocation& Location = GetAt(nIndex);
				Location.Initialize(pszLine);
				__D(Location.m_nIdentifier == nIndex + 1, E_UNNAMED);
				pszDataPointer = pszSeparator + 1;
			}
		}
		SIZE_T GetCount() const throw()
		{
			return __super::GetCount();
		}
		BOOL Lookup(INT nIdentifier, const CLocation** ppLocation = NULL) const throw()
		{
			if(nIdentifier < 1 || nIdentifier - 1 >= (INT) GetCount())
				return FALSE;
			const CLocation& Location = GetAt(nIdentifier - 1);
			_A(Location.m_nIdentifier == nIdentifier);
			if(ppLocation)
				*ppLocation = &Location;
			return TRUE;
		}
	};

	////////////////////////////////////////////////////////////
	// CBlock

	class CBlock
	{
	public:
		ULONG m_nStartAddress;
		ULONG m_nEndAddress;
		INT m_nLocationIdentifier;

	public:
	// CBlock
		CBlock() throw()
		{
		}
		CBlock(LPCSTR pszString)
		{
			Initialize(pszString);
		}
		VOID Initialize(LPCSTR pszString)
		{
			CRoArrayT<CStringA> Array;
			__D(_StringHelper::GetCommaSeparatedItems(pszString, Array) >= 3, E_UNNAMED);
			LONGLONG nStartAddress, nEndAddress;
			__D(AtlStringToInteger(Array[0], nStartAddress), E_UNNAMED);
			__D(AtlStringToInteger(Array[1], nEndAddress), E_UNNAMED);
			m_nStartAddress = (ULONG) nStartAddress;
			m_nEndAddress = (ULONG) nEndAddress;
			__D(AtlStringToInteger(Array[2], m_nLocationIdentifier), E_UNNAMED);
		}
		BOOL Contains(ULONG nAddress) const throw()
		{
			return nAddress >= m_nStartAddress && nAddress <= m_nEndAddress;
		}
	};

	////////////////////////////////////////////////////////////
	// CBlockArray

	class CBlockArray :
		protected CRoArrayT<CBlock>
	{
	public:
	// CBlockArray
		CBlockArray() throw()
		{
		}
		CBlockArray(const CPath& sPath)
		{
			Initialize(sPath);
		}
		VOID Initialize(const CPath& sPath)
		{
			CAtlFile File;
			__C(File.Create(sPath, GENERIC_READ, FILE_SHARE_READ, OPEN_EXISTING));
			ULONGLONG nSize;
			__C(File.GetSize(nSize));
			CHeapPtr<CHAR> pszData;
			__D(pszData.Allocate((SIZE_T) nSize + 1), E_OUTOFMEMORY);
			__C(File.Read(pszData, (DWORD) nSize));
			pszData[nSize] = 0;
			LPCSTR pszDataPointer = pszData;
			pszDataPointer = strchr(pszDataPointer, '\n') + 1; // Copyright line
			pszDataPointer = strchr(pszDataPointer, '\n') + 1; // Header line
			ULONG nPreviousEndAddress = 0;
			for(; *pszDataPointer; )
			{
				LPCSTR pszSeparator = strchr(pszDataPointer, '\n');
				if(!pszSeparator)
					break;
				const SIZE_T nLength = pszSeparator - pszDataPointer;
				CTempBufferT<CHAR> pszLine(nLength + 1);
				strncpy_s(pszLine, nLength + 1, pszDataPointer, _TRUNCATE);
				const SIZE_T nIndex = Add();
				CBlock& Block = GetAt(nIndex);
				Block.Initialize(pszLine);
				__D(Block.m_nStartAddress && Block.m_nStartAddress > nPreviousEndAddress, E_UNNAMED);
				nPreviousEndAddress = Block.m_nEndAddress;
				pszDataPointer = pszSeparator + 1;
			}
		}
		SIZE_T GetCount() const throw()
		{
			return __super::GetCount();
		}
		BOOL Lookup(ULONG nAddress, const CBlock** ppBlock = NULL) const throw()
		{
			SIZE_T nLeftIndex = 0, nRightIndex = GetCount();
			if(!nRightIndex)
				return FALSE;
			if(nAddress < GetAt(0).m_nStartAddress || nAddress > GetAt(GetCount() - 1).m_nEndAddress)
				return FALSE;
			for(; nLeftIndex + 1 < nRightIndex; )
			{
				SIZE_T nIndex = (nLeftIndex + nRightIndex) / 2;
				const CBlock& Block = GetAt(nIndex);
				if(nAddress < Block.m_nStartAddress)
				{
					nRightIndex = nIndex;
				} else
				if(nAddress > Block.m_nEndAddress)
				{
					nLeftIndex = nIndex + 1;
				} else
				{
					nLeftIndex = nIndex;
					break;
				}
			}
			const CBlock& Block = GetAt(nLeftIndex);
			if(!Block.Contains(nAddress))
				return FALSE;
			if(ppBlock)
				*ppBlock = &Block;
			return TRUE;
		}
	};
}

////////////////////////////////////////////////////////////
// CFreeThreadedMarshaler

class CFreeThreadedMarshaler
{
private:
	CComPtr<IUnknown> m_pMarshalerUnknown;
	CComPtr<IMarshal> m_pMarshalerMarshal;

public:
// CFreeThreadedMarshaler
	const CComPtr<IMarshal>& operator -> () const throw()
	{
		return GetMarshal();
	}
	VOID Initialize()
	{
		_A(!m_pMarshalerUnknown && !m_pMarshalerMarshal);
		__C(CoCreateFreeThreadedMarshaler(NULL, &m_pMarshalerUnknown));
		m_pMarshalerMarshal = m_pMarshalerUnknown;
		__D(m_pMarshalerMarshal, E_NOINTERFACE);
	}
	VOID Terminate() throw()
	{
		m_pMarshalerMarshal = NULL;
		m_pMarshalerUnknown = NULL;
	}
	const CComPtr<IMarshal>& GetMarshal() const throw()
	{
		return m_pMarshalerMarshal;
	}
};

////////////////////////////////////////////////////
// CDispatchExT
//
// TODO: IDispatch methods should take care of IID argument

template <typename T>
class ATL_NO_VTABLE CDispatchExT :
	public IDispatchEx
{
public:

	////////////////////////////////////////////////////////
	// CDispatchData

	class CDispatchData
	{
	public:
		IID m_InterfaceIdentifier;
		IDispatch* m_pDispatch;

	public:
	// CDispatchData
		CDispatchData() throw() :
			m_InterfaceIdentifier(IID_NULL),
			m_pDispatch(NULL)
		{
		}
		CDispatchData(IDispatchEx* pDispatchEx, const IID& InterfaceIdentifier)
		{
			CComPtr<IDispatch> pDispatch;
			__C(pDispatchEx->QueryInterface(InterfaceIdentifier, (VOID**) &pDispatch));
			m_InterfaceIdentifier = InterfaceIdentifier;
			m_pDispatch = pDispatch;
		}
	};

private:
	CRoArrayT<CDispatchData> m_DispatchDataArray;

public:
// CDispatchExT
	VOID ResetDispatchInterfaceIdentifiers() throw()
	{
		m_DispatchDataArray.RemoveAll();
	}
	VOID SetDispatchInterfaceIdentifiers(const IID* pInterfaceIdentifiers, SIZE_T nInterfaceIdentifierCount)
	{
		_A(m_DispatchDataArray.IsEmpty());
		for(SIZE_T nIndex = 0; nIndex < nInterfaceIdentifierCount; nIndex++)
			_W(m_DispatchDataArray.Add(CDispatchData(this, pInterfaceIdentifiers[nIndex])) >= 0);
	}
	VOID SetDispatchInterfaceIdentifiers(const IID& InterfaceIdentifier)
	{
		SetDispatchInterfaceIdentifiers(&InterfaceIdentifier, 1);
	}
	VOID SetDispatchInterfaceIdentifiers(SIZE_T nInterfaceIdentifierCount, ...)
	{
		_A(nInterfaceIdentifierCount);
		va_list Arguments;
		va_start(Arguments, nInterfaceIdentifierCount);
		CTempBufferT<IID> pInterfaceIdentifiers(nInterfaceIdentifierCount);
		for(SIZE_T nIndex = 0; nIndex < nInterfaceIdentifierCount; nIndex++)
			pInterfaceIdentifiers[nIndex] = *va_arg(Arguments, IID*);
		va_end(Arguments);
		SetDispatchInterfaceIdentifiers(pInterfaceIdentifiers, nInterfaceIdentifierCount);
	}
	IDispatch* GetDispatch(DISPID nDispIdentifier) const throw()
	{
		const SIZE_T nDispatchIndex = (UINT) (nDispIdentifier >> 12);
		_A(nDispatchIndex < m_DispatchDataArray.GetCount());
		return m_DispatchDataArray[nDispatchIndex].m_pDispatch;
	}

// IDispatchEx
	STDMETHOD(GetDispID)(BSTR sName, DWORD nFlags, DISPID* pid) throw()
	{
		_Z4(atlTraceCOM, 4, _T("this 0x%p, sName \"%s\", nFlags 0x%x\n"), static_cast<T*>(this), CString(sName), nFlags);
		_ATLTRY
		{
			__D(pid, E_POINTER);
			nFlags;
			OLECHAR* ppszNames[] = { const_cast<OLECHAR*>(sName), };
			const LCID nLocaleIdentifier = GetThreadLocale();
			*pid = -1;
			HRESULT nResult = DISP_E_UNKNOWNNAME;
			for(SIZE_T nIndex = 0; nIndex < m_DispatchDataArray.GetCount(); nIndex++)
			{
				DISPID nDispatchDispIdentifier;
				const HRESULT nDispatchResult = m_DispatchDataArray[nIndex].m_pDispatch->GetIDsOfNames(IID_NULL, ppszNames, DIM(ppszNames), nLocaleIdentifier, &nDispatchDispIdentifier);
				if(SUCCEEDED(nDispatchResult))
				{
					_A(!(nDispatchDispIdentifier & ~0x0FFF));
					*pid = (DISPID) (nIndex << 12) + nDispatchDispIdentifier;
					nResult = nDispatchResult;
					break;
				}
			}
			_Z4(atlTraceGeneral, 4, _T("nResult 0x%08x, *pid %d\n"), nResult, *pid);
			return nResult;
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return E_NOTIMPL;
	}
	STDMETHOD(InvokeEx)(DISPID id, LCID nLocaleIdentifier, WORD nFlags, DISPPARAMS* pdp, VARIANT* pvarRes, EXCEPINFO* pei, IServiceProvider* pServiceProvider) throw()
	{
		_Z4(atlTraceCOM, 4, _T("this 0x%p, id %d, nLocaleIdentifier %d, nFlags 0x%x\n"), static_cast<T*>(this), id, nLocaleIdentifier, nFlags);
		_ATLTRY
		{
			pServiceProvider;
			UINT nErroneousArgument;
			_A((id & ~0xFFFF) == 0);
			const HRESULT nResult = GetDispatch(id)->Invoke(id & 0x0FFF, IID_NULL, nLocaleIdentifier, nFlags, pdp, pvarRes, pei, &nErroneousArgument);
			_Z4(atlTraceGeneral, 4, _T("nResult 0x%08x\n"), nResult);
			return nResult;
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return E_NOTIMPL;
	}
	STDMETHOD(DeleteMemberByName)(BSTR sName, DWORD nFlags) throw()
	{
		_Z4(atlTraceCOM, 4, _T("this 0x%p, sName \"%s\", nFlags 0x%x\n"), static_cast<T*>(this), CString(sName), nFlags);
		return E_NOTIMPL;
	}
	STDMETHOD(DeleteMemberByDispID)(DISPID id) throw()
	{
		_Z4(atlTraceCOM, 4, _T("this 0x%p, id %d\n"), static_cast<T*>(this), id);
		return E_NOTIMPL;
	}
	STDMETHOD(GetMemberProperties)(DISPID id, DWORD nFlagMask, DWORD* pnFlags) throw()
	{
		_Z4(atlTraceCOM, 4, _T("this 0x%p, id %d, nFlagMask 0x%x\n"), static_cast<T*>(this), id, nFlagMask);
		return E_NOTIMPL;
	}
	STDMETHOD(GetMemberName)(DISPID id, BSTR* psName) throw()
	{
		_Z4(atlTraceCOM, 4, _T("this 0x%p, id %d\n"), static_cast<T*>(this), id);
		return E_NOTIMPL;
	}
	STDMETHOD(GetNextDispID)(DWORD nFlags, DISPID id, DISPID* pid) throw()
	{
		_Z4(atlTraceCOM, 4, _T("this 0x%p, nFlags 0x%x, id %d\n"), static_cast<T*>(this), nFlags, id);
		return E_NOTIMPL;
	}
	STDMETHOD(GetNameSpaceParent)(IUnknown** ppunk) throw()
	{
		_Z4(atlTraceCOM, 4, _T("this 0x%p\n"), static_cast<T*>(this));
		return E_NOTIMPL;
	}

// IDispatch
	STDMETHOD(GetTypeInfoCount)(UINT* pnCount) throw()
	{
		_Z4(atlTraceCOM, 4, _T("this 0x%p\n"), static_cast<T*>(this));
		_ATLTRY
		{
			const HRESULT nResult = GetDispatch(0)->GetTypeInfoCount(pnCount);
			_Z4(atlTraceGeneral, 4, _T("nResult 0x%08x\n"), nResult);
			return nResult;
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return E_NOTIMPL;
	}
	STDMETHOD(GetTypeInfo)(UINT nIndex, LCID nLocaleIdentifier, ITypeInfo** ppTypeInfo) throw()
	{
		_Z4(atlTraceCOM, 4, _T("this 0x%p, nIndex %d, nLocaleIdentifier %d\n"), static_cast<T*>(this), nIndex, nLocaleIdentifier);
		_ATLTRY
		{
			const HRESULT nResult = GetDispatch(0)->GetTypeInfo(nIndex, nLocaleIdentifier, ppTypeInfo);
			_Z4(atlTraceGeneral, 4, _T("nResult 0x%08x\n"), nResult);
			return nResult;
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return E_NOTIMPL;
	}
	STDMETHOD(GetIDsOfNames)(REFIID InterfaceIdentifier, LPOLESTR* ppszNames, UINT nNameCount, LCID nLocaleIdentifier, DISPID* rgDispId) throw()
	{
		_Z4(atlTraceCOM, 4, _T("this 0x%p, nNameCount %d, nLocaleIdentifier %d\n"), static_cast<T*>(this), nNameCount, nLocaleIdentifier);
		_ATLTRY
		{
			const HRESULT nResult = GetDispatch(0)->GetIDsOfNames(InterfaceIdentifier, ppszNames, nNameCount, nLocaleIdentifier, rgDispId);
			_Z4(atlTraceGeneral, 4, _T("nResult 0x%08x\n"), nResult);
			return nResult;
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return E_NOTIMPL;
	}
	STDMETHOD(Invoke)(DISPID dispIdMember, REFIID InterfaceIdentifier, LCID nLocaleIdentifier, WORD nFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) throw()
	{
		_Z4(atlTraceCOM, 4, _T("this 0x%p, dispIdMember %d, nLocaleIdentifier %d, nFlags 0x%x\n"), static_cast<T*>(this), dispIdMember, nLocaleIdentifier, nFlags);
		_ATLTRY
		{
			const HRESULT nResult = GetDispatch(0)->Invoke(dispIdMember, InterfaceIdentifier, nLocaleIdentifier, nFlags, pDispParams, pVarResult, pExcepInfo, puArgErr);
			_Z4(atlTraceGeneral, 4, _T("nResult 0x%08x\n"), nResult);
			return nResult;
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return E_NOTIMPL;
	}
};

////////////////////////////////////////////////////////////
// CLocations

class ATL_NO_VTABLE CLocations : 
	public CComObjectRootEx<CComMultiThreadModelNoCS>,
	public CComCoClass<CLocations, &__uuidof(Locations)>,
	public IDispatchImpl<ILocations>
{
public:
	enum { IDR = IDR_LOCATIONS };

//DECLARE_REGISTRY_RESOURCEID(IDR)

DECLARE_CLASSFACTORY_SINGLETON(CLocations)

DECLARE_PROTECT_FINAL_CONSTRUCT()

DECLARE_QI_TRACE(CLocations)

BEGIN_COM_MAP(CLocations)
	COM_INTERFACE_ENTRY(ILocations)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY_AGGREGATE(__uuidof(IMarshal), m_FreeThreadedMarshaler)
END_COM_MAP()

public:

	////////////////////////////////////////////////////////
	// CLocation

	class ATL_NO_VTABLE CLocation : 
		public CComObjectRootEx<CComMultiThreadModelNoCS>,
		public CComCoClass<CLocation, &__uuidof(Location)>,
		public IDispatchImpl<ILocation>
	{
	public:

	DECLARE_NO_REGISTRY()

	//DECLARE_PROTECT_FINAL_CONSTRUCT()

	DECLARE_QI_TRACE(CLocation)

	BEGIN_COM_MAP(CLocation)
		COM_INTERFACE_ENTRY(ILocation)
		COM_INTERFACE_ENTRY(IDispatch)
	END_COM_MAP()

	private:
		GeoLiteCity::CLocation m_Location;

	public:
	// CLocation
		CLocation() throw()
		{
			_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		}
		~CLocation() throw()
		{
			_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		}
		VOID Initialize(const GeoLiteCity::CLocation& Location)
		{
			m_Location = Location;
			_Z2(atlTraceGeneral, 2, _T("Initialized, Location.m_sCountryCode %hs, .m_sRegion %hs, .m_sCity %hs\n"), Location.m_sCountryCode, Location.m_sRegion, Location.m_sCity);
		}

	// ILocation
		STDMETHOD(get_Country)(BSTR* psCountry) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				__D(psCountry, E_POINTER);
				ObjectLock Lock(this);
				*psCountry = CComBSTR(m_Location.m_sCountryCode).Detach();
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(get_Region)(BSTR* psRegion) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				__D(psRegion, E_POINTER);
				ObjectLock Lock(this);
				*psRegion = CComBSTR(m_Location.m_sRegion).Detach();
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(get_City)(BSTR* psCity) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				__D(psCity, E_POINTER);
				ObjectLock Lock(this);
				*psCity = CComBSTR(m_Location.m_sCity).Detach();
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(get_PostalCode)(BSTR* psPostalCode) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				__D(psPostalCode, E_POINTER);
				ObjectLock Lock(this);
				*psPostalCode = CComBSTR(m_Location.m_sPostalCode).Detach();
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(get_Latitude)(DOUBLE* pfLatitude) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				__D(pfLatitude, E_POINTER);
				ObjectLock Lock(this);
				*pfLatitude = m_Location.m_fLatitude;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(get_Longitude)(DOUBLE* pfLongitude) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				__D(pfLongitude, E_POINTER);
				ObjectLock Lock(this);
				*pfLongitude = m_Location.m_fLongitude;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(get_MetroCode)(BSTR* psMetroCode) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				__D(psMetroCode, E_POINTER);
				ObjectLock Lock(this);
				*psMetroCode = CComBSTR(m_Location.m_sMetroCode).Detach();
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(get_AreaCode)(BSTR* psAreaCode) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				__D(psAreaCode, E_POINTER);
				ObjectLock Lock(this);
				*psAreaCode = CComBSTR(m_Location.m_sAreaCode).Detach();
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
	};

private:
	CWindowsSockets2 m_Sockets;
	CFreeThreadedMarshaler m_FreeThreadedMarshaler;
	//mutable CRoCriticalSection m_DataCriticalSection;
	GeoLiteCity::CLocationArray m_LocationArray;
	GeoLiteCity::CBlockArray m_BlockArray;

public:
// CLocations
	static CString GetObjectFriendlyName()
	{
		return _StringHelper::GetLine(IDR, 2);
	}
	static HRESULT WINAPI UpdateRegistry(BOOL bRegister) throw()
	{
		_Z2(atlTraceRegistrar, 2, _T("bRegister %d\n"), bRegister);
		_ATLTRY
		{
			UpdateRegistryFromResource<CLocations>(bRegister);
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	CLocations() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	~CLocations() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	HRESULT FinalConstruct() throw()
	{
		_ATLTRY
		{
			__C(m_Sockets.GetStartupResult());
			m_FreeThreadedMarshaler.Initialize();
			Initialize();
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	VOID FinalRelease() throw()
	{
		m_FreeThreadedMarshaler.Terminate();
	}
	VOID Initialize()
	{
		TCHAR pszDirectory[MAX_PATH] = { 0 };
		_W(GetModuleFileName(_AtlBaseModule.GetModuleInstance(), pszDirectory, DIM(pszDirectory)));
		_W(RemoveFileSpec(pszDirectory));
		CPath sLocationPath, sBlockPath;
		sLocationPath.Combine(pszDirectory, _T("GeoLiteCity-Location.csv"));
		sBlockPath.Combine(pszDirectory, _T("GeoLiteCity-Blocks.csv"));
		//CRoCriticalSectionLock DataLock(m_DataCriticalSection);
		m_LocationArray.Initialize(sLocationPath);
		m_BlockArray.Initialize(sBlockPath);
		_Z2(atlTraceGeneral, 2, _T("Initialized, m_LocationArray.GetCount() %d, m_BlockArray.GetCount() %d\n"), m_LocationArray.GetCount(), m_BlockArray.GetCount());
	}

// ILocations
	STDMETHOD(get_Item)(VARIANT vIndex, ILocation** ppLocation) throw()
	{
		_Z4(atlTraceCOM, 4, _T("vIndex.vt 0x%x\n"), vIndex.vt);
		_ATLTRY
		{
			__D(ppLocation, E_POINTER);
			__D(vIndex.vt == VT_BSTR, E_INVALIDARG);
			ULONG nAddress;
			nAddress = ntohl(inet_addr(CW2A(vIndex.bstrVal)));
			if(nAddress == INADDR_NONE)
			{
				SOCKADDR_IN Address;
				__E(CSocket::AddressFromHost(CW2CT(vIndex.bstrVal), 0, Address));
				nAddress = ntohl(Address.sin_addr.S_un.S_addr);
			}
			//ObjectLock Lock(this);
			//CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			CObjectPtr<CLocation> pLocation;
			const GeoLiteCity::CBlock* pBlock;
			if(m_BlockArray.Lookup(nAddress, &pBlock))
			{
				const GeoLiteCity::CLocation* pInternalLocation;
				if(m_LocationArray.Lookup(pBlock->m_nLocationIdentifier, &pInternalLocation))
					pLocation.Construct()->Initialize(*pInternalLocation);
				else
					_A(FALSE);
			}
			*ppLocation = pLocation.Detach();
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
};

OBJECT_ENTRY_AUTO(__uuidof(Locations), CLocations)

////////////////////////////////////////////////////////////
// CLazyLocations

class ATL_NO_VTABLE CLazyLocations : 
	public CComObjectRootEx<CComMultiThreadModelNoCS>,
	public CComCoClass<CLazyLocations, &__uuidof(LazyLocations)>,
	public IDispatchImpl<ILazyLocations>,
	public IDispatchImpl<ILocations>,
	public CDispatchExT<CLazyLocations>
{
	typedef CThreadT<CLazyLocations> CThread;

public:
	enum { IDR = IDR_LAZYLOCATIONS };

//DECLARE_REGISTRY_RESOURCEID(IDR)

DECLARE_CLASSFACTORY_SINGLETON(CLazyLocations)

DECLARE_PROTECT_FINAL_CONSTRUCT()

DECLARE_QI_TRACE(CLazyLocations)

BEGIN_COM_MAP(CLazyLocations)
	COM_INTERFACE_ENTRY(ILazyLocations)
	COM_INTERFACE_ENTRY(ILocations)
	COM_INTERFACE_ENTRY_IID(__uuidof(IDispatch), ILocations)
	COM_INTERFACE_ENTRY(IDispatchEx)
	COM_INTERFACE_ENTRY_AGGREGATE(__uuidof(IMarshal), m_FreeThreadedMarshaler)
END_COM_MAP()

private:
	CFreeThreadedMarshaler m_FreeThreadedMarshaler;
	mutable CRoCriticalSection m_ThreadCriticalSection;
	CObjectPtr<CThread> m_pThread;
	mutable CRoCriticalSection m_DataCriticalSection;
	CObjectPtr<CLocations> m_pLocations;

	DWORD ThreadProc(CThread* pThread, CEvent& InitializationEvent, CEvent& TerminationEvent)
	{
		CMultiThreadedApartment MultiThreadedApartment;
		_W(InitializationEvent.Set());
		CComPtr<ILocations> pLocations;
		__C(pLocations.CoCreateInstance(__uuidof(Locations)));
		const CObjectPtr<CLocations> pNativeLocations = static_cast<CLocations*>((ILocations*) pLocations);
		_A(pNativeLocations);
		{
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			_A(!m_pLocations);
			m_pLocations = pNativeLocations;
		}
		TerminationEvent;
		CRoCriticalSectionLock ThreadLock(m_ThreadCriticalSection);
		_A(m_pThread == pThread || !m_pThread && WaitForSingleObject(TerminationEvent, 0) == WAIT_OBJECT_0);
		m_pThread.Release();
		return 0;
	}

public:
// CLazyLocations
	static CString GetObjectFriendlyName()
	{
		return _StringHelper::GetLine(IDR, 2);
	}
	static HRESULT WINAPI UpdateRegistry(BOOL bRegister) throw()
	{
		_Z2(atlTraceRegistrar, 2, _T("bRegister %d\n"), bRegister);
		_ATLTRY
		{
			UpdateRegistryFromResource<CLazyLocations>(bRegister);
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	CLazyLocations() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	~CLazyLocations() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	HRESULT FinalConstruct() throw()
	{
		_ATLTRY
		{
			SetDispatchInterfaceIdentifiers(2, &__uuidof(ILazyLocations), &__uuidof(ILocations));
			CRoCriticalSectionLock ThreadLock(m_ThreadCriticalSection);
			CObjectPtr<CThread> pThread;
			__E(pThread.Construct()->Initialize(this, &CLazyLocations::ThreadProc));
			m_pThread = pThread;
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	VOID FinalRelease() throw()
	{
		CObjectPtr<CThread> pThread;
		{
			CRoCriticalSectionLock ThreadLock(m_ThreadCriticalSection);
			m_pThread.Swap(pThread);
		}
	}
	CObjectPtr<CLocations> GetLocations() const throw()
	{
		CRoCriticalSectionLock DataLock(m_DataCriticalSection);
		_Z2(atlTraceGeneral, 2, _T("Query for Locations, m_pLocations 0x%p\n"), m_pLocations);
		return m_pLocations;
	}

// ILazyLocations
	STDMETHOD(get_Initialized)(VARIANT_BOOL* pbInitialized) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		_ATLTRY
		{
			__D(pbInitialized, E_POINTER);
			//ObjectLock Lock(this);
			//CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			*pbInitialized = GetLocations() ? ATL_VARIANT_TRUE : ATL_VARIANT_FALSE;
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}

// ILocations
	STDMETHOD(get_Item)(VARIANT vIndex, ILocation** ppLocation) throw()
	{
		_Z4(atlTraceCOM, 4, _T("vIndex.vt 0x%x\n"), vIndex.vt);
		_ATLTRY
		{
			__D(ppLocation, E_POINTER);
			__D(vIndex.vt == VT_BSTR, E_INVALIDARG);
			//ObjectLock Lock(this);
			//CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			CComPtr<ILocation> pLocation;
			const CObjectPtr<CLocations> pLocations = GetLocations();
			if(pLocations)
				__C(pLocations->get_Item(vIndex, &pLocation));
			*ppLocation = pLocation.Detach();
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
};

OBJECT_ENTRY_AUTO(__uuidof(LazyLocations), CLazyLocations)
