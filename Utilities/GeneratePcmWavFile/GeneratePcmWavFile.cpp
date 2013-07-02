////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include "rodshow.h"

////////////////////////////////////////////////////////////
// CModule

class CModule : 
	public CAtlExeModuleT<CModule>
{
	typedef CThreadT<CModule> CThread;

public:

	////////////////////////////////////////////////////////
	// CGenericFilterGraph

	//class CGenericFilterGraph
	//{
	//public:
	//	#if _DEVELOPMENT
	//		BOOL m_bShowDestructorMessageBox;
	//	#endif // _DEVELOPMENT
	//	CComPtr<IFilterGraph2> m_pFilterGraph;
	//	CComPtr<IMediaControl> m_pMediaControl;
	//	CComPtr<IMediaEventEx> m_pMediaEventEx;
	//	CComPtr<IMediaFilter> m_pMediaFilter;
	//	CComPtr<IMediaPosition> m_pMediaPosition;

	//public:
	//// CGenericFilterGraph
	//	CGenericFilterGraph(BOOL bShowDestructorMessageBox = FALSE) throw()
	//	{
	//		bShowDestructorMessageBox;
	//		#if _DEVELOPMENT
	//			m_bShowDestructorMessageBox = bShowDestructorMessageBox;
	//		#endif // _DEVELOPMENT
	//	}
	//	~CGenericFilterGraph() throw()
	//	{
	//		#if _DEVELOPMENT
	//			if(m_pFilterGraph && m_bShowDestructorMessageBox)
	//				AtlMessageBox(GetActiveWindow(), _T("DirectShow Filter Graph is about to be Released - Break In"), _T("Debug"), MB_ICONWARNING | MB_OK);
	//		#endif // _DEVELOPMENT
	//	}
	//	VOID CoCreateInstance(const CLSID& ClassIdentifier = CLSID_FilterGraph)
	//	{
	//		__C(m_pFilterGraph.CoCreateInstance(ClassIdentifier));
	//		m_pMediaControl = CComQIPtr<IMediaControl>(m_pFilterGraph);
	//		m_pMediaEventEx = CComQIPtr<IMediaEventEx>(m_pFilterGraph);
	//		m_pMediaFilter = CComQIPtr<IMediaFilter>(m_pFilterGraph);
	//		m_pMediaPosition = CComQIPtr<IMediaPosition>(m_pFilterGraph);
	//		__D(m_pMediaControl && m_pMediaEventEx && m_pMediaFilter && m_pMediaPosition, E_NOINTERFACE);
	//	}
	//	VOID SetShowDestructorMessageBox(BOOL bShowDestructorMessageBox = TRUE)
	//	{
	//		bShowDestructorMessageBox;
	//		#if _DEVELOPMENT
	//			m_bShowDestructorMessageBox = bShowDestructorMessageBox;
	//		#endif // _DEVELOPMENT
	//	}
	//	operator const CComPtr<IFilterGraph2>& () const throw()
	//	{
	//		return m_pFilterGraph;
	//	}
	//	const CComPtr<IFilterGraph2>& operator -> () const throw()
	//	{
	//		return m_pFilterGraph;
	//	}
	//};

	////////////////////////////////////////////////////////
	// CSourceFilter

	class ATL_NO_VTABLE CSourceFilter :
		public CComObjectRootEx<CComMultiThreadModelNoCS>,
		public CComCoClass<CSourceFilter>,
		public CPushSourceFilterT<CSourceFilter>,
		public CBasePersistT<CSourceFilter>,
		public CAmFilterMiscFlagsT<CSourceFilter, AM_FILTER_MISC_FLAGS_IS_SOURCE>
	{
	public:

	DECLARE_NO_REGISTRY()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	//DECLARE_QI_TRACE(CSourceFilter)

	BEGIN_COM_MAP(CSourceFilter)
		COM_INTERFACE_ENTRY(IBaseFilter)
		COM_INTERFACE_ENTRY(IMediaFilter)
		COM_INTERFACE_ENTRY_IID(__uuidof(IPersist), IBaseFilter)
		COM_INTERFACE_ENTRY(IAMFilterMiscFlags)
	END_COM_MAP()

	public:

		////////////////////////////////////////////////////////
		// CThreadContext

		class COutputPin;

		class CThreadContext :
			public CPushSourceFilterT<CSourceFilter>::CThreadContext
		{
		public:
			CEvent m_MediaSampleTimeEvent;
			REFERENCE_TIME m_nMediaSampleTime;
			SIZE_T m_nCurrentSampleIndex;

		public:
		// CThreadContext
			CThreadContext(CEvent& TerminationEvent) throw() :
				CPushSourceFilter::CThreadContext(TerminationEvent),
				m_nMediaSampleTime(0),
				m_nCurrentSampleIndex(0)
			{
			}
		};

		////////////////////////////////////////////////////////
		// COutputPin

		class ATL_NO_VTABLE COutputPin :
			public CComObjectRootEx<CComMultiThreadModelNoCS>,
			public CPushSourceFilterT<CSourceFilter>::COutputPinT<COutputPin, CSourceFilter, CThreadContext>,
			public CAmPushSourceT<COutputPin, 0>
		{
		public:

		//DECLARE_QI_TRACE(CSourceFilter::COutputPin)

		BEGIN_COM_MAP(COutputPin)
			COM_INTERFACE_ENTRY(IPin)
			COM_INTERFACE_ENTRY(IAMPushSource)
			COM_INTERFACE_ENTRY(IAMLatency)
		END_COM_MAP()

		public:
			CMediaType m_pDataMediaType;
			REFERENCE_TIME m_nDataLength;
			DOUBLE m_fSignalPeriod;
			DOUBLE m_fSignalAmplitude;
			DOUBLE m_fNoiseAmplitude;

		public:
		// COutputPin
			COutputPin() throw() :
				m_nDataLength(0),
				m_fSignalPeriod(0),
				m_fSignalAmplitude(0),
				m_fNoiseAmplitude(0)
			{
				_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
			}
			~COutputPin() throw()
			{
				_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
			}
			VOID EnumerateMediaTypes(CAtlList<CMediaType>& MediaTypeList)
			{
				CRoCriticalSectionLock DataLock(GetDataCriticalSection());
				_W(MediaTypeList.AddTail(m_pDataMediaType));
			}
			BOOL CheckMediaType(const CMediaType& pMediaType) const throw()
			{
				_A(pMediaType);
				//if(pMediaType->majortype != MEDIATYPE_Audio || pMediaType->subtype != MEDIASUBTYPE_PCM)
				//	return FALSE;
				//const CWaveFormatEx* pWaveFormatEx = pMediaType.GetWaveFormatEx();
				//if(!pWaveFormatEx)
				//	return FALSE;
				return m_pDataMediaType.Compare(pMediaType);
			}
			BOOL DecideMemAllocatorProperties(IMemAllocator* pMemAllocator, ALLOCATOR_PROPERTIES Properties) throw()
			{
				CRoCriticalSectionLock DataLock(GetDataCriticalSection());
				const CMediaType& pMediaType = GetMediaTypeReference();
				const CWaveFormatEx* pWaveFormatEx = pMediaType.GetWaveFormatEx();
				if(!pWaveFormatEx)
					return FALSE;
				if(!__super::DecideMemAllocatorProperties(pMemAllocator, Properties))
					return FALSE;
				static const ULONG g_nDefaultBufferLength = 500; // 500 ms
				const SIZE_T nDefaultBufferBlockCount = (pWaveFormatEx->nAvgBytesPerSec * g_nDefaultBufferLength / 1000 + pWaveFormatEx->nBlockAlign - 1) / pWaveFormatEx->nBlockAlign;
				const SIZE_T nDefaultBufferSize = nDefaultBufferBlockCount * pWaveFormatEx->nBlockAlign;
				if(Properties.cbBuffer < (LONG) nDefaultBufferSize)
					Properties.cbBuffer = (LONG) nDefaultBufferSize;
				if(Properties.cbAlign < pWaveFormatEx->nBlockAlign)
					Properties.cbAlign = pWaveFormatEx->nBlockAlign;
				if(!SetMemAllocatorBufferSize(pMemAllocator, Properties))
					return FALSE;
				const SIZE_T nSampleCount = Properties.cbBuffer / pWaveFormatEx->nBlockAlign;
				const SIZE_T nEffectiveBufferSize = nSampleCount * pWaveFormatEx->nBlockAlign;
				const REFERENCE_TIME nBufferTime = (REFERENCE_TIME) (1000 * 10000) * nEffectiveBufferSize / pWaveFormatEx->nAvgBytesPerSec;
				SetLatency(nBufferTime);
				return TRUE;
			}
			VOID InitializeThread(CThreadContext& ThreadContext) throw()
			{
				CRoCriticalSectionLock DataLock(GetDataCriticalSection());
				__super::InitializeThread(ThreadContext);
				if(m_fSignalPeriod > 0)
				{
					__D(m_pDataMediaType.GetWaveFormatEx()->wBitsPerSample == 16, E_NOTIMPL);
					ThreadContext.m_nCurrentSampleIndex = 0;
				}
			}
			BOOL ComposeMediaSample(CThreadContext& ThreadContext, IMediaSample* pMediaSample)
			{
				CMediaSampleProperties Properties(pMediaSample);
				_A(!Properties.pMediaType);
				if(ThreadContext.m_nMediaSampleTime >= m_nDataLength)
					return FALSE; // Finished
				CRoCriticalSectionLock DataLock(GetDataCriticalSection());
				const CWaveFormatEx* pWaveFormatEx = GetMediaTypeReference().GetWaveFormatEx();
				_A(pWaveFormatEx);
				const SIZE_T nRemainedDataSize = (SIZE_T) ((m_nDataLength - ThreadContext.m_nMediaSampleTime) * pWaveFormatEx->nAvgBytesPerSec / (1000 * 10000i64));
				SIZE_T nDataSize = Properties.cbBuffer;
				if(nDataSize > nRemainedDataSize)
					nDataSize = nRemainedDataSize;
				nDataSize = (nDataSize / pWaveFormatEx->nBlockAlign) * pWaveFormatEx->nBlockAlign;
				if(pWaveFormatEx->wBitsPerSample == 8)
				{
					FillMemory(Properties.pbBuffer, nDataSize, 0x80);
				} else
				{
					ZeroMemory(Properties.pbBuffer, nDataSize);
					#pragma region Sine Wave Data
					if(m_fSignalPeriod > 0)
					{
						SIZE_T nSampleIndex = 0;
						for(SIZE_T nIndex = 0; nIndex < nDataSize; nIndex += pWaveFormatEx->nBlockAlign, nSampleIndex++)
						{
							#pragma region Per-channel Frequencies and Amplitudes
							if(FALSE)
							{
								const DOUBLE pfSignalFrequencies[6] = { 1001, 1001, 1001, 1001, 1001, 1001 };
								const DOUBLE pfSignalAmplitudes[6] = { 0, 0, m_fSignalAmplitude, 0, 0, 0 };
								SHORT* pnSampleData = (SHORT*) (Properties.pbBuffer + nIndex);
								_A(DIM(pfSignalFrequencies) == DIM(pfSignalAmplitudes));
								_A(pWaveFormatEx->nChannels <= DIM(pfSignalFrequencies));
								for(WORD nChannelIndex = 0; nChannelIndex < pWaveFormatEx->nChannels; nChannelIndex++)
								{
									const DOUBLE fSignalPeriod = (DOUBLE) pWaveFormatEx->nSamplesPerSec / pfSignalFrequencies[nChannelIndex];
									const DOUBLE fSignalAmplitude = pfSignalAmplitudes[nChannelIndex];
									const SHORT nValue = (SHORT) (fSignalAmplitude * sin(2 * M_PI * (ThreadContext.m_nCurrentSampleIndex + nSampleIndex) / fSignalPeriod));
									pnSampleData[nChannelIndex] = nValue;
								}
								continue;
							}
							#pragma endregion
							#pragma region Stream Time Coefficients
							#if TRUE && FALSE
							{
								COMPILER_MESSAGE("Every 170 seconds: 50 seconds 1.0, 70 seconds 0.0, 50 seconds 1.0");
								#pragma region Factor
								REFERENCE_TIME nTime = ThreadContext.m_nMediaSampleTime + nIndex * (1000 * 10000i64) / pWaveFormatEx->nAvgBytesPerSec;
								nTime /= 1000 * 10000i64;
								// NOTE: Every 170 seconds: 50 seconds 1.0, 70 seconds 0.0, 50 seconds 1.0
								nTime %= 170;
								const DOUBLE fTimeFactor = (nTime < 50 || nTime >= 120) ? 1.0 : (1.0 / 256);
								#pragma endregion
								const SHORT nValue = (SHORT) (m_fSignalAmplitude * sin(2 * M_PI * (ThreadContext.m_nCurrentSampleIndex + nSampleIndex) / m_fSignalPeriod));
								SHORT* pnSampleData = (SHORT*) (Properties.pbBuffer + nIndex);
								for(WORD nChannelIndex = 0; nChannelIndex < pWaveFormatEx->nChannels; nChannelIndex++)
									pnSampleData[nChannelIndex] = (SHORT) (fTimeFactor * nValue);
								continue;
							}
							#endif // TRUE
							#pragma endregion
							const SHORT nValue = (SHORT) (m_fSignalAmplitude * sin(2 * M_PI * (ThreadContext.m_nCurrentSampleIndex + nSampleIndex) / m_fSignalPeriod));
							SHORT* pnSampleData = (SHORT*) (Properties.pbBuffer + nIndex);
							for(WORD nChannelIndex = 0; nChannelIndex < pWaveFormatEx->nChannels; nChannelIndex++)
								pnSampleData[nChannelIndex] = nValue;
						}
					}
					#pragma endregion
					#pragma region Noise Wave Data
					if(m_fNoiseAmplitude > 0)
					{
						for(SIZE_T nIndex = 0; nIndex < nDataSize; nIndex += pWaveFormatEx->nBlockAlign)
						{
							SHORT* pnSampleData = (SHORT*) (Properties.pbBuffer + nIndex);
							for(WORD nChannelIndex = 0; nChannelIndex < pWaveFormatEx->nChannels; nChannelIndex++)
								pnSampleData[nChannelIndex] += (SHORT) (m_fNoiseAmplitude * (DOUBLE) (rand() - RAND_MAX / 2) / (RAND_MAX / 2));
						}
					}
					#pragma endregion
				}
				ThreadContext.m_nMediaSampleTime += nDataSize * (1000 * 10000i64) / pWaveFormatEx->nAvgBytesPerSec;
				ThreadContext.m_nCurrentSampleIndex += nDataSize / pWaveFormatEx->nBlockAlign;
				Properties.lActual = (LONG) nDataSize;
				Properties.Set();
				return TRUE;
			}
			VOID InitializeData(const CWaveFormatEx* pWaveFormatEx, REFERENCE_TIME nLength)
			{
				_A(pWaveFormatEx);
				_A(nLength > 0);
				__D(!m_pDataMediaType, E_UNNAMED);
				m_pDataMediaType.AllocateWaveFormatEx(pWaveFormatEx);
				m_nDataLength = nLength;
			}
			VOID InitializeSignal(DOUBLE fSignalPeriod, DOUBLE fSignalAmplitude, DOUBLE fNoiseAmplitude)
			{
				__D(fSignalPeriod >= 0 && fSignalAmplitude >= 0 && fNoiseAmplitude >= 0, E_INVALIDARG);
				m_fSignalPeriod = fSignalPeriod;
				m_fSignalAmplitude = fSignalAmplitude;
				m_fNoiseAmplitude = fNoiseAmplitude;
			}
		};

	private:
		CObjectPtr<COutputPin> m_pOutputPin;

	public:
	// CSourceFilter
		CSourceFilter() throw() :
			CBasePersistT<CSourceFilter>(GetDataCriticalSection())
		{
			_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		}
		~CSourceFilter() throw()
		{
			_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		}
		HRESULT FinalConstruct() throw()
		{
			_ATLTRY
			{
				m_pOutputPin.Construct()->Initialize(this, L"Output");
				AddPin(m_pOutputPin);
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		VOID FinalRelease() throw()
		{
			m_pOutputPin = NULL;
		}
		VOID DeliverBeginFlush(IPin*)
		{
			m_pOutputPin->DeliverBeginFlush();
		}
		VOID DeliverEndFlush(IPin*)
		{
			m_pOutputPin->DeliverEndFlush();
		}
		VOID DeliverNewSegment(IPin*, REFERENCE_TIME nStartTime, REFERENCE_TIME nStopTime, DOUBLE fRate)
		{
			m_pOutputPin->DeliverNewSegment(nStartTime, nStopTime, fRate);
		}
		static BOOL CanCue() throw()
		{
			return FALSE;
		}
		VOID CueFilter()
		{
			m_pOutputPin->CuePin();
		}
		VOID RunFilter(REFERENCE_TIME nStartTime)
		{
			m_pOutputPin->RunPin(nStartTime);
		}
		VOID PauseFilter() throw()
		{
			m_pOutputPin->PausePin();
		}
		VOID StopFilter() throw()
		{
			m_pOutputPin->StopPin();
		}
		const CObjectPtr<COutputPin>& GetOutputPin() const throw()
		{
			return m_pOutputPin;
		}
		VOID Initialize(const CWaveFormatEx* pWaveFormatEx, REFERENCE_TIME nLength)
		{
			m_pOutputPin->InitializeData(pWaveFormatEx, nLength);
		}
		VOID InitializeSignal(DOUBLE fSignalAmplitude, DOUBLE fSignalPeriod, DOUBLE fNoiseAmplitude)
		{
			m_pOutputPin->InitializeSignal(fSignalAmplitude, fSignalPeriod, fNoiseAmplitude);
		}
	};

private:
	CWaveFormatEx m_WaveFormatEx;
	REFERENCE_TIME m_nLength;
	UINT m_nSignalFrequency;
	UINT m_nSignalLoudness;
	UINT m_nNoiseLoudness;
	CPath m_sPath;

public:
// CModule
	CModule() throw()
	{
		AtlTraceSetDefaultSettings();
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		ZeroMemory(&m_WaveFormatEx, sizeof m_WaveFormatEx);
		m_nLength = 0;
		m_nSignalFrequency = 0;
		m_nSignalLoudness = 0;
		m_nNoiseLoudness = 0;
	}
	~CModule() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	VOID SetSampleRate(UINT nSampleRate)
	{
		__D(nSampleRate > 0, E_INVALIDARG);
		m_WaveFormatEx.nSamplesPerSec = (DWORD) nSampleRate;
	}
	VOID SetChannelCount(UINT nChannelCount)
	{
		__D(nChannelCount > 0, E_INVALIDARG);
		m_WaveFormatEx.nChannels = (WORD) nChannelCount;
	}
	VOID SetSampleBitCount(UINT nSampleBitCount)
	{
		__D(nSampleBitCount == 8 || nSampleBitCount == 16, E_INVALIDARG);
		m_WaveFormatEx.wBitsPerSample = (WORD) nSampleBitCount;
	}
	VOID SetLength(REFERENCE_TIME nLength)
	{
		__D(nLength > 0, E_INVALIDARG);
		m_nLength = nLength;
	}
	VOID SetSignalFrequency(UINT nSignalFrequency)
	{
		__D(nSignalFrequency > 0, E_INVALIDARG);
		m_nSignalFrequency = nSignalFrequency;
	}
	VOID SetSignalLoudness(UINT nSignalLoudness)
	{
		__D(nSignalLoudness >= 0, E_INVALIDARG);
		m_nSignalLoudness = nSignalLoudness;
	}
	VOID SetNoiseLoudness(UINT nNoiseLoudness)
	{
		__D(nNoiseLoudness >= 0, E_INVALIDARG);
		m_nNoiseLoudness = nNoiseLoudness;
	}
	VOID SetPath(LPCTSTR pszPath)
	{
		__D(_tcslen(pszPath), E_INVALIDARG);
		__D(!_tcslen(m_sPath), E_INVALIDARG);
		m_sPath = pszPath;
	}
	HRESULT PreMessageLoop(INT nShowCommand)
	{
		__C(__super::PreMessageLoop(nShowCommand));
		return S_OK;
	}
	VOID RunMessageLoop()
	{
		#pragma region Input Validation and Syntax
		if(!m_WaveFormatEx.nSamplesPerSec || !m_WaveFormatEx.nChannels || !m_WaveFormatEx.wBitsPerSample || !m_nLength || !_tcslen(m_sPath))
		{
			_tprintf(_T("Syntax: GeneratePcmWavFile <options> <output-path>\n"));
			_tprintf(_T("  /s:N: Sampling Rate N, Hz\n"));
			_tprintf(_T("  /c:N: Channel Count N\n"));
			_tprintf(_T("  /b:N: Sample Bit Count N, 8 or 16\n"));
			_tprintf(_T("  /t:N: Length N, seconds\n"));
			_tprintf(_T("  /f:N: Sine Signal Frequency N, Hz\n"));
			_tprintf(_T("  /l:N: Sine Signal Loudness N, dB below full scale\n"));
			_tprintf(_T("  /n:N: Noise Signal Loudness N, dB below full scale\n"));
			AtlThrow(S_FALSE);
		}
		#pragma endregion 
		#pragma region Complete Audio Format
		m_WaveFormatEx.wFormatTag = WAVE_FORMAT_PCM;
		m_WaveFormatEx.nBlockAlign = m_WaveFormatEx.nChannels * ((m_WaveFormatEx.wBitsPerSample + 7) >> 3);
		m_WaveFormatEx.nAvgBytesPerSec = m_WaveFormatEx.nSamplesPerSec * m_WaveFormatEx.nBlockAlign;
		CWaveFormatEx* pWaveFormatEx = &m_WaveFormatEx;
		// SUGG: Replace with WAVEFORMATEXTENSIBLE where appropriate
		#pragma endregion 
		#pragma region Filter Graph
		CGenericFilterGraph GenericFilterGraph(TRUE);
		GenericFilterGraph.CoCreateInstance();
		CObjectPtr<CSourceFilter> pSourceFilter;
		pSourceFilter.Construct()->Initialize(pWaveFormatEx, m_nLength);
		if(m_nSignalFrequency && m_nSignalLoudness >= 0 || m_nNoiseLoudness)
		{
			__D(m_WaveFormatEx.wBitsPerSample == 16, E_NOTIMPL);
			DOUBLE fSignalPeriod = 0, fSignalAmplitude = 0;
			if(m_nSignalFrequency && m_nSignalLoudness >= 0)
			{
				fSignalPeriod = (DOUBLE) pWaveFormatEx->nSamplesPerSec / m_nSignalFrequency;
				fSignalAmplitude = 32767.0 / pow(10.0, m_nSignalLoudness / 20.0);
			}
			DOUBLE fNoiseAmplitude = 0;
			if(m_nNoiseLoudness)
			{
				fNoiseAmplitude = 32767.0 / pow(10.0, m_nNoiseLoudness / 20.0);
			}
			pSourceFilter->InitializeSignal(fSignalPeriod, fSignalAmplitude, fNoiseAmplitude);
		}
		__C(GenericFilterGraph->AddFilter(pSourceFilter, CT2CW(_T("Source"))));
		CComPtr<IPin> pCurrentOutputPin = pSourceFilter->GetOutputPin();
		#pragma region WAV Dest
		CComPtr<IBaseFilter> pWavDestBaseFilter;
		_ATLTRY
		{
			__C(pWavDestBaseFilter.CoCreateInstance(_PersistHelper::ClassIdentifierFromString(CT2CW(_T("{3C78B8E2-6C4D-11D1-ADE2-0000F8754B99}")))));
			__C(GenericFilterGraph->AddFilter(pWavDestBaseFilter, CT2CW(_T(".WAV Multiplexer"))));
			__C(GenericFilterGraph->Connect(pCurrentOutputPin, _FilterGraphHelper::GetFilterPin(pWavDestBaseFilter, PINDIR_INPUT)));
			pCurrentOutputPin = _FilterGraphHelper::GetFilterPin(pWavDestBaseFilter, PINDIR_OUTPUT);
		}
		_ATLCATCH(Exception)
		{
			_tprintf(_T("There was an error trying to instantiate WAV Dest filter, Exception 0x%08X\n"), (HRESULT) Exception);
			_ATLRETHROW;
		}
		#pragma endregion 
		#pragma region File Writer
		CComPtr<IBaseFilter> pFileWriterBaseFilter;
		__C(pFileWriterBaseFilter.CoCreateInstance(CLSID_FileWriter));
		CComQIPtr<IFileSinkFilter2> pFileSinkFilter2 = pFileWriterBaseFilter;
		__D(pFileSinkFilter2, E_NOINTERFACE);
		_tprintf(_T("Writing into \"%s\"...\n"), m_sPath);
		__C(pFileSinkFilter2->SetFileName(CT2CW(m_sPath), NULL));
		__C(pFileSinkFilter2->SetMode(AM_FILE_OVERWRITE));
		__C(GenericFilterGraph->AddFilter(pFileWriterBaseFilter, CT2CW(_T("File Writer"))));
		__C(GenericFilterGraph->Connect(pCurrentOutputPin, _FilterGraphHelper::GetFilterPin(pFileWriterBaseFilter, PINDIR_INPUT)));
		pCurrentOutputPin.Release();
		#pragma endregion 
		_A(!pCurrentOutputPin);
		_A(GenericFilterGraph.m_pMediaFilter);
		__C(GenericFilterGraph.m_pMediaFilter->SetSyncSource(NULL));
		#pragma endregion 
		_tprintf(_T("Running...\n"));
		_A(GenericFilterGraph.m_pMediaControl);
		__C(GenericFilterGraph.m_pMediaControl->Run());
		GenericFilterGraph.SetShowDestructorMessageBox(FALSE);
		_A(GenericFilterGraph.m_pMediaEventEx);
		LONG nEventCode;
		__C(GenericFilterGraph.m_pMediaEventEx->WaitForCompletion(INFINITE, &nEventCode));
		_tprintf(_T("Complete, nEventCode 0x%02X\n"), nEventCode);
		__C(GenericFilterGraph.m_pMediaControl->Stop());
	}
};

////////////////////////////////////////////////////////////
// Main

int _tmain(int argc, _TCHAR* argv[])
{
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
				if(_tcschr(_T("Ss"), sArgument[0])) // Sample Rate
				{
					__D(bIntegerArgumentValueValid, E_INVALIDARG);
					//_tprintf(_T("Option: Sample Rate, %d\n"), nIntegerArgumentValue);
					Module.SetSampleRate(nIntegerArgumentValue);
				} else
				if(_tcschr(_T("Cc"), sArgument[0])) // Channel Count
				{
					__D(bIntegerArgumentValueValid, E_INVALIDARG);
					//_tprintf(_T("Option: Channel Count, %d\n"), nIntegerArgumentValue);
					Module.SetChannelCount(nIntegerArgumentValue);
				} else
				if(_tcschr(_T("Bb"), sArgument[0])) // Sample Bit Count
				{
					__D(bIntegerArgumentValueValid, E_INVALIDARG);
					//_tprintf(_T("Option: Sample Bit Count, %d\n"), nIntegerArgumentValue);
					Module.SetSampleBitCount(nIntegerArgumentValue);
				} else
				if(_tcschr(_T("Tt"), sArgument[0])) // Length, seconds
				{
					__D(bIntegerArgumentValueValid, E_INVALIDARG);
					//_tprintf(_T("Option: Length, %d\n"), nIntegerArgumentValue);
					Module.SetLength(nIntegerArgumentValue * 1000 * 10000i64);
				} else
				if(_tcschr(_T("Ff"), sArgument[0])) // Sine Signal Frequency, Hz
				{
					__D(bIntegerArgumentValueValid, E_INVALIDARG);
					//_tprintf(_T("Option: Sine Signal Frequency, %d\n"), nIntegerArgumentValue);
					Module.SetSignalFrequency(nIntegerArgumentValue);
				} else
				if(_tcschr(_T("Ll"), sArgument[0])) // Sine Signal Loudness, dB below FS
				{
					__D(bIntegerArgumentValueValid, E_INVALIDARG);
					//_tprintf(_T("Option: Sine Signal Loudness, %d\n"), nIntegerArgumentValue);
					Module.SetSignalLoudness(nIntegerArgumentValue);
				} else
				if(_tcschr(_T("Nn"), sArgument[0])) // Noise Signal Loudness, dB below FS
				{
					__D(bIntegerArgumentValueValid, E_INVALIDARG);
					//_tprintf(_T("Option: Noise Signal Loudness, %d\n"), nIntegerArgumentValue);
					Module.SetNoiseLoudness(nIntegerArgumentValue);
				}
				continue;
			}
			#pragma endregion 
			if(sArgument.GetLength() >= 2 && sArgument[0] == _T('"') && sArgument[sArgument.GetLength() - 1] == _T('"'))
				sArgument = sArgument.Mid(1, sArgument.GetLength() - 2);
			Module.SetPath(sArgument);
		}
		#pragma endregion
		Module.WinMain(SW_SHOWNORMAL);
	}
	_ATLCATCH(Exception)
	{
		if(FAILED((HRESULT) Exception))
			_tprintf(_T("Error 0x%08x: %s\n"), (HRESULT) Exception, AtlFormatSystemMessage(Exception).TrimRight(_T("\t\n\r .")));
		return (INT) (HRESULT) Exception;
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Fatal Error\n"));
		return (INT) E_FAIL;
	}
	return 0;
}
