////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2016
// Created by Roman Ryltsov roman@alax.info
//
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#pragma once

#include "rodshow.h"
#include "romf.h"

////////////////////////////////////////////////////////////
// CModule

class CModule :
	public CAtlExeModuleT<CModule>
{
public:

public:
	static CEvent g_TerminationEvent;
	CString m_sVideoIdentifier;
	UINT32 m_nBitrate;
	CString m_sAudioIdentifier;
	UINT m_nDuration;

public:
// CModule
	CModule()
	{
		AtlTraceSetDefaultSettings();
		_Z4_THIS();
		//_W(CExceptionFilter::Initialize());
		m_nBitrate = 0;
		m_nDuration = 10;
	}
	~CModule()
	{
		_Z4_THIS();
		//CExceptionFilter::Terminate();
	}
	bool ParseCommandLine(LPCTSTR pszCommandLine, HRESULT* pnResult)
	{
		_A(pnResult);
		_ATLTRY
		{
			CCommandLineArguments Arguments(pszCommandLine);
			CCommandLineArguments::CArgument Argument;
			while(Arguments.Next(Argument))
			{
				__D(!Argument.m_bSwitch, E_UNNAMED);
				#pragma region help
				if(Argument.m_sValue.CompareNoCase(_T("help")) == 0)
				{
					_tprintf(
						_T("Syntax: %s argument [argument...]") _T("\n")
						_T("\n")
						_T("Arguments:") _T("\n")
						_T("\t") _T("help - displays syntax") _T("\n"),
						FindFileName(GetModulePath()));
					return false;
				} else
				#pragma endregion
					__C(E_UNNAMED);
			}
		}
		_ATLCATCH(Exception)
		{
			*pnResult = Exception;
			return false;
		}
		*pnResult = S_OK;
		return true;
	}
	HRESULT PreMessageLoop(INT nShowCommand)
	{
		const HRESULT nResult = __super::PreMessageLoop(nShowCommand);
		return SUCCEEDED(nResult) ? S_OK : nResult;
	}
	BOOL InternalHandlerRoutine(DWORD nType)
	{
		_W(g_TerminationEvent.Set());
		return TRUE;
	}
	static BOOL WINAPI HandlerRoutine(DWORD nType)
	{
		return static_cast<CModule*>(_pAtlModule)->InternalHandlerRoutine(nType);
	}
	VOID ProcessInput(const CComPtr<IMFTransform>& pTransform, const MFT_INPUT_STREAM_INFO& InputStreamInformation, LONGLONG nSampleDuration, UINT nSampleIndex)
	{
		_A(pTransform);
		MF::CSample pSample;
		pSample.Create();
		CComPtr<IMFMediaBuffer> pMediaBuffer;
		__C(MFCreateMemoryBuffer(InputStreamInformation.cbSize, &pMediaBuffer));
		__C(pMediaBuffer->SetCurrentLength(InputStreamInformation.cbSize));
		__C(pSample->AddBuffer(pMediaBuffer));
		const LONGLONG nTime = nSampleIndex * nSampleDuration;
		__C(pSample->SetSampleTime(nTime));
		__C(pSample->SetSampleDuration(1)); //nSampleDuration));
		pSample[MFSampleExtension_CleanPoint] = (UINT32) 1;
		pSample[MFSampleExtension_Discontinuity] = (UINT32) (!nTime ? 1 : 0);
		pSample.Trace();
		for(; ; )
		{
			const HRESULT nProcessInputResult = pTransform->ProcessInput(0, pSample, 0);
			_Z45_MFHRESULT(nProcessInputResult);
			_tprintf(_T("Line %d: nTime %s, nProcessInputResult %s\n"), __LINE__, (LPCTSTR) MF::FormatNanoTime(nTime), (LPCTSTR) MF::FormatResult(nProcessInputResult));
			if(nProcessInputResult == MF_E_NOTACCEPTING)
			{
				Sleep(200);
				continue;
			}
			if(nProcessInputResult == S_OK)
				break;
			__C(nProcessInputResult);
		}
	}
	VOID ProcessOutput(const CComPtr<IMFTransform>& pTransform, const MFT_OUTPUT_STREAM_INFO& OutputStreamInformation, UINT nAttemptCount = 1)
	{
		_A(pTransform);
		MF::CSample pSample;
		pSample.Create();
		CComPtr<IMFMediaBuffer> pMediaBuffer;
		__C(MFCreateMemoryBuffer(OutputStreamInformation.cbSize, &pMediaBuffer));
		__C(pSample->AddBuffer(pMediaBuffer));
		for(UINT nAttemptIndex = 0; nAttemptIndex < nAttemptCount; nAttemptIndex++)
		{
			MFT_OUTPUT_DATA_BUFFER Buffer = { 0 };
			Buffer.pSample = pSample;
			DWORD nStatus = 0;
			HRESULT nProcessOutputResult = pTransform->ProcessOutput(0, 1, &Buffer, &nStatus);
			_Z4_MFHRESULT(nProcessOutputResult);
			_tprintf(_T("Line %d: nProcessOutputResult %s\n"), __LINE__, (LPCTSTR) MF::FormatResult(nProcessOutputResult));
			if(nProcessOutputResult == MF_E_TRANSFORM_NEED_MORE_INPUT)
			{
				Sleep(200);
				continue;
			}
			if(nProcessOutputResult == S_OK)
			{
				pSample.Trace();
				LONGLONG nTime, nDuration;
				__C(pSample->GetSampleTime(&nTime));
				__C(pSample->GetSampleDuration(&nDuration));
				DWORD nLength;
				__C(pSample->GetTotalLength(&nLength));
				_tprintf(_T("Line %d: nTime %s, nDuration %s, nLength %d\n"), __LINE__, (LPCTSTR) MF::FormatNanoTime(nTime), (LPCTSTR) MF::FormatNanoTime(nDuration), nLength);
				break;
			}
			__C(nProcessOutputResult);
		}
	}
	VOID RunMessageLoop()
	{
		MF::CStartup Startup;
		//__E(g_TerminationEvent.Create(NULL, TRUE, FALSE, NULL));
		//__E(SetConsoleCtrlHandler(&CModule::HandlerRoutine, TRUE));

		CComPtr<IMFTransform> pTransform;
		// NOTE: Video Processor MFT https://msdn.microsoft.com/en-us/library/windows/desktop/hh162913
		__C(pTransform.CoCreateInstance(CLSID_VideoProcessorMFT));
		MF::CMediaType pInputMediaType;
		pInputMediaType.Create();
		pInputMediaType[MF_MT_MAJOR_TYPE] = MFMediaType_Video;
		pInputMediaType[MF_MT_SUBTYPE] = MFVideoFormat_RGB32;
		pInputMediaType[MF_MT_ALL_SAMPLES_INDEPENDENT] = (UINT32) 1;
		pInputMediaType[MF_MT_FRAME_SIZE].SetSize(720, 480);
		pInputMediaType[MF_MT_DEFAULT_STRIDE] = (UINT32) 2880;
		pInputMediaType[MF_MT_PIXEL_ASPECT_RATIO].SetRatio(1, 1);
		pInputMediaType[MF_MT_INTERLACE_MODE] = (UINT32) MFVideoInterlace_Progressive; 
		pInputMediaType[MF_MT_FRAME_RATE].SetRatio(5, 1);
		pInputMediaType[MF_MT_FIXED_SIZE_SAMPLES] = (UINT32) 1;
		pInputMediaType[MF_MT_SAMPLE_SIZE] = (UINT32) 1382400;
		pInputMediaType[MF_MT_AVG_BITRATE] = (UINT32) 55296000;
		static const BYTE g_pnAperture[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD0, 0x02, 0x00, 0x00, 0xE0, 0x01, 0x00, 0x00 };
		pInputMediaType[MF_MT_MINIMUM_DISPLAY_APERTURE].SetBlob(g_pnAperture, DIM(g_pnAperture));
		pInputMediaType[MF_MT_PAN_SCAN_APERTURE].SetBlob(g_pnAperture, DIM(g_pnAperture));
		pInputMediaType[MF_MT_PAN_SCAN_ENABLED] = (UINT32) 1;
		__C(pTransform->SetInputType(0, pInputMediaType, 0));
		MF::CMediaType pOutputMediaType;
		pOutputMediaType.Create();
		pOutputMediaType[MF_MT_MAJOR_TYPE] = MFMediaType_Video;
		pOutputMediaType[MF_MT_SUBTYPE] = MFVideoFormat_IYUV;
		pOutputMediaType[MF_MT_FRAME_SIZE].SetSize(720, 480);
		pOutputMediaType[MF_MT_PIXEL_ASPECT_RATIO].SetRatio(1, 1);
		pOutputMediaType[MF_MT_INTERLACE_MODE] = (UINT32) MFVideoInterlace_Progressive; 
		pOutputMediaType[MF_MT_FRAME_RATE].SetRatio(5, 1);
		pOutputMediaType[MF_MT_VIDEO_NOMINAL_RANGE] = (UINT32) MFNominalRange_Wide;
		__C(pTransform->SetOutputType(0, pOutputMediaType, 0));

		MFT_INPUT_STREAM_INFO InputStreamInformation = { 0 };
		__C(pTransform->GetInputStreamInfo(0, &InputStreamInformation));
		MFT_OUTPUT_STREAM_INFO OutputStreamInformation = { 0 };
		__C(pTransform->GetOutputStreamInfo(0, &OutputStreamInformation));
		MF::CAttributes pAttributes;
		__C(pTransform->GetAttributes(&pAttributes));
		pAttributes[MF_XVP_DISABLE_FRC] = (UINT32) 0;
		pAttributes[MF_VIDEO_PROCESSOR_ALGORITHM] = (UINT32) 0;
		pAttributes[MF_SA_MINIMUM_OUTPUT_SAMPLE_COUNT] = (UINT32) 6;
		pAttributes.Trace();
		__C(pTransform->ProcessMessage(MFT_MESSAGE_NOTIFY_BEGIN_STREAMING, 0));
		__C(pTransform->ProcessMessage(MFT_MESSAGE_NOTIFY_START_OF_STREAM, 0));

		const LONGLONG nSampleDuration = 200 * 10000i64;

		ProcessOutput(pTransform, OutputStreamInformation, 1);
		ProcessInput(pTransform, InputStreamInformation, nSampleDuration, 0);
		ProcessOutput(pTransform, OutputStreamInformation);
		ProcessOutput(pTransform, OutputStreamInformation, 1);
		ProcessInput(pTransform, InputStreamInformation, nSampleDuration, 1);
		ProcessOutput(pTransform, OutputStreamInformation);

		// TODO: Termination/Cleanup
	}
};

__declspec(selectany) CEvent CModule::g_TerminationEvent;

