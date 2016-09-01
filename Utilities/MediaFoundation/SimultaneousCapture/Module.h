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

	////////////////////////////////////////////////////////
	// CCommandLineArguments

	class CCommandLineArguments
	{
	public:

		//////////////////////////////////////////////////////////
		// CArgument

		class CArgument
		{
		public:
			BOOL m_bSwitch;
			CString m_sSwitchName;
			CString m_sSwitchValue;
			BOOL m_bIntegerSwitchValueAvailable;
			INT m_nIntegerSwitchValue;
			CString m_sValue;

		public:
		// CArgument
			CArgument() :
				m_bSwitch(FALSE),
				m_bIntegerSwitchValueAvailable(FALSE)
			{
			}
			VOID Initialize()
			{
				m_bSwitch = FALSE;
				m_sSwitchName.Empty();;
				m_sSwitchValue.Empty();;
				m_bIntegerSwitchValueAvailable = FALSE;
				m_sValue.Empty();
			}
		};

	private:
		SIZE_T m_argc;
		TCHAR** m_argv;
		SIZE_T m_nIndex;

	public:
	// CCommandLineArguments
		CCommandLineArguments(SIZE_T argc, TCHAR* argv[]) :
			m_argc(argc),
			m_argv(argv),
			m_nIndex(1)
		{
		}
		CCommandLineArguments(LPCWSTR pszCommandLine)
		{
			INT nArgumentCount = 0;
			LPWSTR* pszArguments = CommandLineToArgvW(pszCommandLine, &nArgumentCount);
			m_argc = nArgumentCount;
			m_argv = pszArguments;
			m_nIndex = 1;
		}
		BOOL Next(CArgument& Argument)
		{
			if(m_nIndex >= m_argc)
				return FALSE;
			CString sArgument = m_argv[m_nIndex++];
			_A(!sArgument.IsEmpty());
			Argument.Initialize();
			if(_tcschr(_T("-/"), sArgument[0]))
			{
				Argument.m_bSwitch = TRUE;
				sArgument.Delete(0);
				const INT nSeparatorPosition = sArgument.Find(_T(':'));
				if(nSeparatorPosition > 0)
				{
					Argument.m_sSwitchName = sArgument.Left(nSeparatorPosition);
					Argument.m_sSwitchValue = sArgument.Mid(nSeparatorPosition + 1);
					if(!Argument.m_sSwitchValue.IsEmpty())
						Argument.m_bIntegerSwitchValueAvailable =  AtlStringToInteger(Argument.m_sSwitchValue, Argument.m_nIntegerSwitchValue);
				} else
					Argument.m_sSwitchName = sArgument;
				return TRUE;
			}
			if(sArgument.GetLength() >= 2 && sArgument[0] == _T('"') && sArgument[sArgument.GetLength() - 1] == _T('"'))
				sArgument = sArgument.Mid(1, sArgument.GetLength() - 2);
			Argument.m_sValue = sArgument;
			return TRUE;
		}
	};

	////////////////////////////////////////////////////////
	// CVideoMediaType

	class CVideoMediaType
	{
	public:
		DWORD m_nStreamIndex;
		MF::CMediaType m_pMediaType;

	public:
	// CVideoMediaType
		BOOL Initialize(const MF::CPresentationDescriptor& pPresentationDescriptor)
		{
			DWORD nStreamCount;
			__C(pPresentationDescriptor->GetStreamDescriptorCount(&nStreamCount));
			for(DWORD nStreamIndex = 0; nStreamIndex < nStreamCount; nStreamIndex++)
			{
				BOOL bSelect;
				MF::CStreamDescriptor pStreamDescriptor;
				__C(pPresentationDescriptor->GetStreamDescriptorByIndex(nStreamIndex, &bSelect, &pStreamDescriptor));
				pStreamDescriptor.Trace();
				DWORD nStreamIdentifier;
				__C(pStreamDescriptor->GetStreamIdentifier(&nStreamIdentifier));
				CComPtr<IMFMediaTypeHandler> pMediaTypeHandler;
				__C(pStreamDescriptor->GetMediaTypeHandler(&pMediaTypeHandler));
				GUID MajorType;
				__C(pMediaTypeHandler->GetMajorType(&MajorType));
				_Z4(atlTraceGeneral, 4, _T("bSelect %d, nStreamIdentifier %d, MajorType %s\n"), bSelect, nStreamIdentifier, MF::FormatKey(MajorType));
				if(MajorType != MFMediaType_Video)
					continue;
				DWORD nMediaTypeCount = 0;
				__C(pMediaTypeHandler->GetMediaTypeCount(&nMediaTypeCount));
				for(DWORD nMediaTypeIndex = 0; nMediaTypeIndex < nMediaTypeCount; nMediaTypeIndex++)
				{
					MF::CMediaType pMediaType;
					__C(pMediaTypeHandler->GetMediaTypeByIndex(nMediaTypeIndex, &pMediaType));
					if(pMediaType.GetGUID(MF_MT_SUBTYPE) != MFVideoFormat_H264)
						continue;
					if(pMediaType.GetUINT32(MF_MT_VIDEO_PROFILE) != eAVEncH264VProfile_ConstrainedBase)
						continue;
					UINT32 nWidth, nHeight;
					__C(MFGetAttributeSize(pMediaType, MF_MT_FRAME_SIZE, &nWidth, &nHeight));
					if(nWidth != 1920 && nHeight != 1080)
						continue;
					UINT32 nRatioNumerator, nRatioDenominator;
					__C(MFGetAttributeRatio(pMediaType, MF_MT_FRAME_RATE, &nRatioNumerator, &nRatioDenominator));
					if(nRatioNumerator * 1 != nRatioDenominator * 30)
						continue;
					_Z4(atlTraceGeneral, 4, _T("nWidth %d, nHeight %d, nRatioNumerator %d, nRatioDenominator %d\n"), nWidth, nHeight, nRatioNumerator, nRatioDenominator);
					pMediaType.Trace();
					m_nStreamIndex = nStreamIndex;
					m_pMediaType = pMediaType;
					return TRUE;
				}
			}
			return FALSE;
		}
	};

	////////////////////////////////////////////////////////
	// CAudioMediaType

	class CAudioMediaType
	{
	public:
		DWORD m_nStreamIndex;
		MF::CMediaType m_pMediaType;

	public:
	// CAudioMediaType
		BOOL Initialize(const MF::CPresentationDescriptor& pPresentationDescriptor)
		{
			DWORD nStreamCount;
			__C(pPresentationDescriptor->GetStreamDescriptorCount(&nStreamCount));
			for(DWORD nStreamIndex = 0; nStreamIndex < nStreamCount; nStreamIndex++)
			{
				BOOL bSelect;
				MF::CStreamDescriptor pStreamDescriptor;
				__C(pPresentationDescriptor->GetStreamDescriptorByIndex(nStreamIndex, &bSelect, &pStreamDescriptor));
				pStreamDescriptor.Trace();
				DWORD nStreamIdentifier;
				__C(pStreamDescriptor->GetStreamIdentifier(&nStreamIdentifier));
				CComPtr<IMFMediaTypeHandler> pMediaTypeHandler;
				__C(pStreamDescriptor->GetMediaTypeHandler(&pMediaTypeHandler));
				GUID MajorType;
				__C(pMediaTypeHandler->GetMajorType(&MajorType));
				_Z4(atlTraceGeneral, 4, _T("bSelect %d, nStreamIdentifier %d, MajorType %s\n"), bSelect, nStreamIdentifier, MF::FormatKey(MajorType));
				if(MajorType != MFMediaType_Audio)
					continue;
				DWORD nMediaTypeCount = 0;
				__C(pMediaTypeHandler->GetMediaTypeCount(&nMediaTypeCount));
				for(DWORD nMediaTypeIndex = 0; nMediaTypeIndex < nMediaTypeCount; nMediaTypeIndex++)
				{
					MF::CMediaType pMediaType;
					__C(pMediaTypeHandler->GetMediaTypeByIndex(nMediaTypeIndex, &pMediaType));
					pMediaType.Trace();
					m_nStreamIndex = nStreamIndex;
					m_pMediaType = pMediaType;
					return TRUE;
				}
			}
			return FALSE;
		}
	};

	////////////////////////////////////////////////////////
	// CSourceReaderCallback

	class ATL_NO_VTABLE CSourceReaderCallback :
		public CComObjectRootEx<CComMultiThreadModelNoCS>,
		public IMFSourceReaderCallback 
	{
	public:

	BEGIN_COM_MAP(CSourceReaderCallback)
		COM_INTERFACE_ENTRY(IMFSourceReaderCallback)
	END_COM_MAP()

	public:

		////////////////////////////////////////////////////
		// CStreamData

		class CStreamData
		{
		public:
			LONGLONG m_nBaseTime;
			BOOL m_bBaseTimeAvailable;
			BOOL m_bCleanPointAvailable;
			CRoListT<MF::CSample> m_SampleList;
			LONGLONG m_nLastSampleTime;

		public:
		// CStreamData
			CStreamData() :
				m_bBaseTimeAvailable(FALSE),
				m_nLastSampleTime(0),
				m_bCleanPointAvailable(FALSE)
			{
			}
		};

	private:
		mutable CRoCriticalSection m_DataCriticalSection;
		CRoArrayT<CStreamData> m_StreamDataArray;
		CEvent m_SampleAvailabilityEvent;
		CComPtr<IMFSourceReader> m_pSourceReader;

	public:
	// CSourceReaderCallback
		CSourceReaderCallback()
		{
			_Z4_THIS();
		}
		~CSourceReaderCallback()
		{
			_Z4_THIS();
		}
		VOID Initialize(SIZE_T nStreamCount)
		{
			_A(nStreamCount);
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			_W(m_StreamDataArray.SetCount(nStreamCount));
			__E(m_SampleAvailabilityEvent.Create(NULL, TRUE, FALSE, NULL));
		}
		VOID Terminate()
		{
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			m_pSourceReader.Release();
		}
		VOID SetSourceReader(IMFSourceReader* pSourceReader)
		{
			_A(pSourceReader);
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			_A(!m_pSourceReader);
			m_pSourceReader = pSourceReader;
		}
		VOID ResetVideoCleanPointAvailable(DWORD nStreamIndex, LONGLONG nAdjustmentTime)
		{
			_A(nAdjustmentTime >= 0 && nAdjustmentTime <= 1 * 1000 * 10000i64); // Reasonable adjustment
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			_A(nStreamIndex < m_StreamDataArray.GetCount());
			CStreamData& StreamData = m_StreamDataArray[nStreamIndex];
			StreamData.m_bCleanPointAvailable = FALSE;
			for(DWORD nAnotherStreamIndex = 0; nAnotherStreamIndex < m_StreamDataArray.GetCount(); nStreamIndex++)
				if(nAnotherStreamIndex != nStreamIndex)
				{
					CStreamData& StreamData = m_StreamDataArray[nAnotherStreamIndex];
					_A(StreamData.m_bBaseTimeAvailable);
					StreamData.m_nBaseTime += nAdjustmentTime;
				}
		}
		VOID ReadNextSample(DWORD nStreamIndex)
		{
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			__D(m_pSourceReader, E_NOINTERFACE);
			__C(m_pSourceReader->ReadSample(nStreamIndex, 0, NULL, NULL, NULL, NULL));
		}
		const CEvent& GetSampleAvailabilityEvent() const
		{
			_A(m_SampleAvailabilityEvent);
			return m_SampleAvailabilityEvent;
		}
		VOID WriteSamples(IMFSinkWriter* pSinkWriter, CRoMapT<DWORD, DWORD>& StreamIndexMap)
		{
			_A(pSinkWriter);
			for(DWORD nStreamIndex = 0; ; nStreamIndex++)
			{
				CRoCriticalSectionLock DataLock(m_DataCriticalSection);
				if(nStreamIndex >= m_StreamDataArray.GetCount())
					break;
				DWORD nWriterStreamIndex;
				if(!StreamIndexMap.Lookup(nStreamIndex, nWriterStreamIndex))
					continue;
				CStreamData& StreamData = m_StreamDataArray[nStreamIndex];
				for(; ; )
				{
					if(StreamData.m_SampleList.IsEmpty())
						break;
					MF::CSample pSample = StreamData.m_SampleList.RemoveHead();
					CRoCriticalSectionLock DataUnlock(m_DataCriticalSection);
					__C(pSinkWriter->WriteSample(nWriterStreamIndex, pSample));
				}
			}
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			for(auto&& StreamData: m_StreamDataArray)
				if(!StreamData.m_SampleList.IsEmpty())
					return;
			_W(m_SampleAvailabilityEvent.Reset());
		}
		SIZE_T GetLastListSampleTime(DWORD nStreamIndex, LONGLONG& nTime) const
		{
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			_A(nStreamIndex < m_StreamDataArray.GetCount());
			const CStreamData& StreamData = m_StreamDataArray[nStreamIndex];
			if(StreamData.m_SampleList.IsEmpty())
				return 0;
			__C(StreamData.m_SampleList.GetTail()->GetSampleTime(&nTime));
			return StreamData.m_SampleList.GetCount();
		}
		LONGLONG GetLastSampleTime() const
		{
			LONGLONG nLastSampleTime = 0;
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			for(auto&& StreamData: m_StreamDataArray)
				if(nLastSampleTime < StreamData.m_nLastSampleTime)
					nLastSampleTime = StreamData.m_nLastSampleTime;
			return nLastSampleTime;
		}

	// IMFSourceReaderCallback
        STDMETHOD(OnReadSample)(HRESULT nStatus, DWORD nStreamIndex, DWORD nStreamFlags, LONGLONG nTime, IMFSample* pSample) override
		{
			_Z4(atlTraceCOM, 4, _T("nStatus 0x%08X, nStreamIndex %d, nStreamFlags %s, nTime %s, pSample 0x%p\n"), nStatus, nStreamIndex, MF::FormatSourceReaderStreamFlags(nStreamFlags), MF::FormatNanoTime(nTime), pSample);
			_ATLTRY
			{
				{
					if(FAILED(nStatus))
					{
						_Z4(atlTraceGeneral, 4, _T("nStatus %s\n"), MF::FormatResult(nStatus));
						_A(nStreamFlags & MF_SOURCE_READERF_ERROR);
						_tprintf(_T("OnReadSample Error: %s, stream %d\n"), MF::FormatResult(nStatus), nStreamIndex);
						return S_OK;
					}
					CRoCriticalSectionLock DataLock(m_DataCriticalSection);
					__D(nStreamIndex < m_StreamDataArray.GetCount(), E_INVALIDARG);
					CStreamData& StreamData = m_StreamDataArray[nStreamIndex];
					if(nStreamFlags & MF_SOURCE_READERF_STREAMTICK)
					{
						_A(!pSample);
						_A(!StreamData.m_bBaseTimeAvailable);
						StreamData.m_nBaseTime = nTime;
						StreamData.m_bBaseTimeAvailable = TRUE;
					} else
					{
						MF::CSample& pSampleEx = reinterpret_cast<MF::CSample&>(pSample);
					//	if(nStreamIndex == 1)
					//		pSampleEx.Trace();
						// SUGG: Here is the right place to review samples and implement skipping in case certain data is lost in the middle of capture
						//       of compressed data
				//		BOOL bSkip = FALSE;
				//		if(!StreamData.m_bCleanPointAvailable)
				//		{
				//			UINT32 nCleanPoint;
				//			if(pSampleEx.TryGetUINT32(MFSampleExtension_CleanPoint, nCleanPoint))
				//				bSkip = !nCleanPoint;
				//		}
				//		if(!bSkip)
						{
							StreamData.m_bCleanPointAvailable = TRUE;
							_A(StreamData.m_bBaseTimeAvailable);
							LONGLONG nSampleTime;
							__C(pSampleEx->GetSampleTime(&nSampleTime));
							nSampleTime -= StreamData.m_nBaseTime;
							__C(pSampleEx->SetSampleTime(nSampleTime));
							_W(StreamData.m_SampleList.AddTail(pSampleEx));
							StreamData.m_nLastSampleTime = nSampleTime;
						}
					}
				}
				ReadNextSample(nStreamIndex);
				_W(m_SampleAvailabilityEvent.Set());
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
			return S_OK;
		}
        STDMETHOD(OnFlush)(DWORD nStreamIndex) override
		{
			_Z4(atlTraceCOM, 4, _T("nStreamIndex %d\n"), nStreamIndex);
			return S_OK;
		}
        STDMETHOD(OnEvent)(DWORD nStreamIndex, IMFMediaEvent* pEvent) override
		{
			_Z4(atlTraceCOM, 4, _T("nStreamIndex %d, pEvent 0x%p\n"), nStreamIndex, pEvent);
			_ATLTRY
			{
				reinterpret_cast<const MF::CMediaEvent&>(pEvent).Trace();
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
			return S_OK;
		}
	};

	////////////////////////////////////////////////////////
	// CFileByteStream

	class ATL_NO_VTABLE CFileByteStream :
		public CComObjectRootEx<CComMultiThreadModelNoCS>,
		public IMFByteStream,
		public IMFSampleOutputStream
	{
	public:

	DECLARE_QI_TRACE(CFileByteStream)

	BEGIN_COM_MAP(CFileByteStream)
		COM_INTERFACE_ENTRY(IMFByteStream)
		//COM_INTERFACE_ENTRY(IMFSampleOutputStream)
	END_COM_MAP()

	public:

		////////////////////////////////////////////////////////
		// CWriteObject

		class ATL_NO_VTABLE __declspec(uuid("{C0368834-0679-4720-A8C4-E0A68E4F2750}")) CWriteObject :
			public CComObjectRootEx<CComMultiThreadModelNoCS>,
			public IUnknown
		{
		public:

		//DECLARE_QI_TRACE(CWriteObject)

		BEGIN_COM_MAP(CWriteObject)
			COM_INTERFACE_ENTRY_IID(__uuidof(CWriteObject), CWriteObject)
		END_COM_MAP()

		public:
			ULONG m_nDataSize;

		public:
		// CWriteObject
			CWriteObject() :
				m_nDataSize(0)
			{
				_Z5_THIS();
			}
			~CWriteObject()
			{
				_Z5_THIS();
			}
		};

	private:
		mutable CRoCriticalSection m_DataCriticalSection;
		CAtlFile m_File;
		CHeapPtr<BYTE> m_pnData;
		ULONGLONG m_nDataCapacity;
		ULONGLONG m_nDataSize;
		ULONGLONG m_nDataPosition;

		VOID SetDataCapacity(ULONGLONG nDataCapacity)
		{
			if(nDataCapacity <= m_nDataCapacity)
				return;
			static const SIZE_T g_nDataGranularity = 1 << 20; // 1 MB
			_A(!(g_nDataGranularity & (g_nDataGranularity - 1)));
			nDataCapacity += (g_nDataGranularity - 1);
			nDataCapacity &= (ULONGLONG) ~(g_nDataGranularity - 1);
			__D(m_pnData.Reallocate((SIZE_T) nDataCapacity), E_OUTOFMEMORY);
			m_nDataCapacity = nDataCapacity;
		}

	public:
	// CFileByteStream
		CFileByteStream() :
			m_nDataCapacity(0),
			m_nDataSize(0),
			m_nDataPosition(0)
		{
			_Z4_THIS();
		}
		~CFileByteStream()
		{
			_Z4_THIS();
		}
		VOID Initialize(LPCTSTR pszPath)
		{
			//CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			__C(m_File.Create(pszPath, GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ, CREATE_ALWAYS));
		}

	// IMFByteStream
		STDMETHOD(GetCapabilities)(DWORD* pnCapabilities) override
		{
			_Z4(atlTraceCOM, 4, _T("this 0x%p\n"), this);
			_ATLTRY
			{
				__D(pnCapabilities, E_POINTER);
				//CRoCriticalSectionLock DataLock(m_DataCriticalSection);
				*pnCapabilities = MFBYTESTREAM_IS_READABLE | MFBYTESTREAM_IS_WRITABLE | MFBYTESTREAM_IS_SEEKABLE | MFBYTESTREAM_DOES_NOT_USE_NETWORK;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(GetLength)(QWORD* pnLength) override
		{
			_Z4(atlTraceCOM, 4, _T("this 0x%p\n"), this);
			_ATLTRY
			{
				__D(pnLength, E_POINTER);
				CRoCriticalSectionLock DataLock(m_DataCriticalSection);
				*pnLength = m_nDataSize;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(SetLength)(QWORD nLength) override
		{
			_Z4(atlTraceCOM, 4, _T("this 0x%p, nLength %I64d\n"), this, nLength);
			_ATLTRY
			{
				CRoCriticalSectionLock DataLock(m_DataCriticalSection);
				SetDataCapacity(nLength);
				m_nDataSize = nLength;
				if(m_nDataPosition > m_nDataSize)
					m_nDataPosition = m_nDataSize;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(GetCurrentPosition)(QWORD* pnPosition) override
		{
			_Z4(atlTraceCOM, 4, _T("this 0x%p\n"), this);
			_ATLTRY
			{
				__D(pnPosition, E_POINTER);
				CRoCriticalSectionLock DataLock(m_DataCriticalSection);
				*pnPosition = m_nDataPosition;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(SetCurrentPosition)(QWORD nPosition) override
		{
			_Z4(atlTraceCOM, 4, _T("this 0x%p, nPosition %I64d\n"), this, nPosition);
			_ATLTRY
			{
				CRoCriticalSectionLock DataLock(m_DataCriticalSection);
				__D(nPosition <= m_nDataSize, E_INVALIDARG);
				m_nDataPosition = nPosition;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(IsEndOfStream)(BOOL* pbEndOfStream) override
		{
			_Z4(atlTraceCOM, 4, _T("this 0x%p\n"), this);
			_ATLTRY
			{
				__D(pbEndOfStream, E_POINTER);
				CRoCriticalSectionLock DataLock(m_DataCriticalSection);
				*pbEndOfStream = m_nDataPosition >= m_nDataSize;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(Read)(BYTE* pnData, ULONG nDataCapacity, ULONG* pnDataSize) override
		{
			_Z4(atlTraceCOM, 4, _T("this 0x%p, nDataCapacity %d\n"), this, nDataCapacity);
			_ATLTRY
			{
				// TODO: ...
				_C(E_NOTIMPL);
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(BeginRead)(BYTE* pnData, ULONG nDataCapacity, IMFAsyncCallback* pCallback, IUnknown* pState) override
		{
			_Z4(atlTraceCOM, 4, _T("this 0x%p, nDataCapacity %d\n"), this, nDataCapacity);
			_ATLTRY
			{
				// TODO: ...
				_C(E_NOTIMPL);
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(EndRead)(IMFAsyncResult* pResult, ULONG* pnDataSize) override
		{
			_Z4(atlTraceCOM, 4, _T("this 0x%p\n"), this);
			_ATLTRY
			{
				// TODO: ...
				_C(E_NOTIMPL);
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(Write)(const BYTE* pnData, ULONG nDataSize, ULONG* pnWriteDataSize) override
		{
			_Z4(atlTraceCOM, 4, _T("this 0x%p, nDataSize %d\n"), this, nDataSize);
			_ATLTRY
			{
				__D(pnData || !nDataSize, E_INVALIDARG);
				__D(pnWriteDataSize, E_POINTER);
				CRoCriticalSectionLock DataLock(m_DataCriticalSection);
				if(nDataSize)
				{
					SetDataCapacity(m_nDataPosition + nDataSize);
					memcpy(m_pnData + (SIZE_T) m_nDataPosition, pnData, nDataSize);
					m_nDataPosition += nDataSize;
					if(m_nDataPosition > m_nDataSize)
						m_nDataSize = m_nDataPosition;
				}
				*pnWriteDataSize = nDataSize;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(BeginWrite)(const BYTE* pnData, ULONG nDataSize, IMFAsyncCallback* pCallback, IUnknown* pState) override
		{
			_Z5(atlTraceCOM, 5, _T("this 0x%p, nDataSize %d, pCallback 0x%p, pState 0x%p\n"), this, nDataSize, pCallback, pState);
			_ATLTRY
			{
				CLocalObjectPtr<CWriteObject> pWriteObject;
				__C(Write(pnData, nDataSize, &pWriteObject->m_nDataSize));
				CComPtr<IMFAsyncResult> pAsyncResult;
				__C(MFCreateAsyncResult(pWriteObject, pCallback, pState, &pAsyncResult));
				__C(pCallback->Invoke(pAsyncResult));
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(EndWrite)(IMFAsyncResult* pResult, ULONG* pnDataSize) override
		{
			_Z5(atlTraceCOM, 5, _T("this 0x%p, pResult 0x%p\n"), this, pResult);
			_ATLTRY
			{
				__D(pResult, E_INVALIDARG);
				__D(pnDataSize, E_POINTER);
				CComPtr<IUnknown> pObjectUnknown;
				__C(pResult->GetObject(&pObjectUnknown));
				CWriteObject* pWriteObject = static_cast<CWriteObject*>((IUnknown*) pObjectUnknown);
				_A(pWriteObject == (CWriteObject*) CComQIPtr<CWriteObject>(pObjectUnknown));
				*pnDataSize = pWriteObject->m_nDataSize;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(Seek)(MFBYTESTREAM_SEEK_ORIGIN Origin, LONGLONG nOffset, DWORD nFlags, QWORD* pnPosition) override
		{
			_Z4(atlTraceCOM, 4, _T("this 0x%p, Origin %d, nOffset %I64d, nFlags 0x%X\n"), this, Origin, nOffset, nFlags);
			_ATLTRY
			{
				// TODO: ...
				_C(E_NOTIMPL);
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(Flush)() override
		{
			_Z4(atlTraceCOM, 4, _T("this 0x%p\n"), this);
			_ATLTRY
			{
				// TODO: ...
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(Close)() override
		{
			_Z4(atlTraceCOM, 4, _T("this 0x%p\n"), this);
			_ATLTRY
			{
				CRoCriticalSectionLock DataLock(m_DataCriticalSection);
				__D(m_File, E_UNNAMED);
				__C(m_File.Write(m_pnData, (DWORD) m_nDataSize));
				m_File.Close();
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}

	// IMFSampleOutputStream
		STDMETHOD(BeginWriteSample)(IMFSample* pSample, IMFAsyncCallback* pCallback, IUnknown* pState) override
		{
			_Z4(atlTraceCOM, 4, _T("this 0x%p, pSample 0x%p, pCallback 0x%p, pState 0x%p\n"), this, pSample, pCallback, pState);
			_ATLTRY
			{
				// TODO: ...
				_C(E_NOTIMPL);
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(EndWriteSample)(IMFAsyncResult* pResult) override
		{   
			_Z4(atlTraceCOM, 4, _T("this 0x%p, pResult 0x%p\n"), this, pResult);
			_ATLTRY
			{
				// TODO: ...
				_C(E_NOTIMPL);
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		//STDMETHOD(Close)() override
	};

	////////////////////////////////////////////////////////
	// CSessionT

	template <typename CVideoMediaType, typename CAudioMediaType>
	class CSessionT
	{
	public:
		CVideoMediaType m_VideoMediaType;
		CAudioMediaType m_AudioMediaType;
		CComPtr<IMFMediaSource> m_pMediaSource;
		CComPtr<IMFSourceReader> m_pSourceReader;
		CObjectPtr<CSourceReaderCallback> m_pSourceReaderCallback;
		CPath m_sPath;
		CComPtr<IMFSinkWriter> m_pSinkWriter;
		CRoMapT<DWORD, DWORD> m_StreamIndexMap;

	public:
	// CSessionT
		VOID Initialize(const CString& sVideoIdentifier, UINT32 nBitrate, const CString& sAudioIdentifier, LPCTSTR pszPath = NULL)
		{
			#pragma region Media Source
			CComPtr<IMFMediaSource> pVideoMediaSource, pAudioMediaSource;
			CComPtr<IMFMediaSource> pMediaSource;
			{
				{
					MF::CAttributes pAttributes;
					pAttributes.Create(2);
					pAttributes[MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE] = MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_VIDCAP_GUID;
					pAttributes[MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_VIDCAP_SYMBOLIC_LINK] = sVideoIdentifier;
					pVideoMediaSource = MF::CActivate::CreateDeviceSource(pAttributes);
				}
				{
					MF::CAttributes pAttributes;
					pAttributes.Create(2);
					pAttributes[MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE] = MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_AUDCAP_GUID;
					pAttributes[MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_AUDCAP_ENDPOINT_ID] = sAudioIdentifier;
					pAudioMediaSource = MF::CActivate::CreateDeviceSource(pAttributes);
				}
				_A(pVideoMediaSource && pAudioMediaSource);
				CComPtr<IMFCollection> pCollection;
				__C(MFCreateCollection(&pCollection));
				__C(pCollection->AddElement(pVideoMediaSource));
				__C(pCollection->AddElement(pAudioMediaSource));
				__C(MFCreateAggregateSource(pCollection, &pMediaSource));
			}
			m_pMediaSource = pMediaSource;
			#pragma endregion 
			DWORD nCharacteristics;
			__C(pMediaSource->GetCharacteristics(&nCharacteristics));
			_Z4(atlTraceGeneral, 4, _T("nCharacteristics %s\n"), MF::FormatMediaSourceCharacteristics(nCharacteristics));
			MF::CPresentationDescriptor pPresentationDescriptor;
			__C(pMediaSource->CreatePresentationDescriptor(&pPresentationDescriptor));
			pPresentationDescriptor.Trace();
			__D(m_VideoMediaType.Initialize(pPresentationDescriptor), E_UNNAMED);
			__D(m_AudioMediaType.Initialize(pPresentationDescriptor), E_UNNAMED);
			if(nBitrate)
				m_VideoMediaType.m_pMediaType[MF_MT_AVG_BITRATE] = nBitrate;
			{
				DWORD nStreamCount = 0;
				__C(pPresentationDescriptor->GetStreamDescriptorCount(&nStreamCount));
				_A(m_VideoMediaType.m_nStreamIndex != m_AudioMediaType.m_nStreamIndex);
				_A(m_VideoMediaType.m_nStreamIndex < nStreamCount && m_AudioMediaType.m_nStreamIndex < nStreamCount);
				for(DWORD nAnotherStreamIndex = 0; nAnotherStreamIndex < nStreamCount; nAnotherStreamIndex++)
					if(nAnotherStreamIndex != m_VideoMediaType.m_nStreamIndex && nAnotherStreamIndex != m_AudioMediaType.m_nStreamIndex)
						__C(pPresentationDescriptor->DeselectStream(nAnotherStreamIndex));
				__C(pPresentationDescriptor->SelectStream(m_VideoMediaType.m_nStreamIndex));
				__C(pPresentationDescriptor->SelectStream(m_AudioMediaType.m_nStreamIndex));
				m_pSourceReaderCallback.Construct();
				m_pSourceReaderCallback->Initialize(nStreamCount);
			}
			MF::CAttributes pAttributes;
			pAttributes.Create(2);
			//__C(pAttributes->SetUINT32(MF_READWRITE_DISABLE_CONVERTERS, TRUE));
			// NOTE: Using the Source Reader in Asynchronous Mode https://msdn.microsoft.com/en-us/library/windows/desktop/gg583871
			__C(pAttributes->SetUnknown(MF_SOURCE_READER_ASYNC_CALLBACK, m_pSourceReaderCallback));
			CComPtr<IMFSourceReader> pSourceReader;
			__C(MFCreateSourceReaderFromMediaSource(pMediaSource, pAttributes, &pSourceReader));
			m_pSourceReaderCallback->SetSourceReader(pSourceReader);
			{
				DWORD nStreamCount = 0;
				__C(pPresentationDescriptor->GetStreamDescriptorCount(&nStreamCount));
				for(DWORD nAnotherStreamIndex = 0; nAnotherStreamIndex < nStreamCount; nAnotherStreamIndex++)
					if(nAnotherStreamIndex != m_VideoMediaType.m_nStreamIndex && nAnotherStreamIndex != m_AudioMediaType.m_nStreamIndex)
						__C(pSourceReader->SetStreamSelection(nAnotherStreamIndex, FALSE));
				__C(pSourceReader->SetStreamSelection(m_VideoMediaType.m_nStreamIndex, TRUE));
				__C(pSourceReader->SetStreamSelection(m_AudioMediaType.m_nStreamIndex, TRUE));
				__C(pSourceReader->SetCurrentMediaType(m_VideoMediaType.m_nStreamIndex, NULL, m_VideoMediaType.m_pMediaType));
				__C(pSourceReader->SetCurrentMediaType(m_AudioMediaType.m_nStreamIndex, NULL, m_AudioMediaType.m_pMediaType));
			}
			//__C(pMediaSource->Start(pPresentationDescriptor, NULL, NULL));
			MF::CCodecApi pCodecApi(pVideoMediaSource, TRUE);
			if(pCodecApi)
			{
				if(nBitrate)
				{
					pCodecApi[CODECAPI_AVEncCommonRateControlMode] = (UINT32) eAVEncCommonRateControlMode_CBR;
					pCodecApi[CODECAPI_AVEncCommonMeanBitRate] = (UINT32) nBitrate;
				}
				//pCodecApi[CODECAPI_AVEncMPVGOPSize] = (UINT32) 30;
			}
			m_sPath = pszPath; 
			if(!_tcslen(m_sPath))
				m_sPath = CreateOutputPath();
			// NOTE: MFCreateSinkWriterFromURL https://msdn.microsoft.com/en-us/library/windows/desktop/dd388105
			CComPtr<IMFByteStream> pByteStream;
			MF::CAttributes pSinkAttributes;
			#if FALSE
				CObjectPtr<CFileByteStream> pFileByteStream;
				pFileByteStream.Construct()->Initialize(m_sPath);
				pByteStream = pFileByteStream;
				// WARN: It looks like this cannot have effect when used like this; the attribute is apparently NOT working the supposed way that
				//       media sink somehow sees it and update the media file. I suppose instead it is rather Transcode API attribute (despite the
				//       naming) and is handled through API patch that internally applies additional re-muxing behind the scenes...
				pSinkAttributes.Create(1);
				pSinkAttributes[MF_MPEG4SINK_MOOV_BEFORE_MDAT] = (UINT32) 1;
				#if TRUE
					CObjectPtr<MF::Private::CAttributes> pPrivateAttributes;
					pPrivateAttributes.Construct()->Initialize(pSinkAttributes);
					pSinkAttributes.m_p = (IMFAttributes*) pPrivateAttributes;
				#endif
				// NOTE: This is a development code path, see if(m_pSinkWriter) workaround below
				//__C(MFCreateSinkWriterFromURL(CT2CW(m_sPath), pByteStream, pSinkAttributes, &m_pSinkWriter));
			#else
				__C(MFCreateSinkWriterFromURL(CT2CW(m_sPath), pByteStream, pSinkAttributes, &m_pSinkWriter));
			#endif
			DWORD nVideoWriterStreamIndex, nAudioWriterStreamIndex;
			#pragma region H.264 Video
			MF::CMediaType pVideoMediaType = m_VideoMediaType.m_pMediaType;
			if(pVideoMediaType.GetGUID(MF_MT_SUBTYPE) != MFVideoFormat_H264)
			{
				pVideoMediaType.Trace();
				pVideoMediaType.Release();
				pVideoMediaType.Create();
				// NOTE: H.264 Video Encoder https://msdn.microsoft.com/en-us/library/windows/desktop/dd797816
				pVideoMediaType[MF_MT_MAJOR_TYPE] = MFMediaType_Video;
				pVideoMediaType[MF_MT_SUBTYPE] = MFVideoFormat_H264;
				pVideoMediaType[MF_MT_AVG_BITRATE] = (UINT32) 2048000; // 2 MBps
				pVideoMediaType[MF_MT_FRAME_RATE] = m_VideoMediaType.m_pMediaType.GetUINT64(MF_MT_FRAME_RATE);
				pVideoMediaType[MF_MT_FRAME_SIZE] = m_VideoMediaType.m_pMediaType.GetUINT64(MF_MT_FRAME_SIZE);
				pVideoMediaType[MF_MT_INTERLACE_MODE] = m_VideoMediaType.m_pMediaType.GetUINT32(MF_MT_INTERLACE_MODE);
				pVideoMediaType[MF_MT_PIXEL_ASPECT_RATIO] = m_VideoMediaType.m_pMediaType.GetUINT64(MF_MT_PIXEL_ASPECT_RATIO);
			}
			if(m_pSinkWriter)
			{
				__C(m_pSinkWriter->AddStream(pVideoMediaType, &nVideoWriterStreamIndex));
				__C(m_pSinkWriter->SetInputMediaType(nVideoWriterStreamIndex, m_VideoMediaType.m_pMediaType, NULL));
			}
			#pragma endregion 
			#pragma region AAC Audio 
			_A(m_AudioMediaType.m_pMediaType.GetUINT32(MF_MT_AUDIO_SAMPLES_PER_SECOND) == 48000);
			_A(m_AudioMediaType.m_pMediaType.GetUINT32(MF_MT_AUDIO_NUM_CHANNELS) == 2);
			MF::CMediaType pAudioMediaType;
			pAudioMediaType.Create();
			// NOTE: AAC Encoder https://msdn.microsoft.com/en-us/library/windows/desktop/dd742785
			pAudioMediaType[MF_MT_MAJOR_TYPE] = MFMediaType_Audio;
			pAudioMediaType[MF_MT_SUBTYPE] = MFAudioFormat_AAC;
			pAudioMediaType[MF_MT_AUDIO_BITS_PER_SAMPLE] = (UINT32) 16;
			pAudioMediaType[MF_MT_AUDIO_SAMPLES_PER_SECOND] = (UINT32) m_AudioMediaType.m_pMediaType.GetUINT32(MF_MT_AUDIO_SAMPLES_PER_SECOND);
			pAudioMediaType[MF_MT_AUDIO_NUM_CHANNELS] = (UINT32) m_AudioMediaType.m_pMediaType.GetUINT32(MF_MT_AUDIO_NUM_CHANNELS);
			pAudioMediaType[MF_MT_AUDIO_AVG_BYTES_PER_SECOND] = (UINT32) 20000;
			if(m_pSinkWriter)
			{
				__C(m_pSinkWriter->AddStream(pAudioMediaType, &nAudioWriterStreamIndex));
				__C(m_pSinkWriter->SetInputMediaType(nAudioWriterStreamIndex, m_AudioMediaType.m_pMediaType, NULL));
			}
			#pragma endregion 
			// NOTE: See IMFSinkWriterEx::GetTransformForStream https://msdn.microsoft.com/en-us/library/windows/desktop/hh448061
			//       which might possibly indicate internal MFTs such as, for example, format conversion and audio encoder for AAC audio
			_A(m_StreamIndexMap.IsEmpty());
			if(m_pSinkWriter)
			{
				m_StreamIndexMap[m_VideoMediaType.m_nStreamIndex] = nVideoWriterStreamIndex;
				m_StreamIndexMap[m_AudioMediaType.m_nStreamIndex] = nAudioWriterStreamIndex;
			} else
			{
				// TODO: Add audio support
				pAudioMediaType.Release();
				CComPtr<IMFMediaSink> pMediaSink;
				__C(MFCreateMPEG4MediaSink(pByteStream, pVideoMediaType, pAudioMediaType, &pMediaSink));
				__C(MFCreateSinkWriterFromMediaSink(pMediaSink, pSinkAttributes, &m_pSinkWriter));
				nVideoWriterStreamIndex = 0;
			//	__C(m_pSinkWriter->AddStream(pVideoMediaType, &nVideoWriterStreamIndex)); // MF_E_STREAMSINKS_FIXED
				__C(m_pSinkWriter->SetInputMediaType(nVideoWriterStreamIndex, m_VideoMediaType.m_pMediaType, NULL));
			//	//__C(m_pSinkWriter->AddStream(pAudioMediaType, &nAudioWriterStreamIndex));
			//	//__C(m_pSinkWriter->SetInputMediaType(nAudioWriterStreamIndex, m_AudioMediaType.m_pMediaType, NULL));
				m_StreamIndexMap[m_VideoMediaType.m_nStreamIndex] = nVideoWriterStreamIndex;
			}
		}
		HANDLE GetSampleAvailabilityEvent() const
		{
			return m_pSourceReaderCallback ? (HANDLE) m_pSourceReaderCallback->GetSampleAvailabilityEvent() : NULL;
		}
	};

	////////////////////////////////////////////////////////
	// CSecondaryVideoMediaType

	class CSecondaryVideoMediaType
	{
	public:
		DWORD m_nStreamIndex;
		MF::CMediaType m_pMediaType;

	public:
	// CSecondaryVideoMediaType
		BOOL Initialize(const MF::CPresentationDescriptor& pPresentationDescriptor)
		{
			DWORD nStreamCount;
			__C(pPresentationDescriptor->GetStreamDescriptorCount(&nStreamCount));
			for(DWORD nStreamIndex = 0; nStreamIndex < nStreamCount; nStreamIndex++)
			{
				BOOL bSelect;
				MF::CStreamDescriptor pStreamDescriptor;
				__C(pPresentationDescriptor->GetStreamDescriptorByIndex(nStreamIndex, &bSelect, &pStreamDescriptor));
				pStreamDescriptor.Trace();
				DWORD nStreamIdentifier;
				__C(pStreamDescriptor->GetStreamIdentifier(&nStreamIdentifier));
				CComPtr<IMFMediaTypeHandler> pMediaTypeHandler;
				__C(pStreamDescriptor->GetMediaTypeHandler(&pMediaTypeHandler));
				GUID MajorType;
				__C(pMediaTypeHandler->GetMajorType(&MajorType));
				_Z4(atlTraceGeneral, 4, _T("bSelect %d, nStreamIdentifier %d, MajorType %s\n"), bSelect, nStreamIdentifier, MF::FormatKey(MajorType));
				if(MajorType != MFMediaType_Video)
					continue;
				DWORD nMediaTypeCount = 0;
				__C(pMediaTypeHandler->GetMediaTypeCount(&nMediaTypeCount));
				for(DWORD nMediaTypeIndex = 0; nMediaTypeIndex < nMediaTypeCount; nMediaTypeIndex++)
				{
					MF::CMediaType pMediaType;
					__C(pMediaTypeHandler->GetMediaTypeByIndex(nMediaTypeIndex, &pMediaType));
					if(pMediaType.GetGUID(MF_MT_SUBTYPE) != MFVideoFormat_YUY2)
						continue;
					UINT32 nWidth, nHeight;
					__C(MFGetAttributeSize(pMediaType, MF_MT_FRAME_SIZE, &nWidth, &nHeight));
					if(nWidth != 640 && nHeight != 480)
						continue;
					UINT32 nRatioNumerator, nRatioDenominator;
					__C(MFGetAttributeRatio(pMediaType, MF_MT_FRAME_RATE, &nRatioNumerator, &nRatioDenominator));
					if(nRatioNumerator * 1 != nRatioDenominator * 30)
						continue;
					_Z4(atlTraceGeneral, 4, _T("nWidth %d, nHeight %d, nRatioNumerator %d, nRatioDenominator %d\n"), nWidth, nHeight, nRatioNumerator, nRatioDenominator);
					pMediaType.Trace();
					m_nStreamIndex = nStreamIndex;
					m_pMediaType = pMediaType;
					return TRUE;
				}
			}
			return FALSE;
		}
	};

	////////////////////////////////////////////////////////
	// CSecondaryAudioMediaType

	class CSecondaryAudioMediaType
	{
	public:
		DWORD m_nStreamIndex;
		MF::CMediaType m_pMediaType;

	public:
	// CSecondaryAudioMediaType
		BOOL Initialize(const MF::CPresentationDescriptor& pPresentationDescriptor)
		{
			DWORD nStreamCount;
			__C(pPresentationDescriptor->GetStreamDescriptorCount(&nStreamCount));
			for(DWORD nStreamIndex = 0; nStreamIndex < nStreamCount; nStreamIndex++)
			{
				BOOL bSelect;
				MF::CStreamDescriptor pStreamDescriptor;
				__C(pPresentationDescriptor->GetStreamDescriptorByIndex(nStreamIndex, &bSelect, &pStreamDescriptor));
				pStreamDescriptor.Trace();
				DWORD nStreamIdentifier;
				__C(pStreamDescriptor->GetStreamIdentifier(&nStreamIdentifier));
				CComPtr<IMFMediaTypeHandler> pMediaTypeHandler;
				__C(pStreamDescriptor->GetMediaTypeHandler(&pMediaTypeHandler));
				GUID MajorType;
				__C(pMediaTypeHandler->GetMajorType(&MajorType));
				_Z4(atlTraceGeneral, 4, _T("bSelect %d, nStreamIdentifier %d, MajorType %s\n"), bSelect, nStreamIdentifier, MF::FormatKey(MajorType));
				if(MajorType != MFMediaType_Audio)
					continue;
				DWORD nMediaTypeCount = 0;
				__C(pMediaTypeHandler->GetMediaTypeCount(&nMediaTypeCount));
				for(DWORD nMediaTypeIndex = 0; nMediaTypeIndex < nMediaTypeCount; nMediaTypeIndex++)
				{
					MF::CMediaType pMediaType;
					__C(pMediaTypeHandler->GetMediaTypeByIndex(nMediaTypeIndex, &pMediaType));
					pMediaType.Trace();
					m_nStreamIndex = nStreamIndex;
					m_pMediaType = pMediaType;
					return TRUE;
				}
			}
			return FALSE;
		}
	};

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
			CModule::CCommandLineArguments Arguments(pszCommandLine);
			CModule::CCommandLineArguments::CArgument Argument;
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
						_T("\t") _T("help - displays syntax") _T("\n")
						_T("\t") _T("video <identifier> - use device with specific identifier for H.264 video capture") _T("\n"),
						_T("\t") _T("bitrate <bitrate> - override default video encoding bitrate") _T("\n"),
						_T("\t") _T("audio <identifier> - use device with specific identifier for audio capture") _T("\n"),
						_T("\t") _T("duration <duration> - use specific recording duration, in seconds, default is 10 seconds") _T("\n"),
						FindFileName(GetModulePath()));
					return false;
				} else
				#pragma endregion
				#pragma region video
				if(Argument.m_sValue.CompareNoCase(_T("video")) == 0)
				{
					CModule::CCommandLineArguments::CArgument IdentifierArgument;
					__D(Arguments.Next(IdentifierArgument), E_UNNAMED);
					__D(!IdentifierArgument.m_bSwitch, E_UNNAMED);
					m_sVideoIdentifier = IdentifierArgument.m_sValue;
				} else
				#pragma endregion
				#pragma region bitrate
				if(Argument.m_sValue.CompareNoCase(_T("bitrate")) == 0)
				{
					CModule::CCommandLineArguments::CArgument ValueArgument;
					__D(Arguments.Next(ValueArgument), E_UNNAMED);
					__D(!ValueArgument.m_bSwitch, E_UNNAMED);
					INT nBitrate;
					__D(AtlStringToInteger(ValueArgument.m_sValue, nBitrate), E_UNNAMED);
					m_nBitrate = (UINT32) nBitrate;
				} else
				#pragma endregion
				#pragma region audio
				if(Argument.m_sValue.CompareNoCase(_T("audio")) == 0)
				{
					CModule::CCommandLineArguments::CArgument IdentifierArgument;
					__D(Arguments.Next(IdentifierArgument), E_UNNAMED);
					__D(!IdentifierArgument.m_bSwitch, E_UNNAMED);
					m_sAudioIdentifier = IdentifierArgument.m_sValue;
				} else
				#pragma endregion
				#pragma region duration
				if(Argument.m_sValue.CompareNoCase(_T("duration")) == 0)
				{
					CModule::CCommandLineArguments::CArgument ValueArgument;
					__D(Arguments.Next(ValueArgument), E_UNNAMED);
					__D(!ValueArgument.m_bSwitch, E_UNNAMED);
					INT nDuration;
					__D(AtlStringToInteger(ValueArgument.m_sValue, nDuration), E_UNNAMED);
					m_nDuration = (UINT) nDuration;
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
	VOID EnumerateDevices()
	{
		_tprintf(_T("# Devices\n\n"));
		{
			_tprintf(_T("## Video\n\n"));
			MF::CAttributes pAttributes;
			pAttributes.Create(1);
			__C(pAttributes->SetGUID(MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE, MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_VIDCAP_GUID));
			MF::CActivateArray ActivateArray;
			ActivateArray.EnumerateDeviceSources(pAttributes);
			if(!ActivateArray.IsEmpty())
			{
				for(auto&& pActivate: ActivateArray)
				{
					pActivate.Trace();
					const CString sIdentifier = pActivate.GetString(MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_VIDCAP_SYMBOLIC_LINK);
					const CString sFriendlyName = pActivate.GetString(MF_DEVSOURCE_ATTRIBUTE_FRIENDLY_NAME);
					_tprintf(_T(" * %s\n"), sFriendlyName);
					_tprintf(_T("  * Identifier: %s\n"), sIdentifier);
				}
				_tprintf(_T("\n"));
			}
		}
		{
			_tprintf(_T("## Audio\n\n"));
			MF::CAttributes pAttributes;
			pAttributes.Create(1);
			__C(pAttributes->SetGUID(MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE, MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_AUDCAP_GUID));
			MF::CActivateArray ActivateArray;
			ActivateArray.EnumerateDeviceSources(pAttributes);
			if(!ActivateArray.IsEmpty())
			{
				for(auto&& pActivate: ActivateArray)
				{
					pActivate.Trace();
					const CString sIdentifier = pActivate.GetString(MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_AUDCAP_ENDPOINT_ID);
					const CString sFriendlyName = pActivate.GetString(MF_DEVSOURCE_ATTRIBUTE_FRIENDLY_NAME);
					_tprintf(_T(" * %s\n"), sFriendlyName);
					_tprintf(_T("  * Identifier: %s\n"), sIdentifier);
				}
				_tprintf(_T("\n"));
			}
		}
	}
	static CPath CreateOutputPath()
	{
		CPath sPath = GetModulePath();
		sPath.RemoveExtension();
		SYSTEMTIME Time;
		GetLocalTime(&Time);
		return (LPCTSTR) AtlFormatString(_T("%s - %04d%02d%02d-%02d%02d%02d.mp4"), sPath, Time.wYear, Time.wMonth, Time.wDay, Time.wHour, Time.wMinute, Time.wSecond);
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
	VOID RunMessageLoop()
	{
		MF::CStartup Startup;
		// SUGG: Implement video only and audio only?
		if(m_sVideoIdentifier.IsEmpty() || m_sAudioIdentifier.IsEmpty())
		{
			EnumerateDevices();
			return;
		}
		CSessionT<CVideoMediaType, CAudioMediaType> Session;
		Session.Initialize(m_sVideoIdentifier, m_nBitrate, m_sAudioIdentifier);
		_tprintf(_T("Path: %s\n"), Session.m_sPath);
		CSessionT<CSecondaryVideoMediaType, CSecondaryAudioMediaType> SecondarySession;
//		SecondarySession.Initialize(
//			_T("\\\\?\\usb#vid_1908&pid_2311&mi_00#6&3694d24c&1&0000#{e5323777-f976-4f5b-9b55-b94699c46e44}\\global"), 0, // USB2.0 PC CAMERA
//			_T("{0.0.1.00000000}.{d7e99b5b-4d9b-437f-9f72-7adb7cdb2e1f}"), // Microphone (Realtek High Definition Audio)
//			AtlFormatString(_T("%s - Secondary.mp4"), Session.m_sPath));
		if(SecondarySession.m_pSinkWriter)
			_tprintf(_T("Secondary Path: %s\n"), SecondarySession.m_sPath);
		__C(Session.m_pSinkWriter->BeginWriting());
		if(SecondarySession.m_pSinkWriter)
			__C(SecondarySession.m_pSinkWriter->BeginWriting());
		_ATLTRY
		{
			__E(g_TerminationEvent.Create(NULL, TRUE, FALSE, NULL));
			__E(SetConsoleCtrlHandler(&CModule::HandlerRoutine, TRUE));
			_tprintf(_T("Starting capture, press Ctrl+Break to terminate\n"));
			Session.m_pSourceReaderCallback->ReadNextSample(Session.m_VideoMediaType.m_nStreamIndex);
			Session.m_pSourceReaderCallback->ReadNextSample(Session.m_AudioMediaType.m_nStreamIndex);
			if(SecondarySession.m_pSourceReaderCallback)
			{
				SecondarySession.m_pSourceReaderCallback->ReadNextSample(SecondarySession.m_VideoMediaType.m_nStreamIndex);
				SecondarySession.m_pSourceReaderCallback->ReadNextSample(SecondarySession.m_AudioMediaType.m_nStreamIndex);
			}
			const HANDLE phObjects[] = 
			{ 
				g_TerminationEvent, 
				Session.GetSampleAvailabilityEvent(),
				SecondarySession.GetSampleAvailabilityEvent(),
			};
			DWORD nObjectCount = DIM(phObjects);
			if(!phObjects[nObjectCount - 1])
				nObjectCount--;
			BOOL bSynchronized = FALSE;
			for(; ; )
			{
				static const ULONG g_nTimeoutTime = 10 * 1000; // 10 seconds
				const DWORD nWaitResult = WaitForMultipleObjects(nObjectCount, phObjects, FALSE, g_nTimeoutTime);
				_Z5_WAITRESULT(nWaitResult);
				if(nWaitResult == WAIT_OBJECT_0 + 0) // g_TerminationEvent
				{
					_tprintf(_T("Finalizing output file...\n"));
					break;
				}
				__D(nWaitResult - WAIT_OBJECT_0 < DIM(phObjects), E_UNNAMED); // GetSampleAvailabilityEvent()
				//if(!bSynchronized)
				//{
				//	LONGLONG nTime;
				//	const SIZE_T nCount = Session.m_pSourceReaderCallback->GetLastListSampleTime(Session.m_VideoMediaType.m_nStreamIndex, nTime);
				//	LONGLONG nSecondaryTime;
				//	const SIZE_T nSecondaryCount = SecondarySession.m_pSourceReaderCallback->GetLastListSampleTime(SecondarySession.m_VideoMediaType.m_nStreamIndex, nSecondaryTime);
				//	// NOTE: Basically we can sync them with any (first) frame but cameras tend to "warm up" (focus etc.) on start, so let's just skip a few...
				//	if(nCount > 7 && nSecondaryCount > 7)
				//	{
				//		LONGLONG nMaximalTime = max(nTime, nSecondaryTime);
				//		_tprintf(_T("Cameras synchronized, starting synchronized capture\n"));
				//		Session.m_pSourceReaderCallback->ResetVideoCleanPointAvailable(Session.m_VideoMediaType.m_nStreamIndex, nMaximalTime - nTime);
				//		SecondarySession.m_pSourceReaderCallback->ResetVideoCleanPointAvailable(SecondarySession.m_VideoMediaType.m_nStreamIndex, nMaximalTime - nSecondaryTime);
				//		bSynchronized = TRUE;
				//	}
				//	// NOTE: It's okay that we did not start yet, but we need to reset the event to avoid false wake-ups
				//	if(!bSynchronized)
				//	{
				//		_W(reinterpret_cast<CEvent&>(const_cast<HANDLE&>(phObjects[nWaitResult - WAIT_OBJECT_0])).Reset());
				//		continue;
				//	}
				//}
				if(nWaitResult == WAIT_OBJECT_0 + 1)
					Session.m_pSourceReaderCallback->WriteSamples(Session.m_pSinkWriter, Session.m_StreamIndexMap);
				if(nWaitResult == WAIT_OBJECT_0 + 2)
					SecondarySession.m_pSourceReaderCallback->WriteSamples(SecondarySession.m_pSinkWriter, SecondarySession.m_StreamIndexMap);
				// SUGG: Check both Session and SecondarySession
				if(m_nDuration)
					if(Session.m_pSourceReaderCallback->GetLastSampleTime() >= m_nDuration * 1000 * 10000i64)
						break;
			}
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
			_tprintf(_T("An exception has been caught during processing, abnormal file finalization...\n"));
		}
		Session.m_pSourceReaderCallback->Terminate();
		if(SecondarySession.m_pSourceReaderCallback)
			SecondarySession.m_pSourceReaderCallback->Terminate();
		// NOTE: This inernally calls media source Shutdown
		const HRESULT nFinalizeResult = Session.m_pSinkWriter->Finalize();
		_Z45_MFHRESULT(nFinalizeResult);
		_A(SUCCEEDED(nFinalizeResult));
		if(SecondarySession.m_pSinkWriter)
		{
			const HRESULT nSecondaryFinalizeResult = SecondarySession.m_pSinkWriter->Finalize();
			_Z45_MFHRESULT(nSecondaryFinalizeResult);
			_A(SUCCEEDED(nSecondaryFinalizeResult));
		}
	}
};

__declspec(selectany) CEvent CModule::g_TerminationEvent;

/*

video "\\?\usb#vid_046d&pid_0843&mi_00#6&2314864d&0&0000#{e5323777-f976-4f5b-9b55-b94699c46e44}\global" bitrate 1024000 audio "{0.0.1.00000000}.{d7e99b5b-4d9b-437f-9f72-7adb7cdb2e1f}"
video "\\?\usb#vid_046d&pid_0843&mi_00#6&2314864d&0&0000#{e5323777-f976-4f5b-9b55-b94699c46e44}\global" bitrate 2048000 audio "{0.0.1.00000000}.{a8bbaa1c-713d-4d6f-bf71-ae173bcc6dfc}" duration 15

*/