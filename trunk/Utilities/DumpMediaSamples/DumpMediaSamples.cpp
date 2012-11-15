////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2006-2012
// Created by Roman Ryltsov roman@alax.info
// 
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.
// 
// $Id$

#include "stdafx.h"
//#include <qedit.h>
#include "rodshow.h"

#pragma region Re-Adding Removed from Windows SDK qedit.h

struct __declspec(uuid("0579154a-2b53-4994-b0d0-e773148eff85"))
ISampleGrabberCB : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall SampleCB (
        double SampleTime,
        struct IMediaSample * pSample ) = 0;
      virtual HRESULT __stdcall BufferCB (
        double SampleTime,
        unsigned char * pBuffer,
        long BufferLen ) = 0;
};

struct __declspec(uuid("6b652fff-11fe-4fce-92ad-0266b5d7c78f"))
ISampleGrabber : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall SetOneShot (
        long OneShot ) = 0;
      virtual HRESULT __stdcall SetMediaType (
        struct _AMMediaType * pType ) = 0;
      virtual HRESULT __stdcall GetConnectedMediaType (
        struct _AMMediaType * pType ) = 0;
      virtual HRESULT __stdcall SetBufferSamples (
        long BufferThem ) = 0;
      virtual HRESULT __stdcall GetCurrentBuffer (
        /*[in,out]*/ long * pBufferSize,
        /*[out]*/ long * pBuffer ) = 0;
      virtual HRESULT __stdcall GetCurrentSample (
        /*[out,retval]*/ struct IMediaSample * * ppSample ) = 0;
      virtual HRESULT __stdcall SetCallback (
        struct ISampleGrabberCB * pCallback,
        long WhichMethodToCallback ) = 0;
};

struct __declspec(uuid("c1f400a0-3f08-11d3-9f0b-006008039e37"))
SampleGrabber;
    // [ default ] interface ISampleGrabber

#pragma endregion

////////////////////////////////////////////////////////////
// CFormatFlagHelper

class CFormatFlagHelper
{
public:

	////////////////////////////////////////////////////
	// FLAGNAME

	typedef struct _FLAGNAME
	{
		DWORD nValue;
		LPCTSTR pszName;
	} FLAGNAME;

public:
// CFormatFlagHelper
	static CString StringFromFlags(DWORD nValue, const FLAGNAME* pFlagNames, SIZE_T nFlagNameCount)
	{
		CString sText;
		DWORD nKnownValues = 0;
		for(SIZE_T nIndex = 0; nIndex < nFlagNameCount; nIndex++)
		{
			nKnownValues |= pFlagNames[nIndex].nValue;
			if(!(nValue & pFlagNames[nIndex].nValue))
				continue;
			if(!sText.IsEmpty())
				sText.Append(_T(" | "));
			sText.Append(pFlagNames[nIndex].pszName);
		}
		DWORD nUnnamedValue = nValue & ~nKnownValues;
		if(nUnnamedValue)
		{
			if(!sText.IsEmpty())
				sText.Append(_T(" | "));
			sText.AppendFormat(_T("0x%08x"), nUnnamedValue);
		}
		return sText;
	}
	template <SIZE_T t_nCount>
	static CString StringFromFlags(DWORD nValue, const FLAGNAME (&pFlagNames)[t_nCount])
	{
		return StringFromFlags(nValue, pFlagNames, t_nCount);
	}
	static CString StringFromTypeSpecificFlags(DWORD nValue)
	{
		static const FLAGNAME g_pNames[] =
		{
			//{ AM_VIDEO_FLAG_FIELD_MASK
			//{ AM_VIDEO_FLAG_INTERLEAVED_FRAME
			{ AM_VIDEO_FLAG_FIELD1, _T("AM_VIDEO_FLAG_FIELD1") },
			{ AM_VIDEO_FLAG_FIELD2, _T("AM_VIDEO_FLAG_FIELD2") },
			{ AM_VIDEO_FLAG_FIELD1FIRST, _T("AM_VIDEO_FLAG_FIELD1FIRST") },
			{ AM_VIDEO_FLAG_WEAVE, _T("AM_VIDEO_FLAG_WEAVE") },
			//{ AM_VIDEO_FLAG_IPB_MASK
			//{ AM_VIDEO_FLAG_I_SAMPLE
			{ AM_VIDEO_FLAG_P_SAMPLE, _T("AM_VIDEO_FLAG_P_SAMPLE") },
			{ AM_VIDEO_FLAG_B_SAMPLE, _T("AM_VIDEO_FLAG_B_SAMPLE") },
			{ AM_VIDEO_FLAG_REPEAT_FIELD, _T("AM_VIDEO_FLAG_REPEAT_FIELD") },
		};
		return StringFromFlags(nValue, g_pNames);
	}
	static CString StringFromSampleFlags(DWORD nValue)
	{
		static const FLAGNAME g_pNames[] =
		{
			{ AM_SAMPLE_SPLICEPOINT, _T("AM_SAMPLE_SPLICEPOINT") },
			{ AM_SAMPLE_PREROLL, _T("AM_SAMPLE_PREROLL") },
			{ AM_SAMPLE_DATADISCONTINUITY, _T("AM_SAMPLE_DATADISCONTINUITY") },
			{ AM_SAMPLE_TYPECHANGED, _T("AM_SAMPLE_TYPECHANGED") },
			{ AM_SAMPLE_TIMEVALID, _T("AM_SAMPLE_TIMEVALID") },
			{ AM_SAMPLE_TIMEDISCONTINUITY, _T("AM_SAMPLE_TIMEDISCONTINUITY") },
			{ AM_SAMPLE_FLUSH_ON_PAUSE, _T("AM_SAMPLE_FLUSH_ON_PAUSE") },
			{ AM_SAMPLE_STOPVALID, _T("AM_SAMPLE_STOPVALID") },
			{ AM_SAMPLE_ENDOFSTREAM, _T("AM_SAMPLE_ENDOFSTREAM") },
			//{ AM_STREAM_MEDIA
			//{ AM_STREAM_CONTROL
		};
		return StringFromFlags(nValue, g_pNames);
	}
};

////////////////////////////////////////////////////////////
// CModule

class CModule :
	public CAtlExeModuleT<CModule>
{
public:

	////////////////////////////////////////////////////////
	// CSampleGrabberCallback

	class ATL_NO_VTABLE CSampleGrabberCallback :
		public CComObjectRootEx<CComMultiThreadModel>,
		public ISampleGrabberCB,
		public CFormatFlagHelper
	{
	public:

	BEGIN_COM_MAP(CSampleGrabberCallback)
		COM_INTERFACE_ENTRY(ISampleGrabberCB)
	END_COM_MAP()

	private:
		CString m_sName;
		CString m_sNamePrefix;
		mutable CRoCriticalSection m_DataCriticalSection;
		CMediaType m_pMediaType;

	public:
	// CSampleGrabberCallback
		VOID SetName(const CString& sName)
		{
			_A(m_sName.IsEmpty());
			m_sName = sName;
			m_sNamePrefix = AtlFormatString(_T("[%s] "), sName);
		}
		VOID SetMediaType(const AM_MEDIA_TYPE* pMediaType)
		{
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			PrintMediaType(pMediaType);
			m_pMediaType = pMediaType;
		}
		static VOID PrintMediaType(const CMediaType& pMediaType)
		{
			_tprintf(_T("Media Type:\n\n"));
			_tprintf(_T("majortype %ls, subtype %ls, pUnk 0x%08x\n"), _PersistHelper::StringFromIdentifier(pMediaType->majortype), _PersistHelper::StringFromIdentifier(pMediaType->subtype), (LONG) (LONG_PTR) pMediaType->pUnk);
			_tprintf(_T("bFixedSizeSamples %d, bTemporalCompression %d, lSampleSize %d\n"), pMediaType->bFixedSizeSamples, pMediaType->bTemporalCompression, pMediaType->lSampleSize);
			_tprintf(_T("formattype %ls, cbFormat %d, pbFormat 0x%08x\n"), _PersistHelper::StringFromIdentifier(pMediaType->formattype), pMediaType->cbFormat, (UINT) (UINT_PTR) pMediaType->pbFormat);
			if(pMediaType->formattype == FORMAT_VideoInfo)
			{
				const VIDEOINFOHEADER* pVideoInfoHeader = (const VIDEOINFOHEADER*) (pMediaType->pbFormat ? pMediaType->pbFormat : (BYTE*) (pMediaType + 1));
				_tprintf(_T("pbFormat as VIDEOINFOHEADER:\n"));
				_tprintf(_T("  rcSource { %d, %d, %d, %d ), rcTarget { %d, %d, %d, %d }\n"), pVideoInfoHeader->rcSource.left, pVideoInfoHeader->rcSource.top, pVideoInfoHeader->rcSource.right, pVideoInfoHeader->rcSource.bottom, pVideoInfoHeader->rcTarget.left, pVideoInfoHeader->rcTarget.top, pVideoInfoHeader->rcTarget.right, pVideoInfoHeader->rcTarget.bottom);
				_tprintf(_T("  dwBitRate %d, dwBitErrorRate %d, AvgTimePerFrame %s\n"), pVideoInfoHeader->dwBitRate, pVideoInfoHeader->dwBitErrorRate, _FilterGraphHelper::FormatReferenceTime(pVideoInfoHeader->AvgTimePerFrame));
				_tprintf(_T("  bmiHeader.biSize %d, bmiHeader.biWidth %d, bmiHeader.biHeight %d, bmiHeader.biPlanes %d, bmiHeader.biBitCount %d, bmiHeader.biCompression %s\n"), pVideoInfoHeader->bmiHeader.biSize, pVideoInfoHeader->bmiHeader.biWidth, pVideoInfoHeader->bmiHeader.biHeight, pVideoInfoHeader->bmiHeader.biPlanes, pVideoInfoHeader->bmiHeader.biBitCount, _FilterGraphHelper::GetFourccCodeString(pVideoInfoHeader->bmiHeader.biCompression));
				_tprintf(_T("  bmiHeader.biSizeImage %d, bmiHeader.biXPelsPerMeter %d, bmiHeader.biYPelsPerMeter %d, bmiHeader.biClrUsed %d, bmiHeader.biClrImportant %d\n"), pVideoInfoHeader->bmiHeader.biSizeImage, pVideoInfoHeader->bmiHeader.biXPelsPerMeter, pVideoInfoHeader->bmiHeader.biYPelsPerMeter, pVideoInfoHeader->bmiHeader.biClrUsed, pVideoInfoHeader->bmiHeader.biClrImportant);
			} else
			if(pMediaType->formattype == FORMAT_VideoInfo2)
			{
				const VIDEOINFOHEADER2* pVideoInfoHeader2 = (const VIDEOINFOHEADER2*) (pMediaType->pbFormat ? pMediaType->pbFormat : (BYTE*) (pMediaType + 1));
				_tprintf(_T("pbFormat as VIDEOINFOHEADER2:\n"));
				_tprintf(_T("  rcSource { %d, %d, %d, %d ), rcTarget { %d, %d, %d, %d }\n"), pVideoInfoHeader2->rcSource.left, pVideoInfoHeader2->rcSource.top, pVideoInfoHeader2->rcSource.right, pVideoInfoHeader2->rcSource.bottom, pVideoInfoHeader2->rcTarget.left, pVideoInfoHeader2->rcTarget.top, pVideoInfoHeader2->rcTarget.right, pVideoInfoHeader2->rcTarget.bottom);
				_tprintf(_T("  dwBitRate %d, dwBitErrorRate %d, AvgTimePerFrame %s\n"), pVideoInfoHeader2->dwBitRate, pVideoInfoHeader2->dwBitErrorRate, _FilterGraphHelper::FormatReferenceTime(pVideoInfoHeader2->AvgTimePerFrame));
				_tprintf(_T("  dwInterlaceFlags 0x%x, dwCopyProtectFlags 0x%x, dwPictAspectRatioX %d, dwPictAspectRatioY %d, dwControlFlags 0x%x\n"), pVideoInfoHeader2->dwInterlaceFlags, pVideoInfoHeader2->dwCopyProtectFlags, pVideoInfoHeader2->dwPictAspectRatioX, pVideoInfoHeader2->dwPictAspectRatioY, pVideoInfoHeader2->dwControlFlags);
				_tprintf(_T("  bmiHeader.biSize %d, bmiHeader.biWidth %d, bmiHeader.biHeight %d, bmiHeader.biPlanes %d, bmiHeader.biBitCount %d, bmiHeader.biCompression %s\n"), pVideoInfoHeader2->bmiHeader.biSize, pVideoInfoHeader2->bmiHeader.biWidth, pVideoInfoHeader2->bmiHeader.biHeight, pVideoInfoHeader2->bmiHeader.biPlanes, pVideoInfoHeader2->bmiHeader.biBitCount, _FilterGraphHelper::GetFourccCodeString(pVideoInfoHeader2->bmiHeader.biCompression));
				_tprintf(_T("  bmiHeader.biSizeImage %d, bmiHeader.biXPelsPerMeter %d, bmiHeader.biYPelsPerMeter %d, bmiHeader.biClrUsed %d, bmiHeader.biClrImportant %d\n"), pVideoInfoHeader2->bmiHeader.biSizeImage, pVideoInfoHeader2->bmiHeader.biXPelsPerMeter, pVideoInfoHeader2->bmiHeader.biYPelsPerMeter, pVideoInfoHeader2->bmiHeader.biClrUsed, pVideoInfoHeader2->bmiHeader.biClrImportant);
			} else
			if(pMediaType->formattype == FORMAT_WaveFormatEx)
			{
				const WAVEFORMATEX* pWaveFormatEx = (const WAVEFORMATEX*) (pMediaType->pbFormat ? pMediaType->pbFormat : (BYTE*) (pMediaType + 1));
				_tprintf(_T("pbFormat as WAVEFORMATEX:\n"));
				_tprintf(_T("  wFormatTag %d\n"), pWaveFormatEx->wFormatTag);
				_tprintf(_T("  nChannels %d\n"), pWaveFormatEx->nChannels);
				_tprintf(_T("  nSamplesPerSec %d\n"), pWaveFormatEx->nSamplesPerSec);
				_tprintf(_T("  nAvgBytesPerSec %d\n"), pWaveFormatEx->nAvgBytesPerSec);
				_tprintf(_T("  nBlockAlign %d\n"), pWaveFormatEx->nBlockAlign);
				_tprintf(_T("  wBitsPerSample %d\n"), pWaveFormatEx->wBitsPerSample);
				_tprintf(_T("  cbSize %d\n"), pWaveFormatEx->cbSize);
				if(pWaveFormatEx->cbSize > 0)
				{
					const BYTE* pnExtraData = (const BYTE*) (pWaveFormatEx + 1);
					const SIZE_T nExtraDataSize = pWaveFormatEx->cbSize;
					for(SIZE_T nIndex1 = 0; nIndex1 < nExtraDataSize; nIndex1 += 0x10)
					{
						CString sText;
						for(SIZE_T nIndex2 = nIndex1; nIndex2 < min(nIndex1 + 0x10, nExtraDataSize); nIndex2++)
							sText.AppendFormat(_T("%02X "), pnExtraData[nIndex2]);
						sText.TrimRight(_T(" "));
						_tprintf(_T("  pnExtraData[0x%04x] %s\n"), nIndex1, sText);
					}
				}
			} else
				;
			_tprintf(_T("\n"));
		}

	// ISampleGrabberCB
        STDMETHOD(SampleCB)(DOUBLE fSampleTime, IMediaSample* pMediaSample) throw()
		{
			_A(pMediaSample);
			_ATLTRY
			{
				CMediaSampleProperties Properties(pMediaSample);
				_A(!Properties.pMediaType);
				_tprintf(_T("%s") _T("fSampleTime %s, .dwTypeSpecificFlags 0x%08x%s, .dwSampleFlags 0x%08x%s, .tStart %s, .tStop %s, .dwStreamId %d\n"), 
					m_sNamePrefix,
					_StringHelper::FormatNumber(fSampleTime, 3),
					Properties.dwTypeSpecificFlags, Properties.dwTypeSpecificFlags ? (LPCTSTR) AtlFormatString(_T(" (%s)"), StringFromTypeSpecificFlags(Properties.dwTypeSpecificFlags)) : _T(""),
					Properties.dwSampleFlags, Properties.dwSampleFlags ? (LPCTSTR) AtlFormatString(_T(" (%s)"), StringFromSampleFlags(Properties.dwSampleFlags)) : _T(""),
					_FilterGraphHelper::FormatReferenceTime(Properties.tStart), 
					_FilterGraphHelper::FormatReferenceTime(Properties.tStop),
					Properties.dwStreamId,
					0);
				CRoCriticalSectionLock DataLock(m_DataCriticalSection);
				BOOL bBufferHandled = FALSE;
				if(!bBufferHandled)
				{
					CString sBuffer;
					static const SIZE_T g_nMaximalPrintSize = 48;
					SIZE_T nIndex;
					for(nIndex = 0; nIndex < (SIZE_T) Properties.lActual && nIndex < g_nMaximalPrintSize; nIndex++)
						sBuffer.AppendFormat(_T("%02X "), Properties.pbBuffer[nIndex]);
					if(nIndex > g_nMaximalPrintSize)
						sBuffer.Append(_T("..."));
					_tprintf(_T("%s") _T(".cbBuffer %d, .lActual %d, pbBuffer %s\n"), 
						m_sNamePrefix,
						Properties.cbBuffer,
						Properties.lActual,
						sBuffer,
						0);
				}
				_tprintf(_T("\n"));
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
        STDMETHOD(BufferCB)(DOUBLE fSampleTime, BYTE* pnBuffer, LONG nBufferSize) throw()
		{
			return S_OK;
		}
	};

private:

public:
	CPath m_sPath;
	BOOL m_bNoReferenceClock;

public:
// CModule
	static VOID LoadGraphBuilderFromFile(IGraphBuilder* pGraphBuilder, LPCTSTR pszPath)
	{
		_A(pGraphBuilder && pszPath);
		CComQIPtr<IPersistStream> pPersistStream = pGraphBuilder;
		__D(pPersistStream, E_NOINTERFACE);
		CStringW sPathW(pszPath);
		__C(StgIsStorageFile(sPathW));
		CComPtr<IStorage> pStorage;
		__C(StgOpenStorage(sPathW, 0, STGM_TRANSACTED | STGM_READ | STGM_SHARE_DENY_WRITE, 0, 0, &pStorage));
		CComPtr<IStream> pStream;
		__C(pStorage->OpenStream(L"ActiveMovieGraph", 0, STGM_READ | STGM_SHARE_EXCLUSIVE, 0, &pStream));
		__C(pPersistStream->Load(pStream));
	}
	static CPath GetDefaultPath()
	{
		TCHAR pszPath[MAX_PATH] = { 0 };
		_W(GetModuleFileName(_AtlBaseModule.GetModuleInstance(), pszPath, DIM(pszPath)));
		_W(RemoveFileSpec(pszPath));
		_W(RemoveFileSpec(pszPath));
		_W(Combine(pszPath, pszPath, _T("Debug.grf")));
		return pszPath;
	}
	CModule() throw()
	{
		//m_sPath = GetDefaultPath();
		m_bNoReferenceClock = FALSE;
	}
	~CModule() throw()
	{
	}
	HRESULT PreMessageLoop(INT nShowCommand)
	{
		__C(__super::PreMessageLoop(nShowCommand));
		return S_OK;
	}
	VOID RunMessageLoop()
	{
		CGenericFilterGraph FilterGraph;
		FilterGraph.CoCreateInstance();
		LoadGraphBuilderFromFile(FilterGraph.m_pFilterGraph, m_sPath);
		#pragma region Sample Grabbers
		_FilterGraphHelper::CFilterArray FilterArray;
		_FilterGraphHelper::GetGraphFilters(FilterGraph.m_pFilterGraph, FilterArray);
		__D(!FilterArray.IsEmpty(), E_UNNAMED);
		SIZE_T nSampleGrabberIndex = 0;
		for(SIZE_T nIndex = 0; nIndex < FilterArray.GetCount(); nIndex++)
		{
			const CComQIPtr<ISampleGrabber> pSampleGrabber = FilterArray[nIndex];
			if(!pSampleGrabber)
				continue;
			CObjectPtr<CSampleGrabberCallback> pSampleGrabberCallback;
			pSampleGrabberCallback.Construct();
			if(FilterArray.GetCount() > 1)
				pSampleGrabberCallback->SetName(AtlFormatString(_T("%c"), 'A' + nSampleGrabberIndex));
			__C(pSampleGrabber->SetCallback(pSampleGrabberCallback, 0));
			nSampleGrabberIndex++;
			const CMediaType pMediaType = _FilterGraphHelper::GetPinMediaType(_FilterGraphHelper::GetFilterPin(CComQIPtr<IBaseFilter>(pSampleGrabber), PINDIR_INPUT));
			pSampleGrabberCallback->SetMediaType(pMediaType);
		}
		#pragma endregion 
		if(m_bNoReferenceClock)
			__C(FilterGraph.m_pMediaFilter->SetSyncSource(NULL));
		_tprintf(_T("Media Samples:\n\n"));
		__C(FilterGraph.m_pMediaControl->Run());
		#pragma region Wait for Completion
		#if TRUE
			const CComPtr<IMediaEventEx>& pMediaEvent = FilterGraph.m_pMediaEventEx;
			for(; ; )
			{
				// SUGG: Replace Sleep/GetMessage with MsgWaitForMultipleObjects/PeekMessage to wait for graph event and window messages
				static const ULONG g_nTimeout = 10;
				if(pMediaEvent)
				{
					LONG nCompletionEventCode = 0;
					const HRESULT nWaitForCompletionResult = pMediaEvent->WaitForCompletion(g_nTimeout, &nCompletionEventCode);
					for(; ; )
					{
						LONG nEventCode = 0;
						LONG_PTR nParameter1 = 0, nParameter2 = 0;
						const HRESULT nGetEventResult = pMediaEvent->GetEvent(&nEventCode, &nParameter1, &nParameter2, 0);
						if(nGetEventResult == E_ABORT)
							break;
						__C(nGetEventResult);
						_ATLTRY
						{
							switch(nEventCode)
							{
							case EC_COMPLETE:
								_tprintf(_T("Event: EC_COMPLETE (0x%x), Error Code 0x%08x (%s), Parameter2 0x%08x\n"), nEventCode, (HRESULT) nParameter1, AtlFormatSystemMessage((HRESULT) nParameter1).TrimRight(_T("\t\n\r .")), nParameter2);
								break;
							case EC_USERABORT:
								_tprintf(_T("Event: EC_USERABORT (0x%x), Parameter1 0x%08x, Parameter2 0x%08x\n"), nEventCode, nParameter1, nParameter2);
								break;
							case EC_ERRORABORT:
								_tprintf(_T("Event: EC_ERRORABORT (0x%x), Error Code 0x%08x (%s), Parameter2 0x%08x\n"), nEventCode, nParameter1, AtlFormatSystemMessage((HRESULT) nParameter1).TrimRight(_T("\t\n\r .")), nParameter2);
								break;
							default:
								_tprintf(_T("Event: Code 0x%x, Parameter1 0x%08x, Parameter2 0x%08x\n"), nEventCode, nParameter1, nParameter2);
							}
						}
						_ATLCATCHALL()
						{
							_V(pMediaEvent->FreeEventParams(nEventCode, nParameter1, nParameter2));
							_ATLRETHROW;
						}
						_V(pMediaEvent->FreeEventParams(nEventCode, nParameter1, nParameter2));
					}
					if(nWaitForCompletionResult != E_ABORT)
					{
						__C(nWaitForCompletionResult);
						_tprintf(_T("\nCompleted: Event Code 0x%x\n"), nCompletionEventCode);
						break;
					}
				} else
					Sleep(g_nTimeout);
				MSG Message;
				while(PeekMessage(&Message, NULL, WM_NULL, WM_NULL, PM_REMOVE))
				{
					TranslateMessage(&Message);
					DispatchMessage(&Message);
				}
			}
		#else
			MSG Message;
			while(GetMessage(&Message, NULL, WM_NULL, WM_NULL) > 0)
			{
				TranslateMessage(&Message);
				DispatchMessage(&Message);
			}
		#endif
		#pragma endregion 
	}
};

////////////////////////////////////////////////////////////
// Main

int _tmain(int argc, _TCHAR* argv[])
{
	INT nResult = 0;
	_ATLTRY
	{
		CModule Module;
		#pragma region Parse Command Line
		for(INT nIndex = 1; nIndex < argc; nIndex++)
		{
			CString sArgument = argv[nIndex];
			_A(!sArgument.IsEmpty());
			#pragma region Switches
			if(_tcschr(_T("-/"), sArgument[0]))
			{
				sArgument.Delete(0);
				#pragma region Switch Value/Specification
				CString sArgumentValue;
				if(sArgument.GetLength() > 1)
				{
					SIZE_T nIndex = 1;
					if(sArgument[1] == _T(':'))
						nIndex++;
					sArgumentValue = (LPCTSTR) sArgument + nIndex;
				}
				INT nIntegerArgumentValue = 0;
				const BOOL bIntegerArgumentValueValid = !sArgumentValue.IsEmpty() ? AtlStringToInteger(sArgumentValue, nIntegerArgumentValue) : FALSE;
				#pragma endregion
				if(_tcschr(_T("Cc"), sArgument[0])) // No Reference Clock
				{
					Module.m_bNoReferenceClock = TRUE;
				}
				continue;
			}
			#pragma endregion 
			if(sArgument.GetLength() >= 2 && sArgument[0] == _T('"') && sArgument[sArgument.GetLength() - 1] == _T('"'))
				sArgument = sArgument.Mid(1, sArgument.GetLength() - 2);
			__D(!_tcslen(Module.m_sPath), E_UNNAMED);
			Module.m_sPath = (LPCTSTR) sArgument;
		}
		#pragma endregion
		__D(_tcslen(Module.m_sPath), E_UNNAMED);
		nResult = Module.WinMain(SW_SHOWNORMAL);
	}
	_ATLCATCH(Exception)
	{
		_tprintf(_T("Fatal: Error 0x%08x\n"), (HRESULT) Exception);
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Fatal: Fatal error\n"));
	}
	return nResult;
}
