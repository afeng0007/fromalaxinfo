////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2015
// Created by Roman Ryltsov roman@alax.info
//
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#pragma once

#include "targetver.h"

////////////////////////////////////////////////////////////
// SDK

#include <stdio.h>
#include <tchar.h>
#include <math.h>
#include <windows.h>

////////////////////////////////////////////////////////////
// ATL

#define _ATL_APARTMENT_THREADED
//#define _ATL_FREE_THREADED
#define _ATL_NO_AUTOMATIC_NAMESPACE
#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS
#define _ATL_ALL_WARNINGS
//#define ATL_NO_ASSERT_ON_DESTROY_NONEXISTENT_WINDOW

#include "roatltrace.h" // Replacement for <atltrace.h>
#include <atlbase.h>
#include <atlcom.h>
//#include <atlwin.h>
#include <atltypes.h>
#include <atlsync.h>
#include <atlfile.h>
#include <atlpath.h>
#include <atlcoll.h>
#include <atlrx.h>
//#include <atlctl.h>
//#include <atlhost.h>

using namespace ATL;
using namespace ATL::ATLPath;

////////////////////////////////////////////////////////////
// WTL

#define _WTL_NO_CSTRING
#define _WTL_NO_WTYPES
#define _WTL_NO_UNION_CLASSES
#define _WTL_NEW_PAGE_NOTIFY_HANDLERS

#include <atlapp.h>
//#include <atlgdi.h>
//#include <atluser.h>
//#include <atlcrack.h>
//#include <atlctrls.h>
//#include <atlctrlx.h>
//#include <atlmisc.h>
//#include <atlframe.h>
#include <atldlgs.h>

using namespace WTL;

////////////////////////////////////////////////////////////
// Alax.Info ATL/WTL

#define REGISTRY_PRODUCTROOT	_T("SOFTWARE\\Volicon\\Utility")
#define REGISTRY_FILEROOT		REGISTRY_PRODUCTROOT _T("\\PrintTime")
#define REGISTRY_ROOT			REGISTRY_FILEROOT

#include "roatlbase.h"
#include "roatlvariants.h"
#include "roatlcom.h"
#include "roatlpersist.h"
#include "roatlmisc.h"
#include "roatlexceptionfilter.h"
#include "rofiles.h"
#include "rowtlapp.h"
#include "rowtlcrack.h"
#include "rodialogs.h"
//#include "rocontrols.h"

////////////////////////////////////////////////////////////
// Common Controls

//#if defined _M_IX86
//  #pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
//#elif defined _M_IA64
//  #pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='ia64' publicKeyToken='6595b64144ccf1df' language='*'\"")
//#elif defined _M_X64
//  #pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
//#else
//  #pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
//#endif
