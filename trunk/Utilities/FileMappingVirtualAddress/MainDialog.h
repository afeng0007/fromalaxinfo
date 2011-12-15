////////////////////////////////////////////////////////////
// MainDialog.h
//
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

#include <tlhelp32.h>
#include <atlsecurity.h>

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
	MSG_WM_TIMER(OnTimer)
	COMMAND_ID_HANDLER_EX(IDCANCEL, OnCancel)
	MSG_LVN_ITEMCHANGED(IDC_MAIN_LIST, OnListViewItemChanged)
	//MSG_LVN_GETDISPINFO(IDC_MAIN_LIST, OnListViewGetDispInfo)
	//MSG_LVN_GETINFOTIP(IDC_MAIN_LIST, OnListViewGetInfoTip)
	REFLECT_NOTIFICATIONS()
END_MSG_MAP()

BEGIN_DLGRESIZE_MAP(CMainDialog)
    DLGRESIZE_CONTROL(IDC_MAIN_LIST, DLSZ_SIZE_X | DLSZ_SIZE_Y)
    DLGRESIZE_CONTROL(IDCANCEL, DLSZ_MOVE_X)
END_DLGRESIZE_MAP()

public:

	////////////////////////////////////////////////////////
	// Timer identifiers

	enum
	{
		TIMER_FIRST = 0,
		TIMER_UPDATE,
	};

	////////////////////////////////////////////////////////
	// CData

	class CData
	{
	private:
		const SIZE_T m_nSize;
		CHandle m_FileMappingHandle;
		VOID* m_pvData;

	public:
	// CData
		CData() throw() :
			m_nSize(256 << 20), // 256M
			m_pvData(NULL)
		{
		}
		~CData() throw()
		{
			SetMapped(FALSE);
		}
		VOID Initialize()
		{
			_A(!((ULONGLONG) m_nSize >> 32));
			m_FileMappingHandle.Attach(CreateFileMapping(INVALID_HANDLE_VALUE, NULL, PAGE_READWRITE, 0, (DWORD) m_nSize, NULL));
			__E(m_FileMappingHandle);
		}
		SIZE_T GetSize() const throw()
		{
			return m_nSize;
		}
		BOOL IsMapped() const throw()
		{
			return m_pvData != NULL;
		}
		VOID SetMapped(BOOL bMapped)
		{
			if(!m_FileMappingHandle)
				return;
			if(bMapped)
			{
				if(!m_pvData)
				{
					m_pvData = MapViewOfFile(m_FileMappingHandle, FILE_MAP_ALL_ACCESS, 0, 0, m_nSize);
					__E(m_pvData);
				}
			} else
			{
				if(m_pvData)
				{
					UnmapViewOfFile(m_pvData);
					m_pvData = NULL;
				}
			}
		}
	};

private:
	CData m_pDatas[64];
	BOOL m_bActivating;
	CString m_sDefaultCaption;
	CRoListViewT<CData*> m_ListView;

public:
// CMainDialog
	CMainDialog() throw()
	{
	}

// Window message handelrs
	LRESULT OnInitDialog(HWND, LPARAM)
	{
		m_bActivating = TRUE;
		CWaitCursor WaitCursor;
		#pragma region Show Platform in Caption
#if defined(_WIN64)
		CString sCaption;
		GetWindowText(sCaption);
		sCaption += _T(" (x64)");
		SetWindowText(sCaption);
#endif // defined(_WIN64)
		#pragma endregion
		m_ListView.Initialize(GetDlgItem(IDC_MAIN_LIST));
		m_ListView.SendMessage(CCM_SETVERSION, COMCTL32_VERSION);
		_ATLTRY
		{
			for(SIZE_T nIndex = 0; nIndex < DIM(m_pDatas); nIndex++)
			{
				m_pDatas[nIndex].Initialize();
				const INT nItem = m_ListView.InsertItem((INT) nIndex, m_pDatas + nIndex, AtlFormatString(_T("Block %02d"), nIndex));
				_A(nItem == (INT) nIndex);
				m_ListView.SetItemText(nItem, 1, AtlFormatString(_T("%dM"), m_pDatas[nIndex].GetSize() >> 20));
			}
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
		}
		GetWindowText(m_sDefaultCaption);
		DlgResize_Init();
		_W(CenterWindow());
		SetTimer(TIMER_UPDATE, 1000); // 1 second
		m_bActivating = FALSE;
		return TRUE;
	}
	LRESULT OnDestroy()
	{
		return 0;
	}
	LRESULT OnTimer(UINT_PTR nEvent)
	{
		switch(nEvent)
		{
		case TIMER_UPDATE:
			{
				MEMORYSTATUSEX MemoryStatus;
				ZeroMemory(&MemoryStatus, sizeof MemoryStatus);
				MemoryStatus.dwLength = sizeof MemoryStatus;
				_W(GlobalMemoryStatusEx(&MemoryStatus));
				SetWindowText(AtlFormatString(_T("%dM / %dM - %s"), (ULONG) ((MemoryStatus.ullTotalVirtual - MemoryStatus.ullAvailVirtual) >> 20), (ULONG) (MemoryStatus.ullTotalVirtual >> 20), m_sDefaultCaption));
			}
			break;
		}
		SetMsgHandled(FALSE);
		return 0;
	}
	LRESULT OnListViewItemChanged(NMLISTVIEW* pHeader)
	{
		if(m_bActivating)
			return 0;
		m_ListView.UpdateCheckState(pHeader);
		_ATLTRY
		{
			for(SIZE_T nIndex = 0; nIndex < DIM(m_pDatas); nIndex++)
				m_pDatas[nIndex].SetMapped(m_ListView.GetCheckState((INT) nIndex));
		}
		_ATLCATCHALL()
		{
			for(SIZE_T nIndex = 0; nIndex < DIM(m_pDatas); nIndex++)
				m_ListView.SetCheckState((INT) nIndex, m_pDatas[nIndex].IsMapped());
			_ATLRETHROW;
		}
		return 0;
	}
	LRESULT OnListViewGetDispInfo(NMLVDISPINFO* pHeader)
	{
		CString& sTextBuffer = m_ListView.GetTextBufferString(TRUE);
		CData* pData = m_ListView.DataFromParameter(pHeader->item.lParam);
		//sTextBuffer = ...
		pHeader->item.pszText = m_ListView.GetTextBuffer();
		return 0;
	}
	LRESULT OnCancel(UINT, INT nIdentifier, HWND)
	{
		_W(EndDialog(nIdentifier));
		return 0;
	}
};

