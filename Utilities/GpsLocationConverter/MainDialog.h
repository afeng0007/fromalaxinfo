////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

#include "AboutDialog.h"

////////////////////////////////////////////////////////////
// CMainDialog

class CMainDialog : 
	public CAxDialogImpl<CMainDialog>
{
public:
	enum { IDD = IDD_MAIN };

BEGIN_MSG_MAP_EX(CMainDialog)
	CHAIN_MSG_MAP(CAxDialogImpl<CMainDialog>)
	MSG_WM_INITDIALOG(OnInitDialog)
	MSG_WM_DESTROY(OnDestroy)
	MSG_WM_CHANGECBCHAIN(OnChangeCbChain)
	MSG_WM_DRAWCLIPBOARD(OnDrawClipboard)
	MSG_WM_SYSCOMMAND(OnSysCommand)
	COMMAND_ID_HANDLER_EX(IDCANCEL, OnCommand)
	NOTIFY_RANGE_CODE_HANDLER_EX(IDC_MAIN_DEGREES_LATITUDE, IDC_MAIN_DEGREESMINUTESSECONDS_LONGITUDELATITUDE, CRoHyperStatic::NC_ANCHORCLICKED, OnStaticAnchorClicked)
	MSG_WM_HOTKEY(OnHotKey)
	REFLECT_NOTIFICATIONS()
END_MSG_MAP()

private:
	CRoIconStatic m_IntroductionStatic;
	CRoHyperStatic m_pStatics[12];
	CRoHyperStatic m_GoogleMapsStatic;
	CRoHyperStatic m_YandexMapsStatic;
	BOOL m_bSetClipboardTextActive;
	CWindow m_NextClipboardViewerWindow;

public:
// CMainDialog
	CMainDialog()
	{
	}
	VOID SetLocation(DOUBLE fLatitude, DOUBLE fLongitude)
	{
		CString psTexts[12];
		CString sGoogleMapsLocation, sYandexMapsLocation;
		#pragma region Degrees
		{
			const CString sLatitude = _StringHelper::FormatNumber(fLatitude, 6, FALSE);
			const CString sLongitude = _StringHelper::FormatNumber(fLongitude, 6, FALSE);
			psTexts[0] = sLatitude;
			psTexts[1] = sLongitude;
			psTexts[2] = AtlFormatString(_T("%s, %s"), sLatitude, sLongitude);
			psTexts[3] = AtlFormatString(_T("%s, %s"), sLongitude, sLatitude);
			sGoogleMapsLocation = AtlFormatString(_T("http://maps.google.com/maps/?ll=%s,%s"), sLatitude, sLongitude);
			sYandexMapsLocation = AtlFormatString(_T("http://maps.yandex.ru/?ll=%s,%s"), sLongitude, sLatitude);
		}
		#pragma endregion 
		#pragma region Degrees, Minutes
		{
			CString sLatitude, sLongitude;
			#pragma region Latitude
			sLatitude.Append((fLatitude >= 0) ? _T("N ") : _T("S "));
			DOUBLE fPartialLatitude = abs(fLatitude);
			const INT nPartialLatitude = (INT) fPartialLatitude;
			sLatitude.AppendFormat(_T("%02d "), nPartialLatitude);
			const DOUBLE fPartialLatitudeMinute = (fPartialLatitude - nPartialLatitude) * 60;
			const INT nPartialLatitudeMinute = (INT) fPartialLatitudeMinute;
			sLatitude.AppendFormat(_T("%02d"), nPartialLatitudeMinute);
			sLatitude.AppendFormat(_T(".%03d "), (INT) ((fPartialLatitudeMinute - nPartialLatitudeMinute) * 1000 + 0.5 - 1E-6));
			#pragma endregion 
			#pragma region Latitude
			sLongitude.Append((fLongitude >= 0) ? _T("E ") : _T("W "));
			DOUBLE fPartialLongitude = abs(fLongitude);
			const INT nPartialLongitude = (INT) fPartialLongitude;
			sLongitude.AppendFormat(_T("%03d "), nPartialLongitude);
			const DOUBLE fPartialLongitudeMinute = (fPartialLongitude - nPartialLongitude) * 60;
			const INT nPartialLongitudeMinute = (INT) fPartialLongitudeMinute;
			sLongitude.AppendFormat(_T("%02d"), nPartialLongitudeMinute);
			sLongitude.AppendFormat(_T(".%03d "), (INT) ((fPartialLongitudeMinute - nPartialLongitudeMinute) * 1000 + 0.5 - 1E-6));
			#pragma endregion 
			psTexts[4] = sLatitude;
			psTexts[5] = sLongitude;
			psTexts[6] = AtlFormatString(_T("%s, %s"), sLatitude, sLongitude);
			psTexts[7] = AtlFormatString(_T("%s, %s"), sLongitude, sLatitude);
		}
		#pragma endregion 
		#pragma region Degrees, Minutes, Seconds
		{
			CString sLatitude, sLongitude;
			#pragma region Latitude
			sLatitude.Append((fLatitude >= 0) ? _T("N ") : _T("S "));
			DOUBLE fPartialLatitude = abs(fLatitude);
			const INT nPartialLatitude = (INT) fPartialLatitude;
			sLatitude.AppendFormat(_T("%02d "), nPartialLatitude);
			const DOUBLE fPartialLatitudeMinute = (fPartialLatitude - nPartialLatitude) * 60;
			const INT nPartialLatitudeMinute = (INT) fPartialLatitudeMinute;
			sLatitude.AppendFormat(_T("%02d "), nPartialLatitudeMinute);
			const DOUBLE fPartialLatitudeSecond = (fPartialLatitudeMinute - nPartialLatitudeMinute) * 60;
			const INT nPartialLatitudeSecond = (INT) fPartialLatitudeSecond;
			sLatitude.AppendFormat(_T("%02d"), nPartialLatitudeSecond);
			sLatitude.AppendFormat(_T(".%02d "), (INT) ((fPartialLatitudeSecond - nPartialLatitudeSecond) * 100 + 0.5 - 1E-6));
			#pragma endregion 
			#pragma region Latitude
			sLongitude.Append((fLongitude >= 0) ? _T("E ") : _T("W "));
			DOUBLE fPartialLongitude = abs(fLongitude);
			INT nPartialLongitude = (INT) fPartialLongitude;
			sLongitude.AppendFormat(_T("%03d "), nPartialLongitude);
			DOUBLE fPartialLongitudeMinute = (fPartialLongitude - nPartialLongitude) * 60;
			INT nPartialLongitudeMinute = (INT) fPartialLongitudeMinute;
			sLongitude.AppendFormat(_T("%02d "), nPartialLongitudeMinute);
			const DOUBLE fPartialLongitudeSecond = (fPartialLongitudeMinute - nPartialLongitudeMinute) * 60;
			const INT nPartialLongitudeSecond = (INT) fPartialLongitudeSecond;
			sLongitude.AppendFormat(_T("%02d"), nPartialLongitudeSecond);
			sLongitude.AppendFormat(_T(".%02d "), (INT) ((fPartialLongitudeSecond - nPartialLongitudeSecond) * 100 + 0.5 - 1E-6));
			#pragma endregion 
			psTexts[ 8] = sLatitude;
			psTexts[ 9] = sLongitude;
			psTexts[10] = AtlFormatString(_T("%s, %s"), sLatitude, sLongitude);
			psTexts[11] = AtlFormatString(_T("%s, %s"), sLongitude, sLatitude);
		}
		#pragma endregion 
		for(SIZE_T nIndex = 0; nIndex < 12; nIndex++)
			m_pStatics[nIndex].SetWindowText(AtlFormatString(_T("<A HREF=\"%s\">%s</A> (F%d)"), psTexts[nIndex], psTexts[nIndex], nIndex + 1));
		m_GoogleMapsStatic.SetWindowText(AtlFormatString(_T("<A TITLE=\"Open in Google Maps\" HREF=\"%s\">%s</A>"), sGoogleMapsLocation, sGoogleMapsLocation));
		m_YandexMapsStatic.SetWindowText(AtlFormatString(_T("<A TITLE=\"Open in Yandex Maps\" HREF=\"%s\">%s</A>"), sYandexMapsLocation, sYandexMapsLocation));
	}
	BOOL SetText(const CString& sText)
	{
		if(sText.GetLength() >= 4096)
			return FALSE;
		CRoReMatchContext MatchContext;
		#pragma region Google Maps
		static CAtlStaticRegExp<> g_ExpressionA(_T("^ *(http://)?[^/]*maps.google[^/]*/.+?") _T("ll={[\\.0-9]+},{[\\.0-9]+}"), FALSE);
		if(g_ExpressionA.Match(sText, &MatchContext))
		{
			DOUBLE fLatitude, fLongitude;
			if(!AtlStringToDouble(MatchContext.GetMatchString(0), fLatitude) || !AtlStringToDouble(MatchContext.GetMatchString(1), fLongitude))
				return FALSE;
			SetLocation(fLatitude, fLongitude);
			return TRUE;
		}
		#pragma endregion 
		#pragma region Yandex Maps
		static CAtlStaticRegExp<> g_ExpressionB(_T("^ *(http://)?[^/]*maps.yandex[^/]*/.+?") _T("ll={[\\.0-9]+}(,|(\\%2C)){[\\.0-9]+}"), FALSE);
		if(g_ExpressionB.Match(sText, &MatchContext))
		{
			DOUBLE fLatitude, fLongitude;
			if(!AtlStringToDouble(MatchContext.GetMatchString(0), fLongitude) || !AtlStringToDouble(MatchContext.GetMatchString(1), fLatitude))
				return FALSE;
			SetLocation(fLatitude, fLongitude);
			return TRUE;
		}
		#pragma endregion 
		#pragma region Degrees and Minutes
		static CAtlStaticRegExp<> g_ExpressionD0(_T("^[\t ]*") 
			_T("{[NSCÞ]}") _T("[\t ]*") _T("{[0-9]+}[^0-9]+?{[0-9]+\\.[0-9]+}") 
			_T("[^0-9\\.]+?") 
			_T("{[EWÂÇ]}") _T("[\t ]*") _T("{[0-9]+}[^0-9]+?{[0-9]+\\.[0-9]+}")
			_T(""), FALSE);
		static CAtlStaticRegExp<> g_ExpressionD1(_T("^[\t ]*") 
			_T("{[EWÂÇ]}") _T("[\t ]*") _T("{[0-9]+}[^0-9]+?{[0-9]+\\.[0-9]+}")
			_T("[^0-9\\.]+?") 
			_T("{[NSCÞ]}") _T("[\t ]*") _T("{[0-9]+}[^0-9]+?{[0-9]+\\.[0-9]+}") 
			_T(""), FALSE);
		static CAtlStaticRegExp<> g_ExpressionD2(_T("^[\t ]*") 
			_T("{[0-9]+}[^0-9]+?{[0-9]+\\.[0-9]+}") _T("[\t ]*") _T("{[NSCÞ]}")
			_T("[^0-9\\.]+?") 
			_T("{[0-9]+}[^0-9]+?{[0-9]+\\.[0-9]+}") _T("[\t ]*") _T("{[EWÂÇ]}")
			_T(""), FALSE);
		static CAtlStaticRegExp<> g_ExpressionD3(_T("^[\t ]*") 
			_T("{[0-9]+}[^0-9]+?{[0-9]+\\.[0-9]+}") _T("[\t ]*") _T("{[EWÂÇ]}")
			_T("[^0-9\\.]+?") 
			_T("{[0-9]+}[^0-9]+?{[0-9]+\\.[0-9]+}") _T("[\t ]*") _T("{[NSCÞ]}")
			_T(""), FALSE);
		INT nLayoutD = -1;
		if(g_ExpressionD0.Match(sText, &MatchContext))
			nLayoutD = 0;
		else if(g_ExpressionD1.Match(sText, &MatchContext))
			nLayoutD = 1;
		else if(g_ExpressionD2.Match(sText, &MatchContext))
			nLayoutD = 2;
		else if(g_ExpressionD3.Match(sText, &MatchContext))
			nLayoutD = 3;
		if(nLayoutD >= 0)
		{
			static const SIZE_T g_pnMap[4][6] = 
			{
				{ 0, 1, 2, 3, 4, 5, },
				{ 3, 4, 5, 0, 1, 2, },
				{ 2, 0, 1, 5, 3, 4, },
				{ 5, 3, 4, 2, 0, 1, },
			};
			const INT nLatitudeSign = (MatchContext.GetMatchString(g_pnMap[nLayoutD][0]).FindOneOf(_T("SsÞþ")) >= 0) ? -1 : 1;
			const INT nLongitudeSign = (MatchContext.GetMatchString(g_pnMap[nLayoutD][3]).FindOneOf(_T("WwÇç")) >= 0) ? -1 : 1;
			INT nLatitudeDegrees, nLongitudeDegrees;
			DOUBLE fLatitudeMinutes, fLongitudeMinutes;
			if(FALSE ||
				!AtlStringToInteger(MatchContext.GetMatchString(g_pnMap[nLayoutD][1]), nLatitudeDegrees) || 
				!AtlStringToDouble(MatchContext.GetMatchString(g_pnMap[nLayoutD][2]), fLatitudeMinutes) || 
				!AtlStringToInteger(MatchContext.GetMatchString(g_pnMap[nLayoutD][4]), nLongitudeDegrees) ||
				!AtlStringToDouble(MatchContext.GetMatchString(g_pnMap[nLayoutD][5]), fLongitudeMinutes) ||
				FALSE)
				return FALSE;
			_A(fLatitudeMinutes >= 0 && fLongitudeMinutes >= 0);
			if(fLatitudeMinutes >= 60.0 || fLongitudeMinutes >= 60.0)
				return FALSE;
			const DOUBLE fLatitude = nLatitudeSign * (nLatitudeDegrees + fLatitudeMinutes / 60.0);
			const DOUBLE fLongitude = nLongitudeSign * (nLongitudeDegrees + fLongitudeMinutes / 60.0);
			SetLocation(fLatitude, fLongitude);
			return TRUE;
		}
		#pragma endregion 
		#pragma region Degrees, Minutes and Seconds
		static CAtlStaticRegExp<> g_ExpressionE0(_T("^[\t ]*") 
			_T("{[NSCÞ]}") _T("[\t ]*") _T("{[0-9]+}[^0-9]+?{[0-9]+}[^0-9\\.]+?{[0-9]+}") 
			_T("[^0-9\\.]+?") 
			_T("{[EWÂÇ]}") _T("[\t ]*") _T("{[0-9]+}[^0-9]+?{[0-9]+}[^0-9\\.]+?{[0-9]+}")
			_T(""), FALSE);
		static CAtlStaticRegExp<> g_ExpressionE1(_T("^[\t ]*") 
			_T("{[EWÂÇ]}") _T("[\t ]*") _T("{[0-9]+}[^0-9]+?{[0-9]+}[^0-9\\.]+?{[0-9]+}")
			_T("[^0-9\\.]+?") 
			_T("{[NSCÞ]}") _T("[\t ]*") _T("{[0-9]+}[^0-9]+?{[0-9]+}[^0-9\\.]+?{[0-9]+}") 
			_T(""), FALSE);
		static CAtlStaticRegExp<> g_ExpressionE2(_T("^[\t ]*") 
			_T("{[0-9]+}[^0-9]+?{[0-9]+}[^0-9\\.]+?{[0-9]+}") _T("[\t ]*") _T("{[NSCÞ]}")
			_T("[^0-9\\.]+?") 
			_T("{[0-9]+}[^0-9]+?{[0-9]+}[^0-9\\.]+?{[0-9]+}") _T("[\t ]*") _T("{[EWÂÇ]}")
			_T(""), FALSE);
		static CAtlStaticRegExp<> g_ExpressionE3(_T("^[\t ]*") 
			_T("{[0-9]+}[^0-9]+?{[0-9]+}[^0-9\\.]+?{[0-9]+}") _T("[\t ]*") _T("{[EWÂÇ]}")
			_T("[^0-9\\.]+?") 
			_T("{[0-9]+}[^0-9]+?{[0-9]+}[^0-9\\.]+?{[0-9]+}") _T("[\t ]*") _T("{[NSCÞ]}")
			_T(""), FALSE);
		INT nLayoutE = -1;
		if(g_ExpressionE0.Match(sText, &MatchContext))
			nLayoutE = 0;
		else if(g_ExpressionE1.Match(sText, &MatchContext))
			nLayoutE = 1;
		else if(g_ExpressionE2.Match(sText, &MatchContext))
			nLayoutE = 2;
		else if(g_ExpressionE3.Match(sText, &MatchContext))
			nLayoutE = 3;
		if(nLayoutE >= 0)
		{
			static const SIZE_T g_pnMap[4][8] = 
			{
				{ 0, 1, 2, 3, 4, 5, 6, 7, },
				{ 4, 5, 6, 7, 0, 1, 2, 3, },
				{ 3, 0, 1, 2, 7, 4, 5, 6, },
				{ 7, 4, 5, 6, 3, 0, 1, 2, },
			};
			const INT nLatitudeSign = (MatchContext.GetMatchString(g_pnMap[nLayoutE][0]).FindOneOf(_T("SsÞþ")) >= 0) ? -1 : 1;
			const INT nLongitudeSign = (MatchContext.GetMatchString(g_pnMap[nLayoutE][4]).FindOneOf(_T("WwÇç")) >= 0) ? -1 : 1;
			INT nLatitudeDegrees, nLongitudeDegrees;
			INT nLatitudeMinutes, nLongitudeMinutes;
			INT nLatitudeSeconds, nLongitudeSeconds;
			if(FALSE ||
				!AtlStringToInteger(MatchContext.GetMatchString(g_pnMap[nLayoutE][1]), nLatitudeDegrees) || 
				!AtlStringToInteger(MatchContext.GetMatchString(g_pnMap[nLayoutE][2]), nLatitudeMinutes) || 
				!AtlStringToInteger(MatchContext.GetMatchString(g_pnMap[nLayoutE][3]), nLatitudeSeconds) || 
				!AtlStringToInteger(MatchContext.GetMatchString(g_pnMap[nLayoutE][5]), nLongitudeDegrees) ||
				!AtlStringToInteger(MatchContext.GetMatchString(g_pnMap[nLayoutE][6]), nLongitudeMinutes) ||
				!AtlStringToInteger(MatchContext.GetMatchString(g_pnMap[nLayoutE][7]), nLongitudeSeconds) ||
				FALSE)
				return FALSE;
			_A(nLatitudeMinutes >= 0 && nLongitudeMinutes >= 0);
			if(nLatitudeMinutes >= 60 || nLongitudeMinutes >= 60)
				return FALSE;
			_A(nLatitudeSeconds >= 0 && nLongitudeSeconds >= 0);
			if(nLatitudeSeconds >= 60 || nLongitudeSeconds >= 60)
				return FALSE;
			const DOUBLE fLatitude = nLatitudeSign * (nLatitudeDegrees + (nLatitudeMinutes + nLatitudeSeconds / 60.0) / 60.0);
			const DOUBLE fLongitude = nLongitudeSign * (nLongitudeDegrees + (nLongitudeMinutes + nLongitudeSeconds / 60.0) / 60.0);
			SetLocation(fLatitude, fLongitude);
			return TRUE;
		}
		#pragma endregion 
		#pragma region Degrees, Latitude and Longitude
		static CAtlStaticRegExp<> g_ExpressionC(_T("^ *") _T("{-?[0-9]+\\.[0-9]+}") _T("[^0-9\\.]+") _T("{-?[0-9]+\\.[0-9]+}"), FALSE);
		if(g_ExpressionC.Match(sText, &MatchContext))
		{
			DOUBLE fLatitude, fLongitude;
			if(!AtlStringToDouble(MatchContext.GetMatchString(0), fLatitude) || !AtlStringToDouble(MatchContext.GetMatchString(1), fLongitude))
				return FALSE;
			SetLocation(fLatitude, fLongitude);
			return TRUE;
		}
		#pragma endregion 
		return FALSE;
	}
	BOOL SetText(LPCTSTR pszText)
	{
		return SetText(CString(pszText));
	}

// Window message handelrs
	LRESULT OnInitDialog(HWND, LPARAM)
	{
		SetIcon(AtlLoadIconImage(IDI_MODULE, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXICON), GetSystemMetrics(SM_CYICON)), TRUE);
		SetIcon(AtlLoadIconImage(IDI_MODULE, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXSMICON), GetSystemMetrics(SM_CYSMICON)), FALSE);
		CMenuHandle Menu = GetSystemMenu(FALSE);
		_W(Menu.AppendMenu(MF_SEPARATOR));
		_W(Menu.AppendMenu(MF_STRING, ID_APP_ABOUT, _T("&About...")));
		_W(m_IntroductionStatic.SubclassWindow(GetDlgItem(IDC_MAIN_INTRODUCTION)));
		for(SIZE_T nIndex = 0; nIndex < 12; nIndex++)
			_W(m_pStatics[nIndex].SubclassWindow(GetDlgItem(IDC_MAIN_DEGREES_LATITUDE + nIndex)));
		_W(m_GoogleMapsStatic.SubclassWindow(GetDlgItem(IDC_MAIN_GOOGLEMAPS)));
		_W(m_YandexMapsStatic.SubclassWindow(GetDlgItem(IDC_MAIN_YANDEXMAPS)));
		_W(CenterWindow());
		m_bSetClipboardTextActive = FALSE;
		m_NextClipboardViewerWindow = SetClipboardViewer();
		for(SIZE_T nIndex = 0; nIndex < 12; nIndex++)
			_W(RegisterHotKey(m_hWnd, (INT) nIndex, MOD_CONTROL | MOD_SHIFT, VK_F1 + nIndex));
#if _DEVELOPMENT
		//SetText(_T("http://maps.google.com.ua/maps/ms?msid=206853065838475655514.0004af0a0899ed541f5f2&msa=0&ll=45.296505,35.771999&spn=0.039547,0.095272"));
		//SetText(_T("http://maps.yandex.ru/?ll=13.376147%2C45.797846&spn=2.820740%2C1.127727&z=9&l=map"));
#endif // _DEVELOPMENT
		return TRUE;
	}
	LRESULT OnDestroy() throw()
	{
		for(SIZE_T nIndex = 0; nIndex < 12; nIndex++)
			_W(UnregisterHotKey(m_hWnd, (INT) nIndex));
		_W(ChangeClipboardChain(m_NextClipboardViewerWindow));
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
		if(m_bSetClipboardTextActive)
			return 0;
		if(OpenClipboard()) 
		{
			_ATLTRY
			{
				if(IsClipboardFormatAvailable(CF_UNICODETEXT))
				{
					CGlobalMemoryWeakHandle DataHandle = (HGLOBAL) GetClipboardData(CF_UNICODETEXT);
					__E(DataHandle);
					CGlobalMemoryHandle::CLockT<WCHAR> pszData(DataHandle);
					if(SetText(CW2CT(pszData)))
					{
						FLASHWINFO FlashWindowInformation = { sizeof FlashWindowInformation, m_hWnd, FLASHW_CAPTION, 5 };
						_W(FlashWindowEx(&FlashWindowInformation));
						//MessageBeep(MB_OK);
					}
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
	LRESULT OnStaticAnchorClicked(NMHDR* pHeader)
	{
		CRoHyperStatic::NMANCHORCLICKED* pHeaderEx = (CRoHyperStatic::NMANCHORCLICKED*) pHeader;
		m_bSetClipboardTextActive = TRUE;
		SetClipboardText(m_hWnd, pHeaderEx->pszLocation);
		m_bSetClipboardTextActive = FALSE;
		pHeaderEx->bShellExecuteLocation = FALSE;
		MessageBeep(MB_OK);
		return 0;
	}
	LRESULT OnHotKey(INT nIdentifier, UINT nModifierFlags, UINT nVirtualKey)
	{
		nModifierFlags; nVirtualKey;
		if(nIdentifier < 12)
		{
			CString sText;
			m_pStatics[nIdentifier].GetWindowText(sText);
			CRoReMatchContext MatchContext;
			static CAtlStaticRegExp<> g_Expression(_T("HREF=\"{.+?}\""), FALSE);
			if(g_Expression.Match(sText, &MatchContext))
			{
				m_bSetClipboardTextActive = TRUE;
				SetClipboardText(m_hWnd, MatchContext.GetMatchString(0));
				m_bSetClipboardTextActive = FALSE;
				MessageBeep(MB_OK);
			}
		}
		return 0;
	}
};
