////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2006-2012
// Created by Roman Ryltsov roman@alax.info
// 
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#include "stdafx.h"
#include <windows.h>
#include <dshow.h>

#pragma comment(lib, "strmiids.lib")

int _tmain(int argc, _TCHAR* argv[])
{
	_ATLTRY
	{
		ATLENSURE_SUCCEEDED(CoInitializeEx(NULL, COINIT_APARTMENTTHREADED));
		_ATLTRY
		{
			CComPtr<ICreateDevEnum> pCreateDevEnum;
			ATLENSURE_SUCCEEDED(pCreateDevEnum.CoCreateInstance(CLSID_SystemDeviceEnum));
			CComPtr<IEnumMoniker> pEnumMoniker;
			ATLENSURE_SUCCEEDED(pCreateDevEnum->CreateClassEnumerator(CLSID_AudioInputDeviceCategory, &pEnumMoniker, 0));
			CComPtr<IMoniker> pMoniker;
			while(pEnumMoniker->Next(1, &pMoniker, NULL) == S_OK)
			{
				_ATLTRY
				{
					LPOLESTR pszDisplayName = NULL;
					ATLVERIFY(SUCCEEDED(pMoniker->GetDisplayName(NULL, NULL, &pszDisplayName)));
					// TODO: Free pszDisplayName
					if(pszDisplayName)
						_tprintf(_T("Moniker Display Name: %ls\n"), pszDisplayName);
					CComPtr<IPropertyBag> pPropertyBag;
					ATLENSURE_SUCCEEDED(pMoniker->BindToStorage(NULL, NULL, __uuidof(IPropertyBag), (VOID**) &pPropertyBag));
					CComVariant vFriendlyName;
					ATLENSURE_SUCCEEDED(pPropertyBag->Read(L"FriendlyName", &vFriendlyName, NULL));
					ATLENSURE_THROW(vFriendlyName.vt == VT_BSTR, E_FAIL);
					_tprintf(_T("Friendly Name: %s\n"), CString(vFriendlyName.bstrVal));
					CComPtr<IBaseFilter> pBaseFilter;
					ATLENSURE_SUCCEEDED(pMoniker->BindToObject(NULL, NULL, __uuidof(IBaseFilter), (VOID**) &pBaseFilter));
					CComPtr<IEnumPins> pEnumPins;
					ATLENSURE_SUCCEEDED(pBaseFilter->EnumPins(&pEnumPins));
					CComPtr<IPin> pPin;
					while(pEnumPins->Next(1, &pPin, NULL) == S_OK)
					{
						_ATLTRY
						{
							CComQIPtr<IAMStreamConfig> pAmStreamConfig = pPin;
							if(pAmStreamConfig)
							{
								PIN_INFO PinInformation;
								ATLENSURE_SUCCEEDED(pPin->QueryPinInfo(&PinInformation));
								reinterpret_cast<CComPtr<IBaseFilter>&>(PinInformation.pFilter) = NULL;
								_tprintf(_T("  Pin: %s\n"), CString(PinInformation.achName));
								INT nCapabilityCount = 0;
								INT nSize = 0;
								ATLENSURE_SUCCEEDED(pAmStreamConfig->GetNumberOfCapabilities(&nCapabilityCount, &nSize));
								_tprintf(_T("    Capability Count: %d\n"), nCapabilityCount);
								CTempBuffer<AUDIO_STREAM_CONFIG_CAPS> pCapability;
								ATLENSURE_THROW(nSize >= sizeof *pCapability, E_FAIL);
								ATLENSURE_THROW(pCapability.AllocateBytes(nSize), E_OUTOFMEMORY);
								for(INT nCapabilityIndex = 0; nCapabilityIndex < nCapabilityCount; nCapabilityIndex++)
								{
									_tprintf(_T("    Capability %d:\n"), nCapabilityIndex);
									AM_MEDIA_TYPE* pMediaType = NULL;
									ATLENSURE_SUCCEEDED(pAmStreamConfig->GetStreamCaps(nCapabilityIndex, &pMediaType, (BYTE*) (AUDIO_STREAM_CONFIG_CAPS*) pCapability));
									ATLASSERT(pMediaType);
									// TODO: Free pMediaType
									_tprintf(_T("    AM_MEDIA_TYPE:\n"));
									// SUGG: majortype, subtype
									_tprintf(_T("      .bFixedSizeSamples: %d\n"), pMediaType->bFixedSizeSamples);
									_tprintf(_T("      .bTemporalCompression: %d\n"), pMediaType->bTemporalCompression);
									_tprintf(_T("      .lSampleSize: %d\n"), pMediaType->lSampleSize);
									// SUGG: formattype, pUnk
									_tprintf(_T("      .cbFormat: %d\n"), pMediaType->cbFormat);
									if(pMediaType->formattype == FORMAT_WaveFormatEx)
									{
										WAVEFORMATEX* pWaveFormatEx = (WAVEFORMATEX*) pMediaType->pbFormat;
										_tprintf(_T("    WAVEFORMATEX:\n"));
										_tprintf(_T("      .wFormatTag: %d\n"), pWaveFormatEx->wFormatTag);
										_tprintf(_T("      .nChannels: %d\n"), pWaveFormatEx->nChannels);
										_tprintf(_T("      .nSamplesPerSec: %d\n"), pWaveFormatEx->nSamplesPerSec);
										_tprintf(_T("      .nAvgBytesPerSec: %d\n"), pWaveFormatEx->nAvgBytesPerSec);
										_tprintf(_T("      .nBlockAlign: %d\n"), pWaveFormatEx->nBlockAlign);
										_tprintf(_T("      .wBitsPerSample: %d\n"), pWaveFormatEx->wBitsPerSample);
										_tprintf(_T("      .cbSize: %d\n"), pWaveFormatEx->cbSize);
										// SUGG: Extra data
									}
									ATLASSERT(pCapability->guid == MEDIATYPE_Audio);
									_tprintf(_T("    AUDIO_STREAM_CONFIG_CAPS:\n"));
									_tprintf(_T("      .MinimumChannels: %d\n"), pCapability->MinimumChannels);
									_tprintf(_T("      .MaximumChannels: %d\n"), pCapability->MaximumChannels);
									_tprintf(_T("      .ChannelsGranularity: %d\n"), pCapability->ChannelsGranularity);
									_tprintf(_T("      .MinimumBitsPerSample: %d\n"), pCapability->MinimumBitsPerSample);
									_tprintf(_T("      .MaximumBitsPerSample: %d\n"), pCapability->MaximumBitsPerSample);
									_tprintf(_T("      .BitsPerSampleGranularity: %d\n"), pCapability->BitsPerSampleGranularity);
									_tprintf(_T("      .MinimumSampleFrequency: %d\n"), pCapability->MinimumSampleFrequency);
									_tprintf(_T("      .MaximumSampleFrequency: %d\n"), pCapability->MaximumSampleFrequency);
									_tprintf(_T("      .SampleFrequencyGranularity: %d\n"), pCapability->SampleFrequencyGranularity);
								}
							}
						}
						_ATLCATCHALL()
						{
							_tprintf(_T("An exception has been caught\n"));
						}
						pPin.Release();
					}
				}
				_ATLCATCHALL()
				{
					_tprintf(_T("An exception has been caught\n"));
				}
				pMoniker.Release();
			}
		}
		_ATLCATCHALL()
		{
			CoUninitialize();
			_ATLRETHROW;
		}
		CoUninitialize();
	}
	_ATLCATCHALL()
	{
	}
	return 0;
}

