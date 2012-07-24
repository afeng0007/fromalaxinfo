////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2006-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$
//
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#pragma once

#include <atltypes.h>
#include <atlcrack.h>
#include "rores.h"
#include "roatlcollections.h"

////////////////////////////////////////////////////////////
// CGdiSelector

class CGdiSelector
{
public:
	CDCHandle m_Dc;
	HGDIOBJ m_hObject;

public:
// CGdiSelector
	CGdiSelector(HDC hDc, HGDIOBJ hObject) throw()
	{
		m_Dc = hDc;
		m_hObject = SelectObject(m_Dc, hObject);
	}
	~CGdiSelector() throw()
	{
		SelectObject(m_Dc, m_hObject);
	}
	operator HDC () const throw()
	{
		return m_Dc;
	}
};

////////////////////////////////////////////////////////////
// _GdiHelper

class _GdiHelper
{
public:
// _GdiHelper
	static SIZE_T GetDibSection(HBITMAP hBitmap, DIBSECTION& DibSection) throw()
	{
		_A(hBitmap);
		ZeroMemory(&DibSection, sizeof DibSection);
		return GetObject(hBitmap, sizeof DibSection, &DibSection);
	}
	static DIBSECTION GetDibSection(HBITMAP hBitmap)
	{
		DIBSECTION DibSection;
		const SIZE_T nDibSectionSize = GetDibSection(hBitmap, DibSection);
		__E(nDibSectionSize == sizeof DibSection || nDibSectionSize == sizeof (BITMAP));
		return DibSection;
	}
	static ICONINFO GetIconInformation(HICON hIcon)
	{
		_A(hIcon);
		ICONINFO IconInformation;
		__E(CIconHandle(hIcon).GetIconInfo(&IconInformation));
		return IconInformation;
	}
	static CIconHandle InternalOverlayIcon(CIconHandle BaseIcon, CIconHandle OverlayIcon, CDCHandle SampleDc, const ICONINFO& BaseIconInformation, CDCHandle Dc, CDCHandle SourceDc)
	{
		const ICONINFO OverlayIconInformation = GetIconInformation(OverlayIcon);
		_A(BaseIconInformation.fIcon && OverlayIconInformation.fIcon);
		const DIBSECTION BaseMaskDibSection = GetDibSection(BaseIconInformation.hbmMask);
		const DIBSECTION BaseColorDibSection = GetDibSection(BaseIconInformation.hbmColor);
#if defined(_DEBUG)
		const DIBSECTION OverlayMaskDibSection = GetDibSection(OverlayIconInformation.hbmMask);
		const DIBSECTION OverlayColorDibSection = GetDibSection(OverlayIconInformation.hbmColor);
		CWindowDC DesktopDc(GetDesktopWindow());
#endif // defined(_DEBUG)
		const CSize Size(BaseColorDibSection.dsBm.bmWidth, BaseColorDibSection.dsBm.bmHeight);
		_A(BaseMaskDibSection.dsBm.bmHeight == Size.cy); // Not a colorless icon
		CBitmap MaskBitmap;
		__E(MaskBitmap.CreateBitmap(Size.cx, Size.cy, 1, 1, NULL));
		{
			CGdiSelector BitmapSelector(Dc, MaskBitmap);
			{
				CGdiSelector BitmapSelector(SourceDc, BaseIconInformation.hbmMask);
				__E(Dc.BitBlt(0, 0, Size.cx, Size.cy, SourceDc, 0, 0, SRCCOPY));
			}
			{
				CGdiSelector BitmapSelector(SourceDc, OverlayIconInformation.hbmMask);
				__E(Dc.BitBlt(0, 0, Size.cx, Size.cy, SourceDc, 0, 0, SRCAND));
			}
		}
#if defined(_DEBUG) && FALSE
		_W(DesktopDc.StretchBlt(0, 0 * Size.cy, Size.cx * 4, Size.cy * 4, CGdiSelector(Dc, BaseIconInformation.hbmMask), 0, 0, Size.cx, Size.cy, SRCCOPY));
		_W(DesktopDc.StretchBlt(5 * Size.cx, 0 * Size.cy, Size.cx * 4, Size.cy * 4, CGdiSelector(Dc, OverlayIconInformation.hbmMask), 0, 0, Size.cx, Size.cy, SRCCOPY));
		_W(DesktopDc.StretchBlt(10 * Size.cx, 0 * Size.cy, Size.cx * 4, Size.cy * 4, CGdiSelector(Dc, MaskBitmap), 0, 0, Size.cx, Size.cy, SRCCOPY));
#endif // defined(_DEBUG)
		CBitmap ColorBitmap;
#if TRUE
		BITMAPINFOHEADER ColorBitmapInfoHeader;
		ZeroMemory(&ColorBitmapInfoHeader, sizeof ColorBitmapInfoHeader);
		ColorBitmapInfoHeader.biSize = sizeof ColorBitmapInfoHeader;
		ColorBitmapInfoHeader.biWidth = Size.cx;
		ColorBitmapInfoHeader.biHeight = Size.cy;
		ColorBitmapInfoHeader.biPlanes = 1;
		ColorBitmapInfoHeader.biBitCount = 32;
		ColorBitmapInfoHeader.biCompression = BI_RGB;
		VOID* pvColorBits = NULL;
		ColorBitmap = CreateDIBSection(SampleDc, (const BITMAPINFO*) &ColorBitmapInfoHeader, DIB_RGB_COLORS, &pvColorBits, NULL, 0);
		__E(ColorBitmap);
#else
		__E(ColorBitmap.CreateBitmap(Size.cx, Size.cy, 1, 32, NULL)); //__E(ColorBitmap.CreateCompatibleBitmap(SampleDc, Size.cx, Size.cy));
#endif
		{
			CGdiSelector BitmapSelector(Dc, ColorBitmap);
			{
				CGdiSelector BitmapSelector(SourceDc, BaseIconInformation.hbmColor);
				__E(Dc.BitBlt(0, 0, Size.cx, Size.cy, SourceDc, 0, 0, SRCCOPY));
			}
#if defined(_DEBUG) && FALSE
			_W(DesktopDc.StretchBlt(0, 5 * Size.cy, Size.cx * 4, Size.cy * 4, CGdiSelector(Dc, BaseIconInformation.hbmColor), 0, 0, Size.cx, Size.cy, SRCCOPY));
			_W(DesktopDc.StretchBlt(5 * Size.cx, 5 * Size.cy, Size.cx * 4, Size.cy * 4, BitmapSelector, 0, 0, Size.cx, Size.cy, SRCCOPY));
#endif // defined(_DEBUG)
#if (WINVER >= 0x0400)
			// NOTE: Windows XP's DrawIconEx destroys Dc's alpha channel
			BOOL bHandled = FALSE;
			if(BaseColorDibSection.dsBm.bmBitsPixel >= 32)
			{
				// HOTFIX: Icons load from paletted formats (?) may have broken alpha channel
				if(BaseColorDibSection.dsBm.bmBitsPixel == 32)
				{
					_A(pvColorBits);
					BOOL bPositiveAlphaValueFound = FALSE;
					for(SIZE_T nIndex = Size.cy * Size.cx; nIndex > 0; nIndex--)
						if(((const RGBQUAD*) pvColorBits)[nIndex - 1].rgbReserved)
						{
							bPositiveAlphaValueFound = TRUE;
							break;
						}
					if(!bPositiveAlphaValueFound)
					{
						_Z4(atlTraceWindowing, 4, _T("bPositiveAlphaValueFound %d\n"), bPositiveAlphaValueFound);
						// WARN: GetPixel is slow
						CGdiSelector BitmapSelector(SourceDc, BaseIconInformation.hbmMask);
						RGBQUAD* pnPointer = (RGBQUAD*) pvColorBits;
						for(LONG nY = Size.cy - 1; nY >= 0; nY--)
							for(LONG nX = 0; nX < Size.cx; nX++, pnPointer++)
								if(Dc.GetPixel(nX, nY))
									pnPointer->rgbReserved = 0xFF;
					}
				}
				CGdiSelector BitmapSelector(SourceDc, OverlayIconInformation.hbmColor);
				BLENDFUNCTION BlendFunction = { AC_SRC_OVER, 0, 255, AC_SRC_ALPHA };
				bHandled = AlphaBlend(Dc, 0, 0, Size.cx, Size.cy, SourceDc, 0, 0, Size.cx, Size.cy, BlendFunction);
				_A(bHandled);
			}
			if(!bHandled)
#endif // (WINVER >= 0x0400)
				__E(OverlayIcon.DrawIconEx(Dc, CPoint(0, 0), Size));
#if defined(_DEBUG) && FALSE
			_W(DesktopDc.StretchBlt(10 * Size.cx, 5 * Size.cy, Size.cx * 4, Size.cy * 4, CGdiSelector(Dc, OverlayIconInformation.hbmColor), 0, 0, Size.cx, Size.cy, SRCCOPY));
			_W(DesktopDc.StretchBlt(15 * Size.cx, 5 * Size.cy, Size.cx * 4, Size.cy * 4, BitmapSelector, 0, 0, Size.cx, Size.cy, SRCCOPY));
#endif // defined(_DEBUG)
		}
		ICONINFO IconInformation;
		IconInformation = BaseIconInformation;
		IconInformation.hbmMask = MaskBitmap;
		IconInformation.hbmColor = ColorBitmap;
		CIcon Icon;
		__E(Icon.CreateIconIndirect(&IconInformation));
#if defined(_DEBUG) && FALSE
		_W(DesktopDc.StretchBlt(0, 10 * Size.cy, Size.cx * 4, Size.cy * 4, CGdiSelector(Dc, MaskBitmap), 0, 0, Size.cx, Size.cy, SRCCOPY));
		_W(DesktopDc.StretchBlt(5 * Size.cx, 10 * Size.cy, Size.cx * 4, Size.cy * 4, CGdiSelector(Dc, ColorBitmap), 0, 0, Size.cx, Size.cy, SRCCOPY));
		IconInformation = GetIconInformation(Icon);
		_W(DesktopDc.StretchBlt(0, 15 * Size.cy, Size.cx * 4, Size.cy * 4, CGdiSelector(Dc, IconInformation.hbmMask), 0, 0, Size.cx, Size.cy, SRCCOPY));
		_W(DesktopDc.StretchBlt(5 * Size.cx, 15 * Size.cy, Size.cx * 4, Size.cy * 4, CGdiSelector(Dc, IconInformation.hbmColor), 0, 0, Size.cx, Size.cy, SRCCOPY));
		_W(DesktopDc.DrawIcon(0, 20 * Size.cy, Icon));
#endif // defined(_DEBUG)
		return Icon.Detach();
	}
	static CIconHandle OverlayIcon(CIconHandle BaseIcon, CIconHandle OverlayIcon)
	{
		CClientDC SampleDc(NULL);
		CDC Dc, SourceDc;
		__E(Dc.CreateCompatibleDC(SampleDc));
		__E(SourceDc.CreateCompatibleDC(Dc));
		return InternalOverlayIcon(BaseIcon, OverlayIcon, (HDC) SampleDc, GetIconInformation(BaseIcon), (HDC) Dc, (HDC) SourceDc);
	}
	static VOID OverlayIcons(CIconHandle BaseIcon, CIconHandle* pOverlayIcons, SIZE_T nOverlayIconCount, CIcon* pIcons)
	{
		_A(!IsBadWritePtr(pIcons, sizeof *pIcons * nOverlayIconCount));
		CClientDC SampleDc(NULL);
		CDC Dc, SourceDc;
		__E(Dc.CreateCompatibleDC(SampleDc));
		__E(SourceDc.CreateCompatibleDC(Dc));
		for(SIZE_T nIndex = 0; nIndex < nOverlayIconCount; nIndex++)
			pIcons[nIndex] = InternalOverlayIcon(BaseIcon, pOverlayIcons[nIndex], (HDC) SampleDc, GetIconInformation(BaseIcon), (HDC) Dc, (HDC) SourceDc);
	}
	static VOID OverlayIcons(CIconHandle BaseIcon, HICON* phOverlayIcons, SIZE_T nOverlayIconCount, CIcon* pIcons)
	{
		OverlayIcons(BaseIcon, reinterpret_cast<CIconHandle*>(phOverlayIcons), nOverlayIconCount, pIcons);
	}
	static VOID OverlayIcons(CIconHandle BaseIcon, CIcon* pOverlayIcons, SIZE_T nOverlayIconCount, CIcon* pIcons)
	{
		OverlayIcons(BaseIcon, reinterpret_cast<CIconHandle*>(pOverlayIcons), nOverlayIconCount, pIcons);
	}
};

////////////////////////////////////////////////////////////
// CWindowRedraw

class CWindowRedraw
{
public:
	CWindow m_Window;
	LONG m_nCount;

public:
// CWindowRedraw
	CWindowRedraw(HWND hWindow, LONG nSetCount = -1) throw() : 
		m_Window(hWindow),
		m_nCount(0)
	{
		// SUGG: Make more flexible on demand
		_A(nSetCount == -1);
		m_Window.SetRedraw(FALSE);
		m_nCount = nSetCount;
	}
	~CWindowRedraw() throw()
	{
		_A(m_nCount <= 0);
		if(m_nCount == 0)
			return;
		for(; m_nCount < 0; m_nCount++)
			m_Window.SetRedraw(TRUE);
		// FIX: Workaround API GUI glitches
		TCHAR pszClassName[64] = { 0 };
		if(GetClassName(m_Window, pszClassName, DIM(pszClassName)))
		{
			if(_tcsicmp(pszClassName, CComboBox::GetWndClassName()) == 0)
				m_Window.Invalidate();
		}
	}
};

////////////////////////////////////////////////////////////
// BEGIN_MSG_MAP_EX, MESSAGE_TRACE_EX, 
// REGISTERED_MESSAGE_HANDLER_EX

#undef BEGIN_MSG_MAP_EX

#define BEGIN_MSG_MAP_EX(T) \
public: \
	BOOL m_bATL3MsgHandled; \
	BOOL IsMsgHandled() const throw() \
	{ \
		return m_bATL3MsgHandled; \
	} \
	VOID SetMsgHandled(BOOL bHandled) throw() \
	{ \
		m_bATL3MsgHandled = bHandled; \
	} \
	__if_exists(T::m_hWnd) \
	{ \
		INT_PTR AtlExceptionMessageBox(const CAtlException& Exception, UINT nType = MB_ICONERROR | MB_OK) \
		{ \
			return ::AtlExceptionMessageBox(static_cast<T*>(this)->m_hWnd, Exception, nType); \
		} \
	} \
	BOOL ProcessWindowMessage(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT& lResult, DWORD dwMsgMapID = 0) throw() \
	{ \
		BOOL bHandled = m_bATL3MsgHandled; \
		BOOL bResult = FALSE; \
		_ATLTRY \
		{ \
			__if_exists(T::BeforeProcessWindowMessage) \
			{ \
				static_cast<T*>(this)->BeforeProcessWindowMessage(); \
			} \
			bResult = _ProcessWindowMessage(hWnd, uMsg, wParam, lParam, lResult, dwMsgMapID); \
		} \
		_ATLCATCH(Exception) \
		{ \
			Exception; _Z_ATLEXCEPTION(Exception); \
			__if_exists(T::HandleException) \
			{ \
				HandleException(Exception); \
			} \
			__if_not_exists(T::HandleException) \
			{ \
				__if_exists(T::m_hWnd) \
				{ \
					AtlMessageBoxEx(static_cast<T*>(this)->m_hWnd, (LPCTSTR) AtlFormatSystemMessage(Exception.m_hr), IDS_ERROR, MB_ICONERROR | MB_OK); \
				} \
			} \
		} \
		_ATLCATCHALL() \
		{ \
			_Z_EXCEPTION(); \
			__if_exists(T::HandleException) \
			{ \
				HandleException(CAtlException(E_UNEXPECTED)); \
			} \
			__if_not_exists(T::HandleException) \
			{ \
				__if_exists(T::m_hWnd) \
				{ \
					AtlMessageBoxEx(static_cast<T*>(this)->m_hWnd, (LPCTSTR) AtlFormatSystemMessage(E_UNEXPECTED), IDS_ERROR, MB_ICONERROR | MB_OK); \
				} \
			} \
		} \
		m_bATL3MsgHandled = bHandled; \
		return bResult; \
	} \
	BOOL _ProcessWindowMessage(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT& lResult, DWORD dwMsgMapID) \
	{ \
		BOOL bHandled = TRUE; \
		hWnd; \
		uMsg; \
		wParam; \
		lParam; \
		lResult; \
		bHandled; \
		switch(dwMsgMapID) \
		{ \
		case 0:

#define MESSAGE_TRACE_EX()	\
	ATLTRACE(atlTraceWindowing, 4, _T("hWnd 0x%08x, uMsg %d (0x%x), wParam %d (0x%x), lParam %d (0x%x)\n"), hWnd, uMsg, uMsg, wParam, wParam, lParam, lParam);

#define NOTIFY_TRACE_EX()	\
	if(uMsg == WM_NOTIFY) \
		ATLTRACE(atlTraceWindowing, 4, _T("hWnd 0x%08x, WM_NOTIFY, wParam %d (0x%x), lParam { hwndFrom 0x%08x, idFrom %d (0x%x), code %d (0x%x) }\n"), hWnd, wParam, wParam, ((NMHDR*) lParam)->hwndFrom, ((NMHDR*) lParam)->idFrom, ((NMHDR*) lParam)->idFrom, ((NMHDR*) lParam)->code, ((NMHDR*) lParam)->code);

////////////////////////////////////////////////////////////
// REGISTERED_MESSAGE_HANDLER_EX

#define REGISTERED_MESSAGE_HANDLER_EX(msgname, func) \
	if(uMsg >= 0xC000 && uMsg <= 0xFFFF && uMsg == RegisterWindowMessage(msgname)) \
	{ \
		SetMsgHandled(TRUE); \
		lResult = func(uMsg, wParam, lParam); \
		if(IsMsgHandled()) \
			return TRUE; \
	}

////////////////////////////////////////////////////////////
// CMessageOnlyWindowImpl

template <typename T, typename _Window = CWindow, typename _WinTraits = CFrameWinTraits>
class CMessageOnlyWindowImpl : 
	public CWindowImpl<T, _Window, _WinTraits>
{
public:
// CMessageOnlyWindowImpl
	static HWND GetParentWindow() throw()
	{
#if WINVER >= 0x0500
		OSVERSIONINFO VersionInformation = { sizeof VersionInformation };
		ATLVERIFY(GetVersionEx(&VersionInformation));
		if(VersionInformation.dwPlatformId == VER_PLATFORM_WIN32_NT && VersionInformation.dwMajorVersion >= 5)
			return HWND_MESSAGE;
#endif // WINVER >= 0x0500
		return NULL;
	}
	HWND Create(HWND hParentWindow = GetParentWindow(), _U_RECT Position = NULL, LPCTSTR pszWindowName = NULL, DWORD nStyle = 0, DWORD nExStyle = 0, _U_MENUorID Menu = 0U, VOID* pvCreateParameter = NULL)
	{
		return __super::Create(hParentWindow, Position, pszWindowName, nStyle, nExStyle, Menu, pvCreateParameter);
	}
};

////////////////////////////////////////////////////////////
// CWindowMessageParameterMapT

template <typename _Parameter>
class CWindowMessageParameterMapT
{
private:
	mutable CRoCriticalSection m_DataCriticalSection;
	UINT_PTR m_nCounter;
	CAtlMap<UINT_PTR, CAutoPtr<_Parameter> > m_ParameterMap;

public:
// CWindowMessageParameterMapT
	CWindowMessageParameterMapT() throw() :
		m_nCounter(0)
	{
	}
	UINT_PTR AddParameter(CAutoPtr<_Parameter>& pParameter)
	{
		CRoCriticalSectionLock DataLock(m_DataCriticalSection);
		UINT_PTR nCookie = ++m_nCounter;
		_A(!m_ParameterMap.Lookup((UINT) nCookie));
		m_ParameterMap[(UINT) nCookie] = pParameter;
		return nCookie;
	}
	UINT_PTR AddParameter(const _Parameter& Parameter)
	{
		CAutoPtr<_Parameter> pParameter(new _Parameter);
		*pParameter = Parameter;
		return AddParameter(pParameter);
	}
	CAutoPtr<_Parameter> RemoveParameter(UINT_PTR nCookie) throw()
	{
		CAutoPtr<_Parameter> pParameter;
		CRoCriticalSectionLock DataLock(m_DataCriticalSection);
		POSITION Position = m_ParameterMap.Lookup((UINT) nCookie);
		if(Position)
		{
			pParameter = m_ParameterMap.GetValueAt(Position);
			m_ParameterMap.RemoveAtPos(Position);
		}
		return pParameter;
	}
	VOID RemoveAllParameters() throw()
	{
		CRoCriticalSectionLock DataLock(m_DataCriticalSection);
		m_ParameterMap.RemoveAll();
	}
};

////////////////////////////////////////////////////////////
// CWindowWithPrivateMessagesT

template <typename T>
class CWindowWithPrivateMessagesT
{
protected:
	typedef CWindowWithPrivateMessagesT<T> CWindowWithPrivateMessages;

public:

BEGIN_MSG_MAP_EX(CWindowWithPrivateMessagesT<T>)
	REGISTERED_MESSAGE_HANDLER_EX(T::GetPrivateMessageName(), OnPrivate)
END_MSG_MAP()

public:
// CWindowWithPrivateMessagesT
	static LPCTSTR GetPrivateMessageName() throw()
	{
		return _T("WM_PRIVATE");
	}
	static UINT GetPrivateMessageIdentifier() throw()
	{
		return RegisterWindowMessage(T::GetPrivateMessageName());
	}
	BOOL IsPrivateMessagePending() const throw()
	{
		const T* pT = static_cast<const T*>(this);
		MSG Message;
		UINT nPrivateMessageIdentifier = T::GetPrivateMessageIdentifier();
		return PeekMessage(&Message, pT->m_hWnd, nPrivateMessageIdentifier, nPrivateMessageIdentifier, PM_NOREMOVE);
	}
	BOOL PostPrivateMessage(UINT nMessage, WPARAM wParam = 0) throw()
	{
		T* pT = static_cast<T*>(this);
		return pT->PostMessage(T::GetPrivateMessageIdentifier(), (WPARAM) nMessage, (LPARAM) wParam);
	}
	SIZE_T RemovePrivateMessages(BOOL (T::*pMessageHandler)(const MSG& Message) = NULL) throw()
	{
		T* pT = static_cast<T*>(this);
		MSG Message;
		UINT nPrivateMessageIdentifier = T::GetPrivateMessageIdentifier();
		SIZE_T nMessageCount = 0;
		while(PeekMessage(&Message, pT->m_hWnd, nPrivateMessageIdentifier, nPrivateMessageIdentifier, PM_REMOVE))
		{
			nMessageCount++;
			if(!pMessageHandler)
				continue;
			BOOL bContinue = (pT->*pMessageHandler)(Message);
			if(!bContinue)
				break;
		}
		return nMessageCount;
	}
	BOOL DispatchPrivateMessage(const MSG& Message) throw()
	{
		DispatchMessage(&Message);
		return TRUE;
	}
	SIZE_T DispatchPrivateMessages() throw()
	{
		return RemovePrivateMessages(DispatchPrivateMessage);
	}
	LRESULT HandlePostedPrivateMessage(WPARAM wParam, LPARAM lParam) throw()
	{
		T* pT = static_cast<T*>(this);
		return pT->SendMessage((UINT) wParam, (WPARAM) lParam);
	}

// Window message handlers
	LRESULT OnPrivate(UINT, WPARAM wParam, LPARAM lParam) throw()
	{
		T* pT = static_cast<T*>(this);
		return pT->HandlePostedPrivateMessage(wParam, lParam);
	}
};

////////////////////////////////////////////////////////////
// CWindowedTimedEventDaemonWindow

class CWindowedTimedEventDaemonWindow :
	public CMessageOnlyWindowImpl<CWindowedTimedEventDaemonWindow>//,
	//public CWindowWithPrivateMessagesT<CWindowedTimedEventDaemonWindow>
{
	typedef VOID (*HANDLER)(UINT_PTR, DWORD_PTR);

public:

BEGIN_MSG_MAP_EX(CStubWindow)
	//CHAIN_MSG_MAP(CWindowWithPrivateMessagesT<CWindowedTimedEventDaemonWindow>)
	MSG_WM_TIMER(OnTimer)
END_MSG_MAP()

	////////////////////////////////////////////////////////
	// CTimedEvent

	class CTimedEvent
	{
	public:
		ULONG m_nDelay;
		HANDLER m_pHandler;
		DWORD_PTR m_nParameter;

	public:
	// CTimedEvent
		CTimedEvent() throw()
		{
		}
		CTimedEvent(ULONG nDelay, HANDLER pHandler, DWORD_PTR nParameter) throw() :
			m_nDelay(nDelay),
			m_pHandler(pHandler), 
			m_nParameter(nParameter)
		{
		}
	};

	////////////////////////////////////////////////////////
	// CTimedEventList

	class CTimedEventList :
		public CRoListT<CTimedEvent>
	{
	public:
	// CTimedEventList
		BOOL IsValidPosition(POSITION Position) const throw()
		{
			for(POSITION CurrentPosition = GetHeadPosition(); CurrentPosition; GetNext(CurrentPosition))
				if(CurrentPosition == Position)
					return TRUE;
			return FALSE;
		}
	};

private:
	static CRoListT<CWindowedTimedEventDaemonWindow> g_WindowList;
	LONG m_nReferenceCount;
	CTimedEventList m_TimedEventList;

public:
// CWindowedTimedEventDaemonWindow
	static CWindowedTimedEventDaemonWindow* GetWindow(HWND hParentWindow)
	{
		_A(_pAtlModule);
		CComCritSecLock<CComCriticalSection> GlobalLock(_pAtlModule->m_csStaticDataInitAndTypeInfo);
		CWindowedTimedEventDaemonWindow* pWindow = NULL;
		for(POSITION Position = g_WindowList.GetHeadPosition(); Position; g_WindowList.GetNext(Position))
			if(g_WindowList.GetAt(Position).GetParent() == hParentWindow)
			{
				pWindow = &g_WindowList.GetAt(Position);
				break;
			}
		if(!pWindow)
		{
			const POSITION Position = g_WindowList.AddTail();
			_A(Position);
			pWindow = &g_WindowList.GetAt(Position);
			_ATLTRY
			{
				__E(pWindow->Create(hParentWindow));
			}
			_ATLCATCHALL()
			{
				g_WindowList.RemoveAt(Position);
				_ATLRETHROW;
			}
		}
		_A(pWindow->GetWindowThreadID() == GetCurrentThreadId());
		pWindow->AddRef();
		return pWindow;
	}
	static BOOL ReleaseWindow(CWindowedTimedEventDaemonWindow* pWindow) throw()
	{
		if(!pWindow)
			return FALSE;
		_A(_pAtlModule);
		CComCritSecLock<CComCriticalSection> GlobalLock(_pAtlModule->m_csStaticDataInitAndTypeInfo);
		for(POSITION Position = g_WindowList.GetHeadPosition(); Position; g_WindowList.GetNext(Position))
			if(&g_WindowList.GetAt(Position) == pWindow)
			{
				const LONG nReferenceCount = pWindow->Release();
				_A(nReferenceCount >= 0);
				if(nReferenceCount <= 0)
				{
					if(pWindow->IsWindow())
						_W(pWindow->DestroyWindow());
					g_WindowList.RemoveAt(Position);
				}
				return TRUE;
			}
		return FALSE;
	}
	CWindowedTimedEventDaemonWindow() throw() :
		m_nReferenceCount(0)
	{
	}
	LONG AddRef() throw()
	{
		return ++m_nReferenceCount;
	}
	LONG Release() throw()
	{
		return --m_nReferenceCount;
	}
	UINT_PTR SetEvent(ULONG nInterval, HANDLER pHandler, DWORD_PTR nParameter)
	{
		_A(IsWindow());
		_A(GetWindowThreadID() == GetCurrentThreadId());
		const POSITION Position = m_TimedEventList.AddTail(CTimedEvent(nInterval, pHandler, nParameter));
		_A(Position);
		const UINT_PTR nEvent = (UINT_PTR) Position;
		_W(SetTimer(nEvent, nInterval));
		return nEvent;
	}
	BOOL KillEvent(UINT_PTR nEvent) throw()
	{
		const POSITION Position = (POSITION) nEvent;
		if(!m_TimedEventList.IsValidPosition(Position))
			return FALSE;
		m_TimedEventList.RemoveAt(Position);
		if(!IsWindow())
			return TRUE;
		_A(GetWindowThreadID() == GetCurrentThreadId());
		_W(KillTimer(nEvent));
		return TRUE;
	}

// Window message handlers
	LRESULT OnTimer(UINT_PTR nEvent) throw()
	{
		const POSITION Position = (POSITION) nEvent;
		if(!m_TimedEventList.IsValidPosition(Position))
		{
			SetMsgHandled(FALSE);
			return 0;
		}
		CTimedEvent& TimedEvent = m_TimedEventList.GetAt(Position);
		_ATLTRY
		{
			(*TimedEvent.m_pHandler)(nEvent, TimedEvent.m_nParameter);
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
		}
		return 0;
	}
};

__declspec(selectany) CRoListT<CWindowedTimedEventDaemonWindow> CWindowedTimedEventDaemonWindow::g_WindowList;

////////////////////////////////////////////////////////////
// CWindowedTimedEventExT, CWindowedTimedEventT

template <typename T, typename _Owner>
class CWindowedTimedEventExT
{
	typedef VOID (_Owner::*HANDLER)(T*);

public:
	CWindowedTimedEventDaemonWindow* m_pWindowedTimedEventDaemonWindow;
	UINT_PTR m_nEvent;
	_Owner* m_pOwner;
	HANDLER m_pHandler;
	ULONG m_nOrdinalNumber;

	VOID InternalHandler(UINT_PTR nEvent)
	{
		if(m_nEvent == nEvent)
		{
			_A(m_pOwner && m_pHandler);
			m_nOrdinalNumber++;
			(m_pOwner->*m_pHandler)(static_cast<T*>(this));
		}
	}
	static VOID InternalHandler(UINT_PTR nEvent, DWORD_PTR nUser)
	{
		_ATLTRY
		{
			((CWindowedTimedEventExT*) nUser)->InternalHandler(nEvent);
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
		}
	}

public:
// CWindowedTimedEventExT
	CWindowedTimedEventExT() throw() :
		m_pWindowedTimedEventDaemonWindow(NULL),
		m_nEvent(0)
	{
	}
	~CWindowedTimedEventExT() throw()
	{
		Destroy();
		if(m_pWindowedTimedEventDaemonWindow)
			_W(CWindowedTimedEventDaemonWindow::ReleaseWindow(m_pWindowedTimedEventDaemonWindow));
	}
	UINT_PTR GetEvent() const throw()
	{
		return m_nEvent;
	}
	BOOL IsActive() const throw()
	{
		return m_nEvent != 0;
	}
	CWindowedTimedEventDaemonWindow* GetEventDaemonWindow() const throw()
	{
		return m_pWindowedTimedEventDaemonWindow;
	}
	VOID CreateDaemonWindow(HWND hParentWindow)
	{
		if(m_pWindowedTimedEventDaemonWindow)
			return;
		m_pWindowedTimedEventDaemonWindow = CWindowedTimedEventDaemonWindow::GetWindow(hParentWindow);
		_A(m_pWindowedTimedEventDaemonWindow);
		m_nEvent = 0;
	}
	VOID CreateDaemonWindow(_Owner* pOwner)
	{
		CreateDaemonWindow(pOwner->m_hWnd);
	}
	VOID Create(HWND hParentWindow, _Owner* pOwner, HANDLER pHandler, UINT nInterval)
	{
		_A(hParentWindow && pOwner && pHandler);
		Destroy();
		CreateDaemonWindow(hParentWindow);
		m_nEvent = m_pWindowedTimedEventDaemonWindow->SetEvent(nInterval, InternalHandler, (DWORD_PTR) this);
		m_pOwner = pOwner;
		m_pHandler = pHandler;
		m_nOrdinalNumber = 0;
	}
	VOID Create(_Owner* pOwner, HANDLER pHandler, UINT nInterval)
	{
		Create(pOwner->m_hWnd, pOwner, pHandler, nInterval);
	}
	VOID Destroy() throw()
	{
		if(m_pWindowedTimedEventDaemonWindow && m_nEvent)
		{
			m_pWindowedTimedEventDaemonWindow->KillEvent(m_nEvent);
			m_nEvent = 0;
		}
	}
	ULONG GetOrdinalNumber() const throw()
	{
		return m_nOrdinalNumber;
	}
};

template <typename _Owner>
class CWindowedTimedEventT :
	public CWindowedTimedEventExT<CWindowedTimedEventT<_Owner>, _Owner>
{
public:
// CWindowedTimedEventExT
};

////////////////////////////////////////////////////////////
// CDeferWindowPos

class CDeferWindowPos
{
private:
	HDWP m_hWinPosInfo;

public:
// CDeferWindowPos
	CDeferWindowPos() throw() :
		m_hWinPosInfo(NULL)
	{
	}
	CDeferWindowPos(INT nCapacity) throw() :
		m_hWinPosInfo(NULL)
	{
		_W(Begin(nCapacity));
	}
	~CDeferWindowPos() throw()
	{
		_A(!m_hWinPosInfo);
	}
	operator HDWP () const throw()
	{
		return m_hWinPosInfo;
	}
	BOOL Begin(INT nCapacity = 10) throw()
	{
		_A(!m_hWinPosInfo);
		m_hWinPosInfo = BeginDeferWindowPos(nCapacity);
		return m_hWinPosInfo != NULL;
	}
	BOOL SetWindowPos(HWND hWindow, HWND hWndInsertAfter, INT nX, INT nY, INT nWidth, INT nHeight, UINT nFlags) throw()
	{
		_A(m_hWinPosInfo);
		m_hWinPosInfo = CWindow(hWindow).DeferWindowPos(m_hWinPosInfo, hWndInsertAfter, nX, nY, nWidth, nHeight, nFlags);
		return m_hWinPosInfo != NULL;
	}
	BOOL SetWindowPos(HWND hWindow, HWND hWndInsertAfter, const RECT* pPosition, UINT nFlags) throw()
	{
		_A(pPosition);
		const CRect& Position = reinterpret_cast<const CRect&>(*pPosition);
		return SetWindowPos(hWindow, hWndInsertAfter, Position.left, Position.top, Position.Width(), Position.Height(), nFlags);
	}
	BOOL End() throw()
	{
		_A(m_hWinPosInfo);
		const BOOL bResult = EndDeferWindowPos(m_hWinPosInfo);
		m_hWinPosInfo = NULL;
		return bResult;
	}
};

