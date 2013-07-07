////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2013
// Created by Roman Ryltsov roman@alax.info

#pragma once

#include <psapi.h>
#include <atlctrlx.h>
#include <atlsplit.h>
#include "rofiles.h"
#include "FilterGraphSpy.h"
#include "AboutDialog.h"

#pragma comment(lib, "psapi.lib")

////////////////////////////////////////////////////////////
// CFilterGraphListPropertySheet

class CFilterGraphListPropertySheet :
	public CSizablePropertySheetT<CFilterGraphListPropertySheet>
{
public:

BEGIN_MSG_MAP_EX(CFilterGraphListPropertySheet)
	CHAIN_MSG_MAP(CSizablePropertySheet)
	MSG_WM_SYSCOMMAND(OnSysCommand)
END_MSG_MAP()

public:

	////////////////////////////////////////////////////////
	// CListPropertyPage

	class CListPropertyPage :
		public CPropertyPageT<CListPropertyPage>,
		public CDialogResize<CListPropertyPage>
	{
	public:

		enum { IDD = IDD_FILTERGRAPHLIST_LIST_PROPERTYPAGE };

	BEGIN_MSG_MAP_EX(CListPropertyPage)
		CHAIN_MSG_MAP(CPropertyPage)
		CHAIN_MSG_MAP(CDialogResize<CListPropertyPage>)
		MSG_WM_INITDIALOG(OnInitDialog)
		MSG_WM_DESTROY(OnDestroy)
		MSG_LVN_GETDISPINFO(IDC_FILTERGRAPHLIST_LIST_GRAPH, OnGraphListViewGetDispInfo)
		MSG_LVN_GETINFOTIP(IDC_FILTERGRAPHLIST_LIST_GRAPH, OnGraphListViewGetInfoTip)
		MSG_LVN_ITEMCHANGED(IDC_FILTERGRAPHLIST_LIST_GRAPH, OnGraphListViewItemChanged)
		MSG_LVN_DBLCLK(IDC_FILTERGRAPHLIST_LIST_GRAPH, OnGraphListViewDblClk)
		COMMAND_ID_HANDLER_EX(IDC_FILTERGRAPHLIST_LIST_REFRESH, OnRefresh)
		COMMAND_ID_HANDLER_EX(IDC_FILTERGRAPHLIST_LIST_CHECK, OnCheck)
		COMMAND_ID_HANDLER_EX(IDC_FILTERGRAPHLIST_LIST_COPYTOCLIPBOARD, OnCopyToClipboard)
		REFLECT_NOTIFICATIONS()
	END_MSG_MAP()

	BEGIN_DLGRESIZE_MAP(CListPropertyPage)
		DLGRESIZE_CONTROL(IDC_FILTERGRAPHLIST_LIST_GRAPH, DLSZ_SIZE_X | DLSZ_SIZE_Y)
		DLGRESIZE_CONTROL(IDC_FILTERGRAPHLIST_LIST_REFRESH, DLSZ_MOVE_Y)
		DLGRESIZE_CONTROL(IDC_FILTERGRAPHLIST_LIST_CHECK, DLSZ_MOVE_Y)
		DLGRESIZE_CONTROL(IDC_FILTERGRAPHLIST_LIST_COPYTOCLIPBOARD, DLSZ_MOVE_Y)
	END_DLGRESIZE_MAP()

	public:

		////////////////////////////////////////////////////
		// CItem

		class CItem
		{
		public:
			CComPtr<IMoniker> m_pMoniker;
			CStringW m_sDisplayName;
			DWORD64 m_nInstance;
			DWORD m_nProcessIdentifier;
			CPath m_sProcessImagePath;
			CString m_sTime;
			CComPtr<IUnknown> m_pFilterGraphUnknown;
			CComPtr<IFilterGraph> m_pFilterGraph;
			SIZE_T m_nFilterCount;
			CString m_sState;
			DOUBLE m_fDuration;
			DOUBLE m_fPosition;

		public:
		// CItem
			CItem() throw() :
				m_nFilterCount(0),
				m_fDuration(0),
				m_fPosition(0)
			{
			}
			CComPtr<IFilterGraph>& FilterGraphNeeded(IRunningObjectTable* pRunningObjectTable)
			{
				_A(pRunningObjectTable);
				if(!m_pFilterGraph && pRunningObjectTable && m_pMoniker)
				{
					_A(m_pMoniker);
					CComPtr<IBindCtx> pBindCtx;
					__C(CreateBindCtx(0, &pBindCtx));
					CComPtr<IUnknown> pUnknown;
					__C(pRunningObjectTable->GetObject(m_pMoniker, &pUnknown));
					const CComQIPtr<IFilterGraph> pFilterGraph = pUnknown;
					__D(pFilterGraph, E_NOINTERFACE);
					m_pFilterGraphUnknown = pUnknown;
					m_pFilterGraph = pFilterGraph;
					m_nFilterCount = 0;
					m_sState.Empty();
				}
				return m_pFilterGraph;
			}
			BOOL Check()
			{
				_ATLTRY
				{
					_FilterGraphHelper::CFilterArray FilterArray;
					_FilterGraphHelper::GetGraphFilters(m_pFilterGraph, FilterArray);
					m_nFilterCount = FilterArray.GetCount();
					#pragma region IMediaControl
					_ATLTRY
					{
						m_sState.Empty();
						const CComQIPtr<IMediaControl> pMediaControl = m_pFilterGraph;
						if(pMediaControl)
						{
							OAFilterState State;
							if(SUCCEEDED(pMediaControl->GetState(0, &State)))
							{
								static LPCTSTR g_ppszStates[] = { _T("Stopped"), _T("Paused"), _T("Running") };
								if((SIZE_T) State < DIM(g_ppszStates))
									m_sState = g_ppszStates[(SIZE_T) State];
							}
						}
					}
					_ATLCATCHALL()
					{
						_Z_EXCEPTION();
					}
					#pragma endregion
					#pragma region IMediaPosition
					_ATLTRY
					{
						m_fDuration = 0;
						m_fPosition = 0;
						const CComQIPtr<IMediaPosition> pMediaPosition = m_pFilterGraph;
						if(pMediaPosition)
							if(SUCCEEDED(pMediaPosition->get_Duration(&m_fDuration)))
								pMediaPosition->get_CurrentPosition(&m_fPosition);
					}
					_ATLCATCHALL()
					{
						_Z_EXCEPTION();
					}
					#pragma endregion
					// SUGG: Source and Sink Paths
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
					return FALSE;
				}
				return TRUE;
			}
		};

	private:
		CFilterGraphListPropertySheet& m_PropertySheet;
		CRoListViewT<CItem, CRoListControlDataTraitsT> m_GraphListView;
		CButton m_RefreshButton;
		CButton m_CheckButton;
		CButton m_CopyToClipboardButton;
		CComPtr<IRunningObjectTable> m_pRunningObjectTable;

	public:
	// CListPropertyPage
		CListPropertyPage(CFilterGraphListPropertySheet* pPropertySheet) throw() :
			m_PropertySheet(*pPropertySheet)
		{
		}
		VOID UpdateControls()
		{
			m_CopyToClipboardButton.EnableWindow(m_GraphListView.GetSelectedCount() > 0);
		}
		INT SortGraphListViewItems(LPARAM nItemParameter1, LPARAM nItemParameter2)
		{
			const CItem& Item1 = m_GraphListView.DataFromParameter(nItemParameter1);
			const CItem& Item2 = m_GraphListView.DataFromParameter(nItemParameter2);
			const INT nTime = _tcscmp(Item1.m_sTime, Item2.m_sTime);
			if(nTime)
				return -nTime;
			const INT nProcess = (INT) (Item1.m_nProcessIdentifier, Item2.m_nProcessIdentifier);
			if(nProcess)
				return -nProcess;
			return wcscmp(Item1.m_sDisplayName, Item2.m_sDisplayName);
		}
		static int CALLBACK SortGraphListViewItems(LPARAM nItemParameter1, LPARAM nItemParameter2, LPARAM nParameter)
		{
			return ((CListPropertyPage*) nParameter)->SortGraphListViewItems(nItemParameter1, nItemParameter2);
		}
		VOID Refresh()
		{
			CRoMapT<CStringW, CItem> ItemMap;
			#pragma region Enumerate
			_ATLTRY
			{
				if(!m_pRunningObjectTable)
					__C(GetRunningObjectTable(0, &m_pRunningObjectTable));
				CComPtr<IEnumMoniker> pEnumMoniker;
				__C(m_pRunningObjectTable->EnumRunning(&pEnumMoniker));
				CComPtr<IMalloc> pMalloc;
				__C(CoGetMalloc(1, &pMalloc));
				CComPtr<IMoniker> pMoniker;
				while(pEnumMoniker->Next(1, &pMoniker, NULL) == S_OK)
				{
					_ATLTRY
					{
						CComPtr<IBindCtx> pBindCtx;
						__C(CreateBindCtx(0, &pBindCtx));
						LPOLESTR pszDisplayName = NULL;
						__C(pMoniker->GetDisplayName(pBindCtx, NULL, &pszDisplayName));
						const CStringW sDisplayName = pszDisplayName;
						_Z4(atlTraceGeneral, 4, _T("sDisplayName %ls\n"), sDisplayName);
						pMalloc->Free(pszDisplayName);
						static CRoStaticReW g_Expression(L"^\\!FilterGraph {[0-9A-F]+} pid {[0-9A-F]+}(; process\\: {.+?}, time\\: {[0-9]+\\-[0-9]+\\-[0-9]+})?", FALSE);
						CRoReMatchContext MatchContext;
						if(g_Expression.Match(sDisplayName, &MatchContext))
						{
							CItem Item;
							Item.m_pMoniker = pMoniker;
							Item.m_sDisplayName = sDisplayName;
							_W(StrToInt64ExW(CStringW(L"0x") + MatchContext.GetMatchString(0), STIF_SUPPORT_HEX, &reinterpret_cast<LONGLONG&>(Item.m_nInstance)));
							_W(StrToIntExW(CStringW(L"0x") + MatchContext.GetMatchString(1), STIF_SUPPORT_HEX, &reinterpret_cast<INT&>(Item.m_nProcessIdentifier)));
							Item.m_sTime = CString(MatchContext.GetMatchString(3));
							Item.m_sTime.Replace(_T("-"), _T(":"));
							_W(ItemMap.SetAt(sDisplayName, Item) >= 0);
						}
					}
					_ATLCATCHALL()
					{
						_Z_EXCEPTION();
					}
					pMoniker.Release();
				}
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
			#pragma endregion
			CWindowRedraw GraphListViewRedraw(m_GraphListView);
			BOOL bSortNeeded = FALSE;
			#pragma region Remove
			for(INT nItem = m_GraphListView.GetItemCount() - 1; nItem >= 0; nItem--)
			{
				const POSITION Position = ItemMap.Lookup(m_GraphListView.GetItemData(nItem).m_sDisplayName);
				if(Position)
					ItemMap.RemoveAtPos(Position);
				else
					_W(m_GraphListView.DeleteItem(nItem));
			}
			#pragma endregion 
			#pragma region Add
			INT nItemIndex = m_GraphListView.GetItemCount();
			for(POSITION Position = ItemMap.GetStartPosition(); Position; ItemMap.GetNext(Position))
			{
				CItem& Item = ItemMap.GetValueAt(Position);
				_ATLTRY
				{
					CHandle Process;
					//Process.Attach(OpenProcess(PROCESS_QUERY_INFORMATION, FALSE, Item.m_nProcessIdentifier));
					Process.Attach(OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, FALSE, Item.m_nProcessIdentifier));
					__E(Process);
					TCHAR pszPath[MAX_PATH] = { 0 };
					//_W(GetProcessImageFileName(Process, pszPath, DIM(pszPath)));
					_W(GetModuleFileNameEx(Process, NULL, pszPath, DIM(pszPath)));
					Item.m_sProcessImagePath = pszPath;
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
				}
				const INT nItem = m_GraphListView.InsertItem(nItemIndex++, Item);
				_A(nItem >= 0);
				bSortNeeded = TRUE;
			}
			#pragma endregion 
			if(bSortNeeded)
				m_GraphListView.SortItems(&CListPropertyPage::SortGraphListViewItems, (LPARAM) this);
		}
		static CString FormatIdentifier(LPCSTR pszValue)
		{
			CString sText;
			if(pszValue && *pszValue)
			{
				sText = _T("``");
				sText.Insert(1, CString(pszValue));
			}
			return sText;
		}
		static CString FormatIdentifier(LPCWSTR pszValue)
		{
			CString sText;
			if(pszValue && *pszValue)
			{
				sText = _T("``");
				sText.Insert(1, CString(pszValue));
			}
			return sText;
		}
		static CString FormatIdentifier(LONG nValue)
		{
			CString sText;
			sText = _T("``");
			sText.Insert(1, _StringHelper::FormatNumber(nValue));
			return sText;
		}
		static CString FormatIdentifier(ULONG nValue)
		{
			return FormatIdentifier((LONG) nValue);
		}
		static CString FormatIdentifier(BOOL nValue)
		{
			return FormatIdentifier((LONG) nValue);
		}
		static CString FormatIdentifier(LONGLONG nValue)
		{
			CString sText;
			sText = _T("``");
			sText.Insert(1, _StringHelper::FormatNumber(nValue));
			return sText;
		}
		static CString FormatIdentifier(LONG nValue, LPCTSTR pszFormat)
		{
			CString sText;
			sText = _T("``");
			sText.Insert(1, AtlFormatString(pszFormat, nValue));
			return sText;
		}
		#define I FormatIdentifier
		static CString FormatPins(_FilterGraphHelper::CPinArray& PinArray)
		{
			CRoArrayT<CString> Array;
			for(SIZE_T nIndex  = 0; nIndex < PinArray.GetCount(); nIndex++)
			{
				const CComPtr<IPin>& pPin = PinArray[nIndex];
				CString sText = I(_FilterGraphHelper::GetPinName(pPin));
				const CComPtr<IPin> pPeerPin = _FilterGraphHelper::GetPeerPin(pPin);
				if(pPeerPin)
					sText += AtlFormatString(_T(" (%s)"), I(_FilterGraphHelper::GetPinFullName(pPeerPin)));
				Array.Add(sText);
			}
			return _StringHelper::Join(Array, _T(", "));
		}
		CString GetText(CItem& Item) const
		{
			_A(Item.m_pFilterGraph);
			CString sText;
			sText += AtlFormatString(_T("# ") _T("Filter Graph") _T("\r\n") _T("\r\n"));
			#pragma region Graph Parameters
			sText += AtlFormatString(_T("* ") _T("Process: %s (%s) %s") _T("\r\n"), I(Item.m_nProcessIdentifier), I(Item.m_nProcessIdentifier, _T("0x%X")), I(FindFileName(Item.m_sProcessImagePath)));
			//if(!Item.m_sTime.IsEmpty())
			//	sText += AtlFormatString(_T("* ") _T("CreationTime: %s") _T("\r\n"), I(Item.m_sTime));
			if(!Item.m_sState.IsEmpty())
				sText += AtlFormatString(_T("* ") _T("State: %s") _T("\r\n"), I(Item.m_sState));
			if(Item.m_fDuration > 0)
			{
				sText += AtlFormatString(_T("* ") _T("Duration: %s seconds") _T("\r\n"), I(_StringHelper::FormatNumber(Item.m_fDuration, 3)));
				sText += AtlFormatString(_T("* ") _T("Position: %s seconds") _T("\r\n"), I(_StringHelper::FormatNumber(Item.m_fPosition, 3)));
			}
			sText += AtlFormatString(_T("* ") _T("Display Name: %s") _T("\r\n"), I(Item.m_sDisplayName));
			const CString sDirectory = (LPCTSTR) GetPathDirectory(Item.m_sProcessImagePath);
			if(!sDirectory.IsEmpty())
				sText += AtlFormatString(_T("* ") _T("Process Directory: %s") _T("\r\n"), I(sDirectory));
			sText += _T("\r\n");
			#pragma endregion 
			#pragma region Filter
			_FilterGraphHelper::CFilterArray FilterArray;
			_FilterGraphHelper::GetGraphFilters(Item.m_pFilterGraph, FilterArray);
			if(!FilterArray.IsEmpty())
			{
				sText += AtlFormatString(_T("## ") _T("Filters") _T("\r\n") _T("\r\n"));
				for(SIZE_T nIndex = 0; nIndex < FilterArray.GetCount(); nIndex++)
					_ATLTRY
					{
						const CComPtr<IBaseFilter>& pBaseFilter = FilterArray[nIndex];
						sText += AtlFormatString(_T("%d. ") _T("%ls") _T("\r\n"), nIndex + 1, _FilterGraphHelper::GetFilterName(pBaseFilter));
						const CStringW sClassIdentifierString = _FilterGraphHelper::GetFilterClassIdentifierString(pBaseFilter);
						if(!sClassIdentifierString.IsEmpty())
							sText += AtlFormatString(_T(" * ") _T("Class: %s %s") _T("\r\n"), I(sClassIdentifierString), I(_FilterGraphHelper::GetFilterClassDescription(pBaseFilter)));
						_FilterGraphHelper::CPinArray InputPinArray;
						if(_FilterGraphHelper::GetFilterPins(pBaseFilter, PINDIR_INPUT, InputPinArray))
							sText += AtlFormatString(_T(" * ") _T("Input Pins: %s") _T("\r\n"), FormatPins(InputPinArray));
						_FilterGraphHelper::CPinArray OutputPinArray;
						if(_FilterGraphHelper::GetFilterPins(pBaseFilter, PINDIR_OUTPUT, OutputPinArray))
							sText += AtlFormatString(_T(" * ") _T("Output Pins: %s") _T("\r\n"), FormatPins(OutputPinArray));
						#pragma region IFileSourceFilter
						const CComQIPtr<IFileSourceFilter> pFileSourceFilter = pBaseFilter;
						if(pFileSourceFilter)
						{
							CComHeapPtr<OLECHAR> pszFileName;
							CMediaType pMediaType;
							pMediaType.Allocate(MEDIATYPE_NULL, MEDIASUBTYPE_NULL);
							const HRESULT nGetCurFileResult = pFileSourceFilter->GetCurFile(&pszFileName, pMediaType);
							_Z45_DSHRESULT(nGetCurFileResult);
							if(SUCCEEDED(nGetCurFileResult))
								sText += AtlFormatString(_T(" * ") _T("File Source: %s") _T("\r\n"), I(pszFileName));
						}
						#pragma endregion 
						#pragma region IFileSinkFilter
						const CComQIPtr<IFileSinkFilter> pFileSinkFilter = pBaseFilter;
						if(pFileSinkFilter)
						{
							CComHeapPtr<OLECHAR> pszFileName;
							CMediaType pMediaType;
							pMediaType.Allocate(MEDIATYPE_NULL, MEDIASUBTYPE_NULL);
							const HRESULT nGetCurFileResult = pFileSinkFilter->GetCurFile(&pszFileName, pMediaType);
							_Z45_DSHRESULT(nGetCurFileResult);
							if(SUCCEEDED(nGetCurFileResult))
								sText += AtlFormatString(_T(" * ") _T("File Sink: %s") _T("\r\n"), I(pszFileName));
						}
						#pragma endregion 
					}
					_ATLCATCHALL()
					{
						_Z_EXCEPTION();
					}
				sText += _T("\r\n");
				#pragma region Connection
				sText += AtlFormatString(_T("## ") _T("Connections") _T("\r\n") _T("\r\n"));
				INT nConnectionIndex = 0;
				for(SIZE_T nFilterIndex = 0; nFilterIndex < FilterArray.GetCount(); nFilterIndex++)
				{
					const CComPtr<IBaseFilter>& pBaseFilter = FilterArray[nFilterIndex];
					_FilterGraphHelper::CPinArray PinArray;
					_FilterGraphHelper::GetFilterPins(pBaseFilter, PINDIR_OUTPUT, PinArray);
					for(SIZE_T nPinIndex  = 0; nPinIndex < PinArray.GetCount(); nPinIndex++)
					{
						const CComPtr<IPin>& pOutputPin = PinArray[nPinIndex];
						const CComPtr<IPin> pInputPin = _FilterGraphHelper::GetPeerPin(pOutputPin);
						if(!pInputPin)
							continue;
						CString sConnectionText = AtlFormatString(_T("%s - %s"), I(_FilterGraphHelper::GetPinFullName(pOutputPin)), I(_FilterGraphHelper::GetPinFullName(pInputPin)));
						_ATLTRY
						{
							const CMediaType pMediaType = _FilterGraphHelper::GetPinMediaType(pOutputPin);
							if(pMediaType)
							{
								CStringW sMajorType = _FilterGraphHelper::FormatMajorType(pMediaType->majortype);
								CStringW sSubtype;
								if(pMediaType->subtype != MEDIASUBTYPE_NULL)
									sSubtype = _FilterGraphHelper::FormatSubtype(pMediaType->subtype);
								sConnectionText += AtlFormatString(_T(" (%s %s)"), I(sMajorType), I(sSubtype));
							}
						}
						_ATLCATCHALL()
						{
							_Z_EXCEPTION();
						}
						sText += AtlFormatString(_T("%d. ") _T("%s") _T("\r\n"), ++nConnectionIndex, sConnectionText);
					}
				}
				sText += _T("\r\n");
				#pragma endregion 
				#pragma region Media Type
				sText += AtlFormatString(_T("## ") _T("Media Types") _T("\r\n") _T("\r\n"));
				INT nGlobalPinIndex = 0;
				CRoListT<CComPtr<IPin>> PinList;
				for(SIZE_T nFilterIndex = 0; nFilterIndex < FilterArray.GetCount(); nFilterIndex++)
				{
					const CComPtr<IBaseFilter>& pBaseFilter = FilterArray[nFilterIndex];
					_FilterGraphHelper::CPinArray PinArray;
					_FilterGraphHelper::GetFilterPins(pBaseFilter, PinArray);
					for(SIZE_T nPinIndex  = 0; nPinIndex < PinArray.GetCount(); nPinIndex++)
					{
						const CComPtr<IPin>& pPin = PinArray[nPinIndex];
						if(PinList.FindFirst(pPin))
							continue;
						PinList.AddTail(pPin);
						CString sPinText = AtlFormatString(_T("%s"), I(_FilterGraphHelper::GetPinFullName(pPin)));
						const CComPtr<IPin> pPeerPin = _FilterGraphHelper::GetPeerPin(pPin);
						if(pPeerPin)
						{
							PinList.AddTail(pPeerPin);
							sPinText += AtlFormatString(_T(", %s"), I(_FilterGraphHelper::GetPinFullName(pPeerPin)));
						}
						sText += AtlFormatString(_T("%d. ") _T("%s") _T("\r\n"), ++nGlobalPinIndex, sPinText);
						_ATLTRY
						{
							CMediaType pMediaType;
							if(pPeerPin)
								pMediaType = _FilterGraphHelper::GetPinMediaType(pPin);
							else
								pMediaType = _FilterGraphHelper::EnumerateFirstPinMediaType(pPin);
							if(!pMediaType)
								continue;
							#pragma region AM_MEDIA_TYPE
							#define J(x) I(pMediaType->x)
							#define K1(x) sText += AtlFormatString(_T(" * `") _T(#x) _T("`: %s") _T("\r\n"), J(x))
							sText += AtlFormatString(_T(" * ") _T("Data: %s") _T("\r\n"), I(AtlFormatData((const BYTE*) (const AM_MEDIA_TYPE*) pMediaType, sizeof *pMediaType).TrimRight()));
							sText += AtlFormatString(_T(" * ") _T("`majortype`: %s") _T("\r\n"), I(_FilterGraphHelper::FormatMajorType(pMediaType->majortype)));
							if(pMediaType->subtype != MEDIASUBTYPE_NULL)
								sText += AtlFormatString(_T(" * ") _T("`subtype`: %s") _T("\r\n"), I(_FilterGraphHelper::FormatSubtype(pMediaType->subtype)));
							K1(bFixedSizeSamples);
							K1(bTemporalCompression);
							K1(lSampleSize);
							if(pMediaType->formattype != GUID_NULL)
								sText += AtlFormatString(_T(" * ") _T("`formattype`: %s") _T("\r\n"), I(_FilterGraphHelper::FormatFormatType(pMediaType->formattype)));
							if(pMediaType->pUnk)
								sText += AtlFormatString(_T(" * ") _T("`pUnk`: %s") _T("\r\n"), I(AtlFormatString(_T("0x%p"), pMediaType->pUnk)));
							if(pMediaType->cbFormat)
							{
								K1(cbFormat);
								if(pMediaType->pbFormat)
									sText += AtlFormatString(_T(" * ") _T("Format Data, `pbFormat`: %s") _T("\r\n"), I(AtlFormatData(pMediaType->pbFormat, pMediaType->cbFormat).TrimRight()));
							}
							#undef J
							#undef K1
							#pragma endregion
							const BYTE* pnExtraData = NULL;
							SIZE_T nExtraDataSize = 0;
							#pragma region FORMAT_VideoInfo
							if(pMediaType->formattype == FORMAT_VideoInfo)
							{
								sText += AtlFormatString(_T(" * ") _T("As `VIDEOINFOHEADER`:") _T("\r\n"));
								const VIDEOINFOHEADER* pVideoInfoHeader = (const VIDEOINFOHEADER*) pMediaType->pbFormat;
								#define J(x) I(pVideoInfoHeader->x)
								#define K1(x) sText += AtlFormatString(_T("  * `") _T(#x) _T("`: %s") _T("\r\n"), J(x))
								sText += AtlFormatString(_T("  * ") _T("`rcSource`: (%s, %s) - (%s, %s)") _T("\r\n"), J(rcSource.left), J(rcSource.top), J(rcSource.right), J(rcSource.bottom));
								sText += AtlFormatString(_T("  * ") _T("`rcTarget`: (%s, %s) - (%s, %s)") _T("\r\n"), J(rcTarget.left), J(rcTarget.top), J(rcTarget.right), J(rcTarget.bottom));
								K1(dwBitRate);
								K1(dwBitErrorRate);
								sText += AtlFormatString(_T("  * ") _T("`AvgTimePerFrame`: %s units") _T("\r\n"), I(_FilterGraphHelper::FormatReferenceTime(pVideoInfoHeader->AvgTimePerFrame)));
								K1(bmiHeader.biSize);
								K1(bmiHeader.biWidth);
								K1(bmiHeader.biHeight);
								K1(bmiHeader.biPlanes);
								K1(bmiHeader.biBitCount);
								sText += AtlFormatString(_T("  * ") _T("`bmiHeader.biCompression`: %s") _T("\r\n"), I(_FilterGraphHelper::GetFourccCodeString(pVideoInfoHeader->bmiHeader.biCompression)));
								K1(bmiHeader.biSizeImage);
								K1(bmiHeader.biXPelsPerMeter);
								K1(bmiHeader.biYPelsPerMeter);
								K1(bmiHeader.biClrUsed);
								K1(bmiHeader.biClrImportant);
								#undef J
								#undef K1
								nExtraDataSize = pMediaType->cbFormat - sizeof *pVideoInfoHeader;
							} else
							#pragma endregion 
							#pragma region FORMAT_VideoInfo2
							if(pMediaType->formattype == FORMAT_VideoInfo2)
							{
								sText += AtlFormatString(_T(" * ") _T("As `VIDEOINFOHEADER2`:") _T("\r\n"));
								const VIDEOINFOHEADER2* pVideoInfoHeader2 = (const VIDEOINFOHEADER2*) pMediaType->pbFormat;
								#define J(x) I(pVideoInfoHeader2->x)
								#define K1(x) sText += AtlFormatString(_T("  * `") _T(#x) _T("`: %s") _T("\r\n"), J(x))
								#define K2(x, y) sText += AtlFormatString(_T("  * `") _T(#x) _T("`: %s") _T("\r\n"), I(pVideoInfoHeader2->x, y))
								sText += AtlFormatString(_T("  * ") _T("rcSource: (%s, %s) - (%s, %s)") _T("\r\n"), J(rcSource.left), J(rcSource.top), J(rcSource.right), J(rcSource.bottom));
								sText += AtlFormatString(_T("  * ") _T("rcTarget: (%s, %s) - (%s, %s)") _T("\r\n"), J(rcTarget.left), J(rcTarget.top), J(rcTarget.right), J(rcTarget.bottom));
								K1(dwBitRate);
								K1(dwBitErrorRate);
								sText += AtlFormatString(_T("  * ") _T("`AvgTimePerFrame`: %s units") _T("\r\n"), I(_FilterGraphHelper::FormatReferenceTime(pVideoInfoHeader2->AvgTimePerFrame)));
								K2(dwInterlaceFlags, _T("0x%X"));
								K2(dwCopyProtectFlags, _T("0x%X"));
								K1(dwPictAspectRatioX);
								K1(dwPictAspectRatioY);
								K2(dwControlFlags, _T("0x%X"));
								K1(bmiHeader.biSize);
								K1(bmiHeader.biWidth);
								K1(bmiHeader.biHeight);
								K1(bmiHeader.biPlanes);
								K1(bmiHeader.biBitCount);
								sText += AtlFormatString(_T("  * ") _T("`bmiHeader.biCompression`: %s") _T("\r\n"), I(_FilterGraphHelper::GetFourccCodeString(pVideoInfoHeader2->bmiHeader.biCompression)));
								K1(bmiHeader.biSizeImage);
								K1(bmiHeader.biXPelsPerMeter);
								K1(bmiHeader.biYPelsPerMeter);
								K1(bmiHeader.biClrUsed);
								K1(bmiHeader.biClrImportant);
								#undef J
								#undef K1
								#undef K2
								nExtraDataSize = pMediaType->cbFormat - sizeof *pVideoInfoHeader2;
								if(nExtraDataSize)
								{
									sText += AtlFormatString(_T("  * ") _T("Extra Data: (%d bytes)") _T("\r\n"), nExtraDataSize);
									nExtraDataSize = 0;
								}
							} else
							#pragma endregion 
							#pragma region FORMAT_MPEG2Video
							if(pMediaType->formattype == FORMAT_MPEG2Video)
							{
								sText += AtlFormatString(_T(" * ") _T("As `MPEG2VIDEOINFO`:") _T("\r\n"));
								const MPEG2VIDEOINFO* pMpeg2VideoInfo = (const MPEG2VIDEOINFO*) pMediaType->pbFormat;
								#define J(x) I(pMpeg2VideoInfo->x)
								#define K1(x) sText += AtlFormatString(_T("  * `") _T(#x) _T("`: %s") _T("\r\n"), J(x))
								#define K2(x, y) sText += AtlFormatString(_T("  * `") _T(#x) _T("`: %s") _T("\r\n"), I(pMpeg2VideoInfo->x, y))
								sText += AtlFormatString(_T("  * ") _T("`hdr.rcSource`: (%s, %s) - (%s, %s)") _T("\r\n"), J(hdr.rcSource.left), J(hdr.rcSource.top), J(hdr.rcSource.right), J(hdr.rcSource.bottom));
								sText += AtlFormatString(_T("  * ") _T("`hdr.rcTarget`: (%s, %s) - (%s, %s)") _T("\r\n"), J(hdr.rcTarget.left), J(hdr.rcTarget.top), J(hdr.rcTarget.right), J(hdr.rcTarget.bottom));
								K1(hdr.dwBitRate);
								K1(hdr.dwBitErrorRate);
								sText += AtlFormatString(_T("  * ") _T("`hdr.AvgTimePerFrame`: %s") _T("\r\n"), I(_FilterGraphHelper::FormatReferenceTime(pMpeg2VideoInfo->hdr.AvgTimePerFrame)));
								K2(hdr.dwInterlaceFlags, _T("0x%X"));
								K2(hdr.dwCopyProtectFlags, _T("0x%X"));
								K1(hdr.dwPictAspectRatioX);
								K1(hdr.dwPictAspectRatioY);
								K2(hdr.dwControlFlags, _T("0x%X"));
								K1(hdr.bmiHeader.biSize);
								K1(hdr.bmiHeader.biWidth);
								K1(hdr.bmiHeader.biHeight);
								K1(hdr.bmiHeader.biPlanes);
								K1(hdr.bmiHeader.biBitCount);
								sText += AtlFormatString(_T("  * ") _T("`hdr.bmiHeader.biCompression`: %s") _T("\r\n"), I(_FilterGraphHelper::GetFourccCodeString(pMpeg2VideoInfo->hdr.bmiHeader.biCompression)));
								K1(hdr.bmiHeader.biSizeImage);
								K1(hdr.bmiHeader.biXPelsPerMeter);
								K1(hdr.bmiHeader.biYPelsPerMeter);
								K1(hdr.bmiHeader.biClrUsed);
								K1(hdr.bmiHeader.biClrImportant);
								K2(dwStartTimeCode, _T("0x%08X"));
								K1(cbSequenceHeader);
								K1(dwProfile);
								K1(dwLevel);
								K2(dwFlags, _T("0x%08X"));
								#undef J
								#undef K1
								#undef K2
								#undef J
								nExtraDataSize = pMediaType->cbFormat - (sizeof *pMpeg2VideoInfo - sizeof pMpeg2VideoInfo->dwSequenceHeader);
							} else
							#pragma endregion 
							#pragma region FORMAT_WaveFormatEx
							if(pMediaType->formattype == FORMAT_WaveFormatEx)
							{
								const WAVEFORMATEX* pWaveFormatEx = (const WAVEFORMATEX*) pMediaType->pbFormat;
								if(pWaveFormatEx->wFormatTag == WAVE_FORMAT_EXTENSIBLE)
								{
									const WAVEFORMATEXTENSIBLE* pWaveFormatExtensible = (const WAVEFORMATEXTENSIBLE*) pMediaType->pbFormat;
									#define J(x) I(pWaveFormatExtensible->x)
									#define K1(x) sText += AtlFormatString(_T("  * `") _T(#x) _T("`: %s") _T("\r\n"), J(x))
									#define K2(x, y) sText += AtlFormatString(_T("  * `") _T(#x) _T("`: %s") _T("\r\n"), I(pWaveFormatExtensible->x, y))
									sText += AtlFormatString(_T(" * ") _T("As `WAVEFORMATEXTENSIBLE`:") _T("\r\n"));
									K2(Format.wFormatTag, _T("0x%02X"));
									K1(Format.nChannels);
									K1(Format.nSamplesPerSec);
									K1(Format.nAvgBytesPerSec);
									K1(Format.nBlockAlign);
									K1(Format.wBitsPerSample);
									K1(Format.cbSize);
									K1(Samples.wValidBitsPerSample);
									K2(dwChannelMask, _T("0x%02X"));
									sText += AtlFormatString(_T("  * ") _T("`SubFormat`: %s") _T("\r\n"), I(_PersistHelper::StringFromIdentifier(pWaveFormatExtensible->SubFormat)));
									#undef J
									#undef K1
									#undef K2
									nExtraDataSize = pWaveFormatEx->cbSize - (sizeof *pWaveFormatExtensible - sizeof *pWaveFormatEx);
								} else
								{
									#define J(x) I(pWaveFormatEx->x)
									#define K1(x) sText += AtlFormatString(_T("  * `") _T(#x) _T("`: %s") _T("\r\n"), J(x))
									#define K2(x, y) sText += AtlFormatString(_T("  * `") _T(#x) _T("`: %s") _T("\r\n"), I(pWaveFormatEx->x, y))
									K2(wFormatTag, _T("0x%02X"));
									K1(nChannels);
									K1(nSamplesPerSec);
									K1(nAvgBytesPerSec);
									K1(nBlockAlign);
									K1(wBitsPerSample);
									K1(cbSize);
									#undef J
									#undef K1
									#undef K2
									nExtraDataSize = pWaveFormatEx->cbSize;
								}
							}
							#pragma endregion 
							#pragma region Extra Data
							if(nExtraDataSize)
							{
								if(!pnExtraData)
									pnExtraData = pMediaType->pbFormat + pMediaType->cbFormat - nExtraDataSize;
								sText += AtlFormatString(_T("  * ") _T("Extra Data: %s") _T("\r\n"), I(AtlFormatData(pnExtraData, nExtraDataSize).TrimRight()));
							}
							#pragma endregion 
						}
						_ATLCATCHALL()
						{
							_Z_EXCEPTION();
						}
					}
				}
				sText += _T("\r\n");
				#pragma endregion 
			}
			#pragma endregion 
			return sText;
		}
		#undef I
		CString GetText()
		{
			CRoArrayT<CString> GraphArray;
			for(INT nItem = m_GraphListView.GetNextItem(-1, LVNI_SELECTED); nItem >= 0; nItem = m_GraphListView.GetNextItem(nItem, LVNI_SELECTED))
			{
				CItem& Item = m_GraphListView.GetItemData(nItem);
				_ATLTRY
				{
					if(Item.FilterGraphNeeded(m_pRunningObjectTable))
					{
						Item.Check();
						m_GraphListView.RedrawItems(nItem, nItem);
						GraphArray.Add(GetText(Item));
					}
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
				}
			}
			return _StringHelper::Join(GraphArray, _T("\r\n") _T("---") _T("\r\n") _T("\r\n"));
		}

	// Window Message Handler
		LRESULT OnInitDialog(HWND, LPARAM)
		{
			_ATLTRY
			{
				CWaitCursor WaitCursor;
				m_GraphListView.Initialize(GetDlgItem(IDC_FILTERGRAPHLIST_LIST_GRAPH));
				CToolTipCtrl ToolTip = m_GraphListView.GetToolTips();
				ToolTip.SetDelayTime(TTDT_AUTOPOP, 30 * 1000); // 30 seconds
				ToolTip.SetMaxTipWidth(max(GetSystemMetrics(SM_CXSCREEN) * 5 / 8, 600));
				m_RefreshButton = GetDlgItem(IDC_FILTERGRAPHLIST_LIST_REFRESH);
				m_CheckButton = GetDlgItem(IDC_FILTERGRAPHLIST_LIST_CHECK);
				m_CopyToClipboardButton = GetDlgItem(IDC_FILTERGRAPHLIST_LIST_COPYTOCLIPBOARD);
				DlgResize_Init(FALSE, FALSE);
				Refresh();
				#if _DEVELOPMENT
					m_GraphListView.SetItemState(0, LVIS_FOCUSED | LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
				#endif // _DEVELOPMENT
				UpdateControls();
				#pragma region Default Property Sheet Size
				CRect Position;
				_W(m_PropertySheet.GetWindowRect(Position));
				Position.InflateRect(6 * Position.Width() / 8, 1 * Position.Height() / 8);
				CSize ScreenExtent(GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN));
				ScreenExtent.cx -= ScreenExtent.cx / 8;
				ScreenExtent.cy -= ScreenExtent.cy / 8;
				if(Position.Width() > ScreenExtent.cx)
					Position.right = Position.left + ScreenExtent.cx;
				if(Position.Height() > ScreenExtent.cy)
					Position.bottom = Position.top + ScreenExtent.cy;
				_W(m_PropertySheet.MoveWindow(Position));
				_W(m_PropertySheet.CenterWindow());
				#pragma endregion
				CancelToClose();
			}
			_ATLCATCHALL()
			{
				for(CWindow Window = GetWindow(GW_CHILD); Window.IsWindow(); Window = Window.GetWindow(GW_HWNDNEXT))
					Window.EnableWindow(FALSE);
				_ATLRETHROW;
			}
			return TRUE;
		}
		LRESULT OnDestroy()
		{
			return 0;
		}
		LRESULT OnGraphListViewGetDispInfo(NMLVDISPINFO* pHeader)
		{
			const CItem& Item = m_GraphListView.DataFromParameter(pHeader->item.lParam);
			if(pHeader->item.mask & LVIF_TEXT)
			{
				CString& sTextBuffer = m_GraphListView.GetTextBufferString(TRUE);
				switch(pHeader->item.iSubItem)
				{
				case 1: // Process Name
					sTextBuffer = PathFindFileName(Item.m_sProcessImagePath);
					break;
				case 2: // Creation Time
					sTextBuffer = Item.m_sTime;
					break;
				case 3: // Filter Count
					if(Item.m_pFilterGraph)
						sTextBuffer = AtlFormatString(_T("%d"), Item.m_nFilterCount);
					break;
				case 4: // State
					if(Item.m_pFilterGraph)
						sTextBuffer = Item.m_sState;
					break;
				case 5: // Process Image Directory
					sTextBuffer = (LPCTSTR) GetPathDirectory(Item.m_sProcessImagePath);
					break;
				default: // Process, Instance
					sTextBuffer = AtlFormatString(_T("%d - 0x%p"), Item.m_nProcessIdentifier, Item.m_nInstance);
				}
				pHeader->item.pszText = m_GraphListView.GetTextBuffer();
			}
			return 0;
		}
		LRESULT OnGraphListViewGetInfoTip(NMLVGETINFOTIP* pHeader)
		{
			const CItem& Item = m_GraphListView.GetItemData(pHeader->iItem);
			CString& sTextBuffer = m_GraphListView.GetTextBufferString(TRUE);
			sTextBuffer.AppendFormat(_T("Process: %d (0x%X) %s\r\n"), Item.m_nProcessIdentifier, Item.m_nProcessIdentifier, CString(FindFileName(Item.m_sProcessImagePath)));
			if(!Item.m_sTime.IsEmpty())
				sTextBuffer.AppendFormat(_T("CreationTime: %s\r\n"), Item.m_sTime);
			if(Item.m_pFilterGraph)
			{
				sTextBuffer.AppendFormat(_T("Filter Count: %d\r\n"), Item.m_nFilterCount);
				if(!Item.m_sState.IsEmpty())
					sTextBuffer.AppendFormat(_T("State: %s\r\n"), Item.m_sState);
				if(Item.m_fDuration > 0)
				{
					sTextBuffer.AppendFormat(_T("Duration: %s seconds\r\n"), _StringHelper::FormatNumber(Item.m_fDuration, 3));
					sTextBuffer.AppendFormat(_T("Position: %s seconds\r\n"), _StringHelper::FormatNumber(Item.m_fPosition, 3));
				}
			}
			sTextBuffer.AppendFormat(_T("Display Name: %ls\r\n"), Item.m_sDisplayName);
			sTextBuffer.AppendFormat(_T("Instance: 0x%p\r\n"), Item.m_nInstance);
			sTextBuffer.TrimRight(_T("\t\n\r ."));
			const CString sDirectory = (LPCTSTR) GetPathDirectory(Item.m_sProcessImagePath);
			if(!sDirectory.IsEmpty())
				sTextBuffer.AppendFormat(_T("Process Directory: %s\r\n"), sDirectory);
			#pragma region Clipboard Copy
			if(GetKeyState(VK_CONTROL) < 0 && GetKeyState(VK_SHIFT) < 0)
				_ATLTRY
				{
					SetClipboardText(m_hWnd, sTextBuffer);
					MessageBeep(MB_OK);
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
					MessageBeep(MB_ICONERROR);
				}
			#pragma endregion
			_tcsncpy_s(pHeader->pszText, pHeader->cchTextMax, m_GraphListView.GetTextBuffer(), _TRUNCATE);
			return 0;
		}
		LRESULT OnGraphListViewItemChanged(NMLISTVIEW* pHeader)
		{
			UpdateControls();
			return 0;
		}
		LRESULT OnGraphListViewDblClk(NMITEMACTIVATE* pHeader)
		{
			m_CheckButton.Click();
			return 0;
		}
		LRESULT OnRefresh(UINT, INT, HWND)
		{
			CWaitCursor WaitCursor;
			Refresh();
			UpdateControls();
			return 0;
		}
		LRESULT OnCheck(UINT, INT, HWND)
		{
			CWaitCursor WaitCursor;
			for(INT nItem = m_GraphListView.GetNextItem(-1, LVNI_SELECTED); nItem >= 0; nItem = m_GraphListView.GetNextItem(nItem, LVNI_SELECTED))
			{
				CItem& Item = m_GraphListView.GetItemData(nItem);
				if(Item.FilterGraphNeeded(m_pRunningObjectTable))
					if(Item.Check())
						m_GraphListView.RedrawItems(nItem, nItem);
			}
			return 0;
		}
		LRESULT OnCopyToClipboard(UINT, INT, HWND)
		{
			CWaitCursor WaitCursor;
			const CString sText = GetText();
			if(sText.IsEmpty())
				return 0;
			SetClipboardText(m_hWnd, sText);
			MessageBeep(MB_OK);
			return 0;
		}
	};

private:
	CListPropertyPage m_ListPropertyPage;

public:
// CFilterGraphListPropertySheet
	CFilterGraphListPropertySheet() :
		CSizablePropertySheetT<CFilterGraphListPropertySheet>(IDS_FILTERGRAPHLIST_LIST_PROPERTYSHEETCAPTION),
		m_ListPropertyPage(this)
	{
		AddPage(m_ListPropertyPage);
	}
	BOOL SetInitialPosition()
	{
		if(!__super::SetInitialPosition())
			return FALSE;
		SetIcon(AtlLoadIconImage(IDI_MODULE, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXICON), GetSystemMetrics(SM_CYICON)), TRUE);
		SetIcon(AtlLoadIconImage(IDI_MODULE, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXSMICON), GetSystemMetrics(SM_CYSMICON)), FALSE);
		#pragma region Bitness Indication
		CString sCaption;
		_W(GetWindowText(sCaption));
		#if defined(_WIN64)
			sCaption.Append(_T(" (64-bit)"));
		#else
			if(SafeIsWow64Process())
				sCaption.Append(_T(" (32-bit)"));
		#endif // defined(_WIN64)
		_W(SetWindowText(sCaption));
		#pragma endregion
		#pragma region System Menu
		CMenuHandle Menu = GetSystemMenu(FALSE);
		_W(Menu.AppendMenu(MF_SEPARATOR));
		_W(Menu.AppendMenu(MF_STRING, ID_APP_ABOUT, _T("&About...")));
		#pragma endregion
		return TRUE;
	}

// Window message handelrs
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
};

