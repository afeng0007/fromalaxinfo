////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2013
// Created by Roman Ryltsov roman@alax.info

#pragma once

#include <wmsdk.h>
#include "rodshow.h"
#include "rocontrols.h"
#include "rocrypt.h"
#include "rowinhttp.h"
#include "AboutDialog.h"

#pragma comment(lib, "wmvcore.lib")

////////////////////////////////////////////////////////////
// CMainDialog

class CMainDialog : 
	public CDialogImpl<CMainDialog>,
	public CDialogResize<CMainDialog>,
	public CWindowWithPrivateMessagesT<CMainDialog>
{
public:
	enum { IDD = IDD_MAIN };

BEGIN_MSG_MAP_EX(CMainDialog)
	//CHAIN_MSG_MAP(CDialogImpl<CMainDialog>)
	CHAIN_MSG_MAP(CDialogResize<CMainDialog>)
	CHAIN_MSG_MAP(CWindowWithPrivateMessagesT<CMainDialog>)
	MSG_WM_INITDIALOG(OnInitDialog)
	MSG_WM_SYSCOMMAND(OnSysCommand)
	COMMAND_ID_HANDLER_EX(IDCANCEL, OnCancel)
	MSG_TVN_GETINFOTIP(IDC_TREE, OnTreeGetInfoTip)
	MSG_TVN_SELCHANGED(IDC_TREE, OnTreeViewSelChanged)
	//COMMAND_ID_HANDLER_EX(ID_APP_ABOUT, OnAppAbout)
	// SUGG: List view column sort
	MSG_LVN_GETINFOTIP(IDC_LIST, OnListGetInfoTip)
	COMMAND_ID_HANDLER_EX(IDC_COPY, OnCopyButtonClicked)
	COMMAND_ID_HANDLER_EX(IDC_SUBMIT, OnSubmitButtonClicked)
	REFLECT_NOTIFICATIONS()
END_MSG_MAP()

BEGIN_DLGRESIZE_MAP(CMainDialog)
	DLGRESIZE_CONTROL(IDC_TREE, DLSZ_SIZE_Y)
	DLGRESIZE_CONTROL(IDC_LIST, DLSZ_SIZE_X | DLSZ_SIZE_Y)
	DLGRESIZE_CONTROL(IDCANCEL, DLSZ_MOVE_X)
	DLGRESIZE_CONTROL(IDC_COPY, DLSZ_MOVE_X)
	DLGRESIZE_CONTROL(IDC_SUBMIT, DLSZ_MOVE_X)
	DLGRESIZE_CONTROL(IDC_OSVERSION, DLSZ_MOVE_X | DLSZ_MOVE_Y)
END_DLGRESIZE_MAP()

public:

	////////////////////////////////////////////////////
	// CWmCodecInfo3

	class CWmCodecInfo3 :
		public CComQIPtr<IWMCodecInfo3>
	{
	public:
	// CWmCodecInfo3
		CWmCodecInfo3(IWMCodecInfo3* pWmCodecInfo3 = NULL) throw() :
			CComQIPtr<IWMCodecInfo3>(pWmCodecInfo3)
		{
		}
		CWmCodecInfo3(IUnknown* pUnknown) throw() :
			CComQIPtr<IWMCodecInfo3>(pUnknown)
		{
		}
		HRESULT GetDwordCodecProperty(const GUID& MajorType, DWORD nCodecIndex, LPCWSTR pszName, DWORD& nValue) const throw()
		{
			_A(pszName);
			WMT_ATTR_DATATYPE nType = (WMT_ATTR_DATATYPE) -1;
			DWORD nValueSize = sizeof nValue;
			_C(p->GetCodecProp(MajorType, nCodecIndex, pszName, &nType, (BYTE*) &nValue, &nValueSize));
			_D(nType == WMT_TYPE_DWORD && nValueSize == sizeof nValue, E_UNNAMED);
			return S_OK;
		}
		DWORD GetDwordCodecProperty(const GUID& MajorType, DWORD nCodecIndex, LPCWSTR pszName) const
		{
			DWORD nValue;
			__C(GetDwordCodecProperty(MajorType, nCodecIndex, pszName, nValue));
			return nValue;
		}
		HRESULT GetBoolCodecProperty(const GUID& MajorType, DWORD nCodecIndex, LPCWSTR pszName, BOOL& bValue) const throw()
		{
			_A(pszName);
			WMT_ATTR_DATATYPE nType = (WMT_ATTR_DATATYPE) -1;
			DWORD nValueSize = sizeof bValue;
			_C(p->GetCodecProp(MajorType, nCodecIndex, pszName, &nType, (BYTE*) &bValue, &nValueSize));
			_D(nType == WMT_TYPE_BOOL && nValueSize == sizeof bValue, E_UNNAMED);
			return S_OK;
		}
		BOOL GetBoolCodecProperty(const GUID& MajorType, DWORD nCodecIndex, LPCWSTR pszName) const
		{
			BOOL bValue;
			__C(GetBoolCodecProperty(MajorType, nCodecIndex, pszName, bValue));
			return bValue;
		}
		HRESULT GetDwordCodecEnumerationSetting(const GUID& MajorType, DWORD nCodecIndex, LPCWSTR pszName, DWORD& nValue) const throw()
		{
			_A(pszName);
			WMT_ATTR_DATATYPE nType = (WMT_ATTR_DATATYPE) -1;
			DWORD nValueSize = sizeof nValue;
			_C(p->GetCodecEnumerationSetting(MajorType, nCodecIndex, pszName, &nType, (BYTE*) &nValue, &nValueSize));
			_D(nType == WMT_TYPE_DWORD && nValueSize == sizeof nValue, E_UNNAMED);
			return S_OK;
		}
		DWORD GetDwordCodecEnumerationSetting(const GUID& MajorType, DWORD nCodecIndex, LPCWSTR pszName) const
		{
			DWORD nValue;
			__C(GetDwordCodecEnumerationSetting(MajorType, nCodecIndex, pszName, nValue));
			return nValue;
		}
		HRESULT GetBoolCodecEnumerationSetting(const GUID& MajorType, DWORD nCodecIndex, LPCWSTR pszName, BOOL& bValue) const throw()
		{
			_A(pszName);
			WMT_ATTR_DATATYPE nType = (WMT_ATTR_DATATYPE) -1;
			DWORD nValueSize = sizeof bValue;
			_C(p->GetCodecEnumerationSetting(MajorType, nCodecIndex, pszName, &nType, (BYTE*) &bValue, &nValueSize));
			_D(nType == WMT_TYPE_BOOL && nValueSize == sizeof bValue, E_UNNAMED);
			return bValue;
		}
		BOOL GetBoolCodecEnumerationSetting(const GUID& MajorType, DWORD nCodecIndex, LPCWSTR pszName) const
		{
			BOOL bValue;
			__C(GetBoolCodecEnumerationSetting(MajorType, nCodecIndex, pszName, bValue));
			return bValue;
		}
		HRESULT SetDwordCodecEnumerationSetting(const GUID& MajorType, DWORD nCodecIndex, LPCWSTR pszName, DWORD nValue) const throw()
		{
			return p->SetCodecEnumerationSetting(MajorType, nCodecIndex, pszName, WMT_TYPE_DWORD, (const BYTE*) &nValue, sizeof nValue);
		}
		HRESULT SetBoolCodecEnumerationSetting(const GUID& MajorType, DWORD nCodecIndex, LPCWSTR pszName, BOOL nValue) const throw()
		{
			return p->SetCodecEnumerationSetting(MajorType, nCodecIndex, pszName, WMT_TYPE_BOOL, (const BYTE*) &nValue, sizeof nValue);
		}
	};

	////////////////////////////////////////////////////
	// CEnumerationSetting

	class CEnumerationSetting
	{
	public:
		CStringW m_sName;
		WMT_ATTR_DATATYPE m_nType;
		CHeapPtr<BYTE> m_pnData;
		SIZE_T m_nDataSize;

	public:
	// CEnumerationSetting
		CEnumerationSetting() throw()
		{
		}
		explicit CEnumerationSetting(const CStringW& sName, DWORD nValue) :
			m_sName(sName)
		{
			m_nType = WMT_TYPE_DWORD;
			m_nDataSize = sizeof (DWORD);
			__D(m_pnData.Allocate(m_nDataSize), E_OUTOFMEMORY);
			*((DWORD*) (BYTE*) m_pnData) = nValue;
		}
		explicit CEnumerationSetting(const CStringW& sName, BOOL bValue) :
			m_sName(sName)
		{
			m_nType = WMT_TYPE_BOOL;
			m_nDataSize = sizeof (BOOL);
			__D(m_pnData.Allocate(m_nDataSize), E_OUTOFMEMORY);
			*((BOOL*) (BYTE*) m_pnData) = bValue;
		}
		CEnumerationSetting(const CEnumerationSetting& EnumerationSetting)
		{
			m_sName = EnumerationSetting.m_sName;
			m_nType = EnumerationSetting.m_nType;
			if(EnumerationSetting.m_nDataSize)
			{
				__D(m_pnData.Allocate(EnumerationSetting.m_nDataSize), E_OUTOFMEMORY);
				CopyMemory(m_pnData, EnumerationSetting.m_pnData, EnumerationSetting.m_nDataSize);
			}
			m_nDataSize = EnumerationSetting.m_nDataSize;
		}
		CString GetValueString() const
		{
			switch(m_nType)
			{
			case WMT_TYPE_DWORD:
				return AtlFormatString(_T("%d"), *((const DWORD*) (const BYTE*) m_pnData));
			case WMT_TYPE_BOOL:
				return AtlFormatString(_T("%d"), *((const BOOL*) (const BYTE*) m_pnData));
			default:
				_A(FALSE);
			}
			return (LPCTSTR) NULL;
		}
	};

	////////////////////////////////////////////////////
	// CEnumerationSettingList

	class CEnumerationSettingList :
		public CAtlList<CEnumerationSetting>
	{
	public:
		CString m_sName;

	public:
	// CEnumerationSettingList
		CEnumerationSettingList& operator = (const CEnumerationSettingList& EnumerationSettingList)
		{
			RemoveAll();
			for(POSITION Position = EnumerationSettingList.GetHeadPosition(); Position; EnumerationSettingList.GetNext(Position))
				AddTail(EnumerationSettingList.GetAt(Position));
			m_sName = EnumerationSettingList.m_sName;
			return *this;
		}
	};

	////////////////////////////////////////////////////
	// CCodecFormatData

	class CCodecFormatData
	{
	public:
		DWORD m_nIndex;
		CStringW m_sDescription;
		CComPtr<IWMStreamConfig> m_pWmStreamConfig;
		CMediaType m_pMediaType;

	public:
	// CCodecFormatData
		CCodecFormatData() throw() :
			m_nIndex(0)
		{
		}
		VOID Initialize(DWORD nIndex, const CStringW& sDescription, IWMStreamConfig* pWmStreamConfig, const CMediaType& pMediaType)
		{
			m_nIndex = nIndex;
			m_sDescription = sDescription;
			m_pWmStreamConfig = pWmStreamConfig;
			m_pMediaType = pMediaType;
		}
		CString GetDescription() const
		{
			if(m_sDescription.IsEmpty())
				return _T("(no description)");
			return CString(m_sDescription);
		}
	};

	typedef CAtlList<CCodecFormatData> CCodecFormatDataList;

	////////////////////////////////////////////////////
	// CCodecData

	class CCodecData
	{
	public:
		CComPtr<IWMCodecInfo2> m_pWmCodecInfo2;
		GUID m_MajorType;
		DWORD m_nIndex;
		CStringW m_sName;
		CCodecFormatDataList m_CodecFormatDataList;

	public:
	// CCodecData
		CCodecData() throw() :
			m_MajorType(GUID_NULL)
		{
		}
		VOID Initialize(IWMCodecInfo2* pWmCodecInfo2, const GUID& MajorType, DWORD nIndex, const CStringW& sName)
		{
			_A(pWmCodecInfo2);
			m_pWmCodecInfo2 = pWmCodecInfo2;
			m_MajorType = MajorType;
			m_nIndex = nIndex;
			m_sName = sName;
			m_CodecFormatDataList.RemoveAll();
			DWORD nFormatCount = 0;
			__C(pWmCodecInfo2->GetCodecFormatCount(MajorType, nIndex, &nFormatCount));
			_Z4(atlTraceGeneral, 4, _T("nFormatCount %d\n"), nFormatCount);
			for(DWORD nFormatIndex = 0; nFormatIndex < nFormatCount; nFormatIndex++)
			{
				DWORD nCodecFormatDescriptionLength = 0;
				__C(pWmCodecInfo2->GetCodecFormatDesc(MajorType, nIndex, nFormatIndex, NULL, NULL, &nCodecFormatDescriptionLength));
				_A(nCodecFormatDescriptionLength > 0);
				CComPtr<IWMStreamConfig> pWmStreamConfig;
				CStringW sFormatDescription;
				__C(pWmCodecInfo2->GetCodecFormatDesc(MajorType, nIndex, nFormatIndex, &pWmStreamConfig, sFormatDescription.GetBufferSetLength(nCodecFormatDescriptionLength - 1), &nCodecFormatDescriptionLength));
				_Z4(atlTraceGeneral, 4, _T("nFormatIndex %d, sFormatDescription \"%ls\"\n"), nFormatIndex, sFormatDescription);
				CComQIPtr<IWMMediaProps> pWmMediaProps = pWmStreamConfig;
				__D(pWmMediaProps, E_NOINTERFACE);
				DWORD nMediaTypeSize = 0;
				pWmMediaProps->GetMediaType(NULL, &nMediaTypeSize);
				CTempBuffer<WM_MEDIA_TYPE> pMediaType;
				pMediaType.AllocateBytes(nMediaTypeSize);
				__C(pWmMediaProps->GetMediaType(pMediaType, &nMediaTypeSize));
				_Z4(atlTraceGeneral, 4, _T("pMediaType->subtype %ls\n"), _PersistHelper::StringFromIdentifier(pMediaType->subtype));
				POSITION Position = m_CodecFormatDataList.AddTail();
				_ATLTRY
				{
					CCodecFormatData& CodecFormatData = m_CodecFormatDataList.GetAt(Position);
					CodecFormatData.Initialize(nFormatIndex, sFormatDescription, pWmStreamConfig, (const AM_MEDIA_TYPE*) (const WM_MEDIA_TYPE*) pMediaType);
				}
				_ATLCATCHALL()
				{
					m_CodecFormatDataList.RemoveAt(Position);
					_ATLRETHROW;
				}
			}
		}
		CString GetTitle() const
		{
			return CString(m_sName);
		}
	};

	////////////////////////////////////////////////////
	// CCodecDataList

	class CCodecDataList :
		public CAtlList<CCodecData>
	{
	public:
		GUID m_MajorType;
		CEnumerationSettingList m_EnumerationSettingList;

	public:
	// CCodecDataList
		CCodecDataList() throw() :
			m_MajorType(GUID_NULL)
		{
		}
		CCodecDataList(IWMCodecInfo2* pWmCodecInfo2, const GUID& MajorType)
		{
			Initialize(pWmCodecInfo2, MajorType);
		}
		VOID Initialize(IWMCodecInfo2* pWmCodecInfo2, const GUID& MajorType)
		{
			_A(pWmCodecInfo2);
			RemoveAll();
			m_MajorType = MajorType;
			_A(m_EnumerationSettingList.IsEmpty() && m_EnumerationSettingList.m_sName.IsEmpty());
			DWORD nCodecCount = 0;
			__C(pWmCodecInfo2->GetCodecInfoCount(MajorType, &nCodecCount));
			for(DWORD nCodecIndex = 0; nCodecIndex < nCodecCount; nCodecIndex++)
				_ATLTRY
				{
					DWORD nCodecNameLength = 0;
					__C(pWmCodecInfo2->GetCodecName(MajorType, nCodecIndex, NULL, &nCodecNameLength));
					_A(nCodecNameLength > 0);
					CStringW sCodecName;
					if(nCodecNameLength)
						__C(pWmCodecInfo2->GetCodecName(MajorType, nCodecIndex, sCodecName.GetBufferSetLength(nCodecNameLength - 1), &nCodecNameLength));
					_Z4(atlTraceGeneral, 4, _T("nCodecIndex %d, sCodecName \"%ls\"\n"), nCodecIndex, sCodecName);
					POSITION Position = AddTail();
					_ATLTRY
					{
						CCodecData& CodecData = GetAt(Position);
						CodecData.Initialize(pWmCodecInfo2, MajorType, nCodecIndex, sCodecName);
					}
					_ATLCATCHALL()
					{
						RemoveAt(Position);
						_ATLRETHROW;
					}
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
				}
		}
		VOID Initialize(CWmCodecInfo3 pWmCodecInfo3, const GUID& MajorType, const CEnumerationSettingList& EnumerationSettingList)
		{
			_A(pWmCodecInfo3);
			RemoveAll();
			m_MajorType = MajorType;
			m_EnumerationSettingList = EnumerationSettingList;
			DWORD nCodecCount = 0;
			__C(pWmCodecInfo3->GetCodecInfoCount(MajorType, &nCodecCount));
			for(DWORD nCodecIndex = 0; nCodecIndex < nCodecCount; nCodecIndex++)
				_ATLTRY
				{
					DWORD nCodecNameLength = 0;
					__C(pWmCodecInfo3->GetCodecName(MajorType, nCodecIndex, NULL, &nCodecNameLength));
					_A(nCodecNameLength > 0);
					CStringW sCodecName;
					if(nCodecNameLength)
						__C(pWmCodecInfo3->GetCodecName(MajorType, nCodecIndex, sCodecName.GetBufferSetLength(nCodecNameLength - 1), &nCodecNameLength));
					_Z4(atlTraceGeneral, 4, _T("nCodecIndex %d, sCodecName \"%ls\"\n"), nCodecIndex, sCodecName);
					POSITION Position = AddTail();
					_ATLTRY
					{
						CCodecData& CodecData = GetAt(Position);
						for(POSITION EnumerationSettingPosition = EnumerationSettingList.GetHeadPosition(); EnumerationSettingPosition; EnumerationSettingList.GetNext(EnumerationSettingPosition))
						{
							const CEnumerationSetting& EnumerationSetting = EnumerationSettingList.GetAt(EnumerationSettingPosition);
							if(FAILED(pWmCodecInfo3->SetCodecEnumerationSetting(MajorType, nCodecIndex, EnumerationSetting.m_sName, EnumerationSetting.m_nType, EnumerationSetting.m_pnData, (DWORD) EnumerationSetting.m_nDataSize)))
							{
								RemoveAt(Position);
								Position = NULL;
								break;
							}
						}
						if(!Position)
							continue;
						CodecData.Initialize(pWmCodecInfo3, MajorType, nCodecIndex, sCodecName);
					}
					_ATLCATCHALL()
					{
						RemoveAt(Position);
						_ATLRETHROW;
					}
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
				}
		}
		CString GetTitle() const
		{
			if(!m_EnumerationSettingList.m_sName.IsEmpty())
				return m_EnumerationSettingList.m_sName;
			return _T("Default");
		}
	};

	////////////////////////////////////////////////////////
	// CTreeViewItem

	class CTreeViewItem
	{
	public:
		GUID m_MajorType;
		const CCodecDataList* m_pCodecDataList;
		const CCodecData* m_pCodecData;

	public:
	// CTreeViewItem
		CTreeViewItem() throw()
		{
		}
		CTreeViewItem(const GUID& MajorType, const CCodecDataList* pCodecDataList = NULL, const CCodecData* pCodecData = NULL) throw() :
			m_MajorType(MajorType),
			m_pCodecDataList(pCodecDataList),
			m_pCodecData(pCodecData)
		{
		}
	};

	////////////////////////////////////////////////////////
	// CListViewItem

	class CListViewItem
	{
	public:
		const CCodecFormatData* m_pCodecFormatData;

	public:
	// CListViewItem
		CListViewItem() throw() :
			m_pCodecFormatData(NULL)
		{
		}
		CListViewItem(const CCodecFormatData* pCodecFormatData) throw() :
			m_pCodecFormatData(pCodecFormatData)
		{
		}
		CString GetInfoTipText() const
		{
			CString sText;
			if(m_pCodecFormatData)
			{
				if(!m_pCodecFormatData->m_sDescription.IsEmpty())
				{
					sText.AppendFormat(_T("Description: %ls\r\n"), m_pCodecFormatData->m_sDescription);
					sText.Append(_T("\r\n"));
				}
				#pragma region Interfaces
				if(m_pCodecFormatData->m_pWmStreamConfig)
				{
					sText += AtlFormatString(_T("Interfaces:") _T("\r\n"));
					static const struct 
					{
						const IID* pIdentifier;
						LPCSTR pszName;
					} g_pMap[] = 
					{
						#define A(x) { &__uuidof(x), #x },
						A(IWMMediaProps)
						A(IWMStreamConfig)
						A(IWMStreamConfig2)
						A(IWMStreamConfig3)
						A(IWMVideoMediaProps)
						A(IWMPropertyVault)
						#undef A
					};
					for(SIZE_T nIndex = 0; nIndex < DIM(g_pMap); nIndex++)
					{
						CComPtr<IUnknown> pUnknown;
						m_pCodecFormatData->m_pWmStreamConfig->QueryInterface(*g_pMap[nIndex].pIdentifier, (VOID**) &pUnknown);
						if(pUnknown)
							sText += AtlFormatString(_T("  ") _T("%hs") _T("\r\n"), g_pMap[nIndex].pszName);
					}
					sText.Append(_T("\r\n"));
				}
				#pragma endregion 
				#pragma region Media Type
				if(m_pCodecFormatData->m_pMediaType)
				{
					sText.Append(_T("AM_MEDIA_TYPE:\r\n"));
					const CMediaType& pMediaType = reinterpret_cast<const CMediaType&>(m_pCodecFormatData->m_pMediaType);
					//sText.AppendFormat(_T("  ...\r\n"), pMediaType->majortype);
					if(memcmp(&pMediaType->subtype.Data2, &MEDIASUBTYPE_MJPG.Data2, sizeof (GUID) - offsetof(GUID, Data2)) == 0)
						sText.AppendFormat(_T("  subtype: %ls (%s)\r\n"), _PersistHelper::StringFromIdentifier(pMediaType->subtype), _FilterGraphHelper::GetFourccCodeString(pMediaType->subtype.Data1));
					else
						sText.AppendFormat(_T("  subtype: %ls\r\n"), _PersistHelper::StringFromIdentifier(pMediaType->subtype));
					sText.AppendFormat(_T("  bFixedSizeSamples: %s\r\n"), _StringHelper::FormatNumber((LONG) pMediaType->bFixedSizeSamples));
					sText.AppendFormat(_T("  bTemporalCompression: %s\r\n"), _StringHelper::FormatNumber((LONG) pMediaType->bTemporalCompression));
					sText.AppendFormat(_T("  lSampleSize: %s\r\n"), _StringHelper::FormatNumber((LONG) pMediaType->lSampleSize));
					#pragma region Format
					static const struct
					{
						GUID formattype;
						LPCTSTR pszTitle;
					} g_pMap[] =
					{
						{ FORMAT_VideoInfo, _T("FORMAT_VideoInfo") },
						{ FORMAT_VideoInfo2, _T("FORMAT_VideoInfo2") },
						{ FORMAT_MPEG2_VIDEO, _T("FORMAT_MPEG2_VIDEO") },
						{ FORMAT_WaveFormatEx, _T("FORMAT_WaveFormatEx") },
					};
					BOOL bFound = FALSE;
					for(SIZE_T nIndex = 0; nIndex < DIM(g_pMap); nIndex++)
						if(pMediaType->formattype == g_pMap[nIndex].formattype)
						{
							sText.AppendFormat(_T("  formattype: %ls (%s)\r\n"), _PersistHelper::StringFromIdentifier(pMediaType->formattype), g_pMap[nIndex].pszTitle);
							bFound = TRUE;
							break;
						}
					if(!bFound)
						sText.AppendFormat(_T("  formattype: %ls\r\n"), _PersistHelper::StringFromIdentifier(pMediaType->formattype));
					#pragma endregion
					sText.AppendFormat(_T("  cbFormat: %s\r\n"), _StringHelper::FormatNumber((LONG) pMediaType->cbFormat));
					#pragma region FORMAT_VideoInfo
					if(pMediaType->formattype == FORMAT_VideoInfo)
					{
						sText.Append(_T("\r\n"));
						sText.Append(_T("VIDEOINFOHEADER:\r\n"));
						const CVideoInfoHeader* pVideoInfoHeader = pMediaType.GetVideoInfoHeader();
						sText.AppendFormat(_T("  rcSource: %d, %d - %d, %d\r\n"), pVideoInfoHeader->rcSource);
						sText.AppendFormat(_T("  rcTarget: %d, %d - %d, %d\r\n"), pVideoInfoHeader->rcTarget);
						sText.AppendFormat(_T("  dwBitRate: %s\r\n"), _StringHelper::FormatNumber((LONG) pVideoInfoHeader->dwBitRate));
						sText.AppendFormat(_T("  dwBitErrorRate: %s\r\n"), _StringHelper::FormatNumber((LONG) pVideoInfoHeader->dwBitErrorRate));
						sText.AppendFormat(_T("  AvgTimePerFrame: %s\r\n"), _StringHelper::FormatNumber((LONG) pVideoInfoHeader->AvgTimePerFrame));
						sText.Append(_T("\r\n"));
						sText.Append(_T("BITMAPINFOHEADER:\r\n"));
						const CBitmapInfoHeader* pBitmapInfoHeader = &pVideoInfoHeader->GetBitmapInfoHeader();
						sText.AppendFormat(_T("  biSize: %s\r\n"), _StringHelper::FormatNumber((LONG) pBitmapInfoHeader->biSize));
						sText.AppendFormat(_T("  biWidth: %s\r\n"), _StringHelper::FormatNumber((LONG) pBitmapInfoHeader->biWidth));
						sText.AppendFormat(_T("  biHeight: %s\r\n"), _StringHelper::FormatNumber((LONG) pBitmapInfoHeader->biHeight));
						sText.AppendFormat(_T("  biPlanes: %s\r\n"), _StringHelper::FormatNumber((LONG) pBitmapInfoHeader->biPlanes));
						sText.AppendFormat(_T("  biBitCount: %s\r\n"), _StringHelper::FormatNumber((LONG) pBitmapInfoHeader->biBitCount));
						sText.AppendFormat(_T("  biCompression: %s\r\n"), StringFromFourCharacterCode(pBitmapInfoHeader->biCompression));
						sText.AppendFormat(_T("  biSizeImage: %s\r\n"), _StringHelper::FormatNumber((LONG) pBitmapInfoHeader->biSizeImage));
						//biXPelsPerMeter;
						//biYPelsPerMeter;
						//biClrUsed;
						//biClrImportant;
						sText.Append(_T("\r\n"));

					} else
					#pragma endregion 
					#pragma region FORMAT_VideoInfo2
					if(pMediaType->formattype == FORMAT_VideoInfo2)
					{
						sText.Append(_T("\r\n"));
						sText.Append(_T("VIDEOINFOHEADER2:\r\n"));
						const CVideoInfoHeader2* pVideoInfoHeader2 = pMediaType.GetVideoInfoHeader2();
						sText.AppendFormat(_T("  rcSource: %d, %d - %d, %d\r\n"), pVideoInfoHeader2->rcSource);
						sText.AppendFormat(_T("  rcTarget: %d, %d - %d, %d\r\n"), pVideoInfoHeader2->rcTarget);
						sText.AppendFormat(_T("  dwBitRate: %s\r\n"), _StringHelper::FormatNumber((LONG) pVideoInfoHeader2->dwBitRate));
						sText.AppendFormat(_T("  dwBitErrorRate: %s\r\n"), _StringHelper::FormatNumber((LONG) pVideoInfoHeader2->dwBitErrorRate));
						sText.AppendFormat(_T("  AvgTimePerFrame: %s\r\n"), _StringHelper::FormatNumber((LONG) pVideoInfoHeader2->AvgTimePerFrame));
						sText.AppendFormat(_T("  dwInterlaceFlags: 0x%x\r\n"), pVideoInfoHeader2->dwInterlaceFlags);
						sText.AppendFormat(_T("  dwCopyProtectFlags: 0x%x\r\n"), pVideoInfoHeader2->dwCopyProtectFlags);
						if(pVideoInfoHeader2->dwPictAspectRatioX || pVideoInfoHeader2->dwPictAspectRatioY)
						{
							sText.AppendFormat(_T("  dwPictAspectRatioX: %s\r\n"), _StringHelper::FormatNumber((LONG) pVideoInfoHeader2->dwPictAspectRatioX));
							sText.AppendFormat(_T("  dwPictAspectRatioY: %s\r\n"), _StringHelper::FormatNumber((LONG) pVideoInfoHeader2->dwPictAspectRatioY));
						}
						sText.AppendFormat(_T("  dwControlFlags: 0x%x\r\n"), pVideoInfoHeader2->dwControlFlags);
						sText.Append(_T("\r\n"));
						sText.Append(_T("BITMAPINFOHEADER:\r\n"));
						const CBitmapInfoHeader* pBitmapInfoHeader = &pVideoInfoHeader2->GetBitmapInfoHeader();
						sText.AppendFormat(_T("  biSize: %s\r\n"), _StringHelper::FormatNumber((LONG) pBitmapInfoHeader->biSize));
						sText.AppendFormat(_T("  biWidth: %s\r\n"), _StringHelper::FormatNumber((LONG) pBitmapInfoHeader->biWidth));
						sText.AppendFormat(_T("  biHeight: %s\r\n"), _StringHelper::FormatNumber((LONG) pBitmapInfoHeader->biHeight));
						sText.AppendFormat(_T("  biPlanes: %s\r\n"), _StringHelper::FormatNumber((LONG) pBitmapInfoHeader->biPlanes));
						sText.AppendFormat(_T("  biBitCount: %s\r\n"), _StringHelper::FormatNumber((LONG) pBitmapInfoHeader->biBitCount));
						sText.AppendFormat(_T("  biCompression: %s\r\n"), StringFromFourCharacterCode(pBitmapInfoHeader->biCompression));
						sText.AppendFormat(_T("  biSizeImage: %s\r\n"), _StringHelper::FormatNumber((LONG) pBitmapInfoHeader->biSizeImage));
						//biXPelsPerMeter;
						//biYPelsPerMeter;
						//biClrUsed;
						//biClrImportant;
					} else
					#pragma endregion 
					#pragma region FORMAT_WaveFormatEx
					if(pMediaType->formattype == FORMAT_WaveFormatEx)
					{
						sText.Append(_T("\r\n"));
						sText.Append(_T("WAVEFORMATEX:\r\n"));
						const CWaveFormatEx* pWaveFormatEx = pMediaType.GetWaveFormatEx();
						sText.AppendFormat(_T("  wFormatTag: 0x%04x\r\n"), pWaveFormatEx->wFormatTag);
						sText.AppendFormat(_T("  nChannels: %s\r\n"), _StringHelper::FormatNumber((LONG) pWaveFormatEx->nChannels));
						sText.AppendFormat(_T("  nSamplesPerSec: %s\r\n"), _StringHelper::FormatNumber((LONG) pWaveFormatEx->nSamplesPerSec));
						sText.AppendFormat(_T("  nAvgBytesPerSec: %s\r\n"), _StringHelper::FormatNumber((LONG) pWaveFormatEx->nAvgBytesPerSec));
						sText.AppendFormat(_T("  nBlockAlign: %s\r\n"), _StringHelper::FormatNumber((LONG) pWaveFormatEx->nBlockAlign));
						sText.AppendFormat(_T("  wBitsPerSample: %s\r\n"), _StringHelper::FormatNumber((LONG) pWaveFormatEx->wBitsPerSample));
						sText.AppendFormat(_T("  cbSize: %s\r\n"), _StringHelper::FormatNumber((LONG) pWaveFormatEx->cbSize));
						if(pWaveFormatEx->wFormatTag == WAVE_FORMAT_EXTENSIBLE && sizeof *pWaveFormatEx + pWaveFormatEx->cbSize >= sizeof (WAVEFORMATEXTENSIBLE))
						{
							sText.Append(_T("\r\n"));
							sText.Append(_T("WAVEFORMATEXTENSIBLE:\r\n"));
							const WAVEFORMATEXTENSIBLE* pWaveFormatExtensible = (const WAVEFORMATEXTENSIBLE*) (const WAVEFORMATEX*) pWaveFormatEx;
							sText.AppendFormat(_T("  wValidBitsPerSample/wSamplesPerBlock: %d\r\n"), _StringHelper::FormatNumber((LONG) pWaveFormatExtensible->Samples.wValidBitsPerSample));
							sText.AppendFormat(_T("  dwChannelMask: 0x%x\r\n"), pWaveFormatExtensible->dwChannelMask);
							sText.AppendFormat(_T("  SubFormat: %ls\r\n"), _PersistHelper::StringFromIdentifier(pWaveFormatExtensible->SubFormat));
						} else
							if(pWaveFormatEx->cbSize)
								sText.AppendFormat(_T("  %s\r\n"), StringFromData((const BYTE*) (pWaveFormatEx + 1), pWaveFormatEx->cbSize));
					}
					#pragma endregion 
				}
				#pragma endregion
				#pragma region IWMMediaProps
				const CComQIPtr<IWMMediaProps> pWmMediaProps = m_pCodecFormatData->m_pWmStreamConfig;
				if(pWmMediaProps)
					_ATLTRY
					{
						GUID Type = GUID_NULL;
						__C(pWmMediaProps->GetType(&Type));
						sText.Append(_T("IWMMediaProps:\r\n"));
						sText.AppendFormat(_T("  ") _T("Type: %ls") _T("\r\n"), _FilterGraphHelper::FormatMajorType(Type));
						sText.Append(_T("\r\n"));
					}
					_ATLCATCHALL()
					{
						_Z_EXCEPTION();
					}
				#pragma endregion 
				#pragma region IWMStreamConfig
				const CComQIPtr<IWMStreamConfig> pWmStreamConfig = m_pCodecFormatData->m_pWmStreamConfig;
				if(pWmStreamConfig)
					_ATLTRY
					{
						GUID StreamType = GUID_NULL;
						__C(pWmStreamConfig->GetStreamType(&StreamType));
						WORD nStreamNumber = 0;
						__C(pWmStreamConfig->GetStreamNumber(&nStreamNumber));
						WORD nStreamNameLength = 0;
						pWmStreamConfig->GetStreamName(NULL, &nStreamNameLength);
						CTempBufferT<WCHAR> pszStreamName(nStreamNameLength + 1);
						__C(pWmStreamConfig->GetStreamName(pszStreamName, &nStreamNameLength));
						WORD nConnectionNameLength = 0;
						pWmStreamConfig->GetConnectionName(NULL, &nConnectionNameLength);
						CTempBufferT<WCHAR> pszConnectionName(nConnectionNameLength + 1);
						__C(pWmStreamConfig->GetConnectionName(pszConnectionName, &nConnectionNameLength));
						DWORD nBitrate = 0;
						__C(pWmStreamConfig->GetBitrate(&nBitrate));
						DWORD nBufferWindow = 0;
						__C(pWmStreamConfig->GetBufferWindow(&nBufferWindow));
						sText.Append(_T("IWMStreamConfig:\r\n"));
						sText.AppendFormat(_T("  ") _T("StreamType: %ls") _T("\r\n"), _FilterGraphHelper::FormatMajorType(StreamType));
						sText.AppendFormat(_T("  ") _T("StreamNumber: %d") _T("\r\n"), nStreamNumber);
						if(wcslen(pszStreamName))
							sText.AppendFormat(_T("  ") _T("StreamName: %ls") _T("\r\n"), (LPCWSTR) pszStreamName);
						if(wcslen(pszConnectionName))
							sText.AppendFormat(_T("  ") _T("ConnectionName: %ls") _T("\r\n"), (LPCWSTR) pszConnectionName);
						sText.AppendFormat(_T("  ") _T("Bitrate: %d") _T("\r\n"), nBitrate);
						sText.AppendFormat(_T("  ") _T("BufferWindow: %d") _T("\r\n"), nBufferWindow);
						sText.Append(_T("\r\n"));
					}
					_ATLCATCHALL()
					{
						_Z_EXCEPTION();
					}
				#pragma endregion 
				#pragma region IWMStreamConfig2
				const CComQIPtr<IWMStreamConfig2> pWmStreamConfig2 = m_pCodecFormatData->m_pWmStreamConfig;
				if(pWmStreamConfig2)
					_ATLTRY
					{
						WMT_TRANSPORT_TYPE TransportType;
						__C(pWmStreamConfig2->GetTransportType(&TransportType));
						WORD nDataUnitExtensionCount = 0;
						pWmStreamConfig2->GetDataUnitExtensionCount(&nDataUnitExtensionCount);
						for(WORD nDataUnitExtensionIndex = 0; nDataUnitExtensionIndex < nDataUnitExtensionCount; nDataUnitExtensionIndex++)
						{
							GUID Identifier = GUID_NULL;
							WORD nSize = 0;
							DWORD nInformationSize = 0;
							__C(pWmStreamConfig2->GetDataUnitExtension(nDataUnitExtensionIndex, &Identifier, &nSize, NULL, &nInformationSize));
						}
						sText.Append(_T("IWMStreamConfig2:\r\n"));
						sText.AppendFormat(_T("  ") _T("TransportType: %d") _T("\r\n"), TransportType);
						if(nDataUnitExtensionCount)
							sText.AppendFormat(_T("  ") _T("DataUnitExtensionCount: %d") _T("\r\n"), nDataUnitExtensionCount);
						sText.Append(_T("\r\n"));
					}
					_ATLCATCHALL()
					{
						_Z_EXCEPTION();
					}
				#pragma endregion 
				#pragma region IWMStreamConfig3
				const CComQIPtr<IWMStreamConfig3> pWmStreamConfig3 = m_pCodecFormatData->m_pWmStreamConfig;
				if(pWmStreamConfig3)
					_ATLTRY
					{
						WORD nLanguageStringLength = 0;
						pWmStreamConfig3->GetLanguage(NULL, &nLanguageStringLength);
						CTempBufferT<WCHAR> pszLanguageString(nLanguageStringLength + 1);
						__C(pWmStreamConfig3->GetLanguage(pszLanguageString, &nLanguageStringLength));
						if(wcslen(pszLanguageString))
						{
							sText.Append(_T("IWMStreamConfig3:\r\n"));
							if(wcslen(pszLanguageString))
								sText.AppendFormat(_T("  ") _T("Language: %ls") _T("\r\n"), (LPCWSTR) pszLanguageString);
							sText.Append(_T("\r\n"));
						}
					}
					_ATLCATCHALL()
					{
						_Z_EXCEPTION();
					}
				#pragma endregion 
				#pragma region IWMVideoMediaProps
				const CComQIPtr<IWMVideoMediaProps> pWmVideoMediaProps = m_pCodecFormatData->m_pWmStreamConfig;
				if(pWmVideoMediaProps)
					_ATLTRY
					{
						LONGLONG nMaximalKeyFrameIntervalTime = 0;
						__C(pWmVideoMediaProps->GetMaxKeyFrameSpacing(&nMaximalKeyFrameIntervalTime));
						DWORD nQuality = 0;
						__C(pWmVideoMediaProps->GetQuality(&nQuality));
						sText.Append(_T("IWMVideoMediaProps:\r\n"));
						sText.AppendFormat(_T("  ") _T("MaxKeyFrameSpacing: %s") _T("\r\n"), _FilterGraphHelper::FormatReferenceTime(nMaximalKeyFrameIntervalTime));
						sText.AppendFormat(_T("  ") _T("Quality: %d") _T("\r\n"), nQuality);
						sText.Append(_T("\r\n"));
					}
					_ATLCATCHALL()
					{
						_Z_EXCEPTION();
					}
				#pragma endregion 
				#pragma region IWMPropertyVault
				const CComQIPtr<IWMPropertyVault> pWmPropertyVault = m_pCodecFormatData->m_pWmStreamConfig;
				if(pWmPropertyVault)
					_ATLTRY
					{
						DWORD nPropertyCount = 0;
						__C(pWmPropertyVault->GetPropertyCount(&nPropertyCount));
						CRoArrayT<CString> PropertyArray;
						for(DWORD nPropertyIndex = 0; nPropertyIndex < nPropertyCount; nPropertyIndex++)
						{
							DWORD nNameLength = 0;
							WMT_ATTR_DATATYPE nType;
							DWORD nValueDataSize = 0;
							pWmPropertyVault->GetPropertyByIndex(nPropertyIndex, NULL, &nNameLength, &nType, NULL, &nValueDataSize);
							CTempBufferT<WCHAR> pszName(nNameLength + 1);
							CTempBufferT<BYTE> pnValueData(nValueDataSize + 2);
							__C(pWmPropertyVault->GetPropertyByIndex(nPropertyIndex, pszName, &nNameLength, &nType, pnValueData, &nValueDataSize));
							CString sProperty;
							BOOL bHandled = FALSE;
							switch(nType)
							{
							case WMT_TYPE_DWORD:
								if(nValueDataSize && !(nValueDataSize % sizeof (DWORD)))
								{
									const DWORD* pnValues = (const DWORD*) (const BYTE*) pnValueData;
									const SIZE_T nValueCount = nValueDataSize / sizeof (DWORD);
									if(nValueCount == 1)
										sProperty = AtlFormatString(_T("%d 0x%02X"), pnValues[0], pnValues[0]);
									else
										sProperty = AtlFormatString(_T("0x%02X, ..."), pnValues[0]);
									bHandled = TRUE;
								}
								break;
							case WMT_TYPE_STRING:
								// TODO: ...
								break;
							case WMT_TYPE_BINARY:
								// TODO: ...
								break;
							case WMT_TYPE_BOOL:
								if(nValueDataSize && !(nValueDataSize % sizeof (BOOL)))
								{
									const BOOL* pnValues = (const BOOL*) (const BYTE*) pnValueData;
									const SIZE_T nValueCount = nValueDataSize / sizeof (BOOL);
									if(nValueCount == 1)
										sProperty = AtlFormatString(_T("%d"), pnValues[0]);
									else
										sProperty = AtlFormatString(_T("%d, ..."), pnValues[0]);
									bHandled = TRUE;
								}
								break;
							case WMT_TYPE_QWORD:
								// TODO: ...
								break;
							case WMT_TYPE_WORD:
								// TODO: ...
								break;
							case WMT_TYPE_GUID:
								// TODO: ...
								break;
							}
							if(!bHandled)
								sProperty = _T("???");
							sProperty += AtlFormatString(_T(" (Type %d, Size %d)"), nType, nValueDataSize);
							_W(PropertyArray.Add(AtlFormatString(_T("%ls: %s"), (LPCWSTR) pszName, sProperty)) >= 0);
						}
						if(nPropertyCount)
						{
							sText.Append(_T("IWMPropertyVault:\r\n"));
							sText.AppendFormat(_T("  ") _T("PropertyCount: %d") _T("\r\n"), nPropertyCount);
							for(SIZE_T nIndex = 0; nIndex < PropertyArray.GetCount(); nIndex++)
								sText.AppendFormat(_T("    ") _T("%s") _T("\r\n"), PropertyArray[nIndex]);
							sText.Append(_T("\r\n"));
						}
					}
					_ATLCATCHALL()
					{
						_Z_EXCEPTION();
					}
				#pragma endregion 
			}
			sText.Trim(_T("\t\n\r ."));
			return sText;
		}
	};

private:
	CComPtr<IWMProfileManager> m_pWmProfileManager;
	CAtlList<CCodecDataList> m_VideoCodecDataListList;
	CAtlList<CCodecDataList> m_AudioCodecDataListList;
	CRoTreeViewT<CTreeViewItem, CRoListControlDataTraitsT> m_TreeView;
	CRoListViewT<CListViewItem, CRoListControlDataTraitsT> m_ListView;
	CRoHyperStatic m_OsVersionStatic;

	static CString StringFromData(const BYTE* pnData, SIZE_T nDataSize)
	{
		CString sString;
		for(SIZE_T nIndex = 0; nIndex < nDataSize; nIndex++)
			sString.AppendFormat(_T("%02X "), pnData[nIndex]);
		sString.TrimRight();
		return sString;
	}
	static CString StringFromFourCharacterCode(DWORD nCode)
	{
		BOOL bValid = TRUE;
		CHAR pszString[5];
		for(UINT nIndex = 0; bValid && nIndex < 4; nIndex++)
		{
			pszString[nIndex] = (nCode >> (8 * nIndex)) & 0xFF;
			bValid &= pszString[nIndex] >= 0x20;
		}
		pszString[4] = 0;
		if(bValid)
			return AtlFormatString(_T("%hs (0x%08x)"), pszString, nCode);
		return AtlFormatString(_T("0x%08x"), nCode);
	}
	VOID InsertVideoListViewItem(const CCodecFormatData& CodecFormatData)
	{
		const INT nItem = m_ListView.InsertItem(m_ListView.GetItemCount(), CListViewItem(&CodecFormatData), CodecFormatData.GetDescription());
		if(CodecFormatData.m_pMediaType->formattype == FORMAT_VideoInfo)
		{
			_A(CodecFormatData.m_pMediaType->cbFormat >= sizeof (VIDEOINFOHEADER));
			const CVideoInfoHeader* pVideoInfoHeader = CodecFormatData.m_pMediaType.GetVideoInfoHeader();
			_W(m_ListView.SetItemText(nItem, 1, StringFromFourCharacterCode(pVideoInfoHeader->GetBitmapInfoHeader().biCompression)));
		} else
		if(CodecFormatData.m_pMediaType->formattype == FORMAT_VideoInfo2)
		{
			_A(CodecFormatData.m_pMediaType->cbFormat >= sizeof (VIDEOINFOHEADER2));
			const CVideoInfoHeader2* pVideoInfoHeader = CodecFormatData.m_pMediaType.GetVideoInfoHeader2();
			_W(m_ListView.SetItemText(nItem, 1, StringFromFourCharacterCode(pVideoInfoHeader->GetBitmapInfoHeader().biCompression)));
		}
	}
	VOID InsertAudioListViewItem(const CCodecFormatData& CodecFormatData)
	{
		const INT nItem = m_ListView.InsertItem(m_ListView.GetItemCount(), CListViewItem(&CodecFormatData), CodecFormatData.GetDescription());
		if(CodecFormatData.m_pMediaType->formattype == FORMAT_WaveFormatEx)
		{
			_A(CodecFormatData.m_pMediaType->cbFormat >= sizeof (WAVEFORMATEX));
			const CWaveFormatEx* pWaveFormatEx = CodecFormatData.m_pMediaType.GetWaveFormatEx();
			_W(m_ListView.SetItemText(nItem, 1, _StringHelper::FormatNumber((LONG) CodecFormatData.m_pMediaType->bFixedSizeSamples)));
			_W(m_ListView.SetItemText(nItem, 2, _StringHelper::FormatNumber((LONG) CodecFormatData.m_pMediaType->bTemporalCompression)));
			_W(m_ListView.SetItemText(nItem, 3, _StringHelper::FormatNumber((LONG) CodecFormatData.m_pMediaType->lSampleSize)));
			_W(m_ListView.SetItemText(nItem, 4, AtlFormatString(_T("0x%02x"), pWaveFormatEx->wFormatTag)));
			_W(m_ListView.SetItemText(nItem, 5, _StringHelper::FormatNumber((LONG) pWaveFormatEx->nChannels)));
			_W(m_ListView.SetItemText(nItem, 6, _StringHelper::FormatNumber((LONG) pWaveFormatEx->nSamplesPerSec)));
			_W(m_ListView.SetItemText(nItem, 7, _StringHelper::FormatNumber((LONG) pWaveFormatEx->nAvgBytesPerSec)));
			_W(m_ListView.SetItemText(nItem, 8, _StringHelper::FormatNumber((LONG) pWaveFormatEx->nBlockAlign)));
			_W(m_ListView.SetItemText(nItem, 9, _StringHelper::FormatNumber((LONG) pWaveFormatEx->wBitsPerSample)));
			_W(m_ListView.SetItemText(nItem, 10, _StringHelper::FormatNumber((LONG) pWaveFormatEx->cbSize)));
			_W(m_ListView.SetItemText(nItem, 11, StringFromData((const BYTE*) (pWaveFormatEx + 1), pWaveFormatEx->cbSize)));
		}
	}
	VOID UpdateListView()
	{
		CWindowRedraw ListViewRedraw(m_ListView);
		m_ListView.DeleteAllItems();
		while(m_ListView.DeleteColumn(0))
			;
		HTREEITEM hTreeItem = m_TreeView.GetSelectedItem();
		if(!hTreeItem)
			return;
		CTreeViewItem& TreeViewItem = m_TreeView.GetItemData(hTreeItem);
		// SUGG: List all codecs/formats in absense of .m_pCodecData
		if(TreeViewItem.m_pCodecData)
		{
			if(TreeViewItem.m_MajorType == WMMEDIATYPE_Video)
			{
				_W(m_ListView.InsertColumn(0, _T("Description"), LVCFMT_LEFT, 180) >= 0);
				_W(m_ListView.InsertColumn(1, _T("biCompression"), LVCFMT_LEFT, 120) >= 0);
				const CCodecFormatDataList& CodecFormatDataList = TreeViewItem.m_pCodecData->m_CodecFormatDataList;
				for(POSITION Position = CodecFormatDataList.GetHeadPosition(); Position; CodecFormatDataList.GetNext(Position))
					InsertVideoListViewItem(CodecFormatDataList.GetAt(Position));
			}
			if(TreeViewItem.m_MajorType == WMMEDIATYPE_Audio)
			{
				_W(m_ListView.InsertColumn(0, _T("Description"), LVCFMT_LEFT, 210) >= 0);
				_W(m_ListView.InsertColumn(1, _T("bFixedSizeSamples"), LVCFMT_RIGHT, 60) >= 0);
				_W(m_ListView.InsertColumn(2, _T("bTemporalCompression"), LVCFMT_RIGHT, 60) >= 0);
				_W(m_ListView.InsertColumn(3, _T("lSampleSize"), LVCFMT_RIGHT, 60) >= 0);
				_W(m_ListView.InsertColumn(4, _T("wFormatTag"), LVCFMT_RIGHT, 90) >= 0);
				_W(m_ListView.InsertColumn(5, _T("nChannels"), LVCFMT_RIGHT, 60) >= 0);
				_W(m_ListView.InsertColumn(6, _T("nSamplesPerSec"), LVCFMT_RIGHT, 90) >= 0);
				_W(m_ListView.InsertColumn(7, _T("nAvgBytesPerSec"), LVCFMT_RIGHT, 90) >= 0);
				_W(m_ListView.InsertColumn(8, _T("nBlockAlign"), LVCFMT_RIGHT, 60) >= 0);
				_W(m_ListView.InsertColumn(9, _T("wBitsPerSample"), LVCFMT_RIGHT, 60) >= 0);
				_W(m_ListView.InsertColumn(10, _T("cbSize"), LVCFMT_RIGHT, 60) >= 0);
				_W(m_ListView.InsertColumn(11, _T("Extra Data"), LVCFMT_LEFT, 120) >= 0);
				const CCodecFormatDataList& CodecFormatDataList = TreeViewItem.m_pCodecData->m_CodecFormatDataList;
				for(POSITION Position = CodecFormatDataList.GetHeadPosition(); Position; CodecFormatDataList.GetNext(Position))
					InsertAudioListViewItem(CodecFormatDataList.GetAt(Position));
				// SUGG: List g_wszSpeechCaps proeprty if/where available
			}
		}
	}
	CString GetSubmissionText() const
	{
		CString sText;
		#pragma region OS Version
		{
			OSVERSIONINFOEX VersionInformation = { sizeof VersionInformation };
			_W(GetVersionEx((OSVERSIONINFO*) &VersionInformation));
			CAtlArray<CString> Array;
			_W(Array.Add(_T("OS Version")) >= 0);
			_W(Array.Add(AtlFormatString(_T("%d"), VersionInformation.dwMajorVersion)) >= 0);
			_W(Array.Add(AtlFormatString(_T("%d"), VersionInformation.dwMinorVersion)) >= 0);
			_W(Array.Add(AtlFormatString(_T("%d"), VersionInformation.dwBuildNumber)) >= 0);
			_W(Array.Add(AtlFormatString(_T("%d"), VersionInformation.dwPlatformId)) >= 0);
			_W(Array.Add(VersionInformation.szCSDVersion) >= 0);
			_W(Array.Add(AtlFormatString(_T("%d"), VersionInformation.wServicePackMajor)) >= 0);
			_W(Array.Add(AtlFormatString(_T("%d"), VersionInformation.wServicePackMinor)) >= 0);
			_W(Array.Add(AtlFormatString(_T("%d"), VersionInformation.wSuiteMask)) >= 0);
			_W(Array.Add(AtlFormatString(_T("%d"), VersionInformation.wProductType)) >= 0);
			#if defined(_WIN64)
			_W(Array.Add(_T("x64")) >= 0);
			#else
			_W(Array.Add(_T("Win32")) >= 0);
			#endif // defined(_WIN64)
			sText.Append(_StringHelper::GetCommaSeparatedValue(Array));
			sText.Append(_T("\r\n"));
		}
		#pragma endregion 
		#pragma region Windows Media Version
		{
			CAtlArray<CString> Array;
			_W(Array.Add(_T("WMV Core Version")) >= 0);
			_W(Array.Add(_VersionInfoHelper::GetVersionString(_VersionInfoHelper::GetFileVersion(_T("wmvcore.dll")))) >= 0);
			sText.Append(_StringHelper::GetCommaSeparatedValue(Array));
			sText.Append(_T("\r\n"));
		}
		#pragma endregion 
		#pragma region Codecs
		const CAtlList<CCodecDataList>* ppCodecDataListLists[] = { &m_VideoCodecDataListList, &m_AudioCodecDataListList };
		for(SIZE_T nCodecDataListListIndex = 0; nCodecDataListListIndex < DIM(ppCodecDataListLists); nCodecDataListListIndex++)
		{
			const CAtlList<CCodecDataList>& CodecDataListList = *ppCodecDataListLists[nCodecDataListListIndex];
			for(POSITION CodecDataListListPosition = CodecDataListList.GetHeadPosition(); CodecDataListListPosition; CodecDataListList.GetNext(CodecDataListListPosition))
			{
				const CCodecDataList& CodecDataList = CodecDataListList.GetAt(CodecDataListListPosition);
				{
					CAtlArray<CString> Array;
					_W(Array.Add(_T("Codec Enumeration")) >= 0);
					_W(Array.Add(AtlFormatString(_T("%ls"), _PersistHelper::StringFromIdentifier(CodecDataList.m_MajorType))) >= 0);
					_W(Array.Add(AtlFormatString(_T("%s"), CodecDataList.m_EnumerationSettingList.m_sName)) >= 0);
					sText.Append(_StringHelper::GetCommaSeparatedValue(Array));
					sText.Append(_T("\r\n"));
					for(POSITION EnumerationSettingPosition = CodecDataList.m_EnumerationSettingList.GetHeadPosition(); EnumerationSettingPosition; CodecDataList.m_EnumerationSettingList.GetNext(EnumerationSettingPosition))
					{
						const CEnumerationSetting& EnumerationSetting = CodecDataList.m_EnumerationSettingList.GetAt(EnumerationSettingPosition);
						CAtlArray<CString> Array;
						_W(Array.Add(_T("Codec Enumeration Setting")) >= 0);
						_W(Array.Add(AtlFormatString(_T("%ls"), EnumerationSetting.m_sName)) >= 0);
						_W(Array.Add(AtlFormatString(_T("%s"), EnumerationSetting.GetValueString())) >= 0);
						sText.Append(_StringHelper::GetCommaSeparatedValue(Array));
						sText.Append(_T("\r\n"));
					}
				}
				for(POSITION CodecDataListPosition = CodecDataList.GetHeadPosition(); CodecDataListPosition; CodecDataList.GetNext(CodecDataListPosition))
				{
					const CCodecData& CodecData = CodecDataList.GetAt(CodecDataListPosition);
					CAtlArray<CString> Array;
					_W(Array.Add(_T("Codec")) >= 0);
					_W(Array.Add(AtlFormatString(_T("%ls"), _PersistHelper::StringFromIdentifier(CodecData.m_MajorType))) >= 0);
					_W(Array.Add(AtlFormatString(_T("%d"), CodecData.m_nIndex)) >= 0);
					_W(Array.Add(AtlFormatString(_T("%ls"), CodecData.m_sName)) >= 0);
					sText.Append(_StringHelper::GetCommaSeparatedValue(Array));
					sText.Append(_T("\r\n"));
					const CCodecFormatDataList& CodecFormatDataList = CodecData.m_CodecFormatDataList;
					for(POSITION CodecFormatDataListPosition = CodecFormatDataList.GetHeadPosition(); CodecFormatDataListPosition; CodecFormatDataList.GetNext(CodecFormatDataListPosition))
					{
						const CCodecFormatData& CodecFormatData = CodecFormatDataList.GetAt(CodecFormatDataListPosition);
						CAtlArray<CString> Array;
						_W(Array.Add(_T("Codec Format")) >= 0);
						_W(Array.Add(AtlFormatString(_T("%d"), CodecFormatData.m_nIndex)) >= 0);
						_W(Array.Add(AtlFormatString(_T("%ls"), CodecFormatData.m_sDescription)) >= 0);
						// TODO: Human friendly media type
						_A(CodecFormatData.m_pMediaType);
						_W(Array.Add(StringFromData((const BYTE*) (const AM_MEDIA_TYPE*) CodecFormatData.m_pMediaType, sizeof (AM_MEDIA_TYPE))) >= 0);
						_W(Array.Add(StringFromData(CodecFormatData.m_pMediaType->pbFormat, CodecFormatData.m_pMediaType->cbFormat)) >= 0);
						sText.Append(_StringHelper::GetCommaSeparatedValue(Array));
						sText.Append(_T("\r\n"));
					}
				}
			}
		}
		#pragma endregion 
		return sText;
	}

public:
// CMainDialog
	CMainDialog() throw()
	{
	}

// Window message handlers
	LRESULT OnInitDialog(HWND, LPARAM)
	{
		DlgResize_Init();
		SetIcon(AtlLoadIconImage(IDR_MAINFRAME, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXICON), GetSystemMetrics(SM_CYICON)), FALSE);
		SetIcon(AtlLoadIconImage(IDR_MAINFRAME, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXSMICON), GetSystemMetrics(SM_CYSMICON)), FALSE);
		#if defined(_WIN64)
		CString sCaption;
		GetWindowText(sCaption);
		sCaption += _T(" (x64)");
		SetWindowText(sCaption);
		#endif // defined(_WIN64)
		{
			CWaitCursor WaitCursor;
			CComPtr<IWMProfileManager> pWmProfileManager;
			__C(WMCreateProfileManager(&pWmProfileManager));
			CComQIPtr<IWMProfileManager2> pWmProfileManager2 = pWmProfileManager;
			if(pWmProfileManager2)
				_V(pWmProfileManager2->SetSystemProfileVersion(WMT_VER_9_0));
			m_pWmProfileManager = pWmProfileManager;
			CComQIPtr<IWMCodecInfo2> pWmCodecInfo2 = pWmProfileManager;
			__D(pWmCodecInfo2, E_NOINTERFACE);
			CWmCodecInfo3 pWmCodecInfo3 = pWmCodecInfo2;
			// Video
			CCodecDataList& VideoCodecDataList = m_VideoCodecDataListList.GetAt(m_VideoCodecDataListList.AddTail());
			VideoCodecDataList.Initialize(pWmCodecInfo2, WMMEDIATYPE_Video);
			//if(pWmCodecInfo3)
			//	_ATLTRY
			//	{
			//		for(UINT nVbrMode = 0; nVbrMode <= 1; nVbrMode++)
			//			for(UINT nPassCount = 1; nPassCount <= 2; nPassCount++)
			//			{
			//				CEnumerationSettingList EnumerationSettingList;
			//				_W(EnumerationSettingList.AddTail(CEnumerationSetting(g_wszVBREnabled, (BOOL) (nVbrMode != 0))));
			//				_W(EnumerationSettingList.AddTail(CEnumerationSetting(g_wszNumPasses, (DWORD) nPassCount)));
			//				EnumerationSettingList.m_sName = AtlFormatString(_T("%s, %d passes"), nVbrMode ? _T("VBR") : _T("CBR"), nPassCount);
			//				CCodecDataList& VideoCodecDataList = m_VideoCodecDataListList.GetAt(m_VideoCodecDataListList.AddTail());
			//				VideoCodecDataList.Initialize(pWmCodecInfo3, WMMEDIATYPE_Video, EnumerationSettingList);
			//			}
			//	}
			//	_ATLCATCHALL()
			//	{
			//		_Z_EXCEPTION();
			//	}
			// Audio
			CCodecDataList& AudioCodecDataList = m_AudioCodecDataListList.GetAt(m_AudioCodecDataListList.AddTail());
			AudioCodecDataList.Initialize(pWmCodecInfo2, WMMEDIATYPE_Audio);
			if(pWmCodecInfo3)
				_ATLTRY
				{
					for(UINT nVbrMode = 0; nVbrMode <= 1; nVbrMode++)
						for(UINT nPassCount = 1; nPassCount <= 2; nPassCount++)
						{
							CEnumerationSettingList EnumerationSettingList;
							_W(EnumerationSettingList.AddTail(CEnumerationSetting(g_wszVBREnabled, (BOOL) (nVbrMode != 0))));
							_W(EnumerationSettingList.AddTail(CEnumerationSetting(g_wszNumPasses, (DWORD) nPassCount)));
							EnumerationSettingList.m_sName = AtlFormatString(_T("%s, %d passes"), nVbrMode ? _T("VBR") : _T("CBR"), nPassCount);
							CCodecDataList& AudioCodecDataList = m_AudioCodecDataListList.GetAt(m_AudioCodecDataListList.AddTail());
							AudioCodecDataList.Initialize(pWmCodecInfo3, WMMEDIATYPE_Audio, EnumerationSettingList);
						}
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
				}
		}
		m_TreeView = GetDlgItem(IDC_TREE);
		HTREEITEM hVideoItem = m_TreeView.InsertItem(NULL, NULL, CTreeViewItem(WMMEDIATYPE_Video), _T("Video"));
		HTREEITEM hPreviousVideoCodecListItem = NULL;
		for(POSITION ListPosition = m_VideoCodecDataListList.GetHeadPosition(); ListPosition; m_VideoCodecDataListList.GetNext(ListPosition))
		{
			const CCodecDataList* pCodecDataList = &m_VideoCodecDataListList.GetAt(ListPosition);
			if(pCodecDataList->m_EnumerationSettingList.IsEmpty() && pCodecDataList->IsEmpty())
				continue;
			HTREEITEM hVideoCodecListItem = m_TreeView.InsertItem(hVideoItem, hPreviousVideoCodecListItem, CTreeViewItem(WMMEDIATYPE_Video, pCodecDataList), pCodecDataList->GetTitle());
			hPreviousVideoCodecListItem = hVideoCodecListItem;
			HTREEITEM hPreviousVideoCodecItem = NULL;
			for(POSITION Position = pCodecDataList->GetHeadPosition(); Position; pCodecDataList->GetNext(Position))
			{
				const CCodecData* pCodecData = &pCodecDataList->GetAt(Position);
				HTREEITEM hVideoCodecItem = m_TreeView.InsertItem(hVideoCodecListItem, hPreviousVideoCodecItem, CTreeViewItem(WMMEDIATYPE_Video, pCodecDataList, pCodecData), pCodecData->GetTitle());
				hPreviousVideoCodecItem = hVideoCodecItem;
			}
			if(pCodecDataList->m_EnumerationSettingList.IsEmpty())
				m_TreeView.Expand(hVideoCodecListItem);
		}
		m_TreeView.Expand(hVideoItem);
		HTREEITEM hAudioItem = m_TreeView.InsertItem(NULL, NULL, CTreeViewItem(WMMEDIATYPE_Audio), _T("Audio"));
		HTREEITEM hPreviousAudioCodecListItem = NULL;
		for(POSITION ListPosition = m_AudioCodecDataListList.GetHeadPosition(); ListPosition; m_AudioCodecDataListList.GetNext(ListPosition))
		{
			const CCodecDataList* pCodecDataList = &m_AudioCodecDataListList.GetAt(ListPosition);
			if(pCodecDataList->m_EnumerationSettingList.IsEmpty() && pCodecDataList->IsEmpty())
				continue;
			HTREEITEM hAudioCodecListItem = m_TreeView.InsertItem(hAudioItem, hPreviousAudioCodecListItem, CTreeViewItem(WMMEDIATYPE_Audio, pCodecDataList), pCodecDataList->GetTitle());
			hPreviousAudioCodecListItem = hAudioCodecListItem;
			HTREEITEM hPreviousAudioCodecItem = NULL;
			for(POSITION Position = pCodecDataList->GetHeadPosition(); Position; pCodecDataList->GetNext(Position))
			{
				const CCodecData* pCodecData = &pCodecDataList->GetAt(Position);
				HTREEITEM hAudioCodecItem = m_TreeView.InsertItem(hAudioCodecListItem, hPreviousAudioCodecItem, CTreeViewItem(WMMEDIATYPE_Audio, pCodecDataList, pCodecData), pCodecData->GetTitle());
				hPreviousAudioCodecItem = hAudioCodecItem;
			}
			if(pCodecDataList->m_EnumerationSettingList.IsEmpty())
				m_TreeView.Expand(hAudioCodecListItem);
		}
		m_TreeView.Expand(hAudioItem);
		m_ListView = GetDlgItem(IDC_LIST);
		m_ListView.SetExtendedListViewStyle(LVS_EX_FULLROWSELECT | LVS_EX_INFOTIP | LVS_EX_LABELTIP);
		CToolTipCtrl ListViewToolTip = m_ListView.GetToolTips();
		ListViewToolTip.SetDelayTime(TTDT_AUTOMATIC, 2 * 60 * 1000); // 2 minutes 
		m_TreeView.SelectItem(m_TreeView.GetNextItem(hAudioItem, TVGN_CHILD));
		UpdateListView();
		_W(m_OsVersionStatic.SubclassWindow(GetDlgItem(IDC_OSVERSION)));
		OSVERSIONINFOEX VersionInformation = { sizeof VersionInformation };
		_W(GetVersionEx((OSVERSIONINFO*) &VersionInformation));
		m_OsVersionStatic.SetWindowText(AtlFormatString(_T("<A TITLE=\"Version %d.%d, Build %d, %s (%d.%d)\">Win %d.%d.%d</A>"), 
			VersionInformation.dwMajorVersion, VersionInformation.dwMinorVersion, VersionInformation.dwBuildNumber,
			VersionInformation.szCSDVersion, VersionInformation.wServicePackMajor, VersionInformation.wServicePackMinor, 
			VersionInformation.dwMajorVersion, VersionInformation.dwMinorVersion, VersionInformation.dwBuildNumber));
		{
			CMenuHandle Menu = GetSystemMenu(FALSE);
			_W(Menu.AppendMenu(MF_SEPARATOR));
			_W(Menu.AppendMenu(MF_STRING, ID_APP_ABOUT, _T("&About...")));
		}
		_W(CenterWindow());
		return TRUE;
	}
	LRESULT OnSysCommand(UINT nCommand, CPoint)
	{
		switch(nCommand)
		{
		case ID_APP_ABOUT:
			{
				CAboutDialog Dialog;
				Dialog.DoModal(m_hWnd);
			}
			break;
		default:
			SetMsgHandled(FALSE);
		}
		return 0;
	}
	LRESULT OnCancel(UINT, INT nIdentifier, HWND)
	{
		_W(EndDialog(nIdentifier));
		return 0;
	}
	LRESULT OnTreeGetInfoTip(NMTVGETINFOTIP* pHeader)
	{
		if(pHeader->hItem)
		{
			const CTreeViewItem& TreeViewItem = m_TreeView.DataFromParameter(pHeader->lParam);
			if(TreeViewItem.m_pCodecData)
			{
				CString sText;
				sText.AppendFormat(_T("Title: %s\r\n"), TreeViewItem.m_pCodecData->GetTitle());
				CWmCodecInfo3 pWmCodecInfo3 = TreeViewItem.m_pCodecData->m_pWmCodecInfo2;
				if(pWmCodecInfo3)
					_ATLTRY
					{
						sText.Append(_T("\r\n"));
						if(TreeViewItem.m_pCodecData->m_MajorType == WMMEDIATYPE_Video)
						{
							DWORD nMaximalComplexity, nOfflineComplexity, nLiveComplexity;
							if(SUCCEEDED(pWmCodecInfo3.GetDwordCodecProperty(TreeViewItem.m_pCodecData->m_MajorType, TreeViewItem.m_pCodecData->m_nIndex, g_wszComplexityMax, nMaximalComplexity)))
								sText.AppendFormat(_T("g_wszComplexityMax: %d\r\n"), nMaximalComplexity);
							if(SUCCEEDED(pWmCodecInfo3.GetDwordCodecProperty(TreeViewItem.m_pCodecData->m_MajorType, TreeViewItem.m_pCodecData->m_nIndex, g_wszComplexityOffline, nOfflineComplexity)))
								sText.AppendFormat(_T("g_wszComplexityOffline: %d\r\n"), nOfflineComplexity);
							if(SUCCEEDED(pWmCodecInfo3.GetDwordCodecProperty(TreeViewItem.m_pCodecData->m_MajorType, TreeViewItem.m_pCodecData->m_nIndex, g_wszComplexityLive, nLiveComplexity)))
								sText.AppendFormat(_T("g_wszComplexityLive: %d\r\n"), nLiveComplexity);
						}
						BOOL bIsVbrSupported;
						if(SUCCEEDED(pWmCodecInfo3.GetBoolCodecProperty(TreeViewItem.m_pCodecData->m_MajorType, TreeViewItem.m_pCodecData->m_nIndex, g_wszIsVBRSupported, bIsVbrSupported)))
							sText.AppendFormat(_T("g_wszIsVBRSupported: %d\r\n"), bIsVbrSupported);
					}
					_ATLCATCH(Exception)
					{
						_Z_ATLEXCEPTION(Exception);
						sText.AppendFormat(_T("Error 0x%08x: %s\r\n"), (HRESULT) Exception, AtlFormatSystemMessage(Exception).TrimRight(_T("\t\n\r .")));
					}
					_ATLCATCHALL()
					{
						_Z_EXCEPTION();
					}
				sText.TrimRight(_T("\t\n\r"));
				_tcscpy_s(pHeader->pszText, pHeader->cchTextMax, sText);
				if(GetKeyState(VK_CONTROL) < 0 && GetKeyState(VK_SHIFT) < 0)
				{
					SetClipboardText(m_hWnd, sText);
					MessageBeep(MB_OK);
				}
			}
		}
		return 0;
	}
	LRESULT OnTreeViewSelChanged(NMTREEVIEW*)
	{
		UpdateListView();
		return 0;
	}
	LRESULT OnListGetInfoTip(NMLVGETINFOTIP* pHeader)
	{
		CListViewItem& ListViewItem = m_ListView.GetItemData(pHeader->iItem);
		const CString sInfoTipText = ListViewItem.GetInfoTipText();
		_tcscpy_s(pHeader->pszText, pHeader->cchTextMax, sInfoTipText);
		if(GetKeyState(VK_CONTROL) < 0 && GetKeyState(VK_SHIFT) < 0)
		{
			SetClipboardText(m_hWnd, sInfoTipText);
			MessageBeep(MB_OK);
		}
		return 0;
	}
	LRESULT OnCopyButtonClicked(UINT, INT, HWND)
	{
		SetClipboardText(m_hWnd, GetSubmissionText());
		MessageBeep(MB_OK);
		return 0;
	}
	LRESULT OnSubmitButtonClicked(UINT, INT, HWND)
	{
		CWaitCursor WaitCursor;
		const CString sFileDescription = _VersionInfoHelper::GetString(_VersionInfoHelper::GetModulePath(), _T("FileDescription"));
		CWinHttpPostData PostData;
		PostData.AddValue(_T("subj"), sFileDescription);
		CStringA sTextA = Utf8StringFromString(GetSubmissionText());
		PostData.AddValue(_T("body"), _Base64Helper::Encode<CString>((const BYTE*) (LPCSTR) sTextA, sTextA.GetLength(), _Base64Helper::FLAG_NOPAD | _Base64Helper::FLAG_NOCRLF));
		CWinHttpSessionHandle Session = OpenWinHttpSessionHandle(AtlLoadString(IDS_PROJNAME));
		__E(Session);
		CWinHttpConnectionHandle Connection = Session.Connect(CStringW(_T("alax.info")));
		__E(Connection);
		CWinHttpRequestHandle Request = Connection.OpenRequest(CStringW(_T("POST")), CStringW(_T("/post.php")));
		__E(Request);
		CStringW sPostHeaders = PostData.GetHeaders();
		CStringA sPostData(PostData.GetValue());
		__E(Request.Send(sPostHeaders, -1, const_cast<LPSTR>((LPCSTR) sPostData), sPostData.GetLength(), sPostData.GetLength()));
		__E(Request.ReceiveResponse());
		DWORD nStatusCode = 0;
		__E(Request.QueryNumberHeader(WINHTTP_QUERY_STATUS_CODE | WINHTTP_QUERY_FLAG_NUMBER, nStatusCode));
		__D(nStatusCode / 100 == HTTP_STATUS_OK / 100, MAKE_HRESULT(SEVERITY_ERROR, FACILITY_HTTP, nStatusCode));
		AtlMessageBoxEx(m_hWnd, _T("Submission complete, thank you!"), IDS_INFORMATION, MB_ICONINFORMATION | MB_OK);
		return 0;
	}
};
