////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2015
// Created by Roman Ryltsov roman@alax.info
//
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#include "stdafx.h"
#include <mfapi.h>
#include <mftransform.h>
#include "rodshow.h"

#pragma comment(lib, "mfplat.lib")
#pragma comment(lib, "mfuuid.lib")

////////////////////////////////////////////////////////////
// CModule

class CModule :
	public CAtlExeModuleT<CModule>
{
public:
	static CString FormatKey(const GUID& Key)
	{
		static const struct { const GUID* pIdentifier; LPCSTR pszName; } g_pMap[] = 
		{
			#define A(x) { &x, #x },
			// NOTE: 1. Find all "DECLSPEC_SELECTANY GUID" or "DEFINE_GUID"
			//       2. Replace ^.+DECLSPEC_SELECTANY GUID ([A-z0-9_]+).+\r?$ -> A($1)
			// Windows SDK 8.1; mfapi.h
			A(MF_EVENT_SESSIONCAPS)
			A(MF_EVENT_SESSIONCAPS_DELTA)
			A(MF_EVENT_TOPOLOGY_STATUS)
			A(MF_EVENT_START_PRESENTATION_TIME)
			A(MF_EVENT_PRESENTATION_TIME_OFFSET)
			A(MF_EVENT_START_PRESENTATION_TIME_AT_OUTPUT)
			A(MF_EVENT_SOURCE_FAKE_START)
			A(MF_EVENT_SOURCE_PROJECTSTART)
			A(MF_EVENT_SOURCE_ACTUAL_START)
			A(MF_EVENT_SOURCE_TOPOLOGY_CANCELED)
			A(MF_EVENT_SOURCE_CHARACTERISTICS)
			A(MF_EVENT_SOURCE_CHARACTERISTICS_OLD)
			A(MF_EVENT_DO_THINNING)
			A(MF_EVENT_SCRUBSAMPLE_TIME)
			A(MF_EVENT_OUTPUT_NODE)
			A(MF_EVENT_MFT_INPUT_STREAM_ID)
			A(MF_EVENT_MFT_CONTEXT)
			A(MF_EVENT_STREAM_METADATA_KEYDATA)
			A(MF_EVENT_STREAM_METADATA_CONTENT_KEYIDS)
			A(MF_EVENT_STREAM_METADATA_SYSTEMID)
			A(MFSampleExtension_CleanPoint)
			A(MFSampleExtension_Discontinuity)
			A(MFSampleExtension_Token)
			A(MFSampleExtension_DecodeTimestamp)
			A(MFSampleExtension_VideoEncodeQP)
			A(MFSampleExtension_VideoEncodePictureType)
			A(MFSampleExtension_FrameCorruption)
			A(MFSampleExtension_DescrambleData)
			A(MFSampleExtension_SampleKeyID)
			A(MFSampleExtension_GenKeyFunc)
			A(MFSampleExtension_GenKeyCtx)
			A(MFSampleExtension_PacketCrossOffsets)
			A(MFSampleExtension_Encryption_SampleID)
			A(MFSampleExtension_Encryption_KeyID)
			A(MFSampleExtension_Content_KeyID)
			A(MFSampleExtension_Encryption_SubSampleMappingSplit)
			A(MFSampleExtension_Interlaced)
			A(MFSampleExtension_BottomFieldFirst)
			A(MFSampleExtension_RepeatFirstField)
			A(MFSampleExtension_SingleField)
			A(MFSampleExtension_DerivedFromTopField)
			A(MFSampleExtension_MeanAbsoluteDifference)
			A(MFSampleExtension_LongTermReferenceFrameInfo)
			A(MFSampleExtension_ROIRectangle)
			A(MFSampleExtension_PhotoThumbnail)
			A(MFSampleExtension_PhotoThumbnailMediaType)
			A(MFSampleExtension_CaptureMetadata)
			A(MF_CAPTURE_METADATA_PHOTO_FRAME_FLASH)
			A(MFT_CATEGORY_VIDEO_DECODER)
			A(MFT_CATEGORY_VIDEO_ENCODER)
			A(MFT_CATEGORY_VIDEO_EFFECT)
			A(MFT_CATEGORY_MULTIPLEXER)
			A(MFT_CATEGORY_DEMULTIPLEXER)
			A(MFT_CATEGORY_AUDIO_DECODER)
			A(MFT_CATEGORY_AUDIO_ENCODER)
			A(MFT_CATEGORY_AUDIO_EFFECT)
			A(MFT_CATEGORY_VIDEO_PROCESSOR)
			A(MFT_CATEGORY_OTHER)
			A(MFT_SUPPORT_DYNAMIC_FORMAT_CHANGE)
			A(MFVideoFormat_H264_ES)
			A(MFVideoFormat_MPEG2)
			A(MFAudioFormat_Dolby_AC3)
			A(MFAudioFormat_Dolby_DDPlus)
			A(MFMPEG4Format_Base)
			A(MF_MT_MAJOR_TYPE)
			A(MF_MT_SUBTYPE)
			A(MF_MT_ALL_SAMPLES_INDEPENDENT)
			A(MF_MT_FIXED_SIZE_SAMPLES)
			A(MF_MT_COMPRESSED)
			A(MF_MT_SAMPLE_SIZE)
			A(MF_MT_WRAPPED_TYPE)
			A(MF_MT_VIDEO_3D)
			A(MF_MT_VIDEO_3D_FORMAT)
			A(MF_MT_VIDEO_3D_NUM_VIEWS)
			A(MF_MT_VIDEO_3D_LEFT_IS_BASE)
			A(MF_MT_VIDEO_3D_FIRST_IS_LEFT)
			A(MFSampleExtension_3DVideo)
			A(MFSampleExtension_3DVideo_SampleFormat)
			A(MF_MT_VIDEO_ROTATION)
			A(MF_MT_AUDIO_NUM_CHANNELS)
			A(MF_MT_AUDIO_SAMPLES_PER_SECOND)
			A(MF_MT_AUDIO_FLOAT_SAMPLES_PER_SECOND)
			A(MF_MT_AUDIO_AVG_BYTES_PER_SECOND)
			A(MF_MT_AUDIO_BLOCK_ALIGNMENT)
			A(MF_MT_AUDIO_BITS_PER_SAMPLE)
			A(MF_MT_AUDIO_VALID_BITS_PER_SAMPLE)
			A(MF_MT_AUDIO_SAMPLES_PER_BLOCK)
			A(MF_MT_AUDIO_CHANNEL_MASK)
			A(MF_MT_AUDIO_FOLDDOWN_MATRIX)
			A(MF_MT_AUDIO_WMADRC_PEAKREF)
			A(MF_MT_AUDIO_WMADRC_PEAKTARGET)
			A(MF_MT_AUDIO_WMADRC_AVGREF)
			A(MF_MT_AUDIO_WMADRC_AVGTARGET)
			A(MF_MT_AUDIO_PREFER_WAVEFORMATEX)
			A(MF_MT_AAC_PAYLOAD_TYPE)
			A(MF_MT_AAC_AUDIO_PROFILE_LEVEL_INDICATION)
			A(MF_MT_FRAME_SIZE)
			A(MF_MT_FRAME_RATE)
			A(MF_MT_PIXEL_ASPECT_RATIO)
			A(MF_MT_DRM_FLAGS)
			A(MF_MT_TIMESTAMP_CAN_BE_DTS)
			A(MF_MT_PAD_CONTROL_FLAGS)
			A(MF_MT_SOURCE_CONTENT_HINT)
			A(MF_MT_VIDEO_CHROMA_SITING)
			A(MF_MT_INTERLACE_MODE)
			A(MF_MT_TRANSFER_FUNCTION)
			A(MF_MT_VIDEO_PRIMARIES)
			A(MF_MT_CUSTOM_VIDEO_PRIMARIES)
			A(MF_MT_YUV_MATRIX)
			A(MF_MT_VIDEO_LIGHTING)
			A(MF_MT_VIDEO_NOMINAL_RANGE)
			A(MF_MT_GEOMETRIC_APERTURE)
			A(MF_MT_MINIMUM_DISPLAY_APERTURE)
			A(MF_MT_PAN_SCAN_APERTURE)
			A(MF_MT_PAN_SCAN_ENABLED)
			A(MF_MT_AVG_BITRATE)
			A(MF_MT_AVG_BIT_ERROR_RATE)
			A(MF_MT_MAX_KEYFRAME_SPACING)
			A(MF_MT_USER_DATA)
			A(MF_MT_DEFAULT_STRIDE)
			A(MF_MT_PALETTE)
			A(MF_MT_AM_FORMAT_TYPE)
			A(MF_MT_VIDEO_PROFILE)
			A(MF_MT_VIDEO_LEVEL)
			A(MF_MT_MPEG_START_TIME_CODE)
			A(MF_MT_MPEG2_PROFILE)
			A(MF_MT_MPEG2_LEVEL)
			A(MF_MT_MPEG2_FLAGS)
			A(MF_MT_MPEG_SEQUENCE_HEADER)
			A(MF_MT_MPEG2_STANDARD)
			A(MF_MT_MPEG2_TIMECODE)
			A(MF_MT_MPEG2_CONTENT_PACKET)
			A(MF_MT_H264_MAX_CODEC_CONFIG_DELAY)
			A(MF_MT_H264_SUPPORTED_SLICE_MODES)
			A(MF_MT_H264_SUPPORTED_SYNC_FRAME_TYPES)
			A(MF_MT_H264_RESOLUTION_SCALING)
			A(MF_MT_H264_SIMULCAST_SUPPORT)
			A(MF_MT_H264_SUPPORTED_RATE_CONTROL_MODES)
			A(MF_MT_H264_MAX_MB_PER_SEC)
			A(MF_MT_H264_SUPPORTED_USAGES)
			A(MF_MT_H264_CAPABILITIES)
			A(MF_MT_H264_SVC_CAPABILITIES)
			A(MF_MT_H264_USAGE)
			A(MF_MT_H264_RATE_CONTROL_MODES)
			A(MF_MT_H264_LAYOUT_PER_STREAM)
			A(MF_MT_DV_AAUX_SRC_PACK_0)
			A(MF_MT_DV_AAUX_CTRL_PACK_0)
			A(MF_MT_DV_AAUX_SRC_PACK_1)
			A(MF_MT_DV_AAUX_CTRL_PACK_1)
			A(MF_MT_DV_VAUX_SRC_PACK)
			A(MF_MT_DV_VAUX_CTRL_PACK)
			A(MF_MT_ARBITRARY_HEADER)
			A(MF_MT_ARBITRARY_FORMAT)
			A(MF_MT_IMAGE_LOSS_TOLERANT)
			A(MF_MT_MPEG4_SAMPLE_DESCRIPTION)
			A(MF_MT_MPEG4_CURRENT_SAMPLE_ENTRY)
			A(MF_MT_ORIGINAL_4CC)
			A(MF_MT_ORIGINAL_WAVE_FORMAT_TAG)
			A(MF_MT_FRAME_RATE_RANGE_MIN)
			A(MF_MT_FRAME_RATE_RANGE_MAX)
			A(MF_LOW_LATENCY)
			A(MF_VIDEO_MAX_MB_PER_SEC)
			A(MFMediaType_Default)
			A(MFMediaType_Audio)
			A(MFMediaType_Video)
			A(MFMediaType_Protected)
			A(MFMediaType_SAMI)
			A(MFMediaType_Script)
			A(MFMediaType_Image)
			A(MFMediaType_HTML)
			A(MFMediaType_Binary)
			A(MFMediaType_FileTransfer)
			A(MFMediaType_Stream)
			A(MFImageFormat_JPEG)
			A(MFImageFormat_RGB32)
			A(MFStreamFormat_MPEG2Transport)
			A(MFStreamFormat_MPEG2Program)
			A(AM_MEDIA_TYPE_REPRESENTATION)
			A(FORMAT_MFVideoFormat)
			A(CLSID_MFSourceResolver)
			// Windows SDK 8.1; mftransform.h
			A(MF_SA_D3D_AWARE)
			A(MF_SA_REQUIRED_SAMPLE_COUNT)
			A(MF_SA_REQUIRED_SAMPLE_COUNT_PROGRESSIVE)
			A(MF_SA_MINIMUM_OUTPUT_SAMPLE_COUNT)
			A(MF_SA_MINIMUM_OUTPUT_SAMPLE_COUNT_PROGRESSIVE)
			A(MFT_SUPPORT_3DVIDEO)
			A(MF_ENABLE_3DVIDEO_OUTPUT)
			A(MF_SA_D3D11_BINDFLAGS)
			A(MF_SA_D3D11_USAGE)
			A(MF_SA_D3D11_AWARE)
			A(MF_SA_D3D11_SHARED)
			A(MF_SA_D3D11_SHARED_WITHOUT_MUTEX)
			A(MF_SA_BUFFERS_PER_SAMPLE)
			A(MFT_DECODER_EXPOSE_OUTPUT_TYPES_IN_NATIVE_ORDER)
			A(MFT_REMUX_MARK_I_PICTURE_AS_CLEAN_POINT)
			A(MFT_DECODER_FINAL_VIDEO_RESOLUTION_HINT)
			A(MFT_ENCODER_SUPPORTS_CONFIG_EVENT)
			A(MFT_ENUM_HARDWARE_VENDOR_ID_Attribute)
			A(MF_TRANSFORM_ASYNC)
			A(MF_TRANSFORM_ASYNC_UNLOCK)
			A(MF_TRANSFORM_FLAGS_Attribute)
			A(MF_TRANSFORM_CATEGORY_Attribute)
			A(MFT_TRANSFORM_CLSID_Attribute)
			A(MFT_INPUT_TYPES_Attributes)
			A(MFT_OUTPUT_TYPES_Attributes)
			A(MFT_ENUM_HARDWARE_URL_Attribute)
			A(MFT_FRIENDLY_NAME_Attribute)
			A(MFT_CONNECTED_STREAM_ATTRIBUTE)
			A(MFT_CONNECTED_TO_HW_STREAM)
			A(MFT_PREFERRED_OUTPUTTYPE_Attribute)
			A(MFT_PROCESS_LOCAL_Attribute)
			A(MFT_PREFERRED_ENCODER_PROFILE)
			A(MFT_HW_TIMESTAMP_WITH_QPC_Attribute)
			A(MFT_FIELDOFUSE_UNLOCK_Attribute)
			A(MFT_CODEC_MERIT_Attribute)
			A(MFT_ENUM_TRANSCODE_ONLY_ATTRIBUTE)
			#undef A
		};
		for(SIZE_T nIndex = 0; nIndex < DIM(g_pMap); nIndex++)
			if(*g_pMap[nIndex].pIdentifier == Key)
				return CString(g_pMap[nIndex].pszName);
		return CString(_PersistHelper::StringFromIdentifier(Key));
	}
	static CString FormatTransformFlags(ULONG nTransformFlags)
	{
		CRoArrayT<CString> Array;
		static const struct { ULONG nValue; LPCSTR pszName; } g_pMap[] = 
		{
			#define A(x) { x, #x },
			A(MFT_ENUM_FLAG_SYNCMFT)
			A(MFT_ENUM_FLAG_ASYNCMFT)
			A(MFT_ENUM_FLAG_HARDWARE)
			A(MFT_ENUM_FLAG_FIELDOFUSE)
			A(MFT_ENUM_FLAG_LOCALMFT)
			A(MFT_ENUM_FLAG_TRANSCODE_ONLY)
			//A(MFT_ENUM_FLAG_SORTANDFILTER)
			//A(MFT_ENUM_FLAG_ALL)
			#undef A
		};
		for(SIZE_T nIndex = 0; nIndex < DIM(g_pMap); nIndex++)
			if(nTransformFlags & g_pMap[nIndex].nValue)
			{
				_W(Array.Add(CA2CT(g_pMap[nIndex].pszName)) >= 0);
				nTransformFlags &= ~g_pMap[nIndex].nValue;
			}
		if(!Array.IsEmpty())
		{
			if(nTransformFlags)
				_W(Array.Add(AtlFormatString(_T("0x%x"), nTransformFlags)) >= 0);
			return _StringHelper::Join(Array, _T(" | "));
		}
		if(!nTransformFlags)
			return _T("0");
		return AtlFormatString(_T("0x%x"), nTransformFlags);
	}

public:
// CModule
	CModule() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p"), this);
		_W(CExceptionFilter::Initialize());
		#if defined(_DEBUG)
		AtlTraceLoadSettings(NULL);
		#endif // defined(_DEBUG)
	}
	~CModule() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p"), this);
		CExceptionFilter::Terminate();
	}
	HRESULT PreMessageLoop(INT nShowCommand)
	{
		const HRESULT nResult = __super::PreMessageLoop(nShowCommand);
		return SUCCEEDED(nResult) ? S_OK : nResult;
	}
	VOID RunMessageLoop()
	{
		static const struct { const GUID* pCategory; LPCSTR pszName; } g_pMap[] = 
		{
			#define A(x) { &x, #x },
			A(MFT_CATEGORY_VIDEO_DECODER)
			A(MFT_CATEGORY_VIDEO_ENCODER)
			A(MFT_CATEGORY_VIDEO_EFFECT)
			A(MFT_CATEGORY_MULTIPLEXER)
			A(MFT_CATEGORY_DEMULTIPLEXER)
			A(MFT_CATEGORY_AUDIO_DECODER)
			A(MFT_CATEGORY_AUDIO_ENCODER)
			A(MFT_CATEGORY_AUDIO_EFFECT)
			A(MFT_CATEGORY_VIDEO_PROCESSOR)
			A(MFT_CATEGORY_OTHER)
			#undef A
		};
		for(SIZE_T nCategoryIndex = 0; nCategoryIndex < DIM(g_pMap); nCategoryIndex++)
		{
			_tprintf(_T("Category: %hs %ls\n"), g_pMap[nCategoryIndex].pszName, _PersistHelper::StringFromIdentifier(*g_pMap[nCategoryIndex].pCategory));
			_tprintf(_T("\n"));
			_ATLTRY
			{
				CComHeapPtr<IMFActivate*> ppMfActivates;
				UINT32 nMfActivateCount = 0;
				__C(MFTEnumEx(*g_pMap[nCategoryIndex].pCategory, MFT_ENUM_FLAG_ALL, NULL, NULL, &ppMfActivates, &nMfActivateCount));
				CRoArrayT<CComPtr<IMFActivate>> ActivateArray;
				for(UINT32 nMfActivateIndex = 0; nMfActivateIndex < nMfActivateCount; nMfActivateIndex++)
				{
					CComPtr<IMFActivate>& pMfActivate = reinterpret_cast<CComPtr<IMFActivate>&>(ppMfActivates[nMfActivateIndex]);
					_W(ActivateArray.Add(pMfActivate) >= 0);
					pMfActivate = NULL;
				}
				for(SIZE_T nActivateIndex = 0; nActivateIndex < ActivateArray.GetCount(); nActivateIndex++)
				{
					const CComPtr<IMFActivate>& pMfActivate = ActivateArray[nActivateIndex];
					CString sItem = AtlFormatString(_T("#%d"), nActivateIndex);
					CComHeapPtr<WCHAR> pszFriendlyName;
					UINT32 nFriendlyNameLength;
					if(SUCCEEDED(pMfActivate->GetAllocatedString(MFT_FRIENDLY_NAME_Attribute, &pszFriendlyName, &nFriendlyNameLength)))
						sItem.Insert(0, AtlFormatString(_T("%ls "), pszFriendlyName));
					_tprintf(_T("\t") _T("%s\n"), sItem);
					_ATLTRY
					{
						UINT32 nItemCount = 0;
						__C(pMfActivate->GetCount(&nItemCount));
						for(UINT32 nItemIndex = 0; nItemIndex < nItemCount; nItemIndex++)
						{
							GUID Key;
							PROPVARIANT vValue;
							PropVariantInit(&vValue);
							__C(pMfActivate->GetItemByIndex(nItemIndex, &Key, &vValue));
							// NOTE: See PROPVARIANT Type Constants http://msdn.microsoft.com/en-us/library/cc235506%28v=prot.10%29.aspx
							if(Key == MF_TRANSFORM_CATEGORY_Attribute && vValue.vt == VT_CLSID && *vValue.puuid == *g_pMap[nCategoryIndex].pCategory)
								continue; // Matches Category
							if(Key == MFT_FRIENDLY_NAME_Attribute)
								continue; // Already Printed
							CString sStringValue;
							BOOL bStringValueAvailable = FALSE;
							BOOL bDefault = TRUE;
							#pragma region Format as Attribute
							if(Key == MF_TRANSFORM_FLAGS_Attribute && vValue.vt == VT_UI4)
							{
								sStringValue = FormatTransformFlags(vValue.ulVal);
								bStringValueAvailable = TRUE;
								bDefault = FALSE;
							} else
							if((Key == MFT_INPUT_TYPES_Attributes || Key == MFT_OUTPUT_TYPES_Attributes) && (VT_VECTOR | VT_UI1))
							{
								_A(!(vValue.caub.cElems % sizeof (MFT_REGISTER_TYPE_INFO)));
								const MFT_REGISTER_TYPE_INFO* pData = (MFT_REGISTER_TYPE_INFO*) vValue.caub.pElems;
								const SIZE_T nDataCount = vValue.caub.cElems / sizeof *pData;
								CRoArrayT<CString> Array;
								for(SIZE_T nIndex = 0; nIndex < nDataCount; nIndex++)
									_W(Array.Add(AtlFormatString(_T("\t\t\t") _T("%ls %ls"), _FilterGraphHelper::FormatMajorType(pData[nIndex].guidMajorType), _FilterGraphHelper::FormatSubtype(pData[nIndex].guidSubtype))) >= 0);
								sStringValue += _StringHelper::Join(Array, _T("\n"));
								if(!sStringValue.IsEmpty())
								{
									sStringValue.Insert(0, _T("\n"));
									sStringValue.Append(_T("\n") _T("\t\t\t"));
								}
								bStringValueAvailable = TRUE;
								bDefault = FALSE;
							} else
								;
							#pragma endregion 
							#pragma region Format as Type
							if(bDefault)
							{
								if(vValue.vt == VT_LPSTR)
								{
									sStringValue = CA2CT(vValue.pszVal);
									bStringValueAvailable = TRUE;
								} else
								if(vValue.vt == VT_LPWSTR)
								{
									sStringValue = CW2CT(vValue.pwszVal);
									bStringValueAvailable = TRUE;
								} else
								if(vValue.vt == VT_CLSID)
								{
									sStringValue = _PersistHelper::StringFromIdentifier(*vValue.puuid);
									bStringValueAvailable = TRUE;
								} else
								if(vValue.vt == (VT_VECTOR | VT_UI1))
								{
									sStringValue = AtlFormatString(_T("%d bytes"), vValue.caub.cElems);
									if(vValue.caub.cElems > 0)
									{
										sStringValue += _T(", ");
										ULONG nIndex;
										for(nIndex = 0; nIndex < vValue.caub.cElems && nIndex < 24; nIndex++)
											sStringValue += AtlFormatString(_T("%02X "), vValue.caub.pElems[nIndex]);
										if(nIndex < vValue.caub.cElems)
											sStringValue += _T("...");
									}
									bStringValueAvailable = TRUE;
								} else
								{
									CComVariant vVariantValue;
									bStringValueAvailable = SUCCEEDED(vVariantValue.ChangeType(VT_BSTR, &reinterpret_cast<VARIANT&>(vValue)));
									if(bStringValueAvailable)
										sStringValue = CString(vVariantValue.bstrVal);
								}
							}
							#pragma endregion 
							if(bStringValueAvailable)
								_tprintf(_T("\t") _T("\t") _T("%s: %s (0x%x)\n"), FormatKey(Key), sStringValue, vValue.vt);
							else
								_tprintf(_T("\t") _T("\t") _T("%s: ??? (0x%x)\n"), FormatKey(Key), vValue.vt);
						}
					}
					_ATLCATCHALL()
					{
						_Z_EXCEPTION();
					}
					_tprintf(_T("\n"));
				}
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
		}
	}
};

////////////////////////////////////////////////////////////
// CArgumentException

class CArgumentException :
	public CAtlException
{
public:
	CString m_sMessage;

public:
// CArgumentException
	CArgumentException(const CString& sMessage, HRESULT nCode = E_FAIL) throw() :
		CAtlException(nCode),
		m_sMessage(sMessage)
	{
	}
};

////////////////////////////////////////////////////////////
// Main

int _tmain(int argc, _TCHAR* argv[])
{
	CModule Module;
	_ATLTRY
	{
		#pragma region Syntax
		//if(argc <= 1)
		//{
		//	CPath sName = FindFileName(argv[0]);
		//	sName.RemoveExtension();
		//	_tprintf(_T("Syntax:  %s [options] <media-file-path>\n"), sName);
		//	_tprintf(_T("\n"));
		//	_tprintf(_T("Options: ") _T("/x") _T(" - ") _T("show message box before running the graph\n"));
		//	_tprintf(_T("\n"));
		//	return 2;
		//}
		#pragma endregion 
		//for(INT nArgumentIndex = 1; nArgumentIndex < argc; nArgumentIndex++)
		//{
		//	CString sArgument = argv[nArgumentIndex];
		//	_A(!sArgument.IsEmpty());
		//	if(_tcschr(_T("-/"), sArgument[0]))
		//	{
		//		sArgument.Delete(0, 1);
		//		if(sArgument.IsEmpty())
		//			throw CArgumentException(_T("Unexpected argument"));
		//		switch(sArgument[0])
		//		{
		//		case 'X':
		//		case 'x':
		//			Module.m_bShowMessageBox = TRUE;
		//			break;
		//		default:
		//			throw CArgumentException(AtlFormatString(_T("Unexpected argument (%s)"), sArgument));
		//		}
		//		continue;
		//	}
		//	if(_tcslen(Module.m_sPath))
		//		throw CArgumentException(_T("Unexpected argument: Input file name already specified"));
		//	Module.m_sPath = (LPCTSTR) sArgument;
		//	//throw CArgumentException(AtlFormatString(_T("Unexpected argument (%s)"), sArgument));
		//}
		//if(!_tcslen(Module.m_sPath))
		//	throw CArgumentException(_T("Missing argument: No input file name specified"));
		Module.WinMain(SW_SHOWNORMAL);
	}
	catch(CArgumentException Exception)
	{
		_tprintf(_T("Fatal Error: %s\n"), Exception.m_sMessage);
		return 1;
	}
	_ATLCATCH(Exception)
	{
		_tprintf(_T("Fatal Error: 0x%08x %s\n"), (HRESULT) Exception, AtlFormatSystemMessage(Exception).TrimRight(_T("\t\n\r .")));
		return 1;
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Fatal Error\n"));
		return 1;
	}
	return 0;
}

// NOTE: See also Matthew van Eerde's "How to enumerate Media Foundation transforms on your system"
//       http://blogs.msdn.com/b/matthew_van_eerde/archive/2010/05/03/how-to-enumerate-media-foundation-transforms-on-your-system.aspx