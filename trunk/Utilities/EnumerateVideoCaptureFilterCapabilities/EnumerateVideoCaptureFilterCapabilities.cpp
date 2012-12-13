////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2006-2012
// Created by Roman Ryltsov roman@alax.info
// 
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#include "stdafx.h"
#import "libid:1469D378-8829-4ff0-9B3B-07DD5B16F3CB" raw_interfaces_only // DecklinkPublicLib
#include <windows.h>
#include <dshow.h>
#include <dvdmedia.h> // VIDEOINFOHEADER2

#pragma comment(lib, "strmiids.lib")

inline VOID __C(HRESULT nResult) { ATLENSURE_SUCCEEDED(nResult); }
inline VOID __D(BOOL bResult, HRESULT nResult) { ATLENSURE_THROW(bResult, nResult); }
inline VOID __D(const VOID* pvResult, HRESULT nResult) { ATLENSURE_THROW(pvResult, nResult); }

//#pragma pack(show)

CString StringFromData(const BYTE* pnData, SIZE_T nDataSize)
{
	CString sString;
	for(SIZE_T nIndex = 0; nIndex < nDataSize; nIndex++)
		sString.AppendFormat(_T("%02X "), pnData[nIndex]);
	sString.TrimRight();
	return sString;
}
CString StringFromData(const VOID* pvData, SIZE_T nDataSize)
{
	return StringFromData((const BYTE*) pvData, nDataSize);
}
CString StringFromCode(DWORD nCode)
{
	// NOTE: More precisely, we need to compare each byte against 0x20, but this one is good enough too
	if(nCode < 0x20202020)
		return (LPCTSTR) NULL;
	TCHAR pszCode[] = 
	{
		(nCode >> 0) & 0xFF,
		(nCode >> 8) & 0xFF,
		(nCode >> 16) & 0xFF,
		(nCode >> 24) & 0xFF,
		0
	};
	return pszCode;
}

int _tmain(int argc, _TCHAR* argv[])
{
	_ATLTRY
	{
		__C(CoInitializeEx(NULL, COINIT_APARTMENTTHREADED));
		_ATLTRY
		{
			CComPtr<ICreateDevEnum> pCreateDevEnum;
			__C(pCreateDevEnum.CoCreateInstance(CLSID_SystemDeviceEnum));
			CComPtr<IEnumMoniker> pEnumMoniker;
			__C(pCreateDevEnum->CreateClassEnumerator(CLSID_VideoInputDeviceCategory, &pEnumMoniker, 0));
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
					__C(pMoniker->BindToStorage(NULL, NULL, __uuidof(IPropertyBag), (VOID**) &pPropertyBag));
					CComVariant vFriendlyName;
					__C(pPropertyBag->Read(L"FriendlyName", &vFriendlyName, NULL));
					__D(vFriendlyName.vt == VT_BSTR, E_FAIL);
					_tprintf(_T("Friendly Name: %s\n"), CString(vFriendlyName.bstrVal));
					CComPtr<IBaseFilter> pBaseFilter;
					__C(pMoniker->BindToObject(NULL, NULL, __uuidof(IBaseFilter), (VOID**) &pBaseFilter));
					#pragma region DeckLink Specific
					const CComQIPtr<DecklinkPublicLib::IDecklinkIOControl> pDecklinkIoControl = pBaseFilter;
					if(pDecklinkIoControl)
						_ATLTRY
						{
							ULONG nIoFeatures = 0;
							__C(pDecklinkIoControl->GetIOFeatures(&nIoFeatures));
							_tprintf(_T("DeckLink IO Features: 0x%08x\n"), nIoFeatures);
						}
						_ATLCATCHALL()
						{
						}
					#pragma endregion
					CComPtr<IEnumPins> pEnumPins;
					__C(pBaseFilter->EnumPins(&pEnumPins));
					CComPtr<IPin> pPin;
					while(pEnumPins->Next(1, &pPin, NULL) == S_OK)
					{
						_ATLTRY
						{
							CComQIPtr<IAMStreamConfig> pAmStreamConfig = pPin;
							if(pAmStreamConfig)
							{
								PIN_INFO PinInformation;
								__C(pPin->QueryPinInfo(&PinInformation));
								reinterpret_cast<CComPtr<IBaseFilter>&>(PinInformation.pFilter) = NULL;
								_tprintf(_T("  Pin: %s\n"), CString(PinInformation.achName));
								INT nCapabilityCount = 0;
								INT nSize = 0;
								__C(pAmStreamConfig->GetNumberOfCapabilities(&nCapabilityCount, &nSize));
								_tprintf(_T("    Capability Count: %d\n"), nCapabilityCount);
								_tprintf(_T("    Structure Size: %d (expected %d)\n"), nSize, sizeof (VIDEO_STREAM_CONFIG_CAPS));
								CTempBuffer<VIDEO_STREAM_CONFIG_CAPS> pCapability;
								__D(nSize >= sizeof *pCapability, E_FAIL);
								__D(pCapability.AllocateBytes(nSize), E_OUTOFMEMORY);
								for(INT nCapabilityIndex = 0; nCapabilityIndex < nCapabilityCount; nCapabilityIndex++)
								{
									_tprintf(_T("    Capability %d:\n"), nCapabilityIndex);
									AM_MEDIA_TYPE* pMediaType = NULL;
									__C(pAmStreamConfig->GetStreamCaps(nCapabilityIndex, &pMediaType, (BYTE*) (VIDEO_STREAM_CONFIG_CAPS*) pCapability));
									ATLASSERT(pMediaType);
									// TODO: Free pMediaType
									_tprintf(_T("    AM_MEDIA_TYPE:\n"));
									_tprintf(_T("      Media Type Data: %s\n"), StringFromData(pMediaType, sizeof *pMediaType));
									if(pMediaType->cbFormat)
										_tprintf(_T("      Media Type Format Data: %s\n"), StringFromData(pMediaType->pbFormat, pMediaType->cbFormat));
									// SUGG: majortype, subtype
									if(memcmp((const BYTE*) &pMediaType->subtype + sizeof (DWORD), (const BYTE*) &MEDIASUBTYPE_MJPG + sizeof (DWORD), sizeof (GUID) -  sizeof (DWORD)) == 0)
									{
										const CString sSubtypeCode = StringFromCode(pMediaType->subtype.Data1);
										if(!sSubtypeCode.IsEmpty())
											_tprintf(_T("      .subtype: %s\n"), sSubtypeCode);
									}
									_tprintf(_T("      .bFixedSizeSamples: %d\n"), pMediaType->bFixedSizeSamples);
									_tprintf(_T("      .bTemporalCompression: %d\n"), pMediaType->bTemporalCompression);
									_tprintf(_T("      .lSampleSize: %d\n"), pMediaType->lSampleSize);
									// SUGG: formattype, pUnk
									_tprintf(_T("      .cbFormat: %d\n"), pMediaType->cbFormat);
									const BYTE* pnExtraData = pMediaType->pbFormat;
									SIZE_T nExtraDataSize = pMediaType->cbFormat;
									if(pMediaType->formattype == FORMAT_VideoInfo)
									{
										const VIDEOINFOHEADER* pVideoInfoHeader = (VIDEOINFOHEADER*) pMediaType->pbFormat;
										_tprintf(_T("    VIDEOINFOHEADER:\n"));
										_tprintf(_T("      .rcSource: (%d, %d) - (%d, %d)\n"), pVideoInfoHeader->rcSource);
										_tprintf(_T("      .rcSource: (%d, %d) - (%d, %d)\n"), pVideoInfoHeader->rcTarget);
										_tprintf(_T("      .dwBitRate: %d\n"), pVideoInfoHeader->dwBitRate);
										_tprintf(_T("      .dwBitErrorRate: %d\n"), pVideoInfoHeader->dwBitErrorRate);
										_tprintf(_T("      .AvgTimePerFrame: %I64d\n"), pVideoInfoHeader->AvgTimePerFrame);
										_tprintf(_T("      BITMAPINFOHEADER:\n"));
										_tprintf(_T("        .biSize: %d\n"), pVideoInfoHeader->bmiHeader.biSize);
										_tprintf(_T("        .biWidth: %d\n"), pVideoInfoHeader->bmiHeader.biWidth);
										_tprintf(_T("        .biHeight: %d\n"), pVideoInfoHeader->bmiHeader.biHeight);
										_tprintf(_T("        .biPlanes: %d\n"), pVideoInfoHeader->bmiHeader.biPlanes);
										_tprintf(_T("        .biBitCount: %d\n"), pVideoInfoHeader->bmiHeader.biBitCount);
										_tprintf(_T("        .biCompression: %d %s\n"), pVideoInfoHeader->bmiHeader.biCompression, StringFromCode(pVideoInfoHeader->bmiHeader.biCompression));
										_tprintf(_T("        .biSizeImage: %d\n"), pVideoInfoHeader->bmiHeader.biSizeImage);
										pnExtraData += sizeof *pVideoInfoHeader;
										nExtraDataSize -= sizeof *pVideoInfoHeader;
									} else
									if(pMediaType->formattype == FORMAT_VideoInfo2)
									{
										const VIDEOINFOHEADER2* pVideoInfoHeader2 = (VIDEOINFOHEADER2*) pMediaType->pbFormat;
										_tprintf(_T("    VIDEOINFOHEADER2:\n"));
										// SUGG: Extra data
										pnExtraData += sizeof *pVideoInfoHeader2;
										nExtraDataSize -= sizeof *pVideoInfoHeader2;
									}
									if(nExtraDataSize > 0)
									{
										CString sLine;
										for(SIZE_T nIndex = 0; nIndex < nExtraDataSize && nIndex < 63; nIndex++)
										{
											sLine.AppendFormat(_T("%02X "), pnExtraData[nIndex]);
											if(((nIndex + 1) % 0x10) == 0x00 || nIndex == 62)
											{
												if(nIndex == 62 && nExtraDataSize > nIndex + 1)
													sLine.Append(_T("..."));
												_tprintf(_T("        Extra [%04X]: %s\n"), nIndex & ~0x000F, sLine);
												sLine.Empty();
											}
										}
										ATLASSERT(sLine.IsEmpty());
									}
									ATLASSERT(pCapability->guid == MEDIATYPE_Video);
									_tprintf(_T("    VIDEO_STREAM_CONFIG_CAPS:\n"));
									_tprintf(_T("      Data: %s\n"), StringFromData((VIDEO_STREAM_CONFIG_CAPS*) pCapability, sizeof *pCapability));
									_tprintf(_T("      .VideoStandard: %d\n"), pCapability->VideoStandard);
									_tprintf(_T("      .InputSize: %d x %d\n"), pCapability->InputSize);
									_tprintf(_T("      .MinCroppingSize: %d x %d\n"), pCapability->MinCroppingSize);
									_tprintf(_T("      .MaxCroppingSize: %d x %d\n"), pCapability->MaxCroppingSize);
									_tprintf(_T("      .CropGranularityX: %d\n"), pCapability->CropGranularityX);
									_tprintf(_T("      .CropAlignX: %d\n"), pCapability->CropAlignX);
									_tprintf(_T("      .CropAlignY: %d\n"), pCapability->CropAlignY);
									_tprintf(_T("      .MinOutputSize: %d x %d\n"), pCapability->MinOutputSize);
									_tprintf(_T("      .MaxOutputSize: %d x %d\n"), pCapability->MaxOutputSize);
									_tprintf(_T("      .OutputGranularityX: %d\n"), pCapability->OutputGranularityX);
									_tprintf(_T("      .OutputGranularityY: %d\n"), pCapability->OutputGranularityY);
									_tprintf(_T("      .StretchTapsX: %d\n"), pCapability->StretchTapsX);
									_tprintf(_T("      .StretchTapsY: %d\n"), pCapability->StretchTapsY);
									_tprintf(_T("      .ShrinkTapsX: %d\n"), pCapability->ShrinkTapsX);
									_tprintf(_T("      .ShrinkTapsY: %d\n"), pCapability->ShrinkTapsY);
									_tprintf(_T("      .MinFrameInterval: %I64d\n"), pCapability->MinFrameInterval);
									_tprintf(_T("      .MaxFrameInterval: %I64d\n"), pCapability->MaxFrameInterval);
									_tprintf(_T("      .MinBitsPerSecond: %d\n"), pCapability->MinBitsPerSecond);
									_tprintf(_T("      .MaxBitsPerSecond: %d\n"), pCapability->MaxBitsPerSecond);
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
				_tprintf(_T("\n"));
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

