////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2015
// Created by Roman Ryltsov roman@alax.info

#pragma once

#include <wmcodecdsp.h>
#import "libid:B9EC374B-834B-4DA9-BFB5-C1872CE736FF" raw_interfaces_only // AlaxInfoDirectShowSpy
#include "rodshow.h"
#include "rodmo.h"

#pragma comment(lib, "wmcodecdspuuid.lib")

////////////////////////////////////////////////////////////
// Libav (FFmpeg)

#pragma warning(disable: 4244)

#define __STDC_CONSTANT_MACROS

extern "C" 
{
    #include <libavutil\avutil.h>
    #include <libavutil\opt.h>
    #include <libavcodec\avcodec.h>
    //#include <libavcodec\avformat.h>
    #include <libswscale\swscale.h>
}

#pragma warning(default: 4244) 

#pragma comment(lib, "avutil.lib")
#pragma comment(lib, "avcodec.lib")
//#pragma comment(lib, "avformat.lib")
#pragma comment(lib, "swscale.lib")

#define FACILITY_FFMPEG 'FF'

#define FFMPEG_E_FAIL MAKE_HRESULT(SEVERITY_ERROR, FACILITY_FFMPEG, __LINE__)

////////////////////////////////////////////////////////////
// Helper

inline CString AvFormatResult(INT nErrorResult)
{
	CHAR pszDescription[256] = { 0 };
	av_strerror(nErrorResult, pszDescription, _countof(pszDescription));
	return CString(pszDescription);
}

#if _DEVELOPMENT
	#define _Z3_AVRESULT(nResult) if(nResult < 0) { _Z3(atlTraceGeneral, 3, _T("FFmpeg failure, %s\n"), AvFormatResult(nResult)); }
#else
	#define _Z3_AVRESULT(nResult) (0)
#endif // _DEVELOPMENT

////////////////////////////////////////////////////////////
// CAvLockManager

class CAvLockManager
{
private:
	static BOOL g_bRegistered;

	static int LockOperation(void** ppvLock, enum AVLockOp Operation) 
	{
		_Z5(atlTraceGeneral, 5, _T("ppvLock 0x%p, Operation %d\n"), ppvLock, Operation);
		_A(ppvLock);
		CComCriticalSection* pCriticalSection = static_cast<CComCriticalSection*>(*ppvLock);
		switch(Operation) 
		{
		case AV_LOCK_CREATE:
			{
				*ppvLock = new CComCriticalSection;
				if(!*ppvLock)
					return 1; // Failure
				CComCriticalSection* pCriticalSection = static_cast<CComCriticalSection*>(*ppvLock);
				_V(pCriticalSection->Init());
			}
			return 0;
		case AV_LOCK_OBTAIN:
			_V(pCriticalSection->Lock());
			return 0;
		case AV_LOCK_RELEASE:
			_V(pCriticalSection->Unlock());
			return 0;
		case AV_LOCK_DESTROY:
			_V(pCriticalSection->Term());
			delete pCriticalSection;
			*ppvLock = NULL;
			return 0;
		}
		return 1; // Failure
	}

public:
// CAvLockManager
	static VOID Register()
	{
		_A(_pAtlModule);
		CComCritSecLock<CComCriticalSection> Lock(_pAtlModule->m_csStaticDataInitAndTypeInfo);
		if(g_bRegistered)
			return;
		av_lockmgr_register(&CAvLockManager::LockOperation);
		g_bRegistered = TRUE;
	}
	static BOOL IsRegistered()
	{
		_A(_pAtlModule);
		CComCritSecLock<CComCriticalSection> Lock(_pAtlModule->m_csStaticDataInitAndTypeInfo);
		return g_bRegistered;
	}
};

__declspec(selectany) BOOL CAvLockManager::g_bRegistered = FALSE;

////////////////////////////////////////////////////////////
// CAvAllocator, CAvHeapPtr

class CAvAllocator
{
public:
// CAvAllocator
	static VOID* Allocate(_In_ SIZE_T nDataSize)
	{
		return av_malloc(nDataSize);
	}
	static VOID* Reallocate(_In_ VOID* pvData, _In_ SIZE_T nDataSize)
	{
		return av_realloc(pvData, nDataSize);
	}
	static VOID Free(_In_ VOID* pvData)
	{
		av_freep(pvData);
	}
};

template <typename _Element>
class CAvHeapPtr :
	public CHeapPtr<_Element, CAvAllocator>
{
public:
// CAvHeapPtr
};

////////////////////////////////////////////////////////////
// CAvCodec

class CAvCodec
{
private:
	static BOOL g_bRegistered;

	static VOID Log(VOID* ppvAvClass, int nLevel, const char* pszFormat, va_list Arguments)
	{
		#if _DEVELOPMENT //&& FALSE
			COMPILER_MESSAGE("Development: Enabled libavcodec logging")
			_ATLTRY
			{
				AVClass* pAvClass = ppvAvClass ? *((AVClass**) ppvAvClass) : NULL;
				CHAR pszText[32 << 10] = { 0 }; // 32 KB
				CStringA sFormat(pszFormat);
				sFormat.Replace("%td", "%d");
				vsprintf_s(pszText, sFormat, Arguments);
				CRoArrayT<CStringA> StringArray;
				_StringHelper::Split(pszText, '\n', StringArray);
				for(SIZE_T nIndex = 0; nIndex < StringArray.GetCount(); nIndex++)
					//_Z2(atlTraceGeneral, 2, _T("%hs, nLevel %d, pAvClass 0x%p\n"), StringArray[nIndex], nLevel, pAvClass);
					_Z2(atlTraceGeneral, 2, _T("%hs, nLevel %d\n"), StringArray[nIndex], nLevel);
				#if _DEVELOPMENT && FALSE
					static LPCSTR g_pszPattern = " ooo";
					if(strstr(pszText, g_pszPattern))
						GetTickCount();
						//AtlMessageBox(GetActiveWindow(), (LPCTSTR) AtlFormatString(_T("CAvCodec::Log: %hs"), pszText), _T("Debug"), MB_OK);
				#endif // _DEVELOPMENT
			}
			_ATLCATCHALL()
			{
				//_Z_EXCEPTION();
			}
		#endif // _DEVELOPMENT
	}

public:
// CAvCodec
	static VOID Register(BOOL bSetLogCallback = FALSE)
	{
		bSetLogCallback;
		_A(_pAtlModule);
		CComCritSecLock<CComCriticalSection> Lock(_pAtlModule->m_csStaticDataInitAndTypeInfo);
		if(g_bRegistered)
			return;
		_Z4(atlTraceGeneral, 4, _T("bSetLogCallback %d\n"), bSetLogCallback);
		avcodec_register_all();
		#if _DEVELOPMENT
			if(bSetLogCallback)
			{
				av_log_set_callback(&CAvCodec::Log);
				av_log_set_level(AV_LOG_DEBUG);
			}
		#endif // _DEVELOPMENT
		g_bRegistered = TRUE;
	}
	static BOOL IsRegistered()
	{
		_A(_pAtlModule);
		CComCritSecLock<CComCriticalSection> Lock(_pAtlModule->m_csStaticDataInitAndTypeInfo);
		return g_bRegistered;
	}
	static AVCodec* FindEncoder(AVCodecID nCodec)
	{
		return avcodec_find_encoder(nCodec);
	}
	static AVCodec* FindDecoder(AVCodecID nCodec)
	{
		return avcodec_find_decoder(nCodec);
	}
};

__declspec(selectany) BOOL CAvCodec::g_bRegistered = FALSE;

////////////////////////////////////////////////////////////
// CAvPointerT

template <typename CType>
class CAvPointerT
{
protected:
	CType* m_p;

public:
// CAvPointerT
	CAvPointerT() :
		m_p(NULL)
	{
	}
	~CAvPointerT()
	{
		_A(!m_p);
	}
	CType* GetInstance() const
	{
		return m_p;
	}
	operator CType* () const
	{
		//_A(m_p);
		return GetInstance();
	}
	CType* operator -> () const
	{
		_A(m_p);
		return GetInstance();
	}
};

////////////////////////////////////////////////////////////
// CAvPacketT, CAvPacket

template <BOOL t_bManaged>
class CAvPacketT :
	public AVPacket
{
public:
// CAvPacketT
	CAvPacketT()
	{
		if(t_bManaged)
		{
			ZeroMemory(this, sizeof *this);
			av_init_packet(this);
		}
	}
	explicit CAvPacketT(const BYTE* pnData, SIZE_T nDataSize)
	{
		ZeroMemory(this, sizeof *this);
		if(t_bManaged)
			av_init_packet(this);
		data = const_cast<uint8_t*>(pnData);
		size = static_cast<int>(nDataSize);
	}
	~CAvPacketT()
	{
		if(t_bManaged)
			av_packet_unref(this);
	}
};

typedef CAvPacketT<TRUE> CAvPacket;

////////////////////////////////////////////////////////////
// CAvFrame

class CAvFrame :
	public CAvPointerT<AVFrame>
{
public:
// CAvFrame
	CAvFrame()
	{
	}
	~CAvFrame()
	{
		Free();
	}
	VOID Allocate()
	{
		_A(!m_p);
		m_p = av_frame_alloc();
		__D(m_p, FFMPEG_E_FAIL);
	}
	VOID Free()
	{
		if(!m_p)
			return;
		av_free(m_p);
		m_p = NULL;
	}
};

////////////////////////////////////////////////////////////
// CAvCodecContext

class CAvCodecContext :
	public CAvPointerT<AVCodecContext>
{
public:
// CAvCodecContext
	CAvCodecContext()
	{
	}
	~CAvCodecContext()
	{
		Free();
	}
	VOID Allocate(AVCodec* pAvCodec)
	{
		_A(pAvCodec);
		_A(!m_p);
		_A(CAvCodec::IsRegistered());
		m_p = avcodec_alloc_context3(pAvCodec);
		__D(m_p, FFMPEG_E_FAIL);
	}
	VOID Free()
	{
		if(!m_p)
			return;
		av_free(m_p);
		m_p = NULL;
	}
	VOID Open(AVCodec* pAvCodec)
	{
		_A(pAvCodec);
		_A(m_p);
		__D(avcodec_open2(m_p, pAvCodec, NULL) >= 0, FFMPEG_E_FAIL);
	}
	VOID Close()
	{
		_A(m_p);
		_W(avcodec_close(m_p) >= 0);
	}
	BOOL EncodeVideo(AVPacket* pAvPacket, const AVFrame* pAvFrame)
	{
		_A(m_p);
		INT nPacketAvailable = 0;
		const INT nResult = avcodec_encode_video2(m_p, pAvPacket, pAvFrame, &nPacketAvailable);
		_Z3_AVRESULT(nResult);
		__D(nResult >= 0, MAKE_HRESULT(SEVERITY_ERROR, FACILITY_FFMPEG, (WORD) nResult));
		return nPacketAvailable != 0;
	}
	BOOL EncodeVideo(AVPacket* pAvPacket, const CAvFrame& pAvFrame)
	{
		return EncodeVideo(pAvPacket, (const AVFrame*) pAvFrame);
	}
	BOOL DecodeVideo(CAvFrame& pAvFrame, const AVPacket* pAvPacket, SIZE_T& nProcessedDataSize)
	{
		_A(m_p);
		INT nFrameAvailable = 0;
		const INT nResult = avcodec_decode_video2(m_p, pAvFrame, &nFrameAvailable, pAvPacket);
		_Z3_AVRESULT(nResult);
		__D(nResult >= 0, MAKE_HRESULT(SEVERITY_ERROR, FACILITY_FFMPEG, (WORD) nResult));
		nProcessedDataSize = (SIZE_T) nResult;
		return nFrameAvailable != 0;
	}
	BOOL EncodeAudio(AVPacket* pAvPacket, const AVFrame* pAvFrame)
	{
		_A(m_p);
		INT nPacketAvailable = 0;
		const INT nResult = avcodec_encode_audio2(m_p, pAvPacket, pAvFrame, &nPacketAvailable);
		_Z3_AVRESULT(nResult);
		__D(nResult >= 0, MAKE_HRESULT(SEVERITY_ERROR, FACILITY_FFMPEG, (WORD) nResult));
		return nPacketAvailable != 0;
	}
	BOOL EncodeAudio(AVPacket* pAvPacket, const CAvFrame& pAvFrame)
	{
		return EncodeAudio(pAvPacket, (const AVFrame*) pAvFrame);
	}
	BOOL DecodeAudio(CAvFrame& pAvFrame, const AVPacket* pAvPacket, SIZE_T& nProcessedDataSize)
	{
		_A(m_p);
		INT nFrameAvailable = 0;
		const INT nResult = avcodec_decode_audio4(m_p, pAvFrame, &nFrameAvailable, pAvPacket);
		_Z3_AVRESULT(nResult);
		__D(nResult >= 0, MAKE_HRESULT(SEVERITY_ERROR, FACILITY_FFMPEG, (WORD) nResult));
		nProcessedDataSize = (SIZE_T) nResult;
		return nFrameAvailable != 0;
	}
	BOOL DecodeAudio(CAvFrame& pAvFrame)
	{
		_A(m_p);
		INT nFrameAvailable = 0;
		const INT nResult = avcodec_decode_audio4(m_p, pAvFrame, &nFrameAvailable, NULL);
		_Z3_AVRESULT(nResult);
		__D(nResult >= 0, MAKE_HRESULT(SEVERITY_ERROR, FACILITY_FFMPEG, (WORD) nResult));
		return nFrameAvailable != 0;
	}
};

////////////////////////////////////////////////////////////
// CAvIoContext

//class CAvIoContext
//{
//private:
//	AVIOContext* m_p;
//
//public:
//// CAvIoContext
//	CAvIoContext() :
//		m_p(NULL)
//	{
//	}
//	~CAvIoContext()
//	{
//		Terminate();
//	}
//	VOID Initialize(const CHAR* pszPath, INT nFlags) // AVIO_FLAG_
//	{
//		_A(!m_p);
//		const INT nResult = avio_open(&m_p, pszPath, nFlags);
//		__D(nResult == 0, MAKE_HRESULT(SEVERITY_ERROR, FACILITY_FFMPEG, (WORD) nResult));
//		_A(m_p);
//	}
//	VOID Initialize(const WCHAR* pszPath, INT nFlags)
//	{
//		Initialize(CW2A(pszPath), nFlags);
//	}
//	VOID Terminate()
//	{
//		if(!m_p)
//			return;
//		avio_close(m_p);
//		m_p = NULL;
//	}
//	operator AVIOContext* ()
//	{
//		return m_p;
//	}
//	AVIOContext* operator -> ()
//	{
//		_A(m_p);
//		return m_p;
//	}
//};

////////////////////////////////////////////////////////////
// CAvFormatContext

//class CAvFormatContext
//{
//private:
//	AVFormatContext* m_p;
//
//public:
//// CAvFormatContext
//	CAvFormatContext() :
//		m_p(NULL)
//	{
//	}
//	~CAvFormatContext()
//	{
//		Terminate();
//	}
//	VOID Initialize(AVOutputFormat* pOutputFormat, const CHAR* pszFormatName, const CHAR* pszFileName = NULL)
//	{
//		_A(!m_p);
//		const INT nResult = avformat_alloc_output_context2(&m_p, pOutputFormat, pszFormatName, pszFileName);
//		__D(nResult >= 0, MAKE_HRESULT(SEVERITY_ERROR, FACILITY_FFMPEG, (WORD) nResult));
//		_A(m_p);
//	}
//	VOID Initialize(const CHAR* pszFormatName, const CHAR* pszFileName = NULL)
//	{
//		_A(pszFormatName);
//		Initialize(NULL, pszFormatName, pszFileName);
//	}
//	VOID Terminate()
//	{
//		if(!m_p)
//			return;
//		_A(!m_p->nb_streams);
//		avformat_free_context(m_p);
//		m_p = NULL;
//	}
//	operator AVFormatContext* ()
//	{
//		return m_p;
//	}
//	AVFormatContext* operator -> ()
//	{
//		_A(m_p);
//		return m_p;
//	}
//	CAvIoContext& GetIoContext()
//	{
//		_A(m_p);
//		return reinterpret_cast<CAvIoContext&>(m_p->pb);
//	}
//	AVStream* NewStream(AVCodec* pCodec)
//	{
//		_A(m_p);
//		AVStream* pAvStream = avformat_new_stream(m_p, pCodec);
//		__D(pAvStream, FFMPEG_E_FAIL);
//		return pAvStream;
//	}
//	VOID FreeStreams()
//	{
//		_A(m_p);
//		for(UINT nStreamIndex = 0; nStreamIndex < m_p->nb_streams; nStreamIndex++) 
//		{
//			CAvAllocator::Free(&m_p->streams[nStreamIndex]->codec);
//			CAvAllocator::Free(&m_p->streams[nStreamIndex]);
//		}
//		m_p->nb_streams = 0;
//	}
//	VOID WriteHeader(AVDictionary** ppOptions = NULL)
//	{
//		_A(m_p);
//		const INT nResult = avformat_write_header(m_p, ppOptions);
//		__D(nResult == 0, MAKE_HRESULT(SEVERITY_ERROR, FACILITY_FFMPEG, (WORD) nResult));
//	}
//	VOID WriteFrame(AVPacket* pPacket)
//	{
//		_A(pPacket);
//		_A(m_p);
//		const INT nResult = av_interleaved_write_frame(m_p, pPacket);
//		__D(nResult == 0, MAKE_HRESULT(SEVERITY_ERROR, FACILITY_FFMPEG, (WORD) nResult));
//	}
//	VOID WriteTrailer()
//	{
//		_A(m_p);
//		const INT nResult = av_write_trailer(m_p);
//		__D(nResult == 0, MAKE_HRESULT(SEVERITY_ERROR, FACILITY_FFMPEG, (WORD) nResult));
//	}
//};

////////////////////////////////////////////////////////////
// CAvAll

//class CAvAll
//{
//private:
//	static BOOL g_bRegistered;
//
//	static VOID Log(VOID* ppvAvClass, int nLevel, const char* pszFormat, va_list Arguments)
//	{
//		#if _DEVELOPMENT
//			_ATLTRY
//			{
//				AVClass* pAvClass = ppvAvClass ? *((AVClass**) ppvAvClass) : NULL;
//				CHAR pszText[32 << 10] = { 0 }; // 32 KB
//				vsprintf_s(pszText, pszFormat, Arguments);
//				CRoArrayT<CStringA> StringArray;
//				_StringHelper::Split(pszText, '\n', StringArray);
//				for(SIZE_T nIndex = 0; nIndex < StringArray.GetCount(); nIndex++)
//					_Z2(atlTraceGeneral, 2, _T("%hs, nLevel %d, pAvClass 0x%p\n"), StringArray[nIndex], nLevel, pAvClass);
//				#if _DEVELOPMENT && FALSE
//					static LPCSTR g_pszPattern = "decode_slice_header";
//					if(strstr(pszText, g_pszPattern))
//						AtlMessageBox(GetActiveWindow(), (LPCTSTR) AtlFormatString(_T("CAvAll::Log: %hs"), pszText), _T("Debug"), MB_OK);
//				#endif // _DEVELOPMENT
//			}
//			_ATLCATCHALL()
//			{
//				//_Z_EXCEPTION();
//			}
//		#endif // _DEVELOPMENT
//	}
//
//public:
//// CAvAll
//	static VOID Register(BOOL bSetLogCallback = FALSE)
//	{
//		bSetLogCallback;
//		_A(_pAtlModule);
//		CComCritSecLock<CComCriticalSection> Lock(_pAtlModule->m_csStaticDataInitAndTypeInfo);
//		if(g_bRegistered)
//			return;
//		av_register_all();
//		#if _DEVELOPMENT
//			if(bSetLogCallback)
//			{
//				av_log_set_callback(&CAvAll::Log);
//				av_log_set_level(AV_LOG_DEBUG);
//			}
//		#endif // _DEVELOPMENT
//		g_bRegistered = TRUE;
//	}
//	static BOOL IsRegistered()
//	{
//		_A(_pAtlModule);
//		CComCritSecLock<CComCriticalSection> Lock(_pAtlModule->m_csStaticDataInitAndTypeInfo);
//		return g_bRegistered;
//	}
//};
//
//__declspec(selectany) BOOL CAvAll::g_bRegistered = FALSE;

////////////////////////////////////////////////////////////
// CSwsContext

class CSwsContext :
	public CAvPointerT<SwsContext>
{
public:
// CSwsContext
	CSwsContext()
	{
	}
	~CSwsContext()
	{
		Free();
	}
	VOID Get(SIZE SourceExtent, AVPixelFormat SourcePixelFormat, SIZE DestinationExtent, AVPixelFormat DestinationPixelFormat, UINT nFlags = SWS_FAST_BILINEAR, SwsFilter* pSourceFilter = NULL, SwsFilter* pDestinationFilter = NULL)
	{
		_A(!m_p);
		m_p = sws_getContext(SourceExtent.cx, SourceExtent.cy, SourcePixelFormat, DestinationExtent.cx, DestinationExtent.cy, DestinationPixelFormat, nFlags, pSourceFilter, pDestinationFilter, NULL);
		__D(m_p, E_OUTOFMEMORY);
	}
	VOID Free()
	{
		if(!m_p)
			return;
		sws_freeContext(m_p);
		m_p = NULL;
	}
	VOID Scale(const BYTE* const ppnSourcePlanes[], const INT pnSourceStrides[], INT nSliceIndex, INT nSliceCount, BYTE* const ppnDestinationPlanes[], const INT pnDestinationStrides[])
	{
		_A(m_p);
		sws_scale(m_p, ppnSourcePlanes, pnSourceStrides, nSliceIndex, nSliceCount, ppnDestinationPlanes, pnDestinationStrides);
	}
};

