////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2014
// Created by Roman Ryltsov roman@alax.info

#pragma once

#include <psapi.h>
#include <atlctrlx.h>
#include <atlsplit.h>
#include "rofiles.h"
#include "FilterGraphSpy.h"
#include "FilterGraphHelper.h"
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
		COMMAND_ID_HANDLER_EX(IDC_FILTERGRAPHLIST_LIST_PROPERTIES, OnProperties)
		REFLECT_NOTIFICATIONS()
	END_MSG_MAP()

	BEGIN_DLGRESIZE_MAP(CListPropertyPage)
		DLGRESIZE_CONTROL(IDC_FILTERGRAPHLIST_LIST_GRAPH, DLSZ_SIZE_X | DLSZ_SIZE_Y)
		DLGRESIZE_CONTROL(IDC_FILTERGRAPHLIST_LIST_REFRESH, DLSZ_MOVE_Y)
		DLGRESIZE_CONTROL(IDC_FILTERGRAPHLIST_LIST_CHECK, DLSZ_MOVE_Y)
		DLGRESIZE_CONTROL(IDC_FILTERGRAPHLIST_LIST_COPYTOCLIPBOARD, DLSZ_MOVE_Y)
		DLGRESIZE_CONTROL(IDC_FILTERGRAPHLIST_LIST_PROPERTIES, DLSZ_MOVE_Y)
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
		CButton m_PropertiesButton;
		CComPtr<IRunningObjectTable> m_pRunningObjectTable;

	public:
	// CListPropertyPage
		CListPropertyPage(CFilterGraphListPropertySheet* pPropertySheet) throw() :
			m_PropertySheet(*pPropertySheet)
		{
		}
		VOID UpdateControls()
		{
			const UINT nSelectedCount = m_GraphListView.GetSelectedCount();
			m_CopyToClipboardButton.EnableWindow(nSelectedCount > 0);
			m_PropertiesButton.EnableWindow(nSelectedCount == 1);
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
						CFilterGraphHelper::CProcessData ProcessData;
						ProcessData.m_sDisplayName = Item.m_sDisplayName;
						ProcessData.m_nIdentifier = Item.m_nProcessIdentifier;
						ProcessData.m_sImagePath = Item.m_sProcessImagePath;
						GraphArray.Add(CFilterGraphHelper::GetText(Item.m_pFilterGraph, &ProcessData));
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
				m_PropertiesButton = GetDlgItem(IDC_FILTERGRAPHLIST_LIST_PROPERTIES);
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
			const CString sDirectory = (LPCTSTR) GetPathDirectory(Item.m_sProcessImagePath);
			if(!sDirectory.IsEmpty())
				sTextBuffer.AppendFormat(_T("Process Directory: %s\r\n"), sDirectory);
			sTextBuffer.TrimRight(_T("\t\n\r ."));
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
			//m_CheckButton.Click();
			m_PropertiesButton.Click();
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
		LRESULT OnProperties(UINT, INT, HWND)
		{
			const INT nItem = m_GraphListView.GetNextItem(-1, LVNI_SELECTED);
			if(nItem < 0)
				return 0;
			CItem& Item = m_GraphListView.GetItemData(nItem);
			if(!Item.FilterGraphNeeded(m_pRunningObjectTable))
				return 0;
			Item.Check();
			CLocalObjectPtr<CFilterGraphHelper> pFilterGraphHelper;
			pFilterGraphHelper->SetFilterGraph(Item.m_pFilterGraph);
			_V(pFilterGraphHelper->DoPropertyFrameModal((LONG) (LONG_PTR) m_hWnd));
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

