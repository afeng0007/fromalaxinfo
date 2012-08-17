////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

#include "rodshow.h"
#include <..\Samples\multimedia\directshow\misc\mapper\fil_data.h>
#include "DirectShowSpy_i.h"
#include "Common.h"

////////////////////////////////////////////////////////////
// CFilterMapperSpyT

template <typename T, const CLSID* t_pFilterMapperClassIdentifier>
class ATL_NO_VTABLE CFilterMapperSpyT :
	public CComObjectRootEx<CComMultiThreadModel>,
	//public CComCoClass<CFilterMapperSpyT, &CLSID_FilterMapperSpy>,
	public CTransparentCoClassT<T, t_pFilterMapperClassIdentifier>,
	public IDispatchImpl<IFilterMapperSpy>,
	public IAMFilterData,
	public IFilterMapper2
{
	typedef CFilterMapperSpyT<T, t_pFilterMapperClassIdentifier> CFilterMapperSpy;

public:
	//enum { IDR = IDR_FILTERMAPPERSPY };

//DECLARE_REGISTRY_RESOURCEID(IDR)

DECLARE_PROTECT_FINAL_CONSTRUCT()

DECLARE_GET_CONTROLLING_UNKNOWN()

DECLARE_QI_TRACE(CFilterMapperSpy)

BEGIN_COM_MAP(CFilterMapperSpy)
	COM_INTERFACE_ENTRY(IFilterMapperSpy)
	COM_INTERFACE_ENTRY(IAMFilterData)
	COM_INTERFACE_ENTRY(IFilterMapper2)
	COM_INTERFACE_ENTRY_AGGREGATE_BLIND(m_pInnerUnknown)
	//COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

private:
	BOOL m_bIsAggregated;
	HINSTANCE m_hQuartzModule;
	CComPtr<IUnknown> m_pInnerUnknown;
	CComPtr<IFilterMapper2> m_pFilterMapper2;
	CComPtr<IAMFilterData> m_pAmFilterData;

	static VOID Trace(const REGFILTER2* pFilterInformation)
	{
		_A(pFilterInformation);
		_Z4(atlTraceCOM, 4, _T("pFilterInformation { dwVersion %d, dwMerit 0x%08x, cPins2 %d }\n"), pFilterInformation->dwVersion, pFilterInformation->dwMerit, pFilterInformation->cPins2);
		if(pFilterInformation->dwVersion == 2)
			for(ULONG nPinIndex = 0; nPinIndex < pFilterInformation->cPins2; nPinIndex++)
			{
				const REGFILTERPINS2& Pin = pFilterInformation->rgPins2[nPinIndex];
				_Z4(atlTraceCOM, 4, _T("pFilterInformation->rgPins2[%d] { dwFlags 0x%x, cInstances %d, nMediaTypes %d, nMediums %d }\n"), nPinIndex, Pin.dwFlags, Pin.cInstances, Pin.nMediaTypes, Pin.nMediums, Pin.clsPinCategory ? (LPCWSTR) _PersistHelper::StringFromIdentifier(*Pin.clsPinCategory) : L"NULL");
				for(UINT nIndex = 0; nIndex < Pin.nMediaTypes; nIndex++)
				{
					const REGPINTYPES& Type = Pin.lpMediaType[nIndex];
					_Z4(atlTraceCOM, 4, _T("pFilterInformation->rgPins2[...].lpMediaType[%d] { clsMajorType %ls, clsMinorType %ls }\n"), nIndex, Type.clsMajorType ? (LPCWSTR) _PersistHelper::StringFromIdentifier(*Type.clsMajorType) : L"NULL", Type.clsMinorType ? (LPCWSTR) _PersistHelper::StringFromIdentifier(*Type.clsMinorType) : L"NULL");
				}
				for(UINT nIndex = 0; nIndex < Pin.nMediums; nIndex++)
				{
					const REGPINMEDIUM& Medium = Pin.lpMedium[nIndex];
					_Z4(atlTraceCOM, 4, _T("pFilterInformation->rgPins2[...].lpMedium[%d] { clsMedium %ls, dw1 0x%x, dw2 0x%x }\n"), nIndex, _PersistHelper::StringFromIdentifier(Medium.clsMedium), Medium.dw1, Medium.dw2);
				}
			}
	}
	BOOL IsAggregated() const throw()
	{
		return (ULONG) m_dwRef >= 0x00001000;
	}

public:
// CFilterMapperSpyT
	static LPCTSTR GetOriginalLibraryName() throw()
	{
		return _T("quartz.dll");
	}
	static CString GetObjectFriendlyName()
	{
		return _StringHelper::GetLine(T::IDR, 2);
	}
	static HRESULT WINAPI UpdateRegistry(BOOL bRegister) throw()
	{
		_Z2(atlTraceRegistrar, 2, _T("bRegister %d\n"), bRegister);
		_ATLTRY
		{
			TreatAsUpdateRegistryFromResource<T>(*t_pFilterMapperClassIdentifier, bRegister);
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	CFilterMapperSpyT() throw() :
		m_hQuartzModule(NULL)
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%08x\n"), this);
	}
	~CFilterMapperSpyT() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%08x\n"), this);
	}
	HRESULT FinalConstruct() throw()
	{
		_ATLTRY
		{
			m_bIsAggregated = IsAggregated();
			TCHAR pszPath[MAX_PATH] = { 0 };
			_W(GetModuleFileName(NULL, pszPath, DIM(pszPath)));
			_Z4(atlTraceRefcount, 4, _T("pszPath \"%s\", this 0x%08x, m_dwRef %d, m_bIsAggregated %d\n"), pszPath, this, m_dwRef, m_bIsAggregated);
			const HINSTANCE hModule = CoLoadLibrary(_T("quartz.dll"), TRUE);
			_ATLTRY
			{
				typedef HRESULT (WINAPI *DLLGETCLASSOBJECT)(REFCLSID, REFIID, VOID**);
				DLLGETCLASSOBJECT DllGetClassObject = (DLLGETCLASSOBJECT) GetProcAddress(hModule, "DllGetClassObject");
				__E(DllGetClassObject);
				CComPtr<IClassFactory> pClassFactory;
				__C(DllGetClassObject(*t_pFilterMapperClassIdentifier, __uuidof(IClassFactory), (VOID**) &pClassFactory));
				_A(pClassFactory);
				const CComPtr<IUnknown> pControllingUnknown = GetControllingUnknown();
				{
					CComPtr<IUnknown> pUnknown;
					__C(pClassFactory->CreateInstance(pControllingUnknown, __uuidof(IUnknown), (VOID**) &pUnknown));
					const CComQIPtr<IFilterMapper2> pFilterMapper2 = pUnknown;
					__D(pFilterMapper2, E_NOINTERFACE);
					pFilterMapper2.p->Release();
					const CComQIPtr<IAMFilterData> pAmFilterData = pUnknown;
					__D(pAmFilterData, E_NOINTERFACE);
					pAmFilterData.p->Release();
					m_pInnerUnknown = pUnknown;
					m_pFilterMapper2 = pFilterMapper2;
					m_pAmFilterData = pAmFilterData;
				}
			}
			_ATLCATCHALL()
			{
				CoFreeLibrary(hModule);
				_ATLRETHROW;
			}
			_A(!m_hQuartzModule);
			m_hQuartzModule = hModule;
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	VOID FinalRelease() throw()
	{
		_Z5(atlTraceRefcount, 5, _T("m_dwRef 0x%x\n"), m_dwRef);
		CComPtr<IUnknown> pControllingUnknown = GetControllingUnknown();
		if(m_pFilterMapper2)
		{
			pControllingUnknown.p->AddRef();
			m_pFilterMapper2 = NULL;
		}
		if(m_pAmFilterData)
		{
			pControllingUnknown.p->AddRef();
			m_pAmFilterData = NULL;
		}
		_ATLTRY
		{
			m_pInnerUnknown = NULL;
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
			// NOTE: For some unidentified reason Quartz's FilterGraph may crash during final release, to smooth the effect the exception is silently caught
			m_pInnerUnknown.p = NULL;
		}
		if(m_hQuartzModule)
		{
			CoFreeLibrary(m_hQuartzModule);
			m_hQuartzModule = NULL;
		}
	}

// IFilterMapperSpy

// IAMFilterData
	STDMETHOD(ParseFilterData)(BYTE* pnFilterData, ULONG nFilterDataSize, BYTE** ppFilterInformation) throw()
	{
		_Z4(atlTraceCOM, 4, _T("nFilterDataSize %d\n"), nFilterDataSize);
		const HRESULT nResult = m_pAmFilterData->ParseFilterData(pnFilterData, nFilterDataSize, ppFilterInformation);
		if(SUCCEEDED(nResult) && ppFilterInformation && *ppFilterInformation && *((BYTE**) *ppFilterInformation))
			_ATLTRY
			{
				Trace((REGFILTER2*) *((BYTE**) *ppFilterInformation));
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
		return nResult;
	}
	STDMETHOD(CreateFilterData)(REGFILTER2* pFilterInformation, BYTE** ppnFilterData, ULONG* pnFilterDataSize) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		if(pFilterInformation)
			_ATLTRY
			{
				Trace(pFilterInformation);
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
		return m_pAmFilterData->CreateFilterData(pFilterInformation, ppnFilterData, pnFilterDataSize);
	}

// IFilterMapper2
	STDMETHOD(CreateCategory)(REFCLSID CategoryIdentifier, DWORD nMerit, LPCWSTR pszDescription) throw()
	{
		_Z4(atlTraceCOM, 4, _T("CategoryIdentifier %ls, nMerit 0x%08x, pszDescription \"%s\"\n"), _PersistHelper::StringFromIdentifier(CategoryIdentifier), nMerit, CString(pszDescription));
		return m_pFilterMapper2->CreateCategory(CategoryIdentifier, nMerit, pszDescription);
	}
	STDMETHOD(UnregisterFilter)(const CLSID* pCategoryIdentifier, LPCOLESTR pszInstance, REFCLSID FilterClassIdentifier) throw()
	{
		_Z4(atlTraceCOM, 4, _T("pCategoryIdentifier %ls, pszInstance %s, FilterClassIdentifier %ls\n"), pCategoryIdentifier ? (LPCWSTR) _PersistHelper::StringFromIdentifier(*pCategoryIdentifier) : L"NULL", pszInstance ? (LPCTSTR) AtlFormatString(_T("\"%s\""), CString(pszInstance)) : _T("NULL"), _PersistHelper::StringFromIdentifier(FilterClassIdentifier));
		return m_pFilterMapper2->UnregisterFilter(pCategoryIdentifier, pszInstance, FilterClassIdentifier);
	}
	STDMETHOD(RegisterFilter)(REFCLSID FilterClassIdentifier, LPCWSTR pszName, IMoniker** ppMoniker, const CLSID* pCategoryIdentifier, LPCOLESTR pszInstance, const REGFILTER2* pFilterInformation) throw()
	{
		_Z4(atlTraceCOM, 4, _T("FilterClassIdentifier %ls, pszName \"%s\", pCategoryIdentifier %ls, pszInstance %s\n"), _PersistHelper::StringFromIdentifier(FilterClassIdentifier), CString(pszName), pCategoryIdentifier ? (LPCWSTR) _PersistHelper::StringFromIdentifier(*pCategoryIdentifier) : L"NULL", pszInstance ? (LPCTSTR) AtlFormatString(_T("\"%s\""), CString(pszInstance)) : _T("NULL"));
		if(pFilterInformation)
			_ATLTRY
			{
				Trace(pFilterInformation);
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
		return m_pFilterMapper2->RegisterFilter(FilterClassIdentifier, pszName, ppMoniker, pCategoryIdentifier, pszInstance, pFilterInformation);
	}
	STDMETHOD(EnumMatchingFilters)(IEnumMoniker** ppEnumMoniker, DWORD nFlags, BOOL bExactMatch, DWORD nMinimalMerit, BOOL bInputNeeded, DWORD nInputTypeCount, const GUID* pInputTypes, const REGPINMEDIUM* pInputMedium, const CLSID* pInputPinCategory, BOOL bRender, BOOL bOutputNeeded, DWORD nOutputTypeCount, const GUID* pOutputTypes, const REGPINMEDIUM* pOutputMedium, const CLSID* pOutputPinCategory) throw()
	{
		_Z4(atlTraceCOM, 4, _T("nFlags 0x%x, bExactMatch %d, nMinimalMerit 0x%08x, bInputNeeded %d, nInputTypeCount %d, pInputPinCategory %ls, bRender %d, bOutputNeeded %d, nOutputTypeCount %d, pOutputPinCategory %ls\n"), nFlags, bExactMatch, nMinimalMerit, bInputNeeded, nInputTypeCount, pInputPinCategory ? (LPCWSTR) _PersistHelper::StringFromIdentifier(*pInputPinCategory) : L"NULL", bRender, bOutputNeeded, nOutputTypeCount, pOutputPinCategory ? (LPCWSTR) _PersistHelper::StringFromIdentifier(*pOutputPinCategory) : L"NULL");
		for(DWORD nInputTypeIndex = 0; nInputTypeIndex < nInputTypeCount; nInputTypeIndex++)
		{
			const GUID& MajorType = pInputTypes[2 * nInputTypeIndex + 0];
			const GUID& Subtype = pInputTypes[2 * nInputTypeIndex + 1];
			_Z4(atlTraceCOM, 4, _T("nInputTypeIndex %d, MajorType %ls, Subtype %ls\n"), nInputTypeIndex, _PersistHelper::StringFromIdentifier(MajorType), _PersistHelper::StringFromIdentifier(Subtype));
		}
		if(pInputMedium)
			_Z4(atlTraceCOM, 4, _T("pInputMedium { clsMedium %ls, dw1 0x%x, dw2 0x%x }\n"), _PersistHelper::StringFromIdentifier(pInputMedium->clsMedium), pInputMedium->dw1, pInputMedium->dw2);
		for(DWORD nOutputTypeIndex = 0; nOutputTypeIndex < nOutputTypeCount; nOutputTypeIndex++)
		{
			const GUID& MajorType = pOutputTypes[2 * nOutputTypeIndex + 0];
			const GUID& Subtype = pOutputTypes[2 * nOutputTypeIndex + 1];
			_Z4(atlTraceCOM, 4, _T("nOutputTypeIndex %d, MajorType %ls, Subtype %ls\n"), nOutputTypeIndex, _PersistHelper::StringFromIdentifier(MajorType), _PersistHelper::StringFromIdentifier(Subtype));
		}
		if(pOutputMedium)
			_Z4(atlTraceCOM, 4, _T("pOutputMedium { clsMedium %ls, dw1 0x%x, dw2 0x%x }\n"), _PersistHelper::StringFromIdentifier(pOutputMedium->clsMedium), pOutputMedium->dw1, pOutputMedium->dw2);
		const HRESULT nResult = m_pFilterMapper2->EnumMatchingFilters(ppEnumMoniker, nFlags, bExactMatch, nMinimalMerit, bInputNeeded, nInputTypeCount, pInputTypes, pInputMedium, pInputPinCategory, bRender, bOutputNeeded, nOutputTypeCount, pOutputTypes, pOutputMedium, pOutputPinCategory);
		if(SUCCEEDED(nResult))
			_ATLTRY
			{
				const CComPtr<IEnumMoniker>& pEnumMoniker = reinterpret_cast<const CComPtr<IEnumMoniker>&>(*ppEnumMoniker);
				__C(pEnumMoniker->Reset());
				CComPtr<IMoniker> pMoniker;
				while(pEnumMoniker->Next(1, &pMoniker, NULL) == S_OK)
				{
					_Z4(atlTraceCOM, 4, _T("pMoniker %ls\n"), _FilterGraphHelper::GetMonikerDisplayName(pMoniker));
					CComPtr<IBindCtx> pBindCtx;
					__C(CreateBindCtx(0, &pBindCtx));
					CComPtr<IPropertyBag> pPropertyBag;
					__C(pMoniker->BindToStorage(pBindCtx, NULL, __uuidof(IPropertyBag), (VOID**) &pPropertyBag));
					const CStringW sFriendlyName = _FilterGraphHelper::ReadPropertyBagString(pPropertyBag, OLESTR("FriendlyName"));
					const CStringW sDescription = _FilterGraphHelper::ReadPropertyBagString(pPropertyBag, OLESTR("Description"));
					const CStringW sDevicePath = _FilterGraphHelper::ReadPropertyBagString(pPropertyBag, OLESTR("DevicePath"));
					_Z4(atlTraceCOM, 4, _T("sFriendlyName \"%ls\", sDescription \"%ls\", sDevicePath \"%ls\"\n"), sFriendlyName, sDescription, sDevicePath);
					pMoniker.Release();
				}
				__C(pEnumMoniker->Reset());
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
		return nResult;
	}
};

////////////////////////////////////////////////////////////
// CFilterMapperSpy

class ATL_NO_VTABLE CFilterMapperSpy :
	public CFilterMapperSpyT<CFilterMapperSpy, &CLSID_FilterMapper2>,
	public CComCoClass<CFilterMapperSpy, &CLSID_FilterMapperSpy>
{
public:
	enum { IDR = IDR_FILTERMAPPERSPY };

private:
	static LPCTSTR g_pszClassName;

public:
	//typedef CBlackListAwareComCreatorT<CComObjectCached<CFilterMapperSpy>, CFilterMapperSpy, &g_pszClassName> _ClassFactoryCreatorClass; // DECLARE_CLASSFACTORY override
	typedef CComCreator2<CBlackListAwareComCreatorT<CComObject<CFilterMapperSpy>, CFilterMapperSpy, &g_pszClassName>, CBlackListAwareComCreatorT<CComAggObject<CFilterMapperSpy>, CFilterMapperSpy, &g_pszClassName> > _CreatorClass; // DECLARE_AGGREGATABLE override

public:
// CFilterMapperSpy
};

__declspec(selectany) LPCTSTR CFilterMapperSpy::g_pszClassName = _T("CFilterMapperSpy");

OBJECT_ENTRY_AUTO(__uuidof(FilterMapperSpy), CFilterMapperSpy)

