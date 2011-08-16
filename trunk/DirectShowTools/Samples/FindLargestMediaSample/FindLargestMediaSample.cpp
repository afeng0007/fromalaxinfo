////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include <dshow.h>
#import "libid:C8D585EA-23F9-4D3E-9727-23CD02ED96C7" no_namespace raw_interfaces_only named_guids
#pragma comment(lib, "strmiids.lib")

////////////////////////////////////////////////////////////
// CModule

class CModule : 
	public CAtlExeModuleT<CModule>
{
public:

	////////////////////////////////////////////////////////
	// CInspectionFilterSite

	class ATL_NO_VTABLE CInspectionFilterSite :
		public CComObjectRootEx<CComMultiThreadModelNoCS>,
		public IInspectionFilterSite
	{
	public:

	BEGIN_COM_MAP(CInspectionFilterSite)
		COM_INTERFACE_ENTRY(IInspectionFilterSite)
	END_COM_MAP()

	private:
		mutable CComAutoCriticalSection m_DataCriticalSection;
		CModule* m_pOwner;
		SIZE_T m_nMaximalDataSize;
		REFERENCE_TIME m_nLastReportTime;

	public:
	// CInspectionFilterSite
		CInspectionFilterSite() throw() :
			m_pOwner(NULL)
		{
			ATLTRACE(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		}
		~CInspectionFilterSite() throw()
		{
			ATLTRACE(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
			ATLASSERT(!m_pOwner);
		}
		VOID Initialize(CModule* pOwner)
		{
			ATLASSERT(pOwner);
			CComCritSecLock<CComAutoCriticalSection> DataLock(m_DataCriticalSection);
			m_pOwner = pOwner;
			m_nMaximalDataSize = 0;
			m_nLastReportTime = 0;
		}
		VOID Terminate() throw()
		{
			CComCritSecLock<CComAutoCriticalSection> DataLock(m_DataCriticalSection);
			m_pOwner = NULL;
		}
		SIZE_T GetMaximalDataSize() const throw()
		{
			CComCritSecLock<CComAutoCriticalSection> DataLock(m_DataCriticalSection);
			return m_nMaximalDataSize;
		}

	// IInspectionFilterSite
		STDMETHOD(EnumerateMediaTypes)(BYTE** ppnMediaTypes, ULONG* pnMediaTypeCount) throw()
		{
			ATLTRACE(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				ATLENSURE_THROW(ppnMediaTypes && pnMediaTypeCount, E_POINTER);
				CComHeapPtr<AM_MEDIA_TYPE*> ppMediaTypes;
				ATLENSURE_THROW(ppMediaTypes.Allocate(1), E_OUTOFMEMORY);
				AM_MEDIA_TYPE* pMediaType = ppMediaTypes[0];
				{
					CComHeapPtr<AM_MEDIA_TYPE> pMediaType;
					ATLENSURE_THROW(pMediaType.Allocate(1), E_OUTOFMEMORY);
					ZeroMemory(pMediaType, sizeof *pMediaType);
					pMediaType->majortype = MEDIATYPE_Video;
					pMediaType->subtype = MEDIASUBTYPE_NULL;
					ppMediaTypes[0] = pMediaType.Detach();
				}
				*ppnMediaTypes = (BYTE*) ppMediaTypes.Detach();
				*pnMediaTypeCount = 1;
			}
			_ATLCATCH(Exception)
			{
				return Exception;
			}
			return S_OK;
		}
		STDMETHOD(CheckMediaType)(BYTE* pnMediaType) throw()
		{
			ATLTRACE(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				const AM_MEDIA_TYPE* pMediaType = reinterpret_cast<const AM_MEDIA_TYPE*>(pnMediaType);
				if(pMediaType->majortype != MEDIATYPE_Video)
					return S_FALSE; // Not Video
			}
			_ATLCATCH(Exception)
			{
				return Exception;
			}
			return S_OK;
		}
		STDMETHOD(HandleMediaSample)(IUnknown* pMediaSampleUnknown) throw()
		{
			ATLTRACE(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				const CComQIPtr<IMediaSample> pMediaSample = pMediaSampleUnknown;
				ATLASSERT(pMediaSample);
				CComCritSecLock<CComAutoCriticalSection> DataLock(m_DataCriticalSection);
				const SIZE_T nDataSize = (SIZE_T) pMediaSample->GetActualDataLength();
				if(nDataSize > m_nMaximalDataSize)
					m_nMaximalDataSize = nDataSize;
				#pragma region Report Time
				REFERENCE_TIME nStartTime, nStopTime;
				const HRESULT nGetTimeResult = pMediaSample->GetTime(&nStartTime, &nStopTime);
				if(SUCCEEDED(nGetTimeResult))
					if(nStartTime > m_nLastReportTime + 60 * 1000 * 10000i64)
					{
						m_nLastReportTime = nStartTime;
						nStartTime /= 1000 * 10000i64;
						const INT nHours = (INT) (nStartTime / (60 * 60));
						nStartTime -= nHours * (60 * 60);
						const INT nMinutes = (INT) (nStartTime / (60));
						nStartTime -= nMinutes * (60);
						const INT nSeconds = (INT) nStartTime;
						_tprintf(_T("Progress: %02d:%02d:%02d, Currently Largest Video Media Sample Data Size: %d\n"), nHours, nMinutes, nSeconds, m_nMaximalDataSize);
					}
				#pragma endregion 
			}
			_ATLCATCH(Exception)
			{
				return Exception;
			}
			return S_OK;
		}
	};

private:
	CPath m_sPath;
	BOOL m_bSuppressCompressorPropertyPages;
	CComPtr<IFilterGraph2> m_pFilterGraph;
	CComObject<CInspectionFilterSite>* m_pInspectionFilterSite;
	CComPtr<IMediaEventEx> m_pMediaEventEx;
	CComPtr<IMediaControl> m_pMediaControl;

public:
// CModule
	CModule() throw()
	{
#if defined(_DEBUG)
		AtlTraceLoadSettings(NULL);
#endif // defined(_DEBUG)
		ATLTRACE(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	~CModule() throw()
	{
		ATLTRACE(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	VOID SetPath(LPCTSTR pszPath)
	{
		ATLENSURE_THROW(!_tcslen(m_sPath), E_INVALIDARG);
		m_sPath = pszPath;
	}
	static CComPtr<IPin> GetFilterPin(IBaseFilter* pBaseFilter, PIN_DIRECTION Direction)
	{
		if(pBaseFilter)
		{
			CComPtr<IEnumPins> pEnumPins;
			ATLENSURE_SUCCEEDED(pBaseFilter->EnumPins(&pEnumPins));
			CComPtr<IPin> pPin;
			while(pEnumPins->Next(1, &pPin, NULL) == S_OK)
			{
				PIN_DIRECTION PinDirection;
				ATLENSURE_SUCCEEDED(pPin->QueryDirection(&PinDirection));
				if(PinDirection == Direction)
					return pPin;
				pPin = NULL;
			}
		}
		return NULL;
	}
	HRESULT Run(INT nShowCommand = SW_HIDE)
	{
		ATLENSURE_THROW(_tcslen(m_sPath), E_INVALIDARG);
		_tprintf(_T("Using Source File: %s\n"), m_sPath);
		ATLENSURE_SUCCEEDED(m_pFilterGraph.CoCreateInstance(CLSID_FilterGraph));
		m_pMediaEventEx = CComQIPtr<IMediaEventEx>(m_pFilterGraph);
		m_pMediaControl = CComQIPtr<IMediaControl>(m_pFilterGraph);
		ATLENSURE_THROW(m_pMediaEventEx && m_pMediaControl, E_NOINTERFACE);
		_ATLTRY
		{	
			CComPtr<IPin> pCurrentOutputPin;
			#pragma region Source
			CComPtr<IBaseFilter> pSourceBaseFilter;
			ATLENSURE_SUCCEEDED(m_pFilterGraph->AddSourceFilter(CT2CW(m_sPath), CT2CW(_T("Source")), &pSourceBaseFilter));
			pCurrentOutputPin = GetFilterPin(pSourceBaseFilter, PINDIR_OUTPUT);
			#pragma endregion
			#pragma region Inspection Filter
			CComPtr<IBaseFilter> pInspectionBaseFilter;
			ATLENSURE_SUCCEEDED(pInspectionBaseFilter.CoCreateInstance(__uuidof(InspectionFilter)));
			ATLENSURE_SUCCEEDED(m_pFilterGraph->AddFilter(pInspectionBaseFilter, CT2CW(_T("Inspection"))));
			#pragma region Site
			CComQIPtr<IInspectionFilter> pInspectionFilter = pInspectionBaseFilter;
			CComObject<CInspectionFilterSite>* pInspectionFilterSite = NULL;
			ATLENSURE_SUCCEEDED(CComObject<CInspectionFilterSite>::CreateInstance(&pInspectionFilterSite));
			pInspectionFilterSite->Initialize(this);
			ATLENSURE_SUCCEEDED(pInspectionFilter->SetSite(pInspectionFilterSite));
			m_pInspectionFilterSite = pInspectionFilterSite;
			#pragma endregion
			ATLENSURE_SUCCEEDED(m_pFilterGraph->Connect(pCurrentOutputPin, GetFilterPin(pInspectionBaseFilter, PINDIR_INPUT)));
			pCurrentOutputPin = GetFilterPin(pInspectionBaseFilter, PINDIR_OUTPUT);
			#pragma endregion
			#pragma region Renderer
			CComPtr<IBaseFilter> pRendererBaseFilter;
			typedef struct __declspec(uuid("C1F400A4-3F08-11D3-9F0B-006008039E37")) _NullRenderer { } NullRenderer;
			ATLENSURE_SUCCEEDED(pRendererBaseFilter.CoCreateInstance(__uuidof(NullRenderer)));
			ATLENSURE_SUCCEEDED(m_pFilterGraph->AddFilter(pRendererBaseFilter, CT2CW(_T("Renderer"))));
			ATLENSURE_SUCCEEDED(m_pFilterGraph->Connect(pCurrentOutputPin, GetFilterPin(pRendererBaseFilter, PINDIR_INPUT)));
			pCurrentOutputPin = NULL;
			#pragma endregion
			ATLASSERT(!pCurrentOutputPin);
			//AtlMessageBox(GetActiveWindow(), _T("Break In"), _T("Debug"), MB_ICONERROR | MB_OK);
		}
		_ATLCATCH(Exception)
		{
			Exception;
#if _DEVELOPMENT
			AtlMessageBox(GetActiveWindow(), (LPCTSTR) AtlFormatString(_T("Error 0x%08x - Break In"), (HRESULT) Exception), _T("Debug"), MB_ICONERROR | MB_OK);
#endif // _DEVELOPMENT
			_ATLRETHROW;
		}
		#pragma region Remove Reference Clock
		CComQIPtr<IMediaFilter> pMediaFilter = m_pFilterGraph;
		ATLENSURE_THROW(pMediaFilter, E_NOINTERFACE);
		ATLENSURE_SUCCEEDED(pMediaFilter->SetSyncSource(NULL));
		#pragma endregion
		_tprintf(_T("Running Filter Graph\n"));
		ATLENSURE_SUCCEEDED(m_pMediaControl->Run());
		LONG nEventCode = 0;
		ATLENSURE_SUCCEEDED(m_pMediaEventEx->WaitForCompletion(INFINITE, &nEventCode));
		_tprintf(_T("Completion: Code 0x%02x\n"), nEventCode); // EC_COMPLETE 0x01
		_tprintf(_T("Largest Video Media Sample Data Size: %d\n"), m_pInspectionFilterSite->GetMaximalDataSize());
		#pragma region Terminate
		ATLVERIFY(SUCCEEDED(m_pMediaControl->Stop()));
		m_pMediaEventEx = NULL;
		m_pMediaControl = NULL;
		m_pInspectionFilterSite->Terminate();
		m_pInspectionFilterSite = NULL;
		m_pFilterGraph = NULL;
		#pragma endregion
		return S_OK;
	}
};

////////////////////////////////////////////////////////////
// Main

int _tmain(int argc, _TCHAR* argv[])
{
	ATLVERIFY(SUCCEEDED(CoInitialize(NULL)));
	_ATLTRY
	{
		CModule Module;
		ATLENSURE_THROW(argc >= 2, E_INVALIDARG);
		const CPath sPath = argv[1];
		Module.SetPath(sPath);
		Module.Run();
	}
	_ATLCATCH(Exception)
	{
		_tprintf(_T("Fatal Error 0x%08x\n"), (HRESULT) Exception);
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Fatal Error\n"));
	}
	CoUninitialize();
	return 0;
}

