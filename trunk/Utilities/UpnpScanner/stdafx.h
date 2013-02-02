////////////////////////////////////////////////////////////
// Copyright (C) Alax.Info, 2006-2013
// http://alax.info
//
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#pragma once

#define WINVER			0x0501
#define _WIN32_WINNT	0x0501
#define _WIN32_IE		0x0500

#define INLINE_HRESULT_FROM_WIN32
#define _INC_WINDOWSX

#define _ATL_APARTMENT_THREADED
#define _ATL_NO_AUTOMATIC_NAMESPACE
#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS
#define _ATL_ALL_WARNINGS
//#define _ATL_ATTRIBUTES

#include "roatltrace.h"
#include <atlbase.h>
#include <atlstr.h>
#include <atltypes.h>

using namespace ATL;

#define _WTL_NO_CSTRING
#define _WTL_NO_WTYPES
#define _WTL_NO_UNION_CLASSES
#define _WTL_NEW_PAGE_NOTIFY_HANDLERS

#include <atlapp.h>

extern CAppModule _Module;

#include <atlwin.h>
#include <atlcrack.h>
#include <atldlgs.h>
#include <atlctrls.h>
#include <atlframe.h>
#include <atlmisc.h>
#include <atlrx.h>

#include <shellapi.h>
#include <atlctrlx.h>

using namespace WTL;

#include "roatlbase.h"
#include "roatlcom.h"
#include "roatlexceptionfilter.h"
#include "rowtlcrack.h"
#include "rowindows.h"
#include "rocontrols.h"
#include "rodialogs.h"
#include "rowinhttp.h"

#if defined _M_IX86
#pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_IA64
#pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='ia64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
