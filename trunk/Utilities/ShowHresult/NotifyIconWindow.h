////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

#include <vfwmsgs.h>
#include <asferr.h> // FACILITY_NS
#include <mferror.h> // FACILITY_MF
#include <wmcodecdsp.h> // FACILITY_WMAAECMA
#include <ddraw.h> // _FACD3D
//#include <d3d9helper.h> // _FACD3D
#include <d3d9.h> // _FACD3D
#include <d2derr.h> // FACILITY_D2D
#include <wincodec.h> // FACILITY_WINCODEC_ERR
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
			#include "DsIdentifier.inc"
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
			#include "MfIdentifier.inc"
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
	static CString LookupSystemIdentifier(HRESULT nValue)
	{
		if(HRESULT_SEVERITY(nValue) == SEVERITY_ERROR && HRESULT_FACILITY(nValue) == FACILITY_WIN32)
			nValue = HRESULT_CODE(nValue);
		if(nValue < 0 || nValue >= 16384)
			return _T("");
		static const struct { HRESULT nValue; LPCSTR pszName; } g_pMap[] = 
		{
			#define A(x) { x, #x },
			#include "SystemIdentifier.inc"
			#undef A
		};
		for(SIZE_T nIndex = 0; nIndex < DIM(g_pMap); nIndex++)
			if(g_pMap[nIndex].nValue == nValue)
				return CString(g_pMap[nIndex].pszName);
		return _T("");
	}
	static BOOL IsD3dResult(HRESULT nResult, CString* psMessage = NULL)
	{
		if(HRESULT_FACILITY(nResult) != _FACD3D)
			return FALSE;
		psMessage;
		return !LookupD3dIdentifier(nResult).IsEmpty();
	}
	static CString LookupD3dIdentifier(HRESULT nValue)
	{
		static const struct { HRESULT nValue; LPCSTR pszName; } g_pMap[] = 
		{
			#define A(x) { x, #x },
			#include "D3dIdentifier.inc"
			#undef A
		};
		for(SIZE_T nIndex = 0; nIndex < DIM(g_pMap); nIndex++)
			if(g_pMap[nIndex].nValue == nValue)
				return CString(g_pMap[nIndex].pszName);
		return _T("");
	}
	static BOOL IsD2dResult(HRESULT nResult, CString* psMessage = NULL)
	{
		if(HRESULT_FACILITY(nResult) != FACILITY_D2D)
			return FALSE;
		psMessage;
		return !LookupD2dIdentifier(nResult).IsEmpty();
	}
	static CString LookupD2dIdentifier(HRESULT nValue)
	{
		static const struct { HRESULT nValue; LPCSTR pszName; } g_pMap[] = 
		{
			#define A(x) { x, #x },
			#include "D2dIdentifier.inc"
			#undef A
		};
		for(SIZE_T nIndex = 0; nIndex < DIM(g_pMap); nIndex++)
			if(g_pMap[nIndex].nValue == nValue)
				return CString(g_pMap[nIndex].pszName);
		return _T("");
	}
	static BOOL IsWicResult(HRESULT nResult, CString* psMessage = NULL)
	{
		if(HRESULT_FACILITY(nResult) != FACILITY_WINCODEC_ERR)
			return FALSE;
		psMessage;
		return !LookupWicIdentifier(nResult).IsEmpty();
	}
	static CString LookupWicIdentifier(HRESULT nValue)
	{
		static const struct { HRESULT nValue; LPCSTR pszName; } g_pMap[] = 
		{
			#define A(x) { x, #x },
			#include "WicIdentifier.inc"
			#undef A
		};
		for(SIZE_T nIndex = 0; nIndex < DIM(g_pMap); nIndex++)
			if(g_pMap[nIndex].nValue == nValue)
				return CString(g_pMap[nIndex].pszName);
		return _T("");
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
	VOID SetBalloonToolTip(DWORD nFlags, LPCTSTR pszTitle, LPCTSTR pszText, UINT nTimeout = 30 * 1000)
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
		if(!sText.IsEmpty() && _tcschr(_T("Ll"), sText[sText.GetLength() - 1]))
			sText.Delete(sText.GetLength() - 1);
		if(sText.IsEmpty())
			return FALSE;
		LONGLONG nLongLongResult;
		if(_tcsnicmp(sText, _T("0x"), 2) == 0)
		{
			SIZE_T nIndex = 2;
			for(; nIndex < (SIZE_T) sText.GetLength(); nIndex++)
				if(!_tcschr(_T("0123456789ABCDEFabcdef"), sText[nIndex]))
					return FALSE;
			if(!StrToInt64Ex(sText, STIF_SUPPORT_HEX, &nLongLongResult))
				return FALSE; 
		} else
		{
			SIZE_T nIndex = 0;
			if(sText[0] == _T('-'))
				nIndex++;
			for(; nIndex < (SIZE_T) sText.GetLength(); nIndex++)
				if(!_tcschr(_T("0123456789"), sText[nIndex]))
					return FALSE;
			nLongLongResult = _ttoi64(sText);
		}
		const LONG nHighLongLongResult = (LONG) (nLongLongResult >> 32);
		if(!nLongLongResult || nHighLongLongResult > 0 || nHighLongLongResult < -1)
			return FALSE;
		HRESULT nResult = (LONG) nLongLongResult;
		#pragma endregion
		#pragma region Lookup
		// NOTE: Include file regular expression replacement: ^.+?\#define +([^ ]+?) +MAKE_D3D.+\r?$ -> A($1)
		CString sTitle, sMessage, sIdentifier;
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
		else if(IsD3dResult(nResult, &sMessage))
		{
			sTitle = _T("DirectDraw/Direct3D");
			sIdentifier = LookupD3dIdentifier(nResult);
		} else if(IsD2dResult(nResult, &sMessage))
		{
			sTitle = _T("Direct2D");
			sIdentifier = LookupD2dIdentifier(nResult);
		} else if(IsWicResult(nResult, &sMessage))
		{
			sTitle = _T("WinCodec");
			sIdentifier = LookupWicIdentifier(nResult);
		} else 
		{
			sMessage = AtlFormatSystemMessage(nResult);
			sIdentifier = LookupSystemIdentifier(nResult);
			if(sIdentifier.IsEmpty())
				sIdentifier = LookupHresultSystemIdentifier(nResult);
			if(!sMessage.IsEmpty() || !sIdentifier.IsEmpty())
				sTitle = _T("System");
		}
		if(sMessage.IsEmpty() && sTitle.IsEmpty())
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
		if(sMessage.IsEmpty())
			sMessage = _T("(no message found)");
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
		Process(_T("0x80290208L"));
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
