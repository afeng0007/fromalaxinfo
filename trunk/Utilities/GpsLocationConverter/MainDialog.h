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

public:

	////////////////////////////////////////////////////////
	// CLocation

	class CLocation
	{
	public:

		////////////////////////////////////////////////////
		// CStrings

		class CStrings
		{
		public:
			CString m_psTexts[12];
			CString m_sGoogleMapsLocation;
			CString m_sYandexMapsLocation;
			CString m_sBingMapsLocation;
			CString m_sYahooMapsLocation;
			CString m_sOpenStreetMapLocation;
			CString m_sWikiMapiaLocation;

		public:
		// CStrings
			CStrings() throw()
			{
			}
			CStrings(const CLocation& Location)
			{
				if(!Location.IsValid())
					return;
				#pragma region Degrees
				{
					const CString sLatitude = _StringHelper::FormatNumber(Location.m_fLatitude, 6, FALSE);
					const CString sLongitude = _StringHelper::FormatNumber(Location.m_fLongitude, 6, FALSE);
					m_psTexts[0] = sLatitude;
					m_psTexts[1] = sLongitude;
					m_psTexts[2] = AtlFormatString(_T("%s, %s"), sLatitude, sLongitude);
					m_psTexts[3] = AtlFormatString(_T("%s, %s"), sLongitude, sLatitude);
					m_sGoogleMapsLocation = AtlFormatString(_T("http://maps.google.com/maps/?ll=%s,%s"), sLatitude, sLongitude);
					m_sYandexMapsLocation = AtlFormatString(_T("http://maps.yandex.ru/?ll=%s,%s&z=%d"), sLongitude, sLatitude, 19);
					m_sBingMapsLocation = AtlFormatString(_T("http://www.bing.com/maps/?v=2&cp=%s~%s&lvl=%d"), sLatitude, sLongitude, 17);
					m_sYahooMapsLocation = AtlFormatString(_T("http://maps.yahoo.com/#lat=%s&lon=%s&zoom=%d"), sLatitude, sLongitude, 17);
					m_sOpenStreetMapLocation = AtlFormatString(_T("http://www.openstreetmap.org/?lat=%s&lon=%s&zoom=%d"), sLatitude, sLongitude, 17);
					m_sWikiMapiaLocation = AtlFormatString(_T("http://wikimapia.org/#lat=%s&lon=%s&z=%d"), sLatitude, sLongitude, 17);
				}
				#pragma endregion 
				#pragma region Degrees, Minutes
				{
					CString sLatitude, sLongitude;
					#pragma region Latitude
					sLatitude.Append((Location.m_fLatitude >= 0) ? _T("N ") : _T("S "));
					DOUBLE fPartialLatitude = abs(Location.m_fLatitude);
					const INT nPartialLatitude = (INT) fPartialLatitude;
					sLatitude.AppendFormat(_T("%02d "), nPartialLatitude);
					const DOUBLE fPartialLatitudeMinute = (fPartialLatitude - nPartialLatitude) * 60;
					const INT nPartialLatitudeMinute = (INT) fPartialLatitudeMinute;
					sLatitude.AppendFormat(_T("%02d"), nPartialLatitudeMinute);
					sLatitude.AppendFormat(_T(".%03d"), (INT) ((fPartialLatitudeMinute - nPartialLatitudeMinute) * 1000 + 0.5 - 1E-6));
					#pragma endregion 
					#pragma region Latitude
					sLongitude.Append((Location.m_fLongitude >= 0) ? _T("E ") : _T("W "));
					DOUBLE fPartialLongitude = abs(Location.m_fLongitude);
					const INT nPartialLongitude = (INT) fPartialLongitude;
					sLongitude.AppendFormat(_T("%03d "), nPartialLongitude);
					const DOUBLE fPartialLongitudeMinute = (fPartialLongitude - nPartialLongitude) * 60;
					const INT nPartialLongitudeMinute = (INT) fPartialLongitudeMinute;
					sLongitude.AppendFormat(_T("%02d"), nPartialLongitudeMinute);
					sLongitude.AppendFormat(_T(".%03d"), (INT) ((fPartialLongitudeMinute - nPartialLongitudeMinute) * 1000 + 0.5 - 1E-6));
					#pragma endregion 
					m_psTexts[4] = sLatitude;
					m_psTexts[5] = sLongitude;
					m_psTexts[6] = AtlFormatString(_T("%s, %s"), sLatitude, sLongitude);
					m_psTexts[7] = AtlFormatString(_T("%s, %s"), sLongitude, sLatitude);
				}
				#pragma endregion 
				#pragma region Degrees, Minutes, Seconds
				{
					CString sLatitude, sLongitude;
					#pragma region Latitude
					sLatitude.Append((Location.m_fLatitude >= 0) ? _T("N ") : _T("S "));
					DOUBLE fPartialLatitude = abs(Location.m_fLatitude);
					const INT nPartialLatitude = (INT) fPartialLatitude;
					sLatitude.AppendFormat(_T("%02d "), nPartialLatitude);
					const DOUBLE fPartialLatitudeMinute = (fPartialLatitude - nPartialLatitude) * 60;
					const INT nPartialLatitudeMinute = (INT) fPartialLatitudeMinute;
					sLatitude.AppendFormat(_T("%02d "), nPartialLatitudeMinute);
					const DOUBLE fPartialLatitudeSecond = (fPartialLatitudeMinute - nPartialLatitudeMinute) * 60;
					const INT nPartialLatitudeSecond = (INT) fPartialLatitudeSecond;
					sLatitude.AppendFormat(_T("%02d"), nPartialLatitudeSecond);
					sLatitude.AppendFormat(_T(".%02d"), (INT) ((fPartialLatitudeSecond - nPartialLatitudeSecond) * 100 + 0.5 - 1E-6));
					#pragma endregion 
					#pragma region Latitude
					sLongitude.Append((Location.m_fLongitude >= 0) ? _T("E ") : _T("W "));
					DOUBLE fPartialLongitude = abs(Location.m_fLongitude);
					INT nPartialLongitude = (INT) fPartialLongitude;
					sLongitude.AppendFormat(_T("%03d "), nPartialLongitude);
					DOUBLE fPartialLongitudeMinute = (fPartialLongitude - nPartialLongitude) * 60;
					INT nPartialLongitudeMinute = (INT) fPartialLongitudeMinute;
					sLongitude.AppendFormat(_T("%02d "), nPartialLongitudeMinute);
					const DOUBLE fPartialLongitudeSecond = (fPartialLongitudeMinute - nPartialLongitudeMinute) * 60;
					const INT nPartialLongitudeSecond = (INT) fPartialLongitudeSecond;
					sLongitude.AppendFormat(_T("%02d"), nPartialLongitudeSecond);
					sLongitude.AppendFormat(_T(".%02d"), (INT) ((fPartialLongitudeSecond - nPartialLongitudeSecond) * 100 + 0.5 - 1E-6));
					#pragma endregion 
					m_psTexts[ 8] = sLatitude;
					m_psTexts[ 9] = sLongitude;
					m_psTexts[10] = AtlFormatString(_T("%s, %s"), sLatitude, sLongitude);
					m_psTexts[11] = AtlFormatString(_T("%s, %s"), sLongitude, sLatitude);
				}
				#pragma endregion 
			}
		};

	public:
		BOOL m_bValid;
		DOUBLE m_fLatitude;
		DOUBLE m_fLongitude;

	public:
	// CLocation
		CLocation() throw() :
			m_bValid(FALSE)
		{
		}
		CLocation(DOUBLE fLatitude, DOUBLE fLongitude) throw() :
			m_fLatitude(fLatitude),
			m_fLongitude(fLongitude),
			m_bValid(TRUE)
		{
		}
		BOOL IsValid() const throw()
		{
			return m_bValid;
		}
		VOID SetLocation(DOUBLE fLatitude, DOUBLE fLongitude) throw()
		{
			m_fLatitude = fLatitude;
			m_fLongitude = fLongitude;
			m_bValid = TRUE;
		}
		BOOL Parse(const CString& sText)
		{
			m_bValid = FALSE;
			if(sText.GetLength() >= (4 << 10)) // 4K
				return FALSE;
			CRoReMatchContext MatchContext;
			#pragma region Google Maps
			#define OPTIONAL_PROTOCOL	_T("(https?://)?[^/]*") 
			#define VALUE				_T("{\\-?[\\.0-9]+}") 
				static CAtlStaticRegExp<> g_ExpressionA(_T("^ *") OPTIONAL_PROTOCOL _T("maps.google[^/]*/.+?") _T("ll=") VALUE _T(",") VALUE, FALSE);
			#undef OPTIONAL_PROTOCOL
			#undef VALUE
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
			#define OPTIONAL_PROTOCOL	_T("(https?://)?[^/]*") 
			#define VALUE				_T("{\\-?[\\.0-9]+}") 
				static CAtlStaticRegExp<> g_ExpressionB(_T("^ *") OPTIONAL_PROTOCOL _T("maps.yandex[^/]*/.+?") _T("ll=") VALUE _T("(,|(\\%2C))") VALUE, FALSE);
			#undef OPTIONAL_PROTOCOL
			#undef VALUE
			if(g_ExpressionB.Match(sText, &MatchContext))
			{
				DOUBLE fLatitude, fLongitude;
				if(!AtlStringToDouble(MatchContext.GetMatchString(0), fLongitude) || !AtlStringToDouble(MatchContext.GetMatchString(1), fLatitude))
					return FALSE;
				SetLocation(fLatitude, fLongitude);
				return TRUE;
			}
			#pragma endregion 
			// TODO: Recognize Bing, Yahoo, OpenStreetMap and WikiMapia URLs
			// NOTE: Russian Å is often confused with English E, so we take both
			#pragma region Degrees and Minutes
#define LATITUDE_SYMBOL		_T("{[NSCÞ]}")
#define LONGITUDE_SYMBOL	_T("{[EWÂÇÅ]}")
#define VALUE				_T("{[0-9]+}[^0-9]+?{[0-9]+\\.[0-9]+}") 
#define OPTIONAL_WHITESPACE	_T("[\t ]*")
#define SEPARATOR			_T("[^0-9\\.]+?")
			static CAtlStaticRegExp<> g_ExpressionD0(_T("^") OPTIONAL_WHITESPACE LATITUDE_SYMBOL OPTIONAL_WHITESPACE VALUE SEPARATOR LONGITUDE_SYMBOL OPTIONAL_WHITESPACE VALUE _T(""), FALSE);
			static CAtlStaticRegExp<> g_ExpressionD1(_T("^") OPTIONAL_WHITESPACE LONGITUDE_SYMBOL OPTIONAL_WHITESPACE VALUE SEPARATOR LATITUDE_SYMBOL OPTIONAL_WHITESPACE VALUE _T(""), FALSE);
			static CAtlStaticRegExp<> g_ExpressionD2(_T("^") OPTIONAL_WHITESPACE VALUE OPTIONAL_WHITESPACE LATITUDE_SYMBOL SEPARATOR VALUE OPTIONAL_WHITESPACE LONGITUDE_SYMBOL _T(""), FALSE);
			static CAtlStaticRegExp<> g_ExpressionD3(_T("^") OPTIONAL_WHITESPACE VALUE OPTIONAL_WHITESPACE LATITUDE_SYMBOL SEPARATOR VALUE OPTIONAL_WHITESPACE LONGITUDE_SYMBOL _T(""), FALSE);
#undef LATITUDE_SYMBOL
#undef LONGITUDE_SYMBOL
#undef VALUE
#undef OPTIONAL_WHITESPACE
#undef SEPARATOR
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
#define LATITUDE_SYMBOL		_T("{[NSCÞ]}")
#define LONGITUDE_SYMBOL	_T("{[EWÂÇÅ]}")
#define VALUE				_T("{[0-9]+}[^0-9]+?{[0-9]+}[^0-9\\.]+?{[0-9]+(\\.([0-9]+)?)?}")
#define OPTIONAL_WHITESPACE	_T("[\t ]*")
#define SEPARATOR			_T("[^0-9\\.]+?")
			static CAtlStaticRegExp<> g_ExpressionE0(_T("^") OPTIONAL_WHITESPACE LATITUDE_SYMBOL OPTIONAL_WHITESPACE VALUE SEPARATOR LONGITUDE_SYMBOL OPTIONAL_WHITESPACE VALUE _T(""), FALSE);
			static CAtlStaticRegExp<> g_ExpressionE1(_T("^") OPTIONAL_WHITESPACE LONGITUDE_SYMBOL OPTIONAL_WHITESPACE VALUE SEPARATOR LATITUDE_SYMBOL OPTIONAL_WHITESPACE VALUE  _T(""), FALSE);
			static CAtlStaticRegExp<> g_ExpressionE2(_T("^") OPTIONAL_WHITESPACE VALUE OPTIONAL_WHITESPACE LATITUDE_SYMBOL SEPARATOR VALUE OPTIONAL_WHITESPACE LONGITUDE_SYMBOL _T(""), FALSE);
			static CAtlStaticRegExp<> g_ExpressionE3(_T("^") OPTIONAL_WHITESPACE VALUE OPTIONAL_WHITESPACE LONGITUDE_SYMBOL SEPARATOR VALUE OPTIONAL_WHITESPACE LATITUDE_SYMBOL _T(""), FALSE);
#undef LATITUDE_SYMBOL
#undef LONGITUDE_SYMBOL
#undef VALUE
#undef OPTIONAL_WHITESPACE
#undef SEPARATOR
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
				DOUBLE fLatitudeSeconds, fLongitudeSeconds;
				if(FALSE ||
					!AtlStringToInteger(MatchContext.GetMatchString(g_pnMap[nLayoutE][1]), nLatitudeDegrees) || 
					!AtlStringToInteger(MatchContext.GetMatchString(g_pnMap[nLayoutE][2]), nLatitudeMinutes) || 
					!AtlStringToDouble(MatchContext.GetMatchString(g_pnMap[nLayoutE][3]), fLatitudeSeconds) || 
					!AtlStringToInteger(MatchContext.GetMatchString(g_pnMap[nLayoutE][5]), nLongitudeDegrees) ||
					!AtlStringToInteger(MatchContext.GetMatchString(g_pnMap[nLayoutE][6]), nLongitudeMinutes) ||
					!AtlStringToDouble(MatchContext.GetMatchString(g_pnMap[nLayoutE][7]), fLongitudeSeconds) ||
					FALSE)
					return FALSE;
				_A(nLatitudeMinutes >= 0 && nLongitudeMinutes >= 0);
				if(nLatitudeMinutes >= 60 || nLongitudeMinutes >= 60)
					return FALSE;
				_A(fLatitudeSeconds >= 0 && fLongitudeSeconds >= 0);
				if(fLatitudeSeconds >= 60 || fLongitudeSeconds >= 60)
					return FALSE;
				const DOUBLE fLatitude = nLatitudeSign * (nLatitudeDegrees + (nLatitudeMinutes + fLatitudeSeconds / 60.0) / 60.0);
				const DOUBLE fLongitude = nLongitudeSign * (nLongitudeDegrees + (nLongitudeMinutes + fLongitudeSeconds / 60.0) / 60.0);
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
	};

	////////////////////////////////////////////////////////
	// CLocationArray

	class CLocationArray : 
		public CRoArrayT<CLocation>
	{
	public:
	// CLocationArray
		SIZE_T GetValidCount() const throw()
		{
			SIZE_T nCount = 0;
			for(SIZE_T nIndex = 0; nIndex < GetCount(); nIndex++)
				if(GetAt(nIndex).IsValid())
					nCount++;
			return nCount;
		}
		BOOL FindFirstValidIndex(SIZE_T* pnIndex = NULL) const throw()
		{
			for(SIZE_T nIndex = 0; nIndex < GetCount(); nIndex++)
				if(GetAt(nIndex).IsValid())
				{
					if(pnIndex)
						*pnIndex = nIndex;
					return TRUE;
				}
			return FALSE;
		}
		CString GetText(SIZE_T nTextIndex) const
		{
			//_A(nTextIndex < DIM(CLocation::CStrings::m_psTexts));
			CRoArrayT<CString> Array;
			for(SIZE_T nIndex = 0; nIndex < GetCount(); nIndex++)
			{
				const CLocation& Location = GetAt(nIndex);
				CString sText;
				if(Location.IsValid())
					sText = CLocation::CStrings(Location).m_psTexts[nTextIndex];
				_W(Array.Add(sText) >= 0);
			}
			return _StringHelper::Join(Array, _T("\r\n"));
		}
	};

private:
	CRoIconStatic m_IntroductionStatic;
	CRoHyperStatic m_pStatics[12];
	CRoHyperStatic m_GoogleMapsStatic;
	CRoHyperStatic m_YandexMapsStatic;
	CRoHyperStatic m_BingMapsStatic;
	CRoHyperStatic m_YahooMapsStatic;
	CRoHyperStatic m_OpenStreetMapStatic;
	CRoHyperStatic m_WikiMapiaStatic;
	BOOL m_bSetClipboardTextActive;
	CWindow m_NextClipboardViewerWindow;
	CLocationArray m_LocationArray;

public:
// CMainDialog
	CMainDialog()
	{
	}
	VOID SetLocation(const CLocation& Location)
	{
		CLocation::CStrings Strings(Location);
		for(SIZE_T nIndex = 0; nIndex < 12; nIndex++)
			m_pStatics[nIndex].SetWindowText(AtlFormatString(_T("<A HREF=\"%s\">%s</A> (F%d)"), Strings.m_psTexts[nIndex], Strings.m_psTexts[nIndex], nIndex + 1));
		m_GoogleMapsStatic.SetWindowText(AtlFormatString(_T("<A TITLE=\"Open in Google Maps\" HREF=\"%s\">%s</A>"), Strings.m_sGoogleMapsLocation, Strings.m_sGoogleMapsLocation));
		m_YandexMapsStatic.SetWindowText(AtlFormatString(_T("<A TITLE=\"Open in Yandex Maps\" HREF=\"%s\">%s</A>"), Strings.m_sYandexMapsLocation, Strings.m_sYandexMapsLocation));
		m_BingMapsStatic.SetWindowText(AtlFormatString(_T("<A TITLE=\"Open in Bing Maps\" HREF=\"%s\">%s</A>"), Strings.m_sBingMapsLocation, Strings.m_sBingMapsLocation));
		m_YahooMapsStatic.SetWindowText(AtlFormatString(_T("<A TITLE=\"Open in Yahoo Maps\" HREF=\"%s\">%s</A>"), Strings.m_sYahooMapsLocation, Strings.m_sYahooMapsLocation));
		m_OpenStreetMapStatic.SetWindowText(AtlFormatString(_T("<A TITLE=\"Open in Open Street Map\" HREF=\"%s\">%s</A>"), Strings.m_sOpenStreetMapLocation, Strings.m_sOpenStreetMapLocation));
		m_WikiMapiaStatic.SetWindowText(AtlFormatString(_T("<A TITLE=\"Open in WikiMapia\" HREF=\"%s\">%s</A>"), Strings.m_sWikiMapiaLocation, Strings.m_sWikiMapiaLocation));
	}
	BOOL Parse(CString sText)
	{
		CLocationArray LocationArray;
		if(sText.GetLength() < 32 << 10) // 32 KB
		{
			if(sText.Find(_T('\n')) >= 0)
			{
				sText.Replace(_T("\r\n"), _T("\n"));
				CRoArrayT<CString> Array;
				if(_StringHelper::Split(sText, _T('\n'), Array))
					for(SIZE_T nIndex = 0; nIndex < Array.GetCount(); nIndex++)
					{
						CLocation Location;
						Location.Parse(Array[nIndex]);
						_W(LocationArray.Add(Location) >= 0);
					}
				if(!LocationArray.GetValidCount())
					LocationArray.RemoveAll();
			} else
			{
				CLocation Location;
				if(Location.Parse(sText))
					_W(LocationArray.Add(Location) >= 0);
			}
		}
		SIZE_T nFirstValidIndex;
		if(!LocationArray.FindFirstValidIndex(&nFirstValidIndex))
			return FALSE;
		const CLocation& Location = LocationArray[nFirstValidIndex];
		SetLocation(Location);
		SwapMemory(&m_LocationArray, &LocationArray);
		return TRUE;
	}
	BOOL Parse(LPCTSTR pszText)
	{
		return Parse(CString(pszText));
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
		_W(m_BingMapsStatic.SubclassWindow(GetDlgItem(IDC_MAIN_BINGMAPS)));
		_W(m_YahooMapsStatic.SubclassWindow(GetDlgItem(IDC_MAIN_YAHOOMAPS)));
		_W(m_OpenStreetMapStatic.SubclassWindow(GetDlgItem(IDC_MAIN_OPENSTREETMAP)));
		_W(m_WikiMapiaStatic.SubclassWindow(GetDlgItem(IDC_MAIN_WIKIMAPIA)));
		_W(CenterWindow());
		m_bSetClipboardTextActive = FALSE;
		m_NextClipboardViewerWindow = SetClipboardViewer();
		#if !defined(_DEBUG)
		for(SIZE_T nIndex = 0; nIndex < 12; nIndex++)
			_W(RegisterHotKey(m_hWnd, (INT) nIndex, MOD_CONTROL | MOD_SHIFT, VK_F1 + nIndex));
		#endif // !defined(_DEBUG)
		#if _DEVELOPMENT
		//Parse(_T("http://maps.google.com.ua/maps/ms?msid=206853065838475655514.0004af0a0899ed541f5f2&msa=0&ll=45.296505,35.771999&spn=0.039547,0.095272"));
		//Parse(_T("http://maps.yandex.ru/?ll=13.376147%2C45.797846&spn=2.820740%2C1.127727&z=9&l=map"));
		//Parse(_T("https://maps.google.com/maps?q=ll=36.257978,-115.236111&spn=0.094126,0.157585&sll=33.809282,-117.915442&sspn=0.09699,0.157585&oq=las+vegax&t=h&hnear=Las+Vegas,+Clark,+Nevada&z=13"));
		#endif // _DEVELOPMENT
		return TRUE;
	}
	LRESULT OnDestroy() throw()
	{
		#if !defined(_DEBUG)
		for(SIZE_T nIndex = 0; nIndex < 12; nIndex++)
			_W(UnregisterHotKey(m_hWnd, (INT) nIndex));
		#endif // !defined(_DEBUG)
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
					if(Parse(CW2CT(pszData)))
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
		if(m_NextClipboardViewerWindow)
			m_NextClipboardViewerWindow.SendMessage(WM_DRAWCLIPBOARD, m_pCurrentMsg->wParam, m_pCurrentMsg->lParam);
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
		CString sLocation = pHeaderEx->pszLocation;
		#pragma region Update with Multiple Value Text
		if(pHeaderEx->Header.idFrom >= IDC_MAIN_DEGREES_LATITUDE && pHeaderEx->Header.idFrom <= IDC_MAIN_DEGREESMINUTESSECONDS_LONGITUDELATITUDE)
			if(m_LocationArray.GetValidCount() > 0)
				sLocation = m_LocationArray.GetText(pHeaderEx->Header.idFrom - IDC_MAIN_DEGREES_LATITUDE);
		#pragma endregion 
		m_bSetClipboardTextActive = TRUE;
		SetClipboardText(m_hWnd, sLocation);
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
#if TRUE
			if(m_LocationArray.GetValidCount() > 0)
			{
				CRoArrayT<CString> Array;
				for(SIZE_T nIndex = 0; nIndex < m_LocationArray.GetCount(); nIndex++)
				{
					const CLocation& Location = m_LocationArray[nIndex];
					CString sText;
					if(Location.IsValid())
						sText = CLocation::CStrings(Location).m_psTexts[nIdentifier];
					_W(Array.Add(sText) >= 0);
				}
				m_bSetClipboardTextActive = TRUE;
				SetClipboardText(m_hWnd, _StringHelper::Join(Array, _T("\r\n")));
				m_bSetClipboardTextActive = FALSE;
				MessageBeep(MB_OK);
			}
#else
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
#endif
		}
		return 0;
	}
};
