////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2015
// Created by Roman Ryltsov roman@alax.info
//
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#include "stdafx.h"
#include <dshow.h>
#include <dshowasf.h>
#include <wmsysprf.h>
#import "libid:9E3ABA93-C8D8-41D3-B39E-29508FDE5757" raw_interfaces_only no_namespace // AlaxInfoReferenceSource

#pragma comment(lib, "strmiids.lib")

#define _A	ATLASSERT
#define __C	ATLENSURE_SUCCEEDED

CComPtr<IPin> GetFilterPin(IBaseFilter* pBaseFilter, SIZE_T nIndex = 0)
{
	_A(pBaseFilter);
	CComPtr<IEnumPins> pEnumPins;
	__C(pBaseFilter->EnumPins(&pEnumPins));
	for(; ; )
	{
		CComPtr<IPin> pPin;
		if(pEnumPins->Next(1, &pPin, NULL) != S_OK)
			break;
		_A(pPin);
		if(!nIndex--)
			return pPin;
	}
	return NULL;
}

int _tmain(int argc, _TCHAR* argv[])
{
	static const LPCTSTR g_pszPath = _T("D:\\Output.asf");
	static const REFERENCE_TIME g_nDuration = 3 * 60 * 1000 * 10000i64; // 15 seconds
	_ATLTRY
	{
		__C(CoInitializeEx(NULL, COINIT_APARTMENTTHREADED));
		_ATLTRY
		{
			CComPtr<IFilterGraph2> pFilterGraph;
			__C(pFilterGraph.CoCreateInstance(CLSID_FilterGraph));
			// WARN: Make sure ReferenceSource.dll of matching bitness is registered with the system (or otherwise is COM visible/available)
			#pragma region Video
			CComPtr<IBaseFilter> pVideoBaseFilter;
			__C(pVideoBaseFilter.CoCreateInstance(__uuidof(VideoSourceFilter)));
			__C(pFilterGraph->AddFilter(pVideoBaseFilter, NULL));
			{
				const CComQIPtr<IAMStreamConfig> pAmStreamConfig = GetFilterPin(pVideoBaseFilter);
				const CComQIPtr<IAMStreamControl> pAmStreamControl = pAmStreamConfig;
				_A(pAmStreamConfig && pAmStreamControl);
				VIDEOINFOHEADER VideoInfoHeader;
				ZeroMemory(&VideoInfoHeader, sizeof VideoInfoHeader);
				VideoInfoHeader.AvgTimePerFrame = 1001 * 10000i64 / 30; // 29.970 fps
				BITMAPINFOHEADER& BitmapInfoHeader = VideoInfoHeader.bmiHeader;
				BitmapInfoHeader.biSize = sizeof BitmapInfoHeader;
				BitmapInfoHeader.biWidth = 320; //1280;
				BitmapInfoHeader.biHeight = -240; //-720; // Important: video source is only capable to geneate top-to-bottom 32-bit RGBs due to Direct2D implementation details
				BitmapInfoHeader.biPlanes = 1;
				BitmapInfoHeader.biBitCount = 32;
				BitmapInfoHeader.biCompression = BI_RGB;
				BitmapInfoHeader.biSizeImage = abs(BitmapInfoHeader.biHeight) * BitmapInfoHeader.biWidth * (BitmapInfoHeader.biBitCount >> 3);
				AM_MEDIA_TYPE MediaType;
				ZeroMemory(&MediaType, sizeof MediaType);
				MediaType.majortype = MEDIATYPE_Video;
				MediaType.subtype = MEDIASUBTYPE_RGB32;
				MediaType.bFixedSizeSamples = TRUE;
				MediaType.bTemporalCompression = FALSE;
				MediaType.lSampleSize = VideoInfoHeader.bmiHeader.biSizeImage;
				MediaType.formattype = FORMAT_VideoInfo;
				MediaType.cbFormat = sizeof VideoInfoHeader;
				MediaType.pbFormat = (BYTE*) &VideoInfoHeader;
				__C(pAmStreamConfig ->SetFormat(&MediaType));
				__C(pAmStreamControl->StopAt(&g_nDuration, FALSE, (DWORD_PTR) (IBaseFilter*) pVideoBaseFilter));
			}
			#pragma endregion
			#pragma region Audio
			CComPtr<IBaseFilter> pAudioBaseFilter;
			__C(pAudioBaseFilter.CoCreateInstance(__uuidof(AudioSourceFilter)));
			__C(pFilterGraph->AddFilter(pAudioBaseFilter, NULL));
			{
				const CComQIPtr<IAMStreamConfig> pAmStreamConfig = GetFilterPin(pAudioBaseFilter);
				const CComQIPtr<IAMStreamControl> pAmStreamControl = pAmStreamConfig;
				_A(pAmStreamConfig && pAmStreamControl);
				WAVEFORMATEX WaveFormatEx;
				ZeroMemory(&WaveFormatEx, sizeof WaveFormatEx);
				WaveFormatEx.wFormatTag = WAVE_FORMAT_PCM;
				WaveFormatEx.nChannels = 1;
				WaveFormatEx.nSamplesPerSec = 32000;
				WaveFormatEx.wBitsPerSample = 16;
				WaveFormatEx.nBlockAlign = WaveFormatEx.nChannels * (WaveFormatEx.wBitsPerSample >> 3);
				WaveFormatEx.nAvgBytesPerSec = WaveFormatEx.nSamplesPerSec * WaveFormatEx.nBlockAlign;
				AM_MEDIA_TYPE MediaType;
				ZeroMemory(&MediaType, sizeof MediaType);
				MediaType.majortype = MEDIATYPE_Audio;
				MediaType.subtype = MEDIASUBTYPE_PCM;
				MediaType.bFixedSizeSamples = TRUE;
				MediaType.bTemporalCompression = FALSE;
				MediaType.lSampleSize = WaveFormatEx.nBlockAlign;
				MediaType.formattype = FORMAT_WaveFormatEx;
				MediaType.cbFormat = sizeof WaveFormatEx;
				MediaType.pbFormat = (BYTE*) &WaveFormatEx;
				__C(pAmStreamConfig ->SetFormat(&MediaType));
				__C(pAmStreamControl->StopAt(&g_nDuration, FALSE, (DWORD_PTR) (IBaseFilter*) pAudioBaseFilter));
			}
			#pragma endregion
			#pragma region Renderer
			CComPtr<IBaseFilter> pRendererBaseFilter;
			__C(pRendererBaseFilter.CoCreateInstance(CLSID_WMAsfWriter));
			__C(pFilterGraph->AddFilter(pRendererBaseFilter, NULL));
			const CComQIPtr<IFileSinkFilter> pFileSinkFilter = pRendererBaseFilter;
			_A(pFileSinkFilter);
			__C(pFileSinkFilter->SetFileName(CStringW(g_pszPath), NULL));
			const CComQIPtr<IConfigAsfWriter> pConfigAsfWriter = pRendererBaseFilter;
			_A(pConfigAsfWriter);
			// NOTE: System Profiles https://msdn.microsoft.com/en-us/library/windows/desktop/dd743748
			// WARN: This sample using Windows Media 8 system profile for code brevity; the profile overrides video resolution and frame rate and 
			//       causes video scaling regardless of input video format
			__C(pConfigAsfWriter->ConfigureFilterUsingProfileGuid(WMProfile_V80_100Video));
			__C(pFilterGraph->Connect(GetFilterPin(pAudioBaseFilter), GetFilterPin(pRendererBaseFilter, 0)));
			__C(pFilterGraph->Connect(GetFilterPin(pVideoBaseFilter), GetFilterPin(pRendererBaseFilter, 1)));
			#pragma endregion
			const CComQIPtr<IMediaFilter> pMediaFilter = pFilterGraph;
			const CComQIPtr<IMediaControl> pMediaControl = pFilterGraph;
			const CComQIPtr<IMediaEvent> pMediaEvent = pFilterGraph;
			_A(pMediaFilter && pMediaControl && pMediaEvent);
			__C(pMediaFilter->SetSyncSource(NULL));
			__C(pMediaControl->Run());
			#pragma region Run
			//BOOL bVideoStopped = !pVideoSourceBaseFilter, bAudioStopped = !pAudioSourceBaseFilter;
			for(BOOL bComplete = FALSE; !bComplete; )
			{
				for(; !bComplete; )
				{
					LONG nEventCode;
					LONG_PTR nParameter1, nParameter2;
					const HRESULT nGetEventResult = pMediaEvent->GetEvent(&nEventCode, &nParameter1, &nParameter2, 1000); // 1 second
					if(FAILED(nGetEventResult))
						break;
					_ATLTRY
					{
						switch(nEventCode)
						{
						case EC_COMPLETE:
							bComplete = TRUE;
							_tprintf(_T("Completed.\n"));
							break;
						case EC_USERABORT:
							__C(E_ABORT); // Actually unexpected
							break;
						case EC_ERRORABORT:
							_A(FAILED((HRESULT) nParameter1));
							__C((HRESULT) nParameter1);
							break;
					// NOTE: No need to handle EC_STREAM_CONTROL_ events since with stop time defined, the streaming is finite anyway and we get EC_COMPLETE
					//	case EC_STREAM_CONTROL_STARTED:
					//		break;
					//	case EC_STREAM_CONTROL_STOPPED:
					//		if(nParameter2 == (LONG_PTR) (IBaseFilter*) pVideoBaseFilter)
					//			bVideoStopped = TRUE;
					//		else if(nParameter2 == (LONG_PTR) (IBaseFilter*) pAudioBaseFilter)
					//			bAudioStopped = TRUE;
					//		else
					//			_A(FALSE);
					//		break;
						}
					}
					_ATLCATCHALL()
					{
						pMediaEvent->FreeEventParams(nEventCode, nParameter1, nParameter2);
						_ATLRETHROW;
					}
					pMediaEvent->FreeEventParams(nEventCode, nParameter1, nParameter2);
					//bComplete |= bVideoStopped && bAudioStopped;
				}
				//bComplete |= bVideoStopped && bAudioStopped;
				SwitchToThread();
			}
			#pragma endregion 
			__C(pMediaControl->Stop());
			_tprintf(_T("Done."));
		}
		_ATLCATCHALL()
		{
			CoUninitialize();
			_ATLRETHROW;
		}
		CoUninitialize();
	}
	_ATLCATCH(Exception)
	{
		_tprintf(_T("Fatal Error 0x%08X\n"), (HRESULT) Exception);
	}
	return 0;
}

