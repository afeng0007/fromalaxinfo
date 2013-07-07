////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2013
// Created by Roman Ryltsov roman@alax.info

#pragma once

#include "rofiles.h"
#include "rodshow.h"
#include "DirectShowSpy_i.h"
#include "Common.h"

////////////////////////////////////////////////////////////
// CFilterGraphHelper

class ATL_NO_VTABLE CFilterGraphHelper :
	public CComObjectRootEx<CComMultiThreadModelNoCS>,
	public CComCoClass<CFilterGraphHelper, &__uuidof(FilterGraphHelper)>,
	public IProvideClassInfo2Impl<&__uuidof(FilterGraphHelper), &IID_NULL>,
	public IDispatchImpl<IFilterGraphHelper>
{
public:
	enum { IDR = IDR_FILTERGRAPHHELPER };

//DECLARE_REGISTRY_RESOURCEID(IDR)

BEGIN_COM_MAP(CFilterGraphHelper)
	COM_INTERFACE_ENTRY(IFilterGraphHelper)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IProvideClassInfo2)
	COM_INTERFACE_ENTRY(IProvideClassInfo)
END_COM_MAP()

public:

	////////////////////////////////////////////////////////
	// CProcessData

	class CProcessData
	{
	public:
		CStringW m_sDisplayName;
		DWORD m_nIdentifier;
		CPath m_sImagePath;
	};

private:
	mutable CRoCriticalSection m_DataCriticalSection;
	CComPtr<IFilterGraph> m_pFilterGraph;

public:
// CFilterGraphHelper
	static HRESULT WINAPI UpdateRegistry(BOOL bRegister) throw()
	{
		_Z2(atlTraceRegistrar, 2, _T("bRegister %d\n"), bRegister);
		_ATLTRY
		{
			UpdateRegistryFromResource<CFilterGraphHelper>(bRegister);
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	CFilterGraphHelper()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	~CFilterGraphHelper()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	static CString FormatIdentifier(LPCSTR pszValue)
	{
		CString sText;
		if(pszValue && *pszValue)
		{
			sText = _T("``");
			sText.Insert(1, CString(pszValue));
		}
		return sText;
	}
	static CString FormatIdentifier(LPCWSTR pszValue)
	{
		CString sText;
		if(pszValue && *pszValue)
		{
			sText = _T("``");
			sText.Insert(1, CString(pszValue));
		}
		return sText;
	}
	static CString FormatIdentifier(LONG nValue)
	{
		CString sText;
		sText = _T("``");
		sText.Insert(1, _StringHelper::FormatNumber(nValue));
		return sText;
	}
	static CString FormatIdentifier(ULONG nValue)
	{
		return FormatIdentifier((LONG) nValue);
	}
	static CString FormatIdentifier(BOOL nValue)
	{
		return FormatIdentifier((LONG) nValue);
	}
	static CString FormatIdentifier(LONGLONG nValue)
	{
		CString sText;
		sText = _T("``");
		sText.Insert(1, _StringHelper::FormatNumber(nValue));
		return sText;
	}
	static CString FormatIdentifier(LONG nValue, LPCTSTR pszFormat)
	{
		CString sText;
		sText = _T("``");
		sText.Insert(1, AtlFormatString(pszFormat, nValue));
		return sText;
	}
	#define I FormatIdentifier
	static CString FormatPins(_FilterGraphHelper::CPinArray& PinArray)
	{
		CRoArrayT<CString> Array;
		for(SIZE_T nIndex  = 0; nIndex < PinArray.GetCount(); nIndex++)
		{
			const CComPtr<IPin>& pPin = PinArray[nIndex];
			CString sText = I(_FilterGraphHelper::GetPinName(pPin));
			const CComPtr<IPin> pPeerPin = _FilterGraphHelper::GetPeerPin(pPin);
			if(pPeerPin)
				sText += AtlFormatString(_T(" (%s)"), I(_FilterGraphHelper::GetPinFullName(pPeerPin)));
			Array.Add(sText);
		}
		return _StringHelper::Join(Array, _T(", "));
	}
	static CString GetText(IFilterGraph* pFilterGraph, const CProcessData* pProcessData = NULL)
	{
		if(!pFilterGraph)
			return (LPCTSTR) NULL;
		CString sText;
		sText += AtlFormatString(_T("# ") _T("Filter Graph") _T("\r\n") _T("\r\n"));
		#pragma region Graph Parameters
		if(pProcessData)
			sText += AtlFormatString(_T("* ") _T("Process: %s (%s) %s") _T("\r\n"), I(pProcessData->m_nIdentifier), I(pProcessData->m_nIdentifier, _T("0x%X")), I(FindFileName(pProcessData->m_sImagePath)));
		#pragma region IMediaControl
		const CComQIPtr<IMediaControl> pMediaControl = pFilterGraph;
		if(pMediaControl)
			_ATLTRY
			{
				OAFilterState State;
				const HRESULT nGetStateResult = pMediaControl->GetState(0, &State);
				_Z45_DSHRESULT(nGetStateResult);
				static const LPCTSTR g_ppszStates[] = { _T("Stopped"), _T("Paused"), _T("Running"), };
				if(SUCCEEDED(nGetStateResult) && (SIZE_T) State < DIM(g_ppszStates))
					sText += AtlFormatString(_T("* ") _T("State: %s") _T("\r\n"), I(g_ppszStates[(SIZE_T) State]));
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
		#pragma endregion 
		#pragma region IMediaPosition
		const CComQIPtr<IMediaPosition> pMediaPosition = pFilterGraph;
		if(pMediaPosition)
			_ATLTRY
			{
				DOUBLE fDuration = 0, fPosition = 0;
				const HRESULT nGetDurationResult = pMediaPosition->get_Duration(&fDuration);
				_Z45_DSHRESULT(nGetDurationResult);
				if(fDuration > 0)
				{
					sText += AtlFormatString(_T("* ") _T("Duration: %s (%s seconds)") _T("\r\n"), I(_FilterGraphHelper::FormatSecondTime(fDuration)), I(_StringHelper::FormatNumber(fDuration, 3)));
					const HRESULT nCurrentPositionResult = pMediaPosition->get_CurrentPosition(&fPosition);
					_Z45_DSHRESULT(nCurrentPositionResult);
					if(SUCCEEDED(nCurrentPositionResult))
						sText += AtlFormatString(_T("* ") _T("Position: %s (%s seconds)") _T("\r\n"), I(_FilterGraphHelper::FormatSecondTime(fPosition)), I(_StringHelper::FormatNumber(fPosition, 3)));
				}
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
		#pragma endregion 
		if(pProcessData)
		{
			if(!pProcessData->m_sDisplayName.IsEmpty())
				sText += AtlFormatString(_T("* ") _T("Display Name: %s") _T("\r\n"), I(pProcessData->m_sDisplayName));
			const CString sDirectory = (LPCTSTR) GetPathDirectory(pProcessData->m_sImagePath);
			if(!sDirectory.IsEmpty())
				sText += AtlFormatString(_T("* ") _T("Process Directory: %s") _T("\r\n"), I(sDirectory));
		}
		sText += _T("\r\n");
		#pragma endregion 
		#pragma region Filter
		_FilterGraphHelper::CFilterArray FilterArray;
		_FilterGraphHelper::GetGraphFilters(pFilterGraph, FilterArray);
		if(!FilterArray.IsEmpty())
		{
			sText += AtlFormatString(_T("## ") _T("Filters") _T("\r\n") _T("\r\n"));
			for(SIZE_T nIndex = 0; nIndex < FilterArray.GetCount(); nIndex++)
				_ATLTRY
				{
					const CComPtr<IBaseFilter>& pBaseFilter = FilterArray[nIndex];
					sText += AtlFormatString(_T("%d. ") _T("%ls") _T("\r\n"), nIndex + 1, _FilterGraphHelper::GetFilterName(pBaseFilter));
					const CStringW sClassIdentifierString = _FilterGraphHelper::GetFilterClassIdentifierString(pBaseFilter);
					if(!sClassIdentifierString.IsEmpty())
						sText += AtlFormatString(_T(" * ") _T("Class: %s %s") _T("\r\n"), I(sClassIdentifierString), I(_FilterGraphHelper::GetFilterClassDescription(pBaseFilter)));
					_FilterGraphHelper::CPinArray InputPinArray;
					if(_FilterGraphHelper::GetFilterPins(pBaseFilter, PINDIR_INPUT, InputPinArray))
						sText += AtlFormatString(_T(" * ") _T("Input Pins: %s") _T("\r\n"), FormatPins(InputPinArray));
					_FilterGraphHelper::CPinArray OutputPinArray;
					if(_FilterGraphHelper::GetFilterPins(pBaseFilter, PINDIR_OUTPUT, OutputPinArray))
						sText += AtlFormatString(_T(" * ") _T("Output Pins: %s") _T("\r\n"), FormatPins(OutputPinArray));
					#pragma region IFileSourceFilter
					const CComQIPtr<IFileSourceFilter> pFileSourceFilter = pBaseFilter;
					if(pFileSourceFilter)
					{
						CComHeapPtr<OLECHAR> pszFileName;
						CMediaType pMediaType;
						pMediaType.Allocate(MEDIATYPE_NULL, MEDIASUBTYPE_NULL);
						const HRESULT nGetCurFileResult = pFileSourceFilter->GetCurFile(&pszFileName, pMediaType);
						_Z45_DSHRESULT(nGetCurFileResult);
						if(SUCCEEDED(nGetCurFileResult))
							sText += AtlFormatString(_T(" * ") _T("File Source: %s") _T("\r\n"), I(pszFileName));
					}
					#pragma endregion 
					#pragma region IFileSinkFilter
					const CComQIPtr<IFileSinkFilter> pFileSinkFilter = pBaseFilter;
					if(pFileSinkFilter)
					{
						CComHeapPtr<OLECHAR> pszFileName;
						CMediaType pMediaType;
						pMediaType.Allocate(MEDIATYPE_NULL, MEDIASUBTYPE_NULL);
						const HRESULT nGetCurFileResult = pFileSinkFilter->GetCurFile(&pszFileName, pMediaType);
						_Z45_DSHRESULT(nGetCurFileResult);
						if(SUCCEEDED(nGetCurFileResult))
							sText += AtlFormatString(_T(" * ") _T("File Sink: %s") _T("\r\n"), I(pszFileName));
					}
					#pragma endregion 
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
				}
			sText += _T("\r\n");
			#pragma region Connection
			sText += AtlFormatString(_T("## ") _T("Connections") _T("\r\n") _T("\r\n"));
			INT nConnectionIndex = 0;
			for(SIZE_T nFilterIndex = 0; nFilterIndex < FilterArray.GetCount(); nFilterIndex++)
			{
				const CComPtr<IBaseFilter>& pBaseFilter = FilterArray[nFilterIndex];
				_FilterGraphHelper::CPinArray PinArray;
				_FilterGraphHelper::GetFilterPins(pBaseFilter, PINDIR_OUTPUT, PinArray);
				for(SIZE_T nPinIndex  = 0; nPinIndex < PinArray.GetCount(); nPinIndex++)
				{
					const CComPtr<IPin>& pOutputPin = PinArray[nPinIndex];
					const CComPtr<IPin> pInputPin = _FilterGraphHelper::GetPeerPin(pOutputPin);
					if(!pInputPin)
						continue;
					CString sConnectionText = AtlFormatString(_T("%s - %s"), I(_FilterGraphHelper::GetPinFullName(pOutputPin)), I(_FilterGraphHelper::GetPinFullName(pInputPin)));
					_ATLTRY
					{
						const CMediaType pMediaType = _FilterGraphHelper::GetPinMediaType(pOutputPin);
						if(pMediaType)
						{
							CStringW sMajorType = _FilterGraphHelper::FormatMajorType(pMediaType->majortype);
							CStringW sSubtype;
							if(pMediaType->subtype != MEDIASUBTYPE_NULL)
								sSubtype = _FilterGraphHelper::FormatSubtype(pMediaType->subtype);
							sConnectionText += AtlFormatString(_T(" (%s %s)"), I(sMajorType), I(sSubtype));
						}
					}
					_ATLCATCHALL()
					{
						_Z_EXCEPTION();
					}
					sText += AtlFormatString(_T("%d. ") _T("%s") _T("\r\n"), ++nConnectionIndex, sConnectionText);
				}
			}
			sText += _T("\r\n");
			#pragma endregion 
			#pragma region Media Type
			sText += AtlFormatString(_T("## ") _T("Media Types") _T("\r\n") _T("\r\n"));
			INT nGlobalPinIndex = 0;
			CRoListT<CComPtr<IPin>> PinList;
			for(SIZE_T nFilterIndex = 0; nFilterIndex < FilterArray.GetCount(); nFilterIndex++)
			{
				const CComPtr<IBaseFilter>& pBaseFilter = FilterArray[nFilterIndex];
				_FilterGraphHelper::CPinArray PinArray;
				_FilterGraphHelper::GetFilterPins(pBaseFilter, PinArray);
				for(SIZE_T nPinIndex  = 0; nPinIndex < PinArray.GetCount(); nPinIndex++)
				{
					const CComPtr<IPin>& pPin = PinArray[nPinIndex];
					if(PinList.FindFirst(pPin))
						continue;
					PinList.AddTail(pPin);
					CString sPinText = AtlFormatString(_T("%s"), I(_FilterGraphHelper::GetPinFullName(pPin)));
					const CComPtr<IPin> pPeerPin = _FilterGraphHelper::GetPeerPin(pPin);
					if(pPeerPin)
					{
						PinList.AddTail(pPeerPin);
						sPinText += AtlFormatString(_T(", %s"), I(_FilterGraphHelper::GetPinFullName(pPeerPin)));
					}
					sText += AtlFormatString(_T("%d. ") _T("%s") _T("\r\n"), ++nGlobalPinIndex, sPinText);
					_ATLTRY
					{
						CMediaType pMediaType;
						if(pPeerPin)
							pMediaType = _FilterGraphHelper::GetPinMediaType(pPin);
						else
							pMediaType = _FilterGraphHelper::EnumerateFirstPinMediaType(pPin);
						if(!pMediaType)
							continue;
						#pragma region AM_MEDIA_TYPE
						#define J(x) I(pMediaType->x)
						#define K1(x) sText += AtlFormatString(_T(" * `") _T(#x) _T("`: %s") _T("\r\n"), J(x))
						sText += AtlFormatString(_T(" * ") _T("Data: %s") _T("\r\n"), I(AtlFormatData((const BYTE*) (const AM_MEDIA_TYPE*) pMediaType, sizeof *pMediaType).TrimRight()));
						sText += AtlFormatString(_T(" * ") _T("`majortype`: %s") _T("\r\n"), I(_FilterGraphHelper::FormatMajorType(pMediaType->majortype)));
						if(pMediaType->subtype != MEDIASUBTYPE_NULL)
							sText += AtlFormatString(_T(" * ") _T("`subtype`: %s") _T("\r\n"), I(_FilterGraphHelper::FormatSubtype(pMediaType->subtype)));
						K1(bFixedSizeSamples);
						K1(bTemporalCompression);
						K1(lSampleSize);
						if(pMediaType->formattype != GUID_NULL)
							sText += AtlFormatString(_T(" * ") _T("`formattype`: %s") _T("\r\n"), I(_FilterGraphHelper::FormatFormatType(pMediaType->formattype)));
						if(pMediaType->pUnk)
							sText += AtlFormatString(_T(" * ") _T("`pUnk`: %s") _T("\r\n"), I(AtlFormatString(_T("0x%p"), pMediaType->pUnk)));
						if(pMediaType->cbFormat)
						{
							K1(cbFormat);
							if(pMediaType->pbFormat)
								sText += AtlFormatString(_T(" * ") _T("Format Data, `pbFormat`: %s") _T("\r\n"), I(AtlFormatData(pMediaType->pbFormat, pMediaType->cbFormat).TrimRight()));
						}
						#undef J
						#undef K1
						#pragma endregion
						const BYTE* pnExtraData = NULL;
						SIZE_T nExtraDataSize = 0;
						#pragma region FORMAT_VideoInfo
						if(pMediaType->formattype == FORMAT_VideoInfo)
						{
							sText += AtlFormatString(_T(" * ") _T("As `VIDEOINFOHEADER`:") _T("\r\n"));
							const VIDEOINFOHEADER* pVideoInfoHeader = (const VIDEOINFOHEADER*) pMediaType->pbFormat;
							#define J(x) I(pVideoInfoHeader->x)
							#define K1(x) sText += AtlFormatString(_T("  * `") _T(#x) _T("`: %s") _T("\r\n"), J(x))
							sText += AtlFormatString(_T("  * ") _T("`rcSource`: (%s, %s) - (%s, %s)") _T("\r\n"), J(rcSource.left), J(rcSource.top), J(rcSource.right), J(rcSource.bottom));
							sText += AtlFormatString(_T("  * ") _T("`rcTarget`: (%s, %s) - (%s, %s)") _T("\r\n"), J(rcTarget.left), J(rcTarget.top), J(rcTarget.right), J(rcTarget.bottom));
							K1(dwBitRate);
							K1(dwBitErrorRate);
							sText += AtlFormatString(_T("  * ") _T("`AvgTimePerFrame`: %s units") _T("\r\n"), I(_FilterGraphHelper::FormatReferenceTime(pVideoInfoHeader->AvgTimePerFrame)));
							K1(bmiHeader.biSize);
							K1(bmiHeader.biWidth);
							K1(bmiHeader.biHeight);
							K1(bmiHeader.biPlanes);
							K1(bmiHeader.biBitCount);
							sText += AtlFormatString(_T("  * ") _T("`bmiHeader.biCompression`: %s") _T("\r\n"), I(_FilterGraphHelper::GetFourccCodeString(pVideoInfoHeader->bmiHeader.biCompression)));
							K1(bmiHeader.biSizeImage);
							K1(bmiHeader.biXPelsPerMeter);
							K1(bmiHeader.biYPelsPerMeter);
							K1(bmiHeader.biClrUsed);
							K1(bmiHeader.biClrImportant);
							#undef J
							#undef K1
							nExtraDataSize = pMediaType->cbFormat - sizeof *pVideoInfoHeader;
						} else
						#pragma endregion 
						#pragma region FORMAT_VideoInfo2
						if(pMediaType->formattype == FORMAT_VideoInfo2)
						{
							sText += AtlFormatString(_T(" * ") _T("As `VIDEOINFOHEADER2`:") _T("\r\n"));
							const VIDEOINFOHEADER2* pVideoInfoHeader2 = (const VIDEOINFOHEADER2*) pMediaType->pbFormat;
							#define J(x) I(pVideoInfoHeader2->x)
							#define K1(x) sText += AtlFormatString(_T("  * `") _T(#x) _T("`: %s") _T("\r\n"), J(x))
							#define K2(x, y) sText += AtlFormatString(_T("  * `") _T(#x) _T("`: %s") _T("\r\n"), I(pVideoInfoHeader2->x, y))
							sText += AtlFormatString(_T("  * ") _T("rcSource: (%s, %s) - (%s, %s)") _T("\r\n"), J(rcSource.left), J(rcSource.top), J(rcSource.right), J(rcSource.bottom));
							sText += AtlFormatString(_T("  * ") _T("rcTarget: (%s, %s) - (%s, %s)") _T("\r\n"), J(rcTarget.left), J(rcTarget.top), J(rcTarget.right), J(rcTarget.bottom));
							K1(dwBitRate);
							K1(dwBitErrorRate);
							sText += AtlFormatString(_T("  * ") _T("`AvgTimePerFrame`: %s units") _T("\r\n"), I(_FilterGraphHelper::FormatReferenceTime(pVideoInfoHeader2->AvgTimePerFrame)));
							K2(dwInterlaceFlags, _T("0x%X"));
							K2(dwCopyProtectFlags, _T("0x%X"));
							K1(dwPictAspectRatioX);
							K1(dwPictAspectRatioY);
							K2(dwControlFlags, _T("0x%X"));
							K1(bmiHeader.biSize);
							K1(bmiHeader.biWidth);
							K1(bmiHeader.biHeight);
							K1(bmiHeader.biPlanes);
							K1(bmiHeader.biBitCount);
							sText += AtlFormatString(_T("  * ") _T("`bmiHeader.biCompression`: %s") _T("\r\n"), I(_FilterGraphHelper::GetFourccCodeString(pVideoInfoHeader2->bmiHeader.biCompression)));
							K1(bmiHeader.biSizeImage);
							K1(bmiHeader.biXPelsPerMeter);
							K1(bmiHeader.biYPelsPerMeter);
							K1(bmiHeader.biClrUsed);
							K1(bmiHeader.biClrImportant);
							#undef J
							#undef K1
							#undef K2
							nExtraDataSize = pMediaType->cbFormat - sizeof *pVideoInfoHeader2;
							if(nExtraDataSize)
							{
								sText += AtlFormatString(_T("  * ") _T("Extra Data: (%d bytes)") _T("\r\n"), nExtraDataSize);
								nExtraDataSize = 0;
							}
						} else
						#pragma endregion 
						#pragma region FORMAT_MPEG2Video
						if(pMediaType->formattype == FORMAT_MPEG2Video)
						{
							sText += AtlFormatString(_T(" * ") _T("As `MPEG2VIDEOINFO`:") _T("\r\n"));
							const MPEG2VIDEOINFO* pMpeg2VideoInfo = (const MPEG2VIDEOINFO*) pMediaType->pbFormat;
							#define J(x) I(pMpeg2VideoInfo->x)
							#define K1(x) sText += AtlFormatString(_T("  * `") _T(#x) _T("`: %s") _T("\r\n"), J(x))
							#define K2(x, y) sText += AtlFormatString(_T("  * `") _T(#x) _T("`: %s") _T("\r\n"), I(pMpeg2VideoInfo->x, y))
							sText += AtlFormatString(_T("  * ") _T("`hdr.rcSource`: (%s, %s) - (%s, %s)") _T("\r\n"), J(hdr.rcSource.left), J(hdr.rcSource.top), J(hdr.rcSource.right), J(hdr.rcSource.bottom));
							sText += AtlFormatString(_T("  * ") _T("`hdr.rcTarget`: (%s, %s) - (%s, %s)") _T("\r\n"), J(hdr.rcTarget.left), J(hdr.rcTarget.top), J(hdr.rcTarget.right), J(hdr.rcTarget.bottom));
							K1(hdr.dwBitRate);
							K1(hdr.dwBitErrorRate);
							sText += AtlFormatString(_T("  * ") _T("`hdr.AvgTimePerFrame`: %s") _T("\r\n"), I(_FilterGraphHelper::FormatReferenceTime(pMpeg2VideoInfo->hdr.AvgTimePerFrame)));
							K2(hdr.dwInterlaceFlags, _T("0x%X"));
							K2(hdr.dwCopyProtectFlags, _T("0x%X"));
							K1(hdr.dwPictAspectRatioX);
							K1(hdr.dwPictAspectRatioY);
							K2(hdr.dwControlFlags, _T("0x%X"));
							K1(hdr.bmiHeader.biSize);
							K1(hdr.bmiHeader.biWidth);
							K1(hdr.bmiHeader.biHeight);
							K1(hdr.bmiHeader.biPlanes);
							K1(hdr.bmiHeader.biBitCount);
							sText += AtlFormatString(_T("  * ") _T("`hdr.bmiHeader.biCompression`: %s") _T("\r\n"), I(_FilterGraphHelper::GetFourccCodeString(pMpeg2VideoInfo->hdr.bmiHeader.biCompression)));
							K1(hdr.bmiHeader.biSizeImage);
							K1(hdr.bmiHeader.biXPelsPerMeter);
							K1(hdr.bmiHeader.biYPelsPerMeter);
							K1(hdr.bmiHeader.biClrUsed);
							K1(hdr.bmiHeader.biClrImportant);
							K2(dwStartTimeCode, _T("0x%08X"));
							K1(cbSequenceHeader);
							K1(dwProfile);
							K1(dwLevel);
							K2(dwFlags, _T("0x%08X"));
							#undef J
							#undef K1
							#undef K2
							#undef J
							nExtraDataSize = pMediaType->cbFormat - (sizeof *pMpeg2VideoInfo - sizeof pMpeg2VideoInfo->dwSequenceHeader);
						} else
						#pragma endregion 
						#pragma region FORMAT_WaveFormatEx
						if(pMediaType->formattype == FORMAT_WaveFormatEx)
						{
							const WAVEFORMATEX* pWaveFormatEx = (const WAVEFORMATEX*) pMediaType->pbFormat;
							if(pWaveFormatEx->wFormatTag == WAVE_FORMAT_EXTENSIBLE)
							{
								const WAVEFORMATEXTENSIBLE* pWaveFormatExtensible = (const WAVEFORMATEXTENSIBLE*) pMediaType->pbFormat;
								#define J(x) I(pWaveFormatExtensible->x)
								#define K1(x) sText += AtlFormatString(_T("  * `") _T(#x) _T("`: %s") _T("\r\n"), J(x))
								#define K2(x, y) sText += AtlFormatString(_T("  * `") _T(#x) _T("`: %s") _T("\r\n"), I(pWaveFormatExtensible->x, y))
								sText += AtlFormatString(_T(" * ") _T("As `WAVEFORMATEXTENSIBLE`:") _T("\r\n"));
								K2(Format.wFormatTag, _T("0x%02X"));
								K1(Format.nChannels);
								K1(Format.nSamplesPerSec);
								K1(Format.nAvgBytesPerSec);
								K1(Format.nBlockAlign);
								K1(Format.wBitsPerSample);
								K1(Format.cbSize);
								K1(Samples.wValidBitsPerSample);
								K2(dwChannelMask, _T("0x%02X"));
								sText += AtlFormatString(_T("  * ") _T("`SubFormat`: %s") _T("\r\n"), I(_PersistHelper::StringFromIdentifier(pWaveFormatExtensible->SubFormat)));
								#undef J
								#undef K1
								#undef K2
								nExtraDataSize = pWaveFormatEx->cbSize - (sizeof *pWaveFormatExtensible - sizeof *pWaveFormatEx);
							} else
							{
								#define J(x) I(pWaveFormatEx->x)
								#define K1(x) sText += AtlFormatString(_T("  * `") _T(#x) _T("`: %s") _T("\r\n"), J(x))
								#define K2(x, y) sText += AtlFormatString(_T("  * `") _T(#x) _T("`: %s") _T("\r\n"), I(pWaveFormatEx->x, y))
								K2(wFormatTag, _T("0x%02X"));
								K1(nChannels);
								K1(nSamplesPerSec);
								K1(nAvgBytesPerSec);
								K1(nBlockAlign);
								K1(wBitsPerSample);
								K1(cbSize);
								#undef J
								#undef K1
								#undef K2
								nExtraDataSize = pWaveFormatEx->cbSize;
							}
						}
						#pragma endregion 
						#pragma region Extra Data
						if(nExtraDataSize)
						{
							if(!pnExtraData)
								pnExtraData = pMediaType->pbFormat + pMediaType->cbFormat - nExtraDataSize;
							sText += AtlFormatString(_T("  * ") _T("Extra Data: %s") _T("\r\n"), I(AtlFormatData(pnExtraData, nExtraDataSize).TrimRight()));
						}
						#pragma endregion 
					}
					_ATLCATCHALL()
					{
						_Z_EXCEPTION();
					}
				}
			}
			sText += _T("\r\n");
			#pragma endregion 
		}
		#pragma endregion 
		return sText;
	}
	#undef I

// IFilterGraphHelper
	STDMETHOD(get_FilterGraph)(IUnknown** ppFilterGraphUnknown) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		_ATLTRY
		{
			__D(ppFilterGraphUnknown, E_POINTER);
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			*ppFilterGraphUnknown = CComPtr<IUnknown>(m_pFilterGraph).Detach();
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	STDMETHOD(put_FilterGraph)(IUnknown* pFilterGraphUnknown) throw()
	{
		_Z4(atlTraceCOM, 4, _T("pFilterGraphUnknown 0x%p\n"), pFilterGraphUnknown);
		_ATLTRY
		{
			const CComQIPtr<IFilterGraph> pFilterGraph = pFilterGraphUnknown;
			__D(!pFilterGraphUnknown || pFilterGraph, E_INVALIDARG);
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			m_pFilterGraph = pFilterGraph;
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	STDMETHOD(get_Text)(BSTR* psText) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		_ATLTRY
		{
			__D(psText, E_POINTER);
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			*psText = CComBSTR(GetText(m_pFilterGraph)).Detach();
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
};

OBJECT_ENTRY_AUTO(__uuidof(FilterGraphHelper), CFilterGraphHelper)
