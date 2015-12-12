////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2015
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

public:
	BOOL m_bSyntax;
	BOOL m_bRepresentation;
	BOOL m_bTable;

public:
// CModule
	CModule()
	{
		AtlTraceSetDefaultSettings();
		_Z4_THIS();
		_W(CExceptionFilter::Initialize());
		m_bSyntax = FALSE;
		m_bRepresentation = FALSE;
		m_bTable = FALSE;
	}
	~CModule()
	{
		_Z4_THIS();
		CExceptionFilter::Terminate();
	}
	VOID Syntax()
	{
		_tprintf(
			_T("Syntax: PrintVideoCaptureSourceMediaTypes [options]") _T("\n")
			_T("Options: ") _T("\n")
			_T("  /r - print representation data") _T("\n")
			_T("  /t - print TSV tables") _T("\n")
			_T("\n"));
	}
	VOID ParseCommandLineEx(SIZE_T argc, TCHAR* argv[])
	{
		CCommandLineArguments Arguments(argc, argv);
		CCommandLineArguments::CArgument Argument;
		while(Arguments.Next(Argument))
		{
			if(Argument.m_bSwitch)
			{
				if(Argument.m_sSwitchName.CompareNoCase(_T("?")) == 0)
				{
					m_bSyntax = TRUE;
				} else
				if(Argument.m_sSwitchName.CompareNoCase(_T("r")) == 0)
				{
					m_bRepresentation = TRUE;
				} else
				if(Argument.m_sSwitchName.CompareNoCase(_T("t")) == 0)
				{
					m_bTable = TRUE;
				} else
					_tprintf(_T("Warning, unrecognized switch: %s\n"), Argument.m_sSwitchName);
				continue;
			}
			//if(!_tcslen(m_sInputPath))
			//{
			//	m_sInputPath = (LPCTSTR) Argument.m_sValue;
			//} else if(!_tcslen(m_sOutputDirectory))
			//{
			//	m_sOutputDirectory = (LPCTSTR) Argument.m_sValue;
			//} else
				__C(E_INVALIDARG);
		}
		//__D(_tcslen(m_sInputPath), E_INVALIDARG);
	}
	HRESULT PreMessageLoop(INT nShowCommand)
	{
		const HRESULT nResult = __super::PreMessageLoop(nShowCommand);
		return SUCCEEDED(nResult) ? S_OK : nResult;
	}
	static CString FormatMediaSourceFlags(DWORD nValue)
	{
		#pragma region Map
		static const CFlagNameT<DWORD> g_pMap[] = 
		{
			#define A(x) { x, #x },
			A(MFMEDIASOURCE_IS_LIVE)
			A(MFMEDIASOURCE_CAN_SEEK)
			A(MFMEDIASOURCE_CAN_PAUSE)
			A(MFMEDIASOURCE_HAS_SLOW_SEEK)
			A(MFMEDIASOURCE_HAS_MULTIPLE_PRESENTATIONS)
			A(MFMEDIASOURCE_CAN_SKIPFORWARD)
			A(MFMEDIASOURCE_CAN_SKIPBACKWARD)
			A(MFMEDIASOURCE_DOES_NOT_USE_NETWORK)
			#undef A
		};
		#pragma endregion 
		return FormatFlagsT(g_pMap, nValue);
	}
	CString FormatAttribute(const GUID& Key, MF::CPropVariant& vValue)
	{
		CString sValue = vValue.Format();
		CString sComment;
		#pragma region Per Type Update
		switch(vValue.vt)
		{
		case VT_LPWSTR:
			{
				GUID IdentifierValue;
				if(_PersistHelper::ClassIdentifierFromString(vValue.pwszVal, IdentifierValue))
				{
					const CString sKeyValue = MF::FormatKey(IdentifierValue);
					if(!sKeyValue.IsEmpty())
						sValue = sKeyValue;
				}
			}
			break;
		case VT_CLSID:
			{
				const CString sKeyValue = MF::FormatKey(*vValue.puuid);
				if(!sKeyValue.IsEmpty())
					sValue = sKeyValue;
			}
			break;
		case VT_VECTOR | VT_UI1: // MF_ATTRIBUTE_BLOB
			sValue = AtlFormatData(vValue.blob.pBlobData, vValue.blob.cbSize);
			break;
		}
		#pragma endregion
		#pragma region Per Key Comment
		if(Key == MF_MT_FRAME_SIZE)
		{
			UINT32 nWidth, nHeight;
			//if(SUCCEEDED(MFGetAttributeSize(pAttributes, Key, &nWidth, &nHeight)))
			//	sComment = AtlFormatString(_T("Width %d, Height %d"), nWidth, nHeight);
			_A(vValue.vt == VT_UI8);
			nWidth = (UINT32) (vValue.uhVal.QuadPart >> 32);
			nHeight = (UINT32) (vValue.uhVal.QuadPart);
			sComment = AtlFormatString(_T("Width %d, Height %d"), nWidth, nHeight);
		}
		if(Key == MF_MT_FRAME_RATE || Key == MF_MT_FRAME_RATE_RANGE_MIN || Key == MF_MT_FRAME_RATE_RANGE_MAX || Key == MF_MT_PIXEL_ASPECT_RATIO)
		{
			UINT32 nNumerator, nDenominator;
			//if(SUCCEEDED(MFGetAttributeRatio(pAttributes, Key, &nNumerator, &nDenominator)))
			//	sComment = AtlFormatString(_T("Numerator %d, Denominator %d"), nNumerator, nDenominator);
			_A(vValue.vt == VT_UI8);
			nNumerator = (UINT32) (vValue.uhVal.QuadPart >> 32);
			nDenominator = (UINT32) (vValue.uhVal.QuadPart);
			sComment = AtlFormatString(_T("Numerator %d, Denominator %d"), nNumerator, nDenominator);
		}
		if(Key == MF_MT_INTERLACE_MODE)
		{
			_A(vValue.vt == VT_UI4);
			static const CEnumerationNameT<ULONG> g_pMap[] = // MFVideoInterlaceMode
			{
				#define A(x) { x, #x },
				A(MFVideoInterlace_Unknown)
				A(MFVideoInterlace_Progressive)
				A(MFVideoInterlace_FieldInterleavedUpperFirst)
				A(MFVideoInterlace_FieldInterleavedLowerFirst)
				A(MFVideoInterlace_FieldSingleUpper)
				A(MFVideoInterlace_FieldSingleLower)
				A(MFVideoInterlace_MixedInterlaceOrProgressive)
				#undef A
			};
			sComment = FormatEnumerationT(g_pMap, vValue.ulVal);
		}
		#pragma region H264
		// NOTE: MF_MT_VIDEO_PROFILE, MF_MT_VIDEO_LEVEL are interpreted for H.264 video
		if(Key == MF_MT_VIDEO_PROFILE)
		{
			_A(vValue.vt == VT_UI4);
			static const CEnumerationNameT<ULONG> g_pMap[] = // eAVEncH264VProfile
			{
				#define A(x) { x, #x },
				A(eAVEncH264VProfile_unknown)
				A(eAVEncH264VProfile_Simple)
				A(eAVEncH264VProfile_Base)
				A(eAVEncH264VProfile_Main)
				A(eAVEncH264VProfile_High)
				A(eAVEncH264VProfile_422)
				A(eAVEncH264VProfile_High10)
				A(eAVEncH264VProfile_444)
				A(eAVEncH264VProfile_Extended)
				// UVC 1.2 H.264 extension
				A(eAVEncH264VProfile_ScalableBase)
				A(eAVEncH264VProfile_ScalableHigh)
				A(eAVEncH264VProfile_MultiviewHigh)
				A(eAVEncH264VProfile_StereoHigh)
				A(eAVEncH264VProfile_ConstrainedBase)
				A(eAVEncH264VProfile_UCConstrainedHigh)
				A(eAVEncH264VProfile_UCScalableConstrainedBase)
				A(eAVEncH264VProfile_UCScalableConstrainedHigh)
				#undef A
			};
			sComment = FormatEnumerationT(g_pMap, vValue.ulVal);
		}
		if(Key == MF_MT_VIDEO_LEVEL)
		{
			_A(vValue.vt == VT_UI4);
			static const CEnumerationNameT<ULONG> g_pMap[] = // eAVEncH264VLevel
			{
				#define A(x) { x, #x },
				A(eAVEncH264VLevel1)
				A(eAVEncH264VLevel1_b)
				A(eAVEncH264VLevel1_1)
				A(eAVEncH264VLevel1_2)
				A(eAVEncH264VLevel1_3)
				A(eAVEncH264VLevel2)
				A(eAVEncH264VLevel2_1)
				A(eAVEncH264VLevel2_2)
				A(eAVEncH264VLevel3)
				A(eAVEncH264VLevel3_1)
				A(eAVEncH264VLevel3_2)
				A(eAVEncH264VLevel4)
				A(eAVEncH264VLevel4_1)
				A(eAVEncH264VLevel4_2)
				A(eAVEncH264VLevel5)
				A(eAVEncH264VLevel5_1)
				A(eAVEncH264VLevel5_2)
				#undef A
			};
			sComment = FormatEnumerationT(g_pMap, vValue.ulVal);
		}
		// TODO: MF_MT_H264_xxx, see KS_H264VIDEOINFO structure https://msdn.microsoft.com/en-us/library/windows/desktop/hh464008
		/*
			* MF_MT_H264_CAPABILITIES: 40 (Type VT_UI4) bmCapabilities
			* MF_MT_H264_SVC_CAPABILITIES: 1 (Type VT_UI4) bmSVCCapabilities 
			* MF_MT_H264_SUPPORTED_USAGES: 3 (Type VT_UI4) bmSupportedUsages
			* MF_MT_H264_SUPPORTED_RATE_CONTROL_MODES: 15 (Type VT_UI4) bmSupportedRateControlModes
			* MF_MT_H264_SUPPORTED_SYNC_FRAME_TYPES: 10 (Type VT_UI4) bmSupportedSyncFrameTypes
			* MF_MT_H264_SUPPORTED_SLICE_MODES: 14 (Type VT_UI4) bmSupportedSliceModes
			* MF_MT_H264_RESOLUTION_SCALING: 3 (Type VT_UI4)
			* MF_MT_H264_MAX_CODEC_CONFIG_DELAY: 1 (Type VT_UI4) bMaxCodecConfigDelay
			* MF_MT_H264_MAX_MB_PER_SEC: F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
		*/
		#pragma endregion
		#pragma endregion
		CString sText = sValue;
		if(!sComment.IsEmpty())
			sText.AppendFormat(_T(" // %s"), sComment);
		return sText;
	}
	VOID PrintAttributes(const MF::CAttributes& pAttributes)
	{
		UINT32 nCount = 0;
		__C(pAttributes->GetCount(&nCount));
		_tprintf(_T(" * %d Attributes\n"), nCount);
		for(UINT32 nIndex = 0; nIndex < nCount; nIndex++)
		{
			GUID Key;
			MF::CPropVariant vValue;
			__C(pAttributes->GetItemByIndex(nIndex, &Key, &vValue));
			_tprintf(_T("  * %s: %s\n"), MF::FormatKey(Key), FormatAttribute(Key, vValue));
		}
		_tprintf(_T("\n"));
	}
	VOID PrintAttributes(IMFAttributes* pAttributes)
	{
		PrintAttributes(reinterpret_cast<const MF::CAttributes&>(pAttributes));
	}
	static INT_PTR CompareIdentifiers(const GUID& Element1, const GUID& Element2, INT)
	{
		return (INT_PTR) (NUINT32) Element1.Data1 - (INT_PTR) (NUINT32) Element2.Data1;
	}
	static INT GetKeyMerit(const GUID& Key)
	{
		static const struct { const GUID Key; INT nMerit; } g_pMap[] = 
		{
			{ MF_MT_MAJOR_TYPE, 100 },
			{ MF_MT_SUBTYPE, 99 },
			{ MF_MT_AM_FORMAT_TYPE, 98 },
			{ MF_MT_ALL_SAMPLES_INDEPENDENT, 89 },
			{ MF_MT_COMPRESSED, 88 },
			{ MF_MT_VIDEO_PROFILE, 79 },
			{ MF_MT_VIDEO_LEVEL, 78 },
			{ MF_MT_FRAME_SIZE, 69 },
			{ MF_MT_DEFAULT_STRIDE, 68 },
			{ MF_MT_PIXEL_ASPECT_RATIO, 67 },
			{ MF_MT_INTERLACE_MODE, 66 },
			{ MF_MT_FRAME_RATE, 59 },
			{ MF_MT_FRAME_RATE_RANGE_MIN, 58 },
			{ MF_MT_FRAME_RATE_RANGE_MAX, 57 },
			{ MF_MT_FIXED_SIZE_SAMPLES, 49 },
			{ MF_MT_SAMPLE_SIZE, 48 },
		};
		for(auto&& Item: g_pMap)
			if(Item.Key == Key)
				return Item.nMerit;
		return 0;
	}
	static INT_PTR CompareIdentifierFormats(const GUID& Element1, const GUID& Element2, INT)
	{
		const INT nMerit = GetKeyMerit(Element1) - GetKeyMerit(Element2);
		if(nMerit)
			return -nMerit;
		const CString sFormat1 = MF::FormatKey(Element1);
		const CString sFormat2 = MF::FormatKey(Element2);
		return _tcsicmp(sFormat1, sFormat2);
	}
	static INT_PTR CompareIdentifierFormats(const GUID& Element1, const GUID& Element2, const CRoArrayT<GUID>* pNotPriorityElementArray)
	{
		if(pNotPriorityElementArray)
		{
			const INT nPriority1 = pNotPriorityElementArray->FindFirst(Element1) ? -1 : 0;
			const INT nPriority2 = pNotPriorityElementArray->FindFirst(Element2) ? -1 : 0;
			const INT nPriority = nPriority1 - nPriority2;
			if(nPriority)
				return -nPriority;
		}
		const INT nMerit = GetKeyMerit(Element1) - GetKeyMerit(Element2);
		if(nMerit)
			return -nMerit;
		const CString sFormat1 = MF::FormatKey(Element1);
		const CString sFormat2 = MF::FormatKey(Element2);
		return _tcsicmp(sFormat1, sFormat2);
	}
	VOID ProcessSource(const MF::CActivate& pActivate)
	{
		_A(pActivate);
		const CComPtr<IMFMediaSource> pMediaSource = pActivate.Activate<IMFMediaSource>();
		_ATLTRY
		{
			#pragma region Media Source Properties (Characteristics, Streams)
			DWORD nCharacteristics;
			__C(pMediaSource->GetCharacteristics(&nCharacteristics));
			_tprintf(_T(" * Characteristics: %s\n"), FormatMediaSourceFlags(nCharacteristics));
			DWORD nStreamCount = 0;
			_ATLTRY
			{
				MF::CPresentationDescriptor pPresentationDescriptor;
				__C(pMediaSource->CreatePresentationDescriptor(&pPresentationDescriptor));
				pPresentationDescriptor.Trace();
				__C(pPresentationDescriptor->GetStreamDescriptorCount(&nStreamCount));
				for(DWORD nStreamIndex = 0; nStreamIndex < nStreamCount; nStreamIndex++)
					_ATLTRY
					{
						CRoArrayT<CString> Array;
						BOOL bSelect;
						MF::CStreamDescriptor pStreamDescriptor;
						__C(pPresentationDescriptor->GetStreamDescriptorByIndex(nStreamIndex, &bSelect, &pStreamDescriptor));
						if(bSelect)
							Array.Add(_T("Default Selected"));
						pStreamDescriptor.Trace();
						DWORD nStreamIdentifier;
						__C(pStreamDescriptor->GetStreamIdentifier(&nStreamIdentifier));
						Array.Add(AtlFormatString(_T("Identifier 0x%X"), nStreamIdentifier));
						CComPtr<IMFMediaTypeHandler> pMediaTypeHandler;
						__C(pStreamDescriptor->GetMediaTypeHandler(&pMediaTypeHandler));
						GUID MajorType;
						__C(pMediaTypeHandler->GetMajorType(&MajorType));
						Array.Add(AtlFormatString(_T("Major Type %s"), MF::FormatKey(MajorType)));
						DWORD nMediaTypeCount = 0;
						__C(pMediaTypeHandler->GetMediaTypeCount(&nMediaTypeCount));
						if(nMediaTypeCount)
							Array.Add(AtlFormatString(_T("%d Media Types"), nMediaTypeCount));
						#if _DEVELOPMENT && FALSE
							MF::CMediaType pMediaType;
							__C(pMediaTypeHandler->GetMediaTypeByIndex(0, &pMediaType));
							pMediaType.Trace();
						#endif // _DEVELOPMENT
						//if(MajorType == MFMediaType_Video)
						//{
							if(!bSelect)
								__C(pPresentationDescriptor->SelectStream(nStreamIndex));
						//} else
						//{
						//	if(bSelect)
						//		__C(pPresentationDescriptor->DeselectStream(nStreamIndex));
						//}
						_tprintf(_T(" * Stream %d: %s\n"), nStreamIndex, _StringHelper::Join(Array, _T(", ")));
					}
					_ATLCATCHALL()
					{
						_Z_EXCEPTION();
					}
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
			_tprintf(_T("\n"));
			#pragma endregion 
			MF::CAttributes pAttributes;
			pAttributes.Create(2);
			__C(pAttributes->SetUINT32(MF_READWRITE_DISABLE_CONVERTERS, TRUE));
			//__C(pAttributes->SetUnknown(MF_SOURCE_READER_ASYNC_CALLBACK, this));
			CComPtr<IMFSourceReader> pSourceReader;
			__C(MFCreateSourceReaderFromMediaSource(pMediaSource, pAttributes, &pSourceReader));
			CRoMapT<GUID, CRoAssignableArrayT<CRoArrayT<CRoAssignableMapT<CRoMapT<GUID, MF::CPropVariant>>>>> Map;
			for(DWORD nStreamIndex = 0; ; nStreamIndex++) // MF_SOURCE_READER_FIRST_VIDEO_STREAM
			{
				if(nStreamIndex >= nStreamCount)
					break;
				_tprintf(_T("### Stream %d\n"), nStreamIndex);
				_tprintf(_T("\n"));
				HRESULT nGetNativeMediaTypeResult = S_FALSE;
				for(DWORD nMediaTypeIndex = 0; ; nMediaTypeIndex++)
				{
					MF::CMediaType pMediaType;
					nGetNativeMediaTypeResult = pSourceReader->GetNativeMediaType(nStreamIndex, nMediaTypeIndex, &pMediaType);
					_Z45_MFHRESULT(nGetNativeMediaTypeResult);
					if(nGetNativeMediaTypeResult == MF_E_INVALIDSTREAMNUMBER || nGetNativeMediaTypeResult == MF_E_NO_MORE_TYPES)
						break;
					_ATLTRY
					{
						//pMediaType.Trace();
						GUID MajorType;
						__C(pMediaType->GetMajorType(&MajorType));
						BOOL bCompressedFormat;
						__C(pMediaType->IsCompressedFormat(&bCompressedFormat));
						_tprintf(_T("#### Media Type %d\n"), nMediaTypeIndex);
						_tprintf(_T("\n"));
						_tprintf(_T(" * Major Type: %s\n"), MF::FormatKey(MajorType));
						_tprintf(_T(" * Compressed: %d\n"), bCompressedFormat);
						PrintAttributes(pMediaType);
						#pragma region Representation
						if(m_bRepresentation)
						{
							MF::CMediaType::CRepresentationT<AM_MEDIA_TYPE> pRepresentationMediaType(pMediaType);
							_tprintf(_T("##### Representation Media Type\n"));
							_tprintf(_T("\n"));
							_tprintf(_T(" * AM_MEDIA_TYPE: %s\n"), AtlFormatData((const BYTE*) (const AM_MEDIA_TYPE*) pRepresentationMediaType, sizeof (AM_MEDIA_TYPE)));
							if(pRepresentationMediaType->pbFormat && pRepresentationMediaType->cbFormat)
								_tprintf(_T(" * Format: %s\n"), AtlFormatData(pRepresentationMediaType->pbFormat, pRepresentationMediaType->cbFormat));
							_tprintf(_T("\n"));
						}
						#pragma endregion 
						#pragma region Map
						if(m_bTable && MajorType == MFMediaType_Video)
							_ATLTRY
							{
								const GUID Subtype = pMediaType.GetGUID(MF_MT_SUBTYPE);
								POSITION SubtypePosition = Map.Lookup(Subtype);
								if(!SubtypePosition)
									SubtypePosition = Map.SetAt(Subtype, CRoAssignableArrayT<CRoArrayT<CRoAssignableMapT<CRoMapT<GUID, MF::CPropVariant>>>>());
								CRoAssignableMapT<CRoMapT<GUID, MF::CPropVariant>> AttributeMap;
								UINT32 nCount = 0;
								__C(pMediaType->GetCount(&nCount));
								for(UINT32 nIndex = 0; nIndex < nCount; nIndex++)
								{
									GUID Key;
									MF::CPropVariant vValue;
									__C(pMediaType->GetItemByIndex(nIndex, &Key, &vValue));
									_W(AttributeMap.SetAt(Key, vValue));
								}
								Map.GetValueAt(SubtypePosition).Add(AttributeMap);
							}
							_ATLCATCHALL()
							{
								_Z_EXCEPTION();
							}
						#pragma endregion
					}
					_ATLCATCHALL()
					{
						_Z_EXCEPTION();
					}
				}
				if(nGetNativeMediaTypeResult == MF_E_INVALIDSTREAMNUMBER)
					break;
			}
			#pragma region Map
			if(m_bTable && !Map.IsEmpty())
			{
				_tprintf(_T("### Media Type Tables (TSV)\n"));
				_tprintf(_T("\n"));
				CRoArrayT<GUID> SubtypeArray;
				for(auto&& Key: Map.GetKeys())
					SubtypeArray.Add(Key);
				SubtypeArray.Sort<INT>(&CModule::CompareIdentifierFormats, 0);
				for(auto&& Subtype: SubtypeArray)
				{
					CRoAssignableArrayT<CRoArrayT<CRoAssignableMapT<CRoMapT<GUID, MF::CPropVariant>>>>& Array = Map[Subtype];
					if(Array.IsEmpty())
						continue;
					_tprintf(_T("#### %s\n"), MF::FormatKey(Subtype));
					_tprintf(_T("\n"));
					CRoArrayT<GUID> AttributeKeyArray;
					for(auto&& Item: Array)
						for(auto&& Key: Item.GetKeys())
							AttributeKeyArray.AddNotFound(Key);
					AttributeKeyArray.Sort<INT>(&CModule::CompareIdentifierFormats, 0);
					#pragma region Fixed Value
					CRoArrayT<GUID> NotPriorityAttributeKeyArray;
					if(!AttributeKeyArray.IsEmpty())
					{
						UINT nCount = 0;
						for(auto&& AttributeKey: AttributeKeyArray)
						{
							BOOL bFixed = TRUE;
							CRoArrayT<MF::CPropVariant> ValueArray;
							for(auto&& Item: Array)
							{
								const POSITION Position = Item.Lookup(AttributeKey);
								if(!Position)
								{
									bFixed = FALSE;
									break;
								}
								const MF::CPropVariant& vValue = Item.GetValueAt(Position);
								if(ValueArray.FindFirst(vValue))
									continue;
								if(ValueArray.GetCount() >= 3)
								{
									bFixed = FALSE;
									break;
								}
								ValueArray.Add(vValue);
							}
							if(!bFixed || ValueArray.IsEmpty())
								continue;
							if(ValueArray.GetCount() == 1)
								NotPriorityAttributeKeyArray.Add(AttributeKey);
							CRoArrayT<CString> Array;
							for(auto&& vValue: ValueArray)
								Array.Add(FormatAttribute(AttributeKey, vValue));
							_tprintf(_T(" * %s: %s\n"), MF::FormatKey(AttributeKey), _StringHelper::Join(Array, _T(", ")));
							nCount++;
						}
						if(nCount)
							_tprintf(_T("\n"));
					}
					if(!NotPriorityAttributeKeyArray.IsEmpty())
						AttributeKeyArray.Sort<const CRoArrayT<GUID>*>(&CModule::CompareIdentifierFormats, &NotPriorityAttributeKeyArray);
					#pragma endregion 
					#pragma region Table
					{
						CRoArrayT<CString> ValueArray;
						for(auto&& AttributeKey: AttributeKeyArray)
							ValueArray.Add(MF::FormatKey(AttributeKey));
						_tprintf(_T("\t%s\n"), _StringHelper::Join(ValueArray, _T("\t")));
					}
					for(auto&& Item: Array)
					{
						CRoArrayT<CString> ValueArray;
						for(auto&& AttributeKey: AttributeKeyArray)
						{
							CString sValue;
							const POSITION Position = Item.Lookup(AttributeKey);
							if(Position)
								sValue = FormatAttribute(AttributeKey, Item.GetValueAt(Position));
							ValueArray.Add(sValue);
						}
						_tprintf(_T("\t%s\n"), _StringHelper::Join(ValueArray, _T("\t")));
					}
					_tprintf(_T("\n"));
					#pragma endregion 
				}
			}
			#pragma endregion
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
		}
		//__C(pMediaSource->Shutdown());
	}
	VOID RunMessageLoop()
	{
		if(m_bSyntax)
		{
			Syntax();
			return;
		}
		MF::CStartup Startup;
		MF::CAttributes pAttributes;
		pAttributes.Create(1);
		__C(pAttributes->SetGUID(MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE, MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_VIDCAP_GUID));
		MF::CActivateArray ActivateArray;
		// NOTE: The call includes internal going through registry under 
		//         HKCU\Software\Classes\MediaFoundation\Transforms\Categories\<Category>
		//         HKCR\MediaFoundation\Transforms\Categories\<Category>
		//         HKLM\System\CurrentControlSet\Control\DeviceClasses\<Category>
		//       Where categories are CLSID_VideoInputDeviceCategory, KSCATEGORY_VIDEO_CAMERA
		//       Further references:
		//         HKEY_CLASSES_ROOT\CLSID\{17CCA71B-ECD7-11D0-B908-00A0C9223196} -- Generic WDM Filter Proxy (ksproxy.ax)
		ActivateArray.EnumerateDeviceSources(pAttributes);
		_tprintf(_T("# MFEnumDeviceSources Sources\n"));
		_tprintf(_T("\n"));
		UINT nActivateIndex = 0;
		for(auto&& pActivate: ActivateArray)
		{
			#pragma region Name
			CString sName = AtlFormatString(_T("%d"), nActivateIndex++);
			_ATLTRY
			{
				WCHAR pszFriendlyName[256] = { 0 };
				__C(pActivate->GetString(MF_DEVSOURCE_ATTRIBUTE_FRIENDLY_NAME, pszFriendlyName, DIM(pszFriendlyName), NULL));
				CString sFriendlyName(pszFriendlyName);
				if(!sFriendlyName.IsEmpty())
					sName.AppendFormat(_T(": %s"), sFriendlyName);
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
			#pragma endregion 
			_tprintf(_T("## Source %s\n"), sName);
			_tprintf(_T("\n"));
			_ATLTRY
			{
				PrintAttributes(pActivate);
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
			ProcessSource(pActivate);
			_tprintf(_T("\n"));
		}
	}
};
