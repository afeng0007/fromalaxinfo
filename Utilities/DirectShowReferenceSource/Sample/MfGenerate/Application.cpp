////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2015-2016
// Created by Roman Ryltsov roman@alax.info
//
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#include "stdafx.h"
#include "romf.h"
#import "libid:9E3ABA93-C8D8-41D3-B39E-29508FDE5757" raw_interfaces_only // AlaxInfoDirectShowReferenceSource

////////////////////////////////////////////////////////////
// CModule

class CModule :
	public CAtlExeModuleT<CModule>
{
public:
// CModule
	bool ParseCommandLine(LPCTSTR pszCommandLine, HRESULT* pnResult)
	{
		_A(pnResult);
		pszCommandLine;
		*pnResult = S_OK;
		return true;
	}
	HRESULT PreMessageLoop(int nShowCommand)
	{
		// NOTE: Suppress S_FALSE
		_C(__super::PreMessageLoop(nShowCommand));
		return S_OK;
	}
	VOID RunMessageLoop()
	{
		MF::CStartup Statup;
		CComPtr<IMFSourceResolver> pSourceResolver;
		__C(MFCreateSourceResolver(&pSourceResolver));
		#pragma region Media Source
		CComQIPtr<IMFMediaSource> pMediaSource;
		//{
		//	static const LPCTSTR g_pszPath = 
		//		_T("D:\\Projects\\Alax.Info\\Repository-Private\\Utilities\\DirectShow\\ReferenceSource\\_Media\\720p50-Small-V.mp4");
		//	MF_OBJECT_TYPE ObjectType;
		//	CComPtr<IUnknown> pMediaSourceUnknown;
		//	__C(pSourceResolver->CreateObjectFromURL(CStringW(g_pszPath), MF_RESOLUTION_MEDIASOURCE, NULL, &ObjectType, &pMediaSourceUnknown));
		//	_A(ObjectType == MF_OBJECT_MEDIASOURCE);
		//	pMediaSource = pMediaSourceUnknown;
		//	__D(pMediaSource, E_NOINTERFACE);
		//}
		{
			using namespace AlaxInfoDirectShowReferenceSource;
			CComPtr<IVideoMediaSource> pVideoMediaSource;
			__C(pVideoMediaSource.CoCreateInstance(__uuidof(VideoMediaSource)));
			__C(pVideoMediaSource->SetMediaType(4096, 2304, CComVariant(_PersistHelper::StringFromIdentifier(MEDIASUBTYPE_RGB32))));
			//__C(pVideoMediaSource->SetMediaTypeAspectRatio(...));
			__C(pVideoMediaSource->SetMediaTypeRate(50, 1));
			__C(pVideoMediaSource->put_Duration(5.0));
			pMediaSource = pVideoMediaSource;
		}
		#pragma endregion 
		CComPtr<IMFSourceReader> pSourceReader;
		__C(MFCreateSourceReaderFromMediaSource(pMediaSource, NULL, &pSourceReader));
		MF::CMediaType pMediaType;
		__C(pSourceReader->GetCurrentMediaType(MF_SOURCE_READER_FIRST_VIDEO_STREAM, &pMediaType));
		pMediaType.Trace();
		SYSTEMTIME Time;
		GetLocalTime(&Time);
		const CString sFileName = AtlFormatString(_T("%04d%02d%02d-%02d%02d%02d.mp4"), Time.wYear, Time.wMonth, Time.wDay, Time.wHour, Time.wMinute, Time.wSecond);
		CComPtr<IMFSinkWriter> pSinkWriter;
		__C(MFCreateSinkWriterFromURL(Combine(GetPathDirectory(GetModulePath()), sFileName), NULL, NULL, &pSinkWriter));
		MF::CMediaType pWriterMediaType;
		pWriterMediaType.Create();
		// NOTE: H.264 Video Encoder https://msdn.microsoft.com/en-us/library/windows/desktop/dd797816
		pWriterMediaType[MF_MT_MAJOR_TYPE] = MFMediaType_Video;
		pWriterMediaType[MF_MT_SUBTYPE] = MFVideoFormat_H264;
		pWriterMediaType[MF_MT_AVG_BITRATE] = (UINT32) (12 << 10) * 1000; // 12 MBps
		pWriterMediaType[MF_MT_FRAME_RATE] = pMediaType.GetUINT64(MF_MT_FRAME_RATE);
		pWriterMediaType[MF_MT_FRAME_SIZE] = pMediaType.GetUINT64(MF_MT_FRAME_SIZE);
		pWriterMediaType[MF_MT_INTERLACE_MODE] = pMediaType.GetUINT32(MF_MT_INTERLACE_MODE);
		pWriterMediaType[MF_MT_PIXEL_ASPECT_RATIO] = pMediaType.GetUINT64(MF_MT_PIXEL_ASPECT_RATIO);
		DWORD nWriterStreamIndex;
		__C(pSinkWriter->AddStream(pWriterMediaType, &nWriterStreamIndex));
		// NOTE: Sink Writer Attributes https://msdn.microsoft.com/en-us/library/windows/desktop/dd389284
		{
			MF::CAttributes pAttributes;
			pAttributes.Create(10);
			pAttributes[MF_READWRITE_ENABLE_HARDWARE_TRANSFORMS] = (UINT32) 1;
			__C(pSinkWriter->SetInputMediaType(nWriterStreamIndex, pMediaType, pAttributes));
		}
		__C(pSinkWriter->BeginWriting());
		for(; ; )
		{
			DWORD nStreamIndex, nStreamFlags;
			LONGLONG nTime;
			MF::CSample pSample;
			__C(pSourceReader->ReadSample(MF_SOURCE_READER_FIRST_VIDEO_STREAM, 0, &nStreamIndex, &nStreamFlags, &nTime, &pSample));
			_Z4(atlTraceGeneral, 4, _T("nStreamIndex %d, nStreamFlags %s, nTime %s, pSample 0x%p\n"), nStreamIndex, MF::FormatSourceReaderStreamFlags(nStreamFlags), MF::FormatNanoTime(nTime), pSample);
			if(pSample)
			{
				pSample.Trace();
				__C(pSinkWriter->WriteSample(nWriterStreamIndex, pSample));
			}
			if(nStreamFlags & MF_SOURCE_READERF_ENDOFSTREAM)
			{
				_A(!pSample);
				break;
			}
		}
		__C(pSourceReader->Flush(MF_SOURCE_READER_ALL_STREAMS));
		__C(pSinkWriter->Finalize());
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	_ATLTRY
	{
		CModule Module;
		Module.WinMain(SW_SHOWNORMAL);
	}
	_ATLCATCH(Exception)
	{
		_tprintf(_T("Fatal Error 0x%08X\n"), (HRESULT) Exception);
	}
	return 0;
}

