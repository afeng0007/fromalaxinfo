////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2012-2013
// Created by Roman Ryltsov roman@alax.info

#pragma once

#include <atlsecurity.h>
#include "AboutDialog.h"

static BOOL IsAdministrator()
{
	bool bIsMember = FALSE;
	return CAccessToken().CheckTokenMembership(Sids::Admins(), &bIsMember) && bIsMember;
}

////////////////////////////////////////////////////////////
// CMainDialog

class CMainDialog : 
	public CDialogImpl<CMainDialog>,
	public CDialogResize<CMainDialog>
{
public:
	enum { IDD = IDD_MAIN };

BEGIN_MSG_MAP_EX(CMainDialog)
	//CHAIN_MSG_MAP(CDialogImpl<CMainDialog>)
	CHAIN_MSG_MAP(CDialogResize<CMainDialog>)
	MSG_WM_INITDIALOG(OnInitDialog)
	MSG_WM_DESTROY(OnDestroy)
	MSG_LVN_GETDISPINFO(IDC_MAIN_ENTRY, OnEntryListViewGetDispInfo)
	MSG_LVN_GETINFOTIP(IDC_MAIN_ENTRY, OnEntryListViewGetInfoTip)
	MSG_LVN_ITEMCHANGED(IDC_MAIN_ENTRY, OnEntryListViewItemChanged)
	MSG_LVN_DBLCLK(IDC_MAIN_ENTRY, OnEntryListViewDblClk)
	MSG_WM_SYSCOMMAND(OnSysCommand)
	COMMAND_ID_HANDLER_EX(IDCANCEL, OnCommand)
	COMMAND_ID_HANDLER_EX(IDC_MAIN_REFRESH, OnRefreshButtonClicked)
	COMMAND_ID_HANDLER_EX(IDC_MAIN_PROBE, OnProbeButtonClicked)
	REFLECT_NOTIFICATIONS()
END_MSG_MAP()

BEGIN_DLGRESIZE_MAP(CMainDialog)
	DLGRESIZE_CONTROL(IDC_MAIN_ENTRY, DLSZ_SIZE_X | DLSZ_SIZE_Y)
	DLGRESIZE_CONTROL(IDC_MAIN_REFRESH, DLSZ_MOVE_Y)
	DLGRESIZE_CONTROL(IDC_MAIN_PROBE, DLSZ_MOVE_Y)
	DLGRESIZE_CONTROL(IDCANCEL, DLSZ_MOVE_X | DLSZ_MOVE_Y)
END_DLGRESIZE_MAP()

public:

	////////////////////////////////////////////////////////
	// CEntry

	class CEntry
	{
	public:
		CComPtr<IMoniker> m_pMoniker;
		CStringW m_sDisplayName;
		ULONGLONG m_nLastChangeTime;
		CString m_sClassDescription;
		CString m_sApplicationDescription;
		CPath m_sPath;
		HRESULT m_nGetObjectResult;

	public:
	// CEntry
		CEntry() :
			m_nLastChangeTime(0),
			m_nGetObjectResult(S_FALSE)
		{
		}
		CString GetGetObjectResultString() const
		{
			CString sString;
			switch(m_nGetObjectResult)
			{
			case S_OK:
				sString = _T("Succeeded");
				break;
			case S_FALSE:
				//sString = ...
				break;
			default:
				sString = AtlFormatSystemMessage(m_nGetObjectResult).TrimRight(_T("\t\n\r ."));
				if(sString.IsEmpty())
					sString = AtlFormatString(_T("Error 0x%08x"), m_nGetObjectResult);
				else
					sString = AtlFormatString(_T("%s (0x%08x)"), sString, m_nGetObjectResult);
			}
			return sString;
		}
	};

private:
	CRoListViewT<CEntry, CRoListControlDataTraitsT> m_EntryListView;
	CButton m_ProbeButton;
	CComPtr<IRunningObjectTable> m_pRunningObjectTable;

public:
// CMainDialog
	CMainDialog()
	{
	}
	VOID UpdateEntryListView()
	{
		CRoArrayT<CEntry> EntryArray;
		{
			CComPtr<IRunningObjectTable> pRunningObjectTable;
			__C(GetRunningObjectTable(0, &pRunningObjectTable));
			CComPtr<IEnumMoniker> pEnumMoniker;
			__C(pRunningObjectTable->EnumRunning(&pEnumMoniker));
			CComPtr<IMalloc> pMalloc;
			__C(CoGetMalloc(1, &pMalloc));
			CComPtr<IMoniker> pMoniker;
			while(pEnumMoniker->Next(1, &pMoniker, NULL) == S_OK)
			{
				_ATLTRY
				{
					CEntry Entry;
					Entry.m_pMoniker = pMoniker;
					CComPtr<IBindCtx> pBindCtx;
					__C(CreateBindCtx(0, &pBindCtx));
					LPOLESTR pszDisplayName = NULL;
					__C(pMoniker->GetDisplayName(pBindCtx, NULL, &pszDisplayName));
					Entry.m_sDisplayName = pszDisplayName;
					_Z4(atlTraceGeneral, 4, _T("Entry.m_sDisplayName %ls\n"), Entry.m_sDisplayName);
					pMalloc->Free(pszDisplayName);
					_ATLTRY
					{
						__C(pRunningObjectTable->GetTimeOfLastChange(pMoniker, &reinterpret_cast<FILETIME&>(Entry.m_nLastChangeTime)));
						CLSID ClassIdentifier;
						if(!Entry.m_sDisplayName.IsEmpty() && Entry.m_sDisplayName[0] == L'!')
							if(_PersistHelper::ClassIdentifierFromString((LPCWSTR) Entry.m_sDisplayName + 1, ClassIdentifier))
							{
								CString sClassIdentifierString(_PersistHelper::StringFromIdentifier(ClassIdentifier));
								Entry.m_sClassDescription = _RegKeyHelper::QueryStringValue(HKEY_CLASSES_ROOT, AtlFormatString(_T("CLSID\\%s"), sClassIdentifierString));
								#pragma region Application Identifier
								CString sApplicationIdentifierString = _RegKeyHelper::QueryStringValue(HKEY_CLASSES_ROOT, AtlFormatString(_T("CLSID\\%s"), sClassIdentifierString), _T("AppId"));
								CLSID ApplicationClassIdentifier;
								if(_PersistHelper::ClassIdentifierFromString(CT2CW(sApplicationIdentifierString), ApplicationClassIdentifier))
									Entry.m_sApplicationDescription = _RegKeyHelper::QueryStringValue(HKEY_CLASSES_ROOT, AtlFormatString(_T("AppID\\%ls"), _PersistHelper::StringFromIdentifier(ApplicationClassIdentifier)));
								#pragma endregion
								#pragma region Path
								Entry.m_sPath = (LPCTSTR) _RegKeyHelper::QueryStringValue(HKEY_CLASSES_ROOT, AtlFormatString(_T("CLSID\\%s\\InprocServer32"), sClassIdentifierString));
								if(!_tcslen(Entry.m_sPath))
									Entry.m_sPath = (LPCTSTR) _RegKeyHelper::QueryStringValue(HKEY_CLASSES_ROOT, AtlFormatString(_T("CLSID\\%s\\LocalServer32"), sClassIdentifierString));
								#pragma endregion
							}
					}
					_ATLCATCHALL()
					{
						_Z_EXCEPTION();
					}
					_W(EntryArray.Add(Entry) >= 0);
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
				}
				pMoniker.Release();
			}
			m_pRunningObjectTable = pRunningObjectTable;
		}
		m_EntryListView.DeleteAllItems();
		for(SIZE_T nIndex = 0; nIndex < EntryArray.GetCount(); nIndex++)
		{
			const INT nItem = m_EntryListView.InsertItem((INT) nIndex, EntryArray[nIndex]);
			_A(nItem >= 0);
		}
		UpdateControls();
	}
	VOID UpdateControls()
	{
		BOOL bCanProbe = FALSE;
		if(m_pRunningObjectTable)
			for(INT nItem = m_EntryListView.GetNextItem(-1, LVNI_SELECTED); nItem >= 0 && !bCanProbe; nItem = m_EntryListView.GetNextItem(nItem, LVNI_SELECTED))
			{
				CEntry& Entry = m_EntryListView.GetItemData(nItem);
				if(Entry.m_pMoniker)
					bCanProbe = TRUE;
			}
		m_ProbeButton.EnableWindow(bCanProbe);
	}

// Window Message Handelrs
	LRESULT OnInitDialog(HWND, LPARAM)
	{
		CWaitCursor WaitCursor;
		SetIcon(AtlLoadIconImage(IDI_MODULE, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXICON), GetSystemMetrics(SM_CYICON)), TRUE);
		SetIcon(AtlLoadIconImage(IDI_MODULE, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXSMICON), GetSystemMetrics(SM_CYSMICON)), FALSE);
		CMenuHandle Menu = GetSystemMenu(FALSE);
		_W(Menu.AppendMenu(MF_SEPARATOR));
		_W(Menu.AppendMenu(MF_STRING, ID_APP_ABOUT, _T("&About...")));
		CAboutDialog::UpdateCaption(*this);
		m_EntryListView.Initialize(GetDlgItem(IDC_MAIN_ENTRY));
		//m_EntryListView.SetColumnWidth(0, LVSCW_AUTOSIZE_USEHEADER);
		m_ProbeButton = GetDlgItem(IDC_MAIN_PROBE);
		DlgResize_Init(TRUE);
		#pragma region Default Size
		CRect Position;
		_W(GetWindowRect(Position));
		Position.right += Position.Width() >> 1;
		Position.bottom += Position.Height() >> 1;
		_W(MoveWindow(Position));
		#pragma endregion
		_W(CenterWindow());
		UpdateEntryListView();
		return TRUE;
	}
	LRESULT OnDestroy() throw()
	{
		m_pRunningObjectTable.Release();
		return 0;
	}
	LRESULT OnEntryListViewGetDispInfo(NMLVDISPINFO* pHeader)
	{
		if(pHeader->item.mask & LVIF_TEXT)
		{
			const CEntry& Entry = m_EntryListView.DataFromParameter(pHeader->item.lParam);
			INT nSubItem = pHeader->item.iSubItem;
			CString& sTextBuffer = m_EntryListView.GetTextBufferString(TRUE);
			switch(nSubItem)
			{
			case 1: // Class Description
				sTextBuffer = Entry.m_sClassDescription;
				break;
			case 2: // Probe Result
				sTextBuffer = Entry.GetGetObjectResultString();
				break;
			case 3: // Change Time
				if(Entry.m_nLastChangeTime)
				{
					FILETIME LocalTime;
					_W(FileTimeToLocalFileTime(&reinterpret_cast<const FILETIME&>(Entry.m_nLastChangeTime), &LocalTime));
					sTextBuffer = _StringHelper::FormatDateTime(LocalTime);
				}
				break;
			default: // Display Name
				sTextBuffer = CString(Entry.m_sDisplayName);
			}
			sTextBuffer.TrimRight(_T("\t\n\r ."));
			pHeader->item.pszText = m_EntryListView.GetTextBuffer();
		}
		//if(pHeader->item.mask & LVIF_IMAGE)
		//	pHeader->item.iImage = 0;
		return 0;
	}
	LRESULT OnEntryListViewGetInfoTip(NMLVGETINFOTIP* pHeader)
	{
		const CEntry& Entry = m_EntryListView.GetItemData(pHeader->iItem);
		CString& sTextBuffer = m_EntryListView.GetTextBufferString(TRUE);
		sTextBuffer.AppendFormat(_T("Display Name: %s\r\n"), Entry.m_sDisplayName);
		if(!Entry.m_sClassDescription.IsEmpty())
			sTextBuffer.AppendFormat(_T("Class Description: %s\r\n"), Entry.m_sClassDescription);
		if(!Entry.m_sApplicationDescription.IsEmpty())
			sTextBuffer.AppendFormat(_T("Application Description: %s\r\n"), Entry.m_sApplicationDescription);
		if(_tcslen(Entry.m_sPath))
			sTextBuffer.AppendFormat(_T("Path: %s\r\n"), Entry.m_sPath);
		if(Entry.m_nLastChangeTime)
		{
			FILETIME LocalTime;
			_W(FileTimeToLocalFileTime(&reinterpret_cast<const FILETIME&>(Entry.m_nLastChangeTime), &LocalTime));
			CString sTime = _StringHelper::FormatDateTime(LocalTime);
			//sTime.AppendFormat(_T(" (%d seconds ago)"), (ULONG) ((CMsAccurateFileTime::GetTime() - Entry.m_nLastChangeTime) / (1000 * 10000i64)));
			sTextBuffer.AppendFormat(_T("Last Change Time: %s\r\n"), sTime);
		}
		if(Entry.m_nGetObjectResult != S_FALSE)
			sTextBuffer.AppendFormat(_T("Probe Result: %s\r\n"), Entry.GetGetObjectResultString());
		sTextBuffer.TrimRight(_T("\t\n\r ."));
		_tcsncpy_s(pHeader->pszText, pHeader->cchTextMax, m_EntryListView.GetTextBuffer(), _TRUNCATE);
		#pragma region Clipboard
		if(GetKeyState(VK_CONTROL) < 0 && GetKeyState(VK_SHIFT) < 0)
		{
			SetClipboardText(m_hWnd, sTextBuffer);
			MessageBeep(MB_OK);
		}
		#pragma endregion 
		return 0;
	}
	LRESULT OnEntryListViewItemChanged(NMLISTVIEW* pHeader)
	{
		UpdateControls();
		return 0;
	}
	LRESULT OnEntryListViewDblClk(NMITEMACTIVATE*)
	{
		m_ProbeButton.Click();
		return 0;
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
	LRESULT OnCommand(UINT, INT nIdentifier, HWND)
	{
		_W(EndDialog(nIdentifier));
		return 0;
	}
	LRESULT OnRefreshButtonClicked(UINT, INT, HWND)
	{
		CWaitCursor WaitCursor;
		UpdateEntryListView();
		return 0;
	}
	LRESULT OnProbeButtonClicked(UINT, INT, HWND)
	{
		CWaitCursor WaitCursor;
		if(m_pRunningObjectTable)
		{
			BOOL bUpdated = FALSE;
			for(INT nItem = m_EntryListView.GetNextItem(-1, LVNI_SELECTED); nItem >= 0; nItem = m_EntryListView.GetNextItem(nItem, LVNI_SELECTED))
			{
				CEntry& Entry = m_EntryListView.GetItemData(nItem);
				_ATLTRY
				{
					if(Entry.m_pMoniker)
					{
						CComPtr<IUnknown> pUnknown;
						Entry.m_nGetObjectResult = m_pRunningObjectTable->GetObject(Entry.m_pMoniker, &pUnknown);
						bUpdated = TRUE;
					}
				}
				_ATLCATCH(Exception)
				{
					_Z_ATLEXCEPTION(Exception);
					Entry.m_nGetObjectResult = (HRESULT) Exception;
					bUpdated = TRUE;
				}
			}
			if(bUpdated)
				m_EntryListView.RedrawItems(0, m_EntryListView.GetItemCount() - 1);
		}
		return 0;
	}
};
