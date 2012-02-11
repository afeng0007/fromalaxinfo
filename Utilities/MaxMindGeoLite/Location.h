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
// CLocations

class ATL_NO_VTABLE CLocations : 
	public CComObjectRootEx<CComMultiThreadModelNoCS>,
	public CComCoClass<CLocations, &__uuidof(Locations)>,
	public CBasePersistT<CLocations>,
	//public IRoPersistStreamInitT<CLocations>,
	//public IRoPersistStorageT<CLocations>,
	//public IRoPersistPropertyBagT<CLocations>,
	//public IRoSpecifyPropertyPagesT<CLocations>,
	public IDispatchImpl<ILocations>
{
public:
	enum { IDR = IDR_LOCATIONS };

//DECLARE_REGISTRY_RESOURCEID(IDR)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CLocations)
	//COM_INTERFACE_ENTRY_IID(__uuidof(IPersist), IPersistStreamInit)
	//COM_INTERFACE_ENTRY_IID(__uuidof(IPersistStream), IPersistStreamInit)
	//COM_INTERFACE_ENTRY(IPersistStreamInit)
	//COM_INTERFACE_ENTRY(IPersistStorage)
	//COM_INTERFACE_ENTRY(IPersistPropertyBag)
	//COM_INTERFACE_ENTRY(ISpecifyPropertyPages)
	COM_INTERFACE_ENTRY(ILocations)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

BEGIN_PROP_MAP(CLocations)
END_PROP_MAP()

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
	CRequiresSave m_bRequiresSave;
	mutable CRoCriticalSection m_DataCriticalSection;
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
	CLocations() throw() :
		CBasePersistT<CLocations>(m_DataCriticalSection),
		m_bRequiresSave(m_DataCriticalSection)
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
	}

// ILocation
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