////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

#include <vfwmsgs.h>
#include <asferr.h> // FACILITY_NS
#include <mferror.h> // FACILITY_MF
#include "rowinhttp.h"
#include "AboutDialog.h"

////////////////////////////////////////////////////////////
// CNotifyIconWindow

class CNotifyIconWindow : 
	public CMessageOnlyWindowImpl<CNotifyIconWindow>
{
public:

DECLARE_WND_CLASS(_T("CNotifyIconWindow"))

BEGIN_MSG_MAP_EX(CNotifyIconWindow)
	_Z4(atlTraceUI, 4, _T("uMsg 0x%04X, wParam 0x%08X, lParam 0x%08X\n"), uMsg, wParam, lParam);
	//CHAIN_MSG_MAP(CMessageOnlyWindowImpl<CNotifyIconWindow>)
	MSG_WM_CREATE(OnCreate)
	MSG_WM_DESTROY(OnDestroy)
	MSG_WM_CHANGECBCHAIN(OnChangeCbChain)
	MSG_WM_DRAWCLIPBOARD(OnDrawClipboard)
	MSG_WM_MOUSEMOVE(OnMouseMove)
	MSG_WM_LBUTTONDBLCLK(OnLButtonDblClk)
	MSG_WM_RBUTTONUP(OnRButtonUp)
	MESSAGE_HANDLER_EX(NIN_BALLOONUSERCLICK, OnNotifyIconBalloonUserClick)
	MESSAGE_HANDLER_EX(WM_NOTIFYICON, OnNotifyIcon)
	COMMAND_ID_HANDLER_EX(ID_APP_ABOUT, OnApplicationAbout)
	COMMAND_ID_HANDLER_EX(ID_APP_EXIT, OnApplicationExit)
	REFLECT_NOTIFICATIONS()
END_MSG_MAP()

public:

	//////////////////////////////////////////////////////////
	// Window Message Identifiers

	enum
	{
		WM_FIRST = WM_APP,
		WM_NOTIFYICON,
	};

private:
	ULONGLONG m_nCommonControlsVersion;
	ULONGLONG m_nShellVersion;
	NOTIFYICONDATA m_NotifyIconData;
	CWindow m_NextClipboardViewerWindow;
	CString m_sQuery;

	static BOOL IsQuartzResult(HRESULT nResult, CString* psMessage = NULL)
	{
		if(HRESULT_FACILITY(nResult) != FACILITY_ITF)
			return FALSE;
		const SCODE nCode = HRESULT_CODE(nResult);
		if(nCode < 0x0200)// && nCode <= 0xFFFF)
			return FALSE;
		const CString sMessage = AtlFormatSystemMessage(CDataLibraryMap::LoadLibrary(_T("quartz.dll")), nResult);
		if(sMessage.IsEmpty())
			return FALSE;
		if(psMessage)
			*psMessage = sMessage;
		return TRUE;
	}
	static CString LookupQuartzIdentifier(HRESULT nValue)
	{
		static const struct { HRESULT nValue; LPCSTR pszName; } g_pMap[] = 
		{
			#define A(x) { x, #x },
			A(VFW_E_INVALIDMEDIATYPE)
			A(VFW_E_INVALIDSUBTYPE)
			A(VFW_E_NEED_OWNER)
			A(VFW_E_ENUM_OUT_OF_SYNC)
			A(VFW_E_ALREADY_CONNECTED)
			A(VFW_E_FILTER_ACTIVE)
			A(VFW_E_NO_TYPES)
			A(VFW_E_NO_ACCEPTABLE_TYPES)
			A(VFW_E_INVALID_DIRECTION)
			A(VFW_E_NOT_CONNECTED)
			A(VFW_E_NO_ALLOCATOR)
			A(VFW_E_RUNTIME_ERROR)
			A(VFW_E_BUFFER_NOTSET)
			A(VFW_E_BUFFER_OVERFLOW)
			A(VFW_E_BADALIGN)
			A(VFW_E_ALREADY_COMMITTED)
			A(VFW_E_BUFFERS_OUTSTANDING)
			A(VFW_E_NOT_COMMITTED)
			A(VFW_E_SIZENOTSET)
			A(VFW_E_NO_CLOCK)
			A(VFW_E_NO_SINK)
			A(VFW_E_NO_INTERFACE)
			A(VFW_E_NOT_FOUND)
			A(VFW_E_CANNOT_CONNECT)
			A(VFW_E_CANNOT_RENDER)
			A(VFW_E_CHANGING_FORMAT)
			A(VFW_E_NO_COLOR_KEY_SET)
			A(VFW_E_NOT_OVERLAY_CONNECTION)
			A(VFW_E_NOT_SAMPLE_CONNECTION)
			A(VFW_E_PALETTE_SET)
			A(VFW_E_COLOR_KEY_SET)
			A(VFW_E_NO_COLOR_KEY_FOUND)
			A(VFW_E_NO_PALETTE_AVAILABLE)
			A(VFW_E_NO_DISPLAY_PALETTE)
			A(VFW_E_TOO_MANY_COLORS)
			A(VFW_E_STATE_CHANGED)
			A(VFW_E_NOT_STOPPED)
			A(VFW_E_NOT_PAUSED)
			A(VFW_E_NOT_RUNNING)
			A(VFW_E_WRONG_STATE)
			A(VFW_E_START_TIME_AFTER_END)
			A(VFW_E_INVALID_RECT)
			A(VFW_E_TYPE_NOT_ACCEPTED)
			A(VFW_E_SAMPLE_REJECTED)
			A(VFW_E_SAMPLE_REJECTED_EOS)
			A(VFW_E_DUPLICATE_NAME)
			A(VFW_S_DUPLICATE_NAME)
			A(VFW_E_TIMEOUT)
			A(VFW_E_INVALID_FILE_FORMAT)
			A(VFW_E_ENUM_OUT_OF_RANGE)
			A(VFW_E_CIRCULAR_GRAPH)
			A(VFW_E_NOT_ALLOWED_TO_SAVE)
			A(VFW_E_TIME_ALREADY_PASSED)
			A(VFW_E_ALREADY_CANCELLED)
			A(VFW_E_CORRUPT_GRAPH_FILE)
			A(VFW_E_ADVISE_ALREADY_SET)
			A(VFW_S_STATE_INTERMEDIATE)
			A(VFW_E_NO_MODEX_AVAILABLE)
			A(VFW_E_NO_ADVISE_SET)
			A(VFW_E_NO_FULLSCREEN)
			A(VFW_E_IN_FULLSCREEN_MODE)
			A(VFW_E_UNKNOWN_FILE_TYPE)
			A(VFW_E_CANNOT_LOAD_SOURCE_FILTER)
			A(VFW_S_PARTIAL_RENDER)
			A(VFW_E_FILE_TOO_SHORT)
			A(VFW_E_INVALID_FILE_VERSION)
			A(VFW_S_SOME_DATA_IGNORED)
			A(VFW_S_CONNECTIONS_DEFERRED)
			A(VFW_E_INVALID_CLSID)
			A(VFW_E_INVALID_MEDIA_TYPE)
			A(VFW_E_BAD_KEY)
			A(VFW_S_NO_MORE_ITEMS)
			A(VFW_E_SAMPLE_TIME_NOT_SET)
			A(VFW_S_RESOURCE_NOT_NEEDED)
			A(VFW_E_MEDIA_TIME_NOT_SET)
			A(VFW_E_NO_TIME_FORMAT_SET)
			A(VFW_E_MONO_AUDIO_HW)
			A(VFW_S_MEDIA_TYPE_IGNORED)
			A(VFW_E_NO_DECOMPRESSOR)
			A(VFW_E_NO_AUDIO_HARDWARE)
			A(VFW_S_VIDEO_NOT_RENDERED)
			A(VFW_S_AUDIO_NOT_RENDERED)
			A(VFW_E_RPZA)
			A(VFW_S_RPZA)
			A(VFW_E_PROCESSOR_NOT_SUITABLE)
			A(VFW_E_UNSUPPORTED_AUDIO)
			A(VFW_E_UNSUPPORTED_VIDEO)
			A(VFW_E_MPEG_NOT_CONSTRAINED)
			A(VFW_E_NOT_IN_GRAPH)
			A(VFW_S_ESTIMATED)
			A(VFW_E_NO_TIME_FORMAT)
			A(VFW_E_READ_ONLY)
			A(VFW_S_RESERVED)
			A(VFW_E_BUFFER_UNDERFLOW)
			A(VFW_E_UNSUPPORTED_STREAM)
			A(VFW_E_NO_TRANSPORT)
			A(VFW_S_STREAM_OFF)
			A(VFW_S_CANT_CUE)
			A(VFW_E_BAD_VIDEOCD)
			A(VFW_S_NO_STOP_TIME)
			A(VFW_E_OUT_OF_VIDEO_MEMORY)
			A(VFW_E_VP_NEGOTIATION_FAILED)
			A(VFW_E_DDRAW_CAPS_NOT_SUITABLE)
			A(VFW_E_NO_VP_HARDWARE)
			A(VFW_E_NO_CAPTURE_HARDWARE)
			A(VFW_E_DVD_OPERATION_INHIBITED)
			A(VFW_E_DVD_INVALIDDOMAIN)
			A(VFW_E_DVD_NO_BUTTON)
			A(VFW_E_DVD_GRAPHNOTREADY)
			A(VFW_E_DVD_RENDERFAIL)
			A(VFW_E_DVD_DECNOTENOUGH)
			A(VFW_E_DDRAW_VERSION_NOT_SUITABLE)
			A(VFW_E_COPYPROT_FAILED)
			A(VFW_S_NOPREVIEWPIN)
			A(VFW_E_TIME_EXPIRED)
			A(VFW_S_DVD_NON_ONE_SEQUENTIAL)
			A(VFW_E_DVD_WRONG_SPEED)
			A(VFW_E_DVD_MENU_DOES_NOT_EXIST)
			A(VFW_E_DVD_CMD_CANCELLED)
			A(VFW_E_DVD_STATE_WRONG_VERSION)
			A(VFW_E_DVD_STATE_CORRUPT)
			A(VFW_E_DVD_STATE_WRONG_DISC)
			A(VFW_E_DVD_INCOMPATIBLE_REGION)
			A(VFW_E_DVD_NO_ATTRIBUTES)
			A(VFW_E_DVD_NO_GOUP_PGC)
			A(VFW_E_DVD_LOW_PARENTAL_LEVEL)
			A(VFW_E_DVD_NOT_IN_KARAOKE_MODE)
			A(VFW_S_DVD_CHANNEL_CONTENTS_NOT_AVAILABLE)
			A(VFW_S_DVD_NOT_ACCURATE)
			A(VFW_E_FRAME_STEP_UNSUPPORTED)
			A(VFW_E_DVD_STREAM_DISABLED)
			A(VFW_E_DVD_TITLE_UNKNOWN)
			A(VFW_E_DVD_INVALID_DISC)
			A(VFW_E_DVD_NO_RESUME_INFORMATION)
			A(VFW_E_PIN_ALREADY_BLOCKED_ON_THIS_THREAD)
			A(VFW_E_PIN_ALREADY_BLOCKED)
			A(VFW_E_CERTIFICATION_FAILURE)
			A(VFW_E_VMR_NOT_IN_MIXER_MODE)
			A(VFW_E_VMR_NO_AP_SUPPLIED)
			A(VFW_E_VMR_NO_DEINTERLACE_HW)
			A(VFW_E_VMR_NO_PROCAMP_HW)
			A(VFW_E_DVD_VMR9_INCOMPATIBLEDEC)
			A(VFW_E_VMR_NO_AP_SUPPLIED)
			A(VFW_E_VMR_NO_DEINTERLACE_HW)
			A(VFW_E_VMR_NO_PROCAMP_HW)
			A(VFW_E_DVD_VMR9_INCOMPATIBLEDEC)
			A(VFW_E_NO_COPP_HW)
			A(VFW_E_DVD_NONBLOCKING)
			A(VFW_E_DVD_TOO_MANY_RENDERERS_IN_FILTER_GRAPH)
			A(VFW_E_DVD_NON_EVR_RENDERER_IN_FILTER_GRAPH)
			A(VFW_E_DVD_RESOLUTION_ERROR)
			A(VFW_E_CODECAPI_LINEAR_RANGE)
			A(VFW_E_CODECAPI_ENUMERATED)
			A(VFW_E_CODECAPI_NO_DEFAULT)
			A(VFW_E_CODECAPI_NO_CURRENT_VALUE)
			A(VFW_E_DVD_CHAPTER_DOES_NOT_EXIST)
			#undef A
		};
		for(SIZE_T nIndex = 0; nIndex < DIM(g_pMap); nIndex++)
			if(g_pMap[nIndex].nValue == nValue)
				return CString(g_pMap[nIndex].pszName);
		return _T("");
	}
	static BOOL IsWmResult(HRESULT nResult, CString* psMessage = NULL)
	{
		if(HRESULT_FACILITY(nResult) != FACILITY_NS)
			return FALSE;
		// SUGG: Cache loaded libraries
		HMODULE hModule = NULL;
		const SCODE nCode = HRESULT_CODE(nResult);
		CString sMessage;
		if(nCode >= 2000 && nCode < 3000) // 2000 -  2999 = ASF (defined in ASFERR.MC)
			sMessage = AtlFormatSystemMessage(CDataLibraryMap::LoadLibrary(_T("asferror.dll")), nResult);
		else
			sMessage = AtlFormatSystemMessage(CDataLibraryMap::LoadLibrary(_T("wmerror.dll")), nResult);
		if(sMessage.IsEmpty())
			return FALSE;
		if(psMessage)
			*psMessage = sMessage;
		return TRUE;
	}
	static BOOL IsMfResult(HRESULT nResult, CString* psMessage = NULL)
	{
		if(HRESULT_FACILITY(nResult) != FACILITY_MF)
			return FALSE;
		const CString sMessage = AtlFormatSystemMessage(CDataLibraryMap::LoadLibrary(_T("mferror.dll")), nResult);
		if(sMessage.IsEmpty())
			return FALSE;
		if(psMessage)
			*psMessage = sMessage;
		return TRUE;
	}
	static CString LookupMfIdentifier(HRESULT nValue)
	{
		static const struct { HRESULT nValue; LPCSTR pszName; } g_pMap[] = 
		{
			#define A(x) { x, #x },
			A(MF_E_PLATFORM_NOT_INITIALIZED)
			A(MF_E_BUFFERTOOSMALL)
			A(MF_E_INVALIDREQUEST)
			A(MF_E_INVALIDSTREAMNUMBER)
			A(MF_E_INVALIDMEDIATYPE)
			A(MF_E_NOTACCEPTING)
			A(MF_E_NOT_INITIALIZED)
			A(MF_E_UNSUPPORTED_REPRESENTATION)
			A(MF_E_NO_MORE_TYPES)
			A(MF_E_UNSUPPORTED_SERVICE)
			A(MF_E_UNEXPECTED)
			A(MF_E_INVALIDNAME)
			A(MF_E_INVALIDTYPE)
			A(MF_E_INVALID_FILE_FORMAT)
			A(MF_E_INVALIDINDEX)
			A(MF_E_INVALID_TIMESTAMP)
			A(MF_E_UNSUPPORTED_SCHEME)
			A(MF_E_UNSUPPORTED_BYTESTREAM_TYPE)
			A(MF_E_UNSUPPORTED_TIME_FORMAT)
			A(MF_E_NO_SAMPLE_TIMESTAMP)
			A(MF_E_NO_SAMPLE_DURATION)
			A(MF_E_INVALID_STREAM_DATA)
			A(MF_E_RT_UNAVAILABLE)
			A(MF_E_UNSUPPORTED_RATE)
			A(MF_E_THINNING_UNSUPPORTED)
			A(MF_E_REVERSE_UNSUPPORTED)
			A(MF_E_UNSUPPORTED_RATE_TRANSITION)
			A(MF_E_RATE_CHANGE_PREEMPTED)
			A(MF_E_NOT_FOUND)
			A(MF_E_NOT_AVAILABLE)
			A(MF_E_NO_CLOCK)
			A(MF_S_MULTIPLE_BEGIN)
			A(MF_E_MULTIPLE_BEGIN)
			A(MF_E_MULTIPLE_SUBSCRIBERS)
			A(MF_E_TIMER_ORPHANED)
			A(MF_E_STATE_TRANSITION_PENDING)
			A(MF_E_UNSUPPORTED_STATE_TRANSITION)
			A(MF_E_UNRECOVERABLE_ERROR_OCCURRED)
			A(MF_E_SAMPLE_HAS_TOO_MANY_BUFFERS)
			A(MF_E_SAMPLE_NOT_WRITABLE)
			A(MF_E_INVALID_KEY)
			A(MF_E_BAD_STARTUP_VERSION)
			A(MF_E_UNSUPPORTED_CAPTION)
			A(MF_E_INVALID_POSITION)
			A(MF_E_ATTRIBUTENOTFOUND)
			A(MF_E_PROPERTY_TYPE_NOT_ALLOWED)
			A(MF_E_PROPERTY_TYPE_NOT_SUPPORTED)
			A(MF_E_PROPERTY_EMPTY)
			A(MF_E_PROPERTY_NOT_EMPTY)
			A(MF_E_PROPERTY_VECTOR_NOT_ALLOWED)
			A(MF_E_PROPERTY_VECTOR_REQUIRED)
			A(MF_E_OPERATION_CANCELLED)
			A(MF_E_BYTESTREAM_NOT_SEEKABLE)
			A(MF_E_DISABLED_IN_SAFEMODE)
			A(MF_E_CANNOT_PARSE_BYTESTREAM)
			A(MF_E_SOURCERESOLVER_MUTUALLY_EXCLUSIVE_FLAGS)
			A(MF_E_MEDIAPROC_WRONGSTATE)
			A(MF_E_RT_THROUGHPUT_NOT_AVAILABLE)
			A(MF_E_RT_TOO_MANY_CLASSES)
			A(MF_E_RT_WOULDBLOCK)
			A(MF_E_NO_BITPUMP)
			A(MF_E_RT_OUTOFMEMORY)
			A(MF_E_RT_WORKQUEUE_CLASS_NOT_SPECIFIED)
			A(MF_E_INSUFFICIENT_BUFFER)
			A(MF_E_CANNOT_CREATE_SINK)
			A(MF_E_BYTESTREAM_UNKNOWN_LENGTH)
			A(MF_E_SESSION_PAUSEWHILESTOPPED)
			A(MF_S_ACTIVATE_REPLACED)
			A(MF_E_FORMAT_CHANGE_NOT_SUPPORTED)
			A(MF_E_INVALID_WORKQUEUE)
			A(MF_E_DRM_UNSUPPORTED)
			A(MF_E_UNAUTHORIZED)
			A(MF_E_OUT_OF_RANGE)
			A(MF_E_INVALID_CODEC_MERIT)
			A(MF_E_HW_MFT_FAILED_START_STREAMING)
			A(MF_S_ASF_PARSEINPROGRESS)
			A(MF_E_ASF_PARSINGINCOMPLETE)
			A(MF_E_ASF_MISSINGDATA)
			A(MF_E_ASF_INVALIDDATA)
			A(MF_E_ASF_OPAQUEPACKET)
			A(MF_E_ASF_NOINDEX)
			A(MF_E_ASF_OUTOFRANGE)
			A(MF_E_ASF_INDEXNOTLOADED)
			A(MF_E_ASF_TOO_MANY_PAYLOADS)
			A(MF_E_ASF_UNSUPPORTED_STREAM_TYPE)
			A(MF_E_ASF_DROPPED_PACKET)
			A(MF_E_NO_EVENTS_AVAILABLE)
			A(MF_E_INVALID_STATE_TRANSITION)
			A(MF_E_END_OF_STREAM)
			A(MF_E_SHUTDOWN)
			A(MF_E_MP3_NOTFOUND)
			A(MF_E_MP3_OUTOFDATA)
			A(MF_E_MP3_NOTMP3)
			A(MF_E_MP3_NOTSUPPORTED)
			A(MF_E_NO_DURATION)
			A(MF_E_INVALID_FORMAT)
			A(MF_E_PROPERTY_NOT_FOUND)
			A(MF_E_PROPERTY_READ_ONLY)
			A(MF_E_PROPERTY_NOT_ALLOWED)
			A(MF_E_MEDIA_SOURCE_NOT_STARTED)
			A(MF_E_UNSUPPORTED_FORMAT)
			A(MF_E_MP3_BAD_CRC)
			A(MF_E_NOT_PROTECTED)
			A(MF_E_MEDIA_SOURCE_WRONGSTATE)
			A(MF_E_MEDIA_SOURCE_NO_STREAMS_SELECTED)
			A(MF_E_CANNOT_FIND_KEYFRAME_SAMPLE)
			A(MF_E_NETWORK_RESOURCE_FAILURE)
			A(MF_E_NET_WRITE)
			A(MF_E_NET_READ)
			A(MF_E_NET_REQUIRE_NETWORK)
			A(MF_E_NET_REQUIRE_ASYNC)
			A(MF_E_NET_BWLEVEL_NOT_SUPPORTED)
			A(MF_E_NET_STREAMGROUPS_NOT_SUPPORTED)
			A(MF_E_NET_MANUALSS_NOT_SUPPORTED)
			A(MF_E_NET_INVALID_PRESENTATION_DESCRIPTOR)
			A(MF_E_NET_CACHESTREAM_NOT_FOUND)
			A(MF_I_MANUAL_PROXY)
			A(MF_E_NET_REQUIRE_INPUT)
			A(MF_E_NET_REDIRECT)
			A(MF_E_NET_REDIRECT_TO_PROXY)
			A(MF_E_NET_TOO_MANY_REDIRECTS)
			A(MF_E_NET_TIMEOUT)
			A(MF_E_NET_CLIENT_CLOSE)
			A(MF_E_NET_BAD_CONTROL_DATA)
			A(MF_E_NET_INCOMPATIBLE_SERVER)
			A(MF_E_NET_UNSAFE_URL)
			A(MF_E_NET_CACHE_NO_DATA)
			A(MF_E_NET_EOL)
			A(MF_E_NET_BAD_REQUEST)
			A(MF_E_NET_INTERNAL_SERVER_ERROR)
			A(MF_E_NET_SESSION_NOT_FOUND)
			A(MF_E_NET_NOCONNECTION)
			A(MF_E_NET_CONNECTION_FAILURE)
			A(MF_E_NET_INCOMPATIBLE_PUSHSERVER)
			A(MF_E_NET_SERVER_ACCESSDENIED)
			A(MF_E_NET_PROXY_ACCESSDENIED)
			A(MF_E_NET_CANNOTCONNECT)
			A(MF_E_NET_INVALID_PUSH_TEMPLATE)
			A(MF_E_NET_INVALID_PUSH_PUBLISHING_POINT)
			A(MF_E_NET_BUSY)
			A(MF_E_NET_RESOURCE_GONE)
			A(MF_E_NET_ERROR_FROM_PROXY)
			A(MF_E_NET_PROXY_TIMEOUT)
			A(MF_E_NET_SERVER_UNAVAILABLE)
			A(MF_E_NET_TOO_MUCH_DATA)
			A(MF_E_NET_SESSION_INVALID)
			A(MF_E_OFFLINE_MODE)
			A(MF_E_NET_UDP_BLOCKED)
			A(MF_E_NET_UNSUPPORTED_CONFIGURATION)
			A(MF_E_NET_PROTOCOL_DISABLED)
			A(MF_E_ALREADY_INITIALIZED)
			A(MF_E_BANDWIDTH_OVERRUN)
			A(MF_E_LATE_SAMPLE)
			A(MF_E_FLUSH_NEEDED)
			A(MF_E_INVALID_PROFILE)
			A(MF_E_INDEX_NOT_COMMITTED)
			A(MF_E_NO_INDEX)
			A(MF_E_CANNOT_INDEX_IN_PLACE)
			A(MF_E_MISSING_ASF_LEAKYBUCKET)
			A(MF_E_INVALID_ASF_STREAMID)
			A(MF_E_STREAMSINK_REMOVED)
			A(MF_E_STREAMSINKS_OUT_OF_SYNC)
			A(MF_E_STREAMSINKS_FIXED)
			A(MF_E_STREAMSINK_EXISTS)
			A(MF_E_SAMPLEALLOCATOR_CANCELED)
			A(MF_E_SAMPLEALLOCATOR_EMPTY)
			A(MF_E_SINK_ALREADYSTOPPED)
			A(MF_E_ASF_FILESINK_BITRATE_UNKNOWN)
			A(MF_E_SINK_NO_STREAMS)
			A(MF_S_SINK_NOT_FINALIZED)
			A(MF_E_METADATA_TOO_LONG)
			A(MF_E_SINK_NO_SAMPLES_PROCESSED)
			A(MF_E_VIDEO_REN_NO_PROCAMP_HW)
			A(MF_E_VIDEO_REN_NO_DEINTERLACE_HW)
			A(MF_E_VIDEO_REN_COPYPROT_FAILED)
			A(MF_E_VIDEO_REN_SURFACE_NOT_SHARED)
			A(MF_E_VIDEO_DEVICE_LOCKED)
			A(MF_E_NEW_VIDEO_DEVICE)
			A(MF_E_NO_VIDEO_SAMPLE_AVAILABLE)
			A(MF_E_NO_AUDIO_PLAYBACK_DEVICE)
			A(MF_E_AUDIO_PLAYBACK_DEVICE_IN_USE)
			A(MF_E_AUDIO_PLAYBACK_DEVICE_INVALIDATED)
			A(MF_E_AUDIO_SERVICE_NOT_RUNNING)
			A(MF_E_TOPO_INVALID_OPTIONAL_NODE)
			A(MF_E_TOPO_CANNOT_FIND_DECRYPTOR)
			A(MF_E_TOPO_CODEC_NOT_FOUND)
			A(MF_E_TOPO_CANNOT_CONNECT)
			A(MF_E_TOPO_UNSUPPORTED)
			A(MF_E_TOPO_INVALID_TIME_ATTRIBUTES)
			A(MF_E_TOPO_LOOPS_IN_TOPOLOGY)
			A(MF_E_TOPO_MISSING_PRESENTATION_DESCRIPTOR)
			A(MF_E_TOPO_MISSING_STREAM_DESCRIPTOR)
			A(MF_E_TOPO_STREAM_DESCRIPTOR_NOT_SELECTED)
			A(MF_E_TOPO_MISSING_SOURCE)
			A(MF_E_TOPO_SINK_ACTIVATES_UNSUPPORTED)
			A(MF_E_SEQUENCER_UNKNOWN_SEGMENT_ID)
			A(MF_S_SEQUENCER_CONTEXT_CANCELED)
			A(MF_E_NO_SOURCE_IN_CACHE)
			A(MF_S_SEQUENCER_SEGMENT_AT_END_OF_STREAM)
			A(MF_E_TRANSFORM_TYPE_NOT_SET)
			A(MF_E_TRANSFORM_STREAM_CHANGE)
			A(MF_E_TRANSFORM_INPUT_REMAINING)
			A(MF_E_TRANSFORM_PROFILE_MISSING)
			A(MF_E_TRANSFORM_PROFILE_INVALID_OR_CORRUPT)
			A(MF_E_TRANSFORM_PROFILE_TRUNCATED)
			A(MF_E_TRANSFORM_PROPERTY_PID_NOT_RECOGNIZED)
			A(MF_E_TRANSFORM_PROPERTY_VARIANT_TYPE_WRONG)
			A(MF_E_TRANSFORM_PROPERTY_NOT_WRITEABLE)
			A(MF_E_TRANSFORM_PROPERTY_ARRAY_VALUE_WRONG_NUM_DIM)
			A(MF_E_TRANSFORM_PROPERTY_VALUE_SIZE_WRONG)
			A(MF_E_TRANSFORM_PROPERTY_VALUE_OUT_OF_RANGE)
			A(MF_E_TRANSFORM_PROPERTY_VALUE_INCOMPATIBLE)
			A(MF_E_TRANSFORM_NOT_POSSIBLE_FOR_CURRENT_OUTPUT_MEDIATYPE)
			A(MF_E_TRANSFORM_NOT_POSSIBLE_FOR_CURRENT_INPUT_MEDIATYPE)
			A(MF_E_TRANSFORM_NOT_POSSIBLE_FOR_CURRENT_MEDIATYPE_COMBINATION)
			A(MF_E_TRANSFORM_CONFLICTS_WITH_OTHER_CURRENTLY_ENABLED_FEATURES)
			A(MF_E_TRANSFORM_NEED_MORE_INPUT)
			A(MF_E_TRANSFORM_NOT_POSSIBLE_FOR_CURRENT_SPKR_CONFIG)
			A(MF_E_TRANSFORM_CANNOT_CHANGE_MEDIATYPE_WHILE_PROCESSING)
			A(MF_S_TRANSFORM_DO_NOT_PROPAGATE_EVENT)
			A(MF_E_UNSUPPORTED_D3D_TYPE)
			A(MF_E_TRANSFORM_ASYNC_LOCKED)
			A(MF_E_TRANSFORM_CANNOT_INITIALIZE_ACM_DRIVER)
			A(MF_E_LICENSE_INCORRECT_RIGHTS)
			A(MF_E_LICENSE_OUTOFDATE)
			A(MF_E_LICENSE_REQUIRED)
			A(MF_E_DRM_HARDWARE_INCONSISTENT)
			A(MF_E_NO_CONTENT_PROTECTION_MANAGER)
			A(MF_E_LICENSE_RESTORE_NO_RIGHTS)
			A(MF_E_BACKUP_RESTRICTED_LICENSE)
			A(MF_E_LICENSE_RESTORE_NEEDS_INDIVIDUALIZATION)
			A(MF_S_PROTECTION_NOT_REQUIRED)
			A(MF_E_COMPONENT_REVOKED)
			A(MF_E_TRUST_DISABLED)
			A(MF_E_WMDRMOTA_NO_ACTION)
			A(MF_E_WMDRMOTA_ACTION_ALREADY_SET)
			A(MF_E_WMDRMOTA_DRM_HEADER_NOT_AVAILABLE)
			A(MF_E_WMDRMOTA_DRM_ENCRYPTION_SCHEME_NOT_SUPPORTED)
			A(MF_E_WMDRMOTA_ACTION_MISMATCH)
			A(MF_E_WMDRMOTA_INVALID_POLICY)
			A(MF_E_POLICY_UNSUPPORTED)
			A(MF_E_OPL_NOT_SUPPORTED)
			A(MF_E_TOPOLOGY_VERIFICATION_FAILED)
			A(MF_E_SIGNATURE_VERIFICATION_FAILED)
			A(MF_E_DEBUGGING_NOT_ALLOWED)
			A(MF_E_CODE_EXPIRED)
			A(MF_E_GRL_VERSION_TOO_LOW)
			A(MF_E_GRL_RENEWAL_NOT_FOUND)
			A(MF_E_GRL_EXTENSIBLE_ENTRY_NOT_FOUND)
			A(MF_E_KERNEL_UNTRUSTED)
			A(MF_E_PEAUTH_UNTRUSTED)
			A(MF_E_NON_PE_PROCESS)
			A(MF_E_REBOOT_REQUIRED)
			A(MF_S_WAIT_FOR_POLICY_SET)
			A(MF_S_VIDEO_DISABLED_WITH_UNKNOWN_SOFTWARE_OUTPUT)
			A(MF_E_GRL_INVALID_FORMAT)
			A(MF_E_GRL_UNRECOGNIZED_FORMAT)
			A(MF_E_ALL_PROCESS_RESTART_REQUIRED)
			A(MF_E_PROCESS_RESTART_REQUIRED)
			A(MF_E_USERMODE_UNTRUSTED)
			A(MF_E_PEAUTH_SESSION_NOT_STARTED)
			A(MF_E_PEAUTH_PUBLICKEY_REVOKED)
			A(MF_E_GRL_ABSENT)
			A(MF_S_PE_TRUSTED)
			A(MF_E_PE_UNTRUSTED)
			A(MF_E_PEAUTH_NOT_STARTED)
			A(MF_E_INCOMPATIBLE_SAMPLE_PROTECTION)
			A(MF_E_PE_SESSIONS_MAXED)
			A(MF_E_HIGH_SECURITY_LEVEL_CONTENT_NOT_ALLOWED)
			A(MF_E_TEST_SIGNED_COMPONENTS_NOT_ALLOWED)
			A(MF_E_ITA_UNSUPPORTED_ACTION)
			A(MF_E_ITA_ERROR_PARSING_SAP_PARAMETERS)
			A(MF_E_POLICY_MGR_ACTION_OUTOFBOUNDS)
			A(MF_E_BAD_OPL_STRUCTURE_FORMAT)
			A(MF_E_ITA_UNRECOGNIZED_ANALOG_VIDEO_PROTECTION_GUID)
			A(MF_E_NO_PMP_HOST)
			A(MF_E_ITA_OPL_DATA_NOT_INITIALIZED)
			A(MF_E_ITA_UNRECOGNIZED_ANALOG_VIDEO_OUTPUT)
			A(MF_E_ITA_UNRECOGNIZED_DIGITAL_VIDEO_OUTPUT)
			A(MF_E_CLOCK_INVALID_CONTINUITY_KEY)
			A(MF_E_CLOCK_NO_TIME_SOURCE)
			A(MF_E_CLOCK_STATE_ALREADY_SET)
			A(MF_E_CLOCK_NOT_SIMPLE)
			A(MF_S_CLOCK_STOPPED)
			A(MF_E_NO_MORE_DROP_MODES)
			A(MF_E_NO_MORE_QUALITY_LEVELS)
			A(MF_E_DROPTIME_NOT_SUPPORTED)
			A(MF_E_QUALITYKNOB_WAIT_LONGER)
			A(MF_E_QM_INVALIDSTATE)
			A(MF_E_TRANSCODE_NO_CONTAINERTYPE)
			A(MF_E_TRANSCODE_PROFILE_NO_MATCHING_STREAMS)
			A(MF_E_TRANSCODE_NO_MATCHING_ENCODER)
			A(MF_E_ALLOCATOR_NOT_INITIALIZED)
			A(MF_E_ALLOCATOR_NOT_COMMITED)
			A(MF_E_ALLOCATOR_ALREADY_COMMITED)
			A(MF_E_STREAM_ERROR)
			A(MF_E_INVALID_STREAM_STATE)
			A(MF_E_HW_STREAM_NOT_CONNECTED)
			#undef A
		};
		for(SIZE_T nIndex = 0; nIndex < DIM(g_pMap); nIndex++)
			if(g_pMap[nIndex].nValue == nValue)
				return CString(g_pMap[nIndex].pszName);
		return _T("");
	}
	static BOOL IsWs2Result(HRESULT nResult, CString* psMessage = NULL)
	{
		if(HRESULT_FACILITY(nResult) != FACILITY_WIN32)
			return FALSE;
		const SCODE nCode = HRESULT_CODE(nResult);
		if(nCode < 10000 || nCode >= 11150) // WSABASEERR, ...
			return FALSE;
		const CString sMessage = AtlFormatSystemMessage(CDataLibraryMap::LoadLibrary(_T("ws2_32.dll")), nResult);
		if(sMessage.IsEmpty())
			return FALSE;
		if(psMessage)
			*psMessage = sMessage;
		return TRUE;
	}
	static BOOL IsWinHttpResult(HRESULT nResult, CString* psMessage = NULL)
	{
		if(HRESULT_FACILITY(nResult) != FACILITY_WIN32)
			return FALSE;
		const LONG nCode = HRESULT_CODE(nResult);
		if(nCode < 12000 || nCode >= 12200) // WINHTTP_ERROR_BASE, WINHTTP_ERROR_LAST
			return FALSE;
		const CString sMessage = AtlFormatSystemMessage(CDataLibraryMap::LoadLibrary(_T("winhttp.dll")), nResult);
		if(sMessage.IsEmpty())
			return FALSE;
		if(psMessage)
			*psMessage = sMessage;
		return TRUE;
	}
	static BOOL IsWinInetResult(HRESULT nResult, CString* psMessage = NULL)
	{
		if(HRESULT_FACILITY(nResult) != FACILITY_WIN32)
			return FALSE;
		const LONG nCode = HRESULT_CODE(nResult);
		if(nCode < 12000 || nCode >= 12200) // INTERNET_ERROR_BASE, INTERNET_ERROR_LAST
			return FALSE;
		const CString sMessage = AtlFormatSystemMessage(CDataLibraryMap::LoadLibrary(_T("wininet.dll")), nResult);
		if(sMessage.IsEmpty())
			return FALSE;
		if(psMessage)
			*psMessage = sMessage;
		return TRUE;
	}

public:
// CNotifyIconWindow
	static ULONGLONG GetCommonControlsVersion() throw()
	{
		DWORD nMajorVersion, nMinorVersion;
		_W(SUCCEEDED(AtlGetCommCtrlVersion(&nMajorVersion, &nMinorVersion)));
		return (ULONGLONG) ((nMajorVersion << 16) + nMinorVersion) << 32;
	}
	static ULONGLONG GetShellVersion() throw()
	{
		DWORD nMajorVersion, nMinorVersion;
		_W(SUCCEEDED(AtlGetShellVersion(&nMajorVersion, &nMinorVersion)));
		return (ULONGLONG) ((nMajorVersion << 16) + nMinorVersion) << 32;
	}
	CNotifyIconWindow()
	{
	}
	HWND Create()
	{
		return __super::Create(NULL, rcDefault, _T("AlaxInfo.ShowHresult.NotifyIconWindow"));
	}
	static CString GetDefaultInfoTitle()
	{
		return AtlLoadString(IDS_NOTIFYICON_DEFAULTTIPTITLE);
	}
	static DWORD GetDefaultInfoFlags() throw()
	{
		return NIIF_NONE;
	}
	VOID SetBalloonToolTip(DWORD nFlags, LPCTSTR pszTitle, LPCTSTR pszText, UINT nTimeout = 15 * 1000)
	{
		if(IsWindow() && m_NotifyIconData.uFlags & NIF_INFO)
		{
			m_NotifyIconData.uTimeout = nTimeout;
			m_NotifyIconData.dwInfoFlags = nFlags;
			_tcsncpy_s(m_NotifyIconData.szInfoTitle, pszTitle, _TRUNCATE);
			_tcsncpy_s(m_NotifyIconData.szInfo, pszText, _TRUNCATE);
			_W(Shell_NotifyIcon(NIM_MODIFY, &m_NotifyIconData));
		}
	}
	BOOL Process(LPCTSTR pszText)
	{
		#pragma region Parse
		if(_tcslen(pszText) > 24)
			return FALSE;
		CString sText = pszText;
		sText.Trim();
		LONGLONG nLongLongResult;
		if(_tcsnicmp(sText, _T("0x"), 2) == 0)
		{
			if(!StrToInt64Ex(sText, STIF_SUPPORT_HEX, &nLongLongResult))
				return FALSE; 
		} else
			nLongLongResult = _ttoi64(sText);
		const LONG nHighLongLongResult = (LONG) (nLongLongResult >> 32);
		if(!nLongLongResult || nHighLongLongResult > 0 || nHighLongLongResult < -1)
			return FALSE;
		HRESULT nResult = (LONG) nLongLongResult;
		#pragma endregion
		#pragma region Lookup
		CString sTitle = _T("System"), sMessage, sIdentifier;
		if(IsQuartzResult(nResult, &sMessage))
		{
			sTitle = _T("DirectShow");
			sIdentifier = LookupQuartzIdentifier(nResult);
		} else if(IsWmResult(nResult, &sMessage))
			sTitle = _T("Windows Media");
		else if(IsMfResult(nResult, &sMessage))
		{
			sTitle = _T("Media Foundation");
			sIdentifier = LookupMfIdentifier(nResult);
		} else if(IsWs2Result(nResult, &sMessage))
			sTitle = _T("Sockets");
		else if(IsWinHttpResult(nResult, &sMessage))
			sTitle = _T("WinHTTP");
		else if(IsWinInetResult(nResult, &sMessage))
			sTitle = _T("WinInet");
		else
			sMessage = AtlFormatSystemMessage(nResult);
		if(sMessage.IsEmpty())
			return FALSE;
		#pragma endregion
		#pragma region Present
		_A(!sTitle.IsEmpty());
		m_sQuery = AtlFormatString(_T("0x%08X"), nResult) + _T(" ") + sIdentifier + _T(" ") + sMessage;
		CRoArrayT<CString> TitleArray;
		_W(TitleArray.Add(AtlFormatString(_T("0x%08X"), nResult)) >= 0);
		if(!sIdentifier.IsEmpty())
			_W(TitleArray.Add(sIdentifier) >= 0);
		if(!sTitle.IsEmpty())
			_W(TitleArray.Add(sTitle) >= 0);
		SetBalloonToolTip(NIIF_INFO, _StringHelper::Join(TitleArray, _T(" - ")), sMessage);
		#pragma endregion
		return TRUE;
	}

// Window message handelrs
	LRESULT OnCreate(CREATESTRUCT*)
	{
		m_nCommonControlsVersion = GetCommonControlsVersion();
		m_nShellVersion = GetShellVersion();
		SetIcon(AtlLoadIconImage(IDI_MODULE, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXICON), GetSystemMetrics(SM_CYICON)), TRUE);
		SetIcon(AtlLoadIconImage(IDI_MODULE, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXSMICON), GetSystemMetrics(SM_CYSMICON)), FALSE);
		CIcon Icon = AtlLoadIconImage(IDI_MODULE, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXSMICON), GetSystemMetrics(SM_CYSMICON));
		CString sTip = AtlLoadString(IDS_PROJNAME);
		ZeroMemory(&m_NotifyIconData, sizeof m_NotifyIconData);
		m_NotifyIconData.hWnd = m_hWnd;
		m_NotifyIconData.uID = 1;
		m_NotifyIconData.uFlags = NIF_ICON | NIF_MESSAGE | NIF_TIP | NIF_STATE;
		m_NotifyIconData.uCallbackMessage = WM_NOTIFYICON;
		m_NotifyIconData.hIcon = Icon;
		_tcsncpy_s(m_NotifyIconData.szTip, sTip,  _TRUNCATE);
		if(m_nShellVersion >= 0x0005000000000000) // 5.0
		{
			m_NotifyIconData.cbSize = sizeof m_NotifyIconData; 
			m_NotifyIconData.uFlags |= NIF_INFO;
			_tcsncpy_s(m_NotifyIconData.szInfoTitle, GetDefaultInfoTitle(), _TRUNCATE);
			m_NotifyIconData.dwInfoFlags = GetDefaultInfoFlags();
		} else
			m_NotifyIconData.cbSize = NOTIFYICONDATA_V1_SIZE; 
		_W(Shell_NotifyIcon(NIM_ADD, &m_NotifyIconData));
		m_NotifyIconData.uFlags &= ~(NIF_ICON | NIF_STATE);
		m_NextClipboardViewerWindow = SetClipboardViewer();
		_pAtlModule->Lock();
		#if defined(_DEBUG)
		//Process(AtlFormatString(_T("%d"), 0x80040227)); // VFW_E_WRONG_STATE
		Process(_T("0xC00D36B9")); // MF_E_NO_MORE_TYPES)
		//Process(AtlFormatString(_T("0x%x"), HRESULT_FROM_WIN32(WSAEADDRINUSE))); // WSAEADDRINUSE
		//Process(AtlFormatString(_T("0x%x"), HRESULT_FROM_WIN32(ERROR_WINHTTP_AUTODETECTION_FAILED))); // ERROR_WINHTTP_AUTODETECTION_FAILED
		#endif // defined(_DEBUG)
		return TRUE;
	}
	LRESULT OnDestroy() throw()
	{
		_pAtlModule->Unlock();
		_W(ChangeClipboardChain(m_NextClipboardViewerWindow));
		_W(Shell_NotifyIcon(NIM_DELETE, &m_NotifyIconData));
		m_NotifyIconData.hWnd = NULL;
		return 0;
	}
	LRESULT OnChangeCbChain(CWindow RemovedWindow, CWindow NextWindow)
	{
		if(m_NextClipboardViewerWindow == RemovedWindow)
			m_NextClipboardViewerWindow = NextWindow;
		else if(m_NextClipboardViewerWindow)
			m_NextClipboardViewerWindow.SendMessage(WM_CHANGECBCHAIN, (WPARAM) (HWND) RemovedWindow, (LPARAM) (HWND) NextWindow);
		return 0;
	}
	LRESULT OnDrawClipboard()
	{
		if(OpenClipboard()) 
		{
			_ATLTRY
			{
				if(IsClipboardFormatAvailable(CF_UNICODETEXT))
				{
					CGlobalMemoryWeakHandle DataHandle = (HGLOBAL) GetClipboardData(CF_UNICODETEXT);
					__E(DataHandle);
					CGlobalMemoryHandle::CLockT<WCHAR> pszData(DataHandle);
					Process(CW2CT(pszData));
				}
			}
			_ATLCATCHALL()
			{
				_W(CloseClipboard());
				_ATLRETHROW;
			}
			_W(CloseClipboard());
		}
		return 0;
	}
	LRESULT OnMouseMove(UINT, CPoint)
	{
		return 0;
	}
	LRESULT OnLButtonDblClk(UINT, CPoint)
	{
		if(!IsWindowEnabled())
			return 0;
		INT nDefaultCommandIdentifier = ID_APP_ABOUT;
		//CWaitCursor WaitCursor;
		if(nDefaultCommandIdentifier)
			_W(PostMessage(WM_COMMAND, nDefaultCommandIdentifier));
		return 0;
	}
	LRESULT OnRButtonUp(UINT, CPoint)
	{
		CMenu ContainerMenu;
		_W(ContainerMenu.LoadMenu(IDR_NOTIFYICON));
		CMenuHandle Menu;
		INT nDefaultCommandIdentifier = ID_APP_ABOUT;
		Menu = ContainerMenu.GetSubMenu(0);
		//CWaitCursor WaitCursor;
		_A(Menu);
		if(nDefaultCommandIdentifier)
			_W(Menu.SetMenuDefaultItem(nDefaultCommandIdentifier));
		CPoint Position;
		GetCursorPos(&Position);
		_W(SetForegroundWindow(m_hWnd));
		_W(Menu.TrackPopupMenu(TPM_LEFTALIGN | TPM_TOPALIGN | TPM_VERTICAL, Position.x, Position.y, m_hWnd));
		return 0;
	}
	LRESULT OnNotifyIconBalloonUserClick(UINT, WPARAM, LPARAM)
	{
		if(m_sQuery.IsEmpty())
			return 0;
		CWinHttpRequestIdentifier Identifier(_T("http://google.com/search"));
		Identifier.AddSearchValue(_T("q"), m_sQuery);
		CWaitCursor WaitCursor;
		ShellExecute(m_hWnd, NULL, CW2CT(Identifier.GetValue()), NULL, NULL, SW_SHOWDEFAULT);
		return 0;
	}
	LRESULT OnNotifyIcon(UINT uMsg, WPARAM wParam, LPARAM lParam) throw()
	{
		_A(wParam == m_NotifyIconData.uID);
		return SendMessage((UINT) lParam);
	}
	LRESULT OnApplicationAbout(UINT, INT, HWND) throw()
	{
		CAboutDialog Dialog;
		EnableWindow(FALSE);
		Dialog.DoModal();
		EnableWindow(TRUE);
		return 0;
	}
	LRESULT OnApplicationExit(UINT = 0, INT = ID_APP_EXIT, HWND = NULL) throw()
	{
		PostQuitMessage(0);
		return 0;
	}
};
