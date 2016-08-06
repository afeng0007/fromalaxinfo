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
			__C(pVideoMediaSource->SetMediaType(640, 480, CComVariant(_PersistHelper::StringFromIdentifier(MEDIASUBTYPE_ARGB32))));
			//__C(pVideoMediaSource->SetMediaTypeAspectRatio(...));
			__C(pVideoMediaSource->SetMediaTypeRate(10000, 1000));
			__C(pVideoMediaSource->put_Duration(5.0));
			pMediaSource = pVideoMediaSource;
		}
		#pragma endregion 
		CPath sFilePath;
		{
			SYSTEMTIME Time;
			GetLocalTime(&Time);
			const CString sFileName = AtlFormatString(_T("%04d%02d%02d-%02d%02d%02d.mp4"), Time.wYear, Time.wMonth, Time.wDay, Time.wHour, Time.wMinute, Time.wSecond);
			sFilePath = Combine(GetPathDirectory(GetModulePath()), sFileName);
		}
		#pragma region Topology
		// NOTE: Creating Topologies https://msdn.microsoft.com/en-us/library/windows/desktop/ms702144
		//       Topology Node Attributes https://msdn.microsoft.com/en-us/library/windows/desktop/aa369728
		//       Tutorial: Encoding an MP4 File https://msdn.microsoft.com/en-us/library/ff819476
		MF::CTopology pTopology;
		//pTopology.Create();
		CComPtr<IMFTranscodeProfile> pTranscodeProfile;
		{
			__C(MFCreateTranscodeProfile(&pTranscodeProfile));
			{
				MF::CAttributes pAttributes;
				pAttributes.Create(8);
				pAttributes[MF_MT_SUBTYPE] = MFVideoFormat_H264;
				pAttributes[MF_MT_AVG_BITRATE] = (UINT32) (5 << 10) * 1000; // 12 MBps
				pAttributes[MF_MT_FRAME_SIZE].SetSize(640, 480);
				pAttributes[MF_MT_FRAME_RATE].SetRatio(10000, 1000);
				__C(pTranscodeProfile->SetVideoAttributes(pAttributes));
			}
			{
				MF::CAttributes pAttributes;
				pAttributes.Create(1);
				pAttributes[MF_TRANSCODE_CONTAINERTYPE] = MFTranscodeContainerType_MPEG4;
				__C(pTranscodeProfile->SetContainerAttributes(pAttributes));
			}
		}
		__C(MFCreateTranscodeTopology(pMediaSource, CT2CW((LPCTSTR) sFilePath), pTranscodeProfile, &pTopology.m_p));
		pTopology.Trace();
		#pragma endregion 
		#pragma region Session
		CComPtr<IMFMediaSession> pMediaSession;
		__C(MFCreateMediaSession(NULL, &pMediaSession));
		__C(pMediaSession->SetTopology(0, pTopology));
		for(BOOL bDone = FALSE; !bDone; )
		{
			MF::CMediaEvent pMediaEvent;
			__C(pMediaSession->GetEvent(0, &pMediaEvent));
			MediaEventType Type;
			__C(pMediaEvent->GetType(&Type));
			HRESULT nStatus;
			__C(pMediaEvent->GetStatus(&nStatus));
			_Z4(atlTraceGeneral, 4, _T("Type %s, nStatus %s\n"), MF::CMediaEvent::FormatType(Type), MF::FormatResult(nStatus));
			switch(Type)
			{
			case MESessionTopologySet:
				break;
			case MESessionTopologyStatus:
				{
					const MF_TOPOSTATUS TopoStatus = (MF_TOPOSTATUS) pMediaEvent.GetUINT32(MF_EVENT_TOPOLOGY_STATUS);
					_Z4(atlTraceGeneral, 4, _T("TopoStatus %s\n"), MF::FormatTopologyStatus(TopoStatus));
					switch(TopoStatus)
					{
					case MF_TOPOSTATUS_READY:
						{
							pTopology.Trace();
							MF::CPropVariant vStartPosition;
							//vStartPosition.vt = VT_I8;
							//vStartPosition.hVal.QuadPart = 2 * 1000 * 10000i64;
							__C(pMediaSession->Start(&GUID_NULL, &vStartPosition));
						}
						break;
					case MF_TOPOSTATUS_ENDED:
						break;
					}
				}
				break;
			case MESessionStarted:
				break;
			case MESessionEnded:
				__C(pMediaSession->Stop());
				break;
			case MESessionStopped:
				__C(pMediaSession->Close());
				break;
			case MESessionClosed:
				bDone = TRUE;
				break;
			}
			if(FAILED(nStatus))
				bDone = TRUE;
		}
		__C(pMediaSession->Shutdown());
		#pragma endregion 
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

