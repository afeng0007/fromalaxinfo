////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2016
// Created by Roman Ryltsov roman@alax.info
//
// A permission to re-use this source code is granted as long as copyright notice and 
// reference to source website http://alax.info is retained.

#include "stdafx.h"
#include "libav.h"

////////////////////////////////////////////////////////////
// CModule

class CModule :
	public CAtlExeModuleT<CModule>
{
public:

	////////////////////////////////////////////////////////
	// CBlob

	class CBlob
	{
	public:
		CHeapPtr<BYTE> m_pnData;
		SIZE_T m_nDataSize;

	public:
	// CBlob
		CBlob() :
			m_nDataSize(0)
		{
		}
		VOID Free()
		{
			m_pnData.Free();
			m_nDataSize = 0;
		}
		VOID Append(CBlob& Value)
		{
			__D(m_pnData.Reallocate(m_nDataSize + Value.m_nDataSize), E_OUTOFMEMORY);
			memcpy(m_pnData + m_nDataSize, Value.m_pnData, Value.m_nDataSize);
			m_nDataSize += Value.m_nDataSize;
		}
	};

private:
	BOOL m_bAnnexB;

public:
// CModule
	CModule()
	{
		m_bAnnexB = FALSE;
	}
	HRESULT PreMessageLoop(INT nShowCommand)
	{
		_V(__super::PreMessageLoop(nShowCommand));
		return S_OK;
	}
	static BOOL ReadFileData(LPCTSTR pszPath, CHeapPtr<BYTE>& pnData, SIZE_T& nDataSize)
	{
		CAtlFile File;
		__C(File.Create(pszPath, GENERIC_READ, FILE_SHARE_READ, OPEN_EXISTING));
		static const SIZE_T g_nDataCapacity = 1 << 20; // 1 MB
		__D(pnData.Allocate(g_nDataCapacity), E_OUTOFMEMORY);
		DWORD nReadDataSize = 0;
		__C(File.Read(pnData, (DWORD) g_nDataCapacity, nReadDataSize));
		_A(nReadDataSize < g_nDataCapacity);
		nDataSize = nReadDataSize;
		_W(pnData.Reallocate(nDataSize));
		return TRUE;
	}
	static BOOL ReadFileData(LPCTSTR pszPath, CBlob& Blob)
	{
		_A(!Blob.m_pnData);
		return ReadFileData(pszPath, Blob.m_pnData, Blob.m_nDataSize);
	}
	template <typename LENGTH>
	static SIZE_T CopyNalUnits(const BYTE* pnSourceData, SIZE_T nSourceDataSize, BYTE* pnDestinationData, SIZE_T nDestinationDataCapacity, BOOL bForceLongStartCode = FALSE)
	{
		_A(sizeof (LENGTH) == 2 || sizeof (LENGTH) == 4);
		BYTE* pnDestinationDataPointer = pnDestinationData;
		for(; nSourceDataSize; )
		{
			const SIZE_T nUnitDataSize = (typename LENGTH::CBase) *((const LENGTH*) pnSourceData);
			__D(sizeof (LENGTH) + nUnitDataSize <= nSourceDataSize, HRESULT_FROM_WIN32(ERROR_INVALID_DATA));
			__D((SIZE_T) (pnDestinationDataPointer + 4 + nUnitDataSize - pnDestinationData) <= nDestinationDataCapacity, HRESULT_FROM_WIN32(ERROR_INSUFFICIENT_BUFFER));
			pnSourceData += sizeof (LENGTH);
			nSourceDataSize -= sizeof (LENGTH);
			static const BYTE g_pnStartCode[] = { 0x00, 0x00, 0x00, 0x01 };
			BOOL bLongStartCode = FALSE;
			if(!bForceLongStartCode)
			{
				if(nUnitDataSize)
				{
					const UINT nNalUnitType = *pnSourceData & 0x1F;
					if(nNalUnitType >= 6 && nNalUnitType <= 9) // SEI, SPS, PPS, Access Unit Delimiter
						bLongStartCode = TRUE; 
				}
			} else
				bLongStartCode = TRUE; 
			SIZE_T nStartCodeSize = sizeof g_pnStartCode;
			if(!bLongStartCode)
			{
				memcpy(pnDestinationDataPointer, g_pnStartCode + 1, sizeof g_pnStartCode - 1);
				nStartCodeSize--;
			} else
				memcpy(pnDestinationDataPointer, g_pnStartCode, sizeof g_pnStartCode);
			pnDestinationDataPointer += nStartCodeSize;
			memcpy(pnDestinationDataPointer, pnSourceData, nUnitDataSize);
			pnSourceData += nUnitDataSize;
			nSourceDataSize -= nUnitDataSize;
			pnDestinationDataPointer += nUnitDataSize;
		}
		return pnDestinationDataPointer - pnDestinationData;
	}
	static INT CompareMediaSampleFileNames(LPCTSTR pszNameA, LPCTSTR pszNameB, INT)
	{
		return _tcscmp(pszNameA, pszNameB);
	}
	VOID ProcessFrame(CAvFrame& pAvFrame)
	{
		_A(pAvFrame->pts == AV_NOPTS_VALUE);
		_A(pAvFrame->pkt_dts == AV_NOPTS_VALUE);
		CRoArrayT<CString> Array;
		Array.Add(AtlFormatString(_T("width %d"), pAvFrame->width));
		Array.Add(AtlFormatString(_T("height %d"), pAvFrame->height));
		Array.Add(AtlFormatString(_T("key_frame %d"), pAvFrame->key_frame));
		Array.Add(AtlFormatString(_T("pict_type %d"), pAvFrame->pict_type));
		Array.Add(AtlFormatString(_T("pkt_pts %I64d"), pAvFrame->pkt_pts));
		_tprintf(_T("Frame, %s\n"), _StringHelper::Join(Array, _T(", ")));
		pAvFrame;
	}
	VOID ProcessMediaSample(CAvCodecContext& pAvCodecContext, CAvFrame& pAvFrame, CBlob& Blob, LONGLONG nTime)
	{
		CAvPacketT<FALSE> AvPacket(Blob.m_pnData, Blob.m_nDataSize);
		CBlob LocalBlob;
		if(m_bAnnexB)
		{
			SIZE_T nDataCapacity = 1024 + Blob.m_nDataSize + Blob.m_nDataSize / 8;
			__D(LocalBlob.m_pnData.Allocate(nDataCapacity), E_OUTOFMEMORY);
			LocalBlob.m_nDataSize = CopyNalUnits<NUINT32>(Blob.m_pnData, Blob.m_nDataSize, LocalBlob.m_pnData, nDataCapacity);
			_tprintf(_T("%d Annex B bytes from %d bytes\n"), LocalBlob.m_nDataSize, Blob.m_nDataSize);
			AvPacket.data = LocalBlob.m_pnData;
			AvPacket.size = (INT) LocalBlob.m_nDataSize;
		}
		AvPacket.flags = 0; //AV_PKT_FLAG_KEY;
		AvPacket.dts = AV_NOPTS_VALUE;
		AvPacket.pts = nTime;
		SIZE_T nDecodeDataSize;
		const BOOL bFrameAvailable = pAvCodecContext.DecodeVideo(pAvFrame, &AvPacket, nDecodeDataSize);
		_A(nDecodeDataSize == (SIZE_T) AvPacket.size);
		if(bFrameAvailable)
			ProcessFrame(pAvFrame);
	}
	VOID RunMessageLoop()
	{
		CAvLockManager::Register();
		CAvCodec::Register(TRUE);
		CAvCodecContext pAvCodecContext;
		AVCodec* pAvCodec = CAvCodec::FindDecoder(AV_CODEC_ID_H264);
		__D(pAvCodec, E_OUTOFMEMORY);
		_A(pAvCodec->capabilities & CODEC_CAP_DELAY);
		pAvCodecContext.Allocate(pAvCodec);
		pAvCodecContext->codec_type = AVMEDIA_TYPE_VIDEO;
		pAvCodecContext->codec_id = AV_CODEC_ID_H264;
		#if _DEVELOPMENT
			pAvCodecContext->debug = FF_DEBUG_PICT_INFO | FF_DEBUG_STARTCODE;
		#endif // _DEVELOPMENT && defined(_DEBUG)
		//pAvCodecContext->time_base.num = (INT) (VideoInfoHeader2.AvgTimePerFrame / 10000i64);
		//pAvCodecContext->time_base.den = 2 * 1000;
		//pAvCodecContext->ticks_per_frame = 2;
		//pAvCodecContext->pkt_timebase.num = 1;
		//pAvCodecContext->pkt_timebase.den = 1000;
		CAvFrame pAvFrame;
		_A(!pAvFrame);
		pAvFrame.Allocate();
		static LPCTSTR g_pszDirectory = 
			_T("D:\\Projects\\Alax.Info\\Repository-Private\\Utilities\\DirectShow\\H.264\\tiny.mp4 NAL Units");
		m_bAnnexB = TRUE;
		if(m_bAnnexB)
			_tprintf(_T("Using H.264 Annex B\n"));
		#pragma region Extra Data
		if(!m_bAnnexB)
		{
			CBlob AvcDecoderConfigurationRecordBlob;
			{
				CRoListT<CBlob> BlobList;
				CRoArrayT<CBlob*> SpsBlobList, PpsBlobList;
				for(UINT nIndex = 0; ; nIndex++)
				{
					// NOTE: Naming sample: MediaType_00
					const CString sName = AtlFormatString(_T("MediaType_%02d"), nIndex);
					CPath sPath = Combine(g_pszDirectory, sName);
					if(!sPath.FileExists())
						break;
					CBlob& Blob = BlobList.GetAt(BlobList.AddTail());
					_W(ReadFileData(sPath, Blob));
					_tprintf(_T("Read %d bytes from %s\n"), Blob.m_nDataSize, sName);
					if(Blob.m_nDataSize < 1)
						continue;
					const UINT nNalUnitType = Blob.m_pnData[0] & 0x1F;
					if(nNalUnitType == 7)
						SpsBlobList.Add(&Blob);
					else
					if(nNalUnitType == 8)
						PpsBlobList.Add(&Blob);
					//else
					//	continue;
				}
				if(!SpsBlobList.IsEmpty() || !PpsBlobList.IsEmpty())
				{
					// NOTE: See MPEG-4 Part 15, 5.2.4.1.1 Syntax
					AvcDecoderConfigurationRecordBlob.m_nDataSize = 64 << 10; // 64 KB
					__D(AvcDecoderConfigurationRecordBlob.m_pnData.Allocate(AvcDecoderConfigurationRecordBlob.m_nDataSize), E_OUTOFMEMORY);
					BYTE* A = AvcDecoderConfigurationRecordBlob.m_pnData;
					A[0] = 1; // configurationVersion
					A[1] = 100; // MPEG-4 Part 10, profile_idc, A.2.4 High profile
					A[2] = 0; // profile_compatibility
					A[3] = 40; // MPEG-4 Part 10, level_idc
					A[4] = 0xFC | 3; // lengthSizeMinusOne, 4 byte long lengths
					A += 5;
					BYTE* pnSequenceParameterSetCount = A++;
					*pnSequenceParameterSetCount = 0xE0 | SpsBlobList.GetCount();
					for(auto&& pSpsBlob: SpsBlobList)
					{
						*((NUINT16*) A) = (UINT16) pSpsBlob->m_nDataSize;
						A += sizeof (NUINT16);
						memcpy(A, pSpsBlob->m_pnData, pSpsBlob->m_nDataSize);
						A += pSpsBlob->m_nDataSize;
					}
					BYTE* pnPictureParameterSetCount = A++;
					*pnPictureParameterSetCount = 0x00 | PpsBlobList.GetCount();
					for(auto&& pPpsBlob: PpsBlobList)
					{
						*((NUINT16*) A) = (UINT16) pPpsBlob->m_nDataSize;
						A += sizeof (NUINT16);
						memcpy(A, pPpsBlob->m_pnData, pPpsBlob->m_nDataSize);
						A += pPpsBlob->m_nDataSize;
					}
					_A((SIZE_T) (A - AvcDecoderConfigurationRecordBlob.m_pnData) <= AvcDecoderConfigurationRecordBlob.m_nDataSize);
					AvcDecoderConfigurationRecordBlob.m_nDataSize = A - AvcDecoderConfigurationRecordBlob.m_pnData;
					pAvCodecContext->extradata_size = (int) AvcDecoderConfigurationRecordBlob.m_nDataSize;
					pAvCodecContext->extradata = (BYTE*) AvcDecoderConfigurationRecordBlob.m_pnData;
				}
			}
		}
		#pragma endregion 
		pAvCodecContext.Open(pAvCodec);
		// NOTE: Naming sample: MediaSample_00006_00001250_02
		CFindFiles FindFiles;
		CRoArrayT<CString> NameArray;
		for(BOOL bFound = FindFiles.FindFirstFile(g_pszDirectory, _T("MediaSample_*")); bFound; bFound = FindFiles.FindNextFile())
			NameArray.Add(FindFiles.GetFindData().cFileName);
		NameArray.Sort<INT>(&CModule::CompareMediaSampleFileNames, 0);
		//for(auto&& sName: NameArray)
		//	_tprintf(_T("Scheduled %s\n"), sName);
		CBlob CurrentBlob;
		INT nCurrentMediaSampleIndex;
		LONGLONG nCurrentMediaSampleTime;
		INT nCurrentNalUnitIndex;
		for(auto&& sName: NameArray)
		{
			CBlob Blob;
			_W(ReadFileData(Combine(g_pszDirectory, sName), Blob));
			_tprintf(_T("Read %d bytes from %s\n"), Blob.m_nDataSize, sName);
			CRoArrayT<CString> Array;
			_StringHelper::Split(sName, _T('_'), Array);
			__D(Array.GetCount() == 4, E_UNNAMED);
			INT nMediaSampleIndex;
			LONGLONG nMediaSampleTime;
			INT nNalUnitIndex;
			_W(AtlStringToInteger(Array[1], nMediaSampleIndex));
			_W(AtlStringToInteger(Array[2], nMediaSampleTime));
			_W(AtlStringToInteger(Array[3], nNalUnitIndex));
			_W(Blob.m_pnData.Reallocate(sizeof (NUINT32) + Blob.m_nDataSize));
			memmove(Blob.m_pnData + sizeof (NUINT32), Blob.m_pnData, Blob.m_nDataSize);
			*((NUINT32*) (BYTE*) Blob.m_pnData) = (UINT32) Blob.m_nDataSize;
			Blob.m_nDataSize += sizeof (NUINT32);
			if(CurrentBlob.m_pnData)
			{
				if(nMediaSampleIndex != nCurrentMediaSampleIndex)
				{
					_A(nMediaSampleIndex > nCurrentMediaSampleIndex);
					ProcessMediaSample(pAvCodecContext, pAvFrame, CurrentBlob, nCurrentMediaSampleTime);
					CurrentBlob.Free();
				} else
				{
					_A(nMediaSampleIndex == nCurrentMediaSampleIndex);
					_A(nMediaSampleTime == nCurrentMediaSampleTime);
					_A(nNalUnitIndex > nCurrentNalUnitIndex);
				}
			}
			nCurrentMediaSampleIndex = nMediaSampleIndex;
			nCurrentMediaSampleTime = nMediaSampleTime;
			nCurrentNalUnitIndex = nNalUnitIndex;
			CurrentBlob.Append(Blob);
		}
		if(CurrentBlob.m_pnData)
		{
			ProcessMediaSample(pAvCodecContext, pAvFrame, CurrentBlob, nCurrentMediaSampleTime);
			CurrentBlob.Free();
		}
		_tprintf(_T("Draining...\n"));
		for(; ; )
		{
			CAvPacketT<FALSE> AvPacket(NULL, 0);
			AvPacket.flags = 0; //AV_PKT_FLAG_KEY;
			AvPacket.dts = AV_NOPTS_VALUE;
			AvPacket.pts = AV_NOPTS_VALUE;
			DWORD nDataSize;
			const BOOL bFrameAvailable = pAvCodecContext.DecodeVideo(pAvFrame, &AvPacket, nDataSize);
			_A(!nDataSize);
			if(bFrameAvailable)
				ProcessFrame(pAvFrame);
		}
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	CModule Module;
	Module.WinMain(SW_SHOWNORMAL);
	return 0;
}

