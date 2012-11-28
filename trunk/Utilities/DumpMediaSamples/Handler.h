////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2006-2012
// Created by Roman Ryltsov roman@alax.info
// 
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#pragma once

////////////////////////////////////////////////////////////
// CAbstractHandler

class __declspec(uuid("344FF979-AC10-4346-B14E-EC81966076FF")) CAbstractHandler :
	public IUnknown
{
public:
// CAbstractHandler
	virtual VOID Initialize(const CMediaType& pMediaType) = 0;
	virtual VOID HandleSample(const CMediaSampleProperties& Properties) = 0;
};

////////////////////////////////////////////////////////////
// CHdycInterlacingHandler

class ATL_NO_VTABLE CHdycInterlacingHandler :
	public CComObjectRootEx<CComMultiThreadModelNoCS>,
	public CAbstractHandler
{
public:

BEGIN_COM_MAP(CHdycInterlacingHandler)
	COM_INTERFACE_ENTRY(CAbstractHandler)
END_COM_MAP()

private:
	mutable CRoCriticalSection m_DataCriticalSection;
	CVideoInfoHeader m_VideoInfoHeader;
	CSize m_Extent;
	BOOL m_bInitialized;
	CObjectPtr<CDormantMediaSample> m_pPreviousMediaSample;

public:
// CHdycInterlacingHandler

// CAbstractHandler
	VOID Initialize(const CMediaType& pMediaType)
	{
		CRoCriticalSectionLock DataLock(m_DataCriticalSection);
		m_bInitialized = FALSE;
		m_VideoInfoHeader = pMediaType.GetCompatibleVideoInfoHeader();
		if(!(m_VideoInfoHeader.GetBitmapInfoHeader().biCompression == FOURCC_UYVY || m_VideoInfoHeader.GetBitmapInfoHeader().biCompression == FOURCC_HDYC))
			return;
		m_Extent = m_VideoInfoHeader.GetExtent();
		_A(!m_pPreviousMediaSample);
		m_bInitialized = TRUE;
	}
	VOID HandleSample(const CMediaSampleProperties& Properties)
	{
		CRoCriticalSectionLock DataLock(m_DataCriticalSection);
		if(!m_bInitialized)
			return;
		_A(m_VideoInfoHeader.GetBitmapInfoHeader().biSize);
		_A(m_Extent.cx > 0 && m_Extent.cy > 0);
		if(m_pPreviousMediaSample)
		{
			const CMediaSampleProperties PreviousProperties(m_pPreviousMediaSample);
			SSIZE_T nFirstRowOffset, nNextRowOffset;
			m_VideoInfoHeader.GetData(nFirstRowOffset, nNextRowOffset);
			_A(nNextRowOffset > 0);
			const BYTE* pnDataA = PreviousProperties.pbBuffer + nFirstRowOffset;
			const BYTE* pnDataB = Properties.pbBuffer + nFirstRowOffset;
			INT pnCompareResults[2] = { 0, 0 };
			for(LONG nY = 0; nY < m_Extent.cy; nY++)
			{
				const INT nCompareResult = memcmp(pnDataA, pnDataB, nNextRowOffset);
				if(nCompareResult == 0)
					pnCompareResults[nY % 2]++;
				#pragma region Per-Pixel
				//CString s;
				//static const SSIZE_T g_nFactor = 8;
				//for(LONG nX = 0; nX < m_Extent.cx / g_nFactor + 1; nX++)
				//	s.AppendChar('-');
				//static const UINT32 g_nMask = 0x00FF00FF;
				//for(LONG nX = 0; nX < m_Extent.cx / 2; nX++)
				//	if((*((const UINT32*) pnDataA + (nX / 2)) & g_nMask) != (*((const UINT32*) pnDataB + (nX / 2)) & g_nMask))
				//		s.SetAt(nX / (g_nFactor / 2), 'X');
				//_tprintf(_T("%s\n"), s);
				#pragma endregion
				pnDataA += nNextRowOffset;
				pnDataB += nNextRowOffset;
			}
			_tprintf(_T("Match to Previous Sample: Even Lines %d, Odd Lines %d\n"), pnCompareResults[0], pnCompareResults[1]);
		}
		m_pPreviousMediaSample.Release();
		m_pPreviousMediaSample.Construct();
		m_pPreviousMediaSample->SetProperties(Properties);
	}
};
