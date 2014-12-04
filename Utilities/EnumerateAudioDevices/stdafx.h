////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

////////////////////////////////////////////////////////////
// Windows definitions

#include <SDKDDKVer.h>

#define INLINE_HRESULT_FROM_WIN32

////////////////////////////////////////////////////////////
// ATL definitions

#define _ATL_APARTMENT_THREADED
#define _ATL_NO_AUTOMATIC_NAMESPACE
#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS
#define _ATL_ALL_WARNINGS
#define _ATL_ATTRIBUTES

#include "roatltrace.h" // Replacement for <atltrace.h>
#include <atlbase.h>
#include <atlcom.h>
#include <atlwin.h>
#include <atltypes.h>
#include <atlsync.h>
#include <atlfile.h>
#include <atlpath.h>
#include <atlcoll.h>
#include <atlrx.h>
#include <atlctl.h>
#include <atlhost.h>

using namespace ATL;
using namespace ATL::ATLPath;

////////////////////////////////////////////////////////////
// WTL

#define _WTL_NO_CSTRING
#define _WTL_NO_WTYPES
#define _WTL_NO_UNION_CLASSES
#define _WTL_NEW_PAGE_NOTIFY_HANDLERS

#undef _SYSINFOAPI_H_
#include <atlapp.h>
#define _SYSINFOAPI_H_

#include <atlgdi.h>
#include <atluser.h>
#include <atlcrack.h>
#include <atlctrls.h>
#include <atlctrlx.h>
#include <atlmisc.h>
#include <atlframe.h>
#include <atldlgs.h>

using namespace WTL;

////////////////////////////////////////////////////////////
// Alax.Info ATL/WTL

#define SRWLOCK_THROUGH_CRITICALSECTION // Legacy Compatibility

#define REGISTRY_PRODUCTROOT	_T("SOFTWARE\\Alax.Info\\Utility\\EnumerateAudioDevices")
#define REGISTRY_FILEROOT		REGISTRY_PRODUCTROOT
#define REGISTRY_ROOT			REGISTRY_FILEROOT

#include "roatlbase.h"
#include "roatlvariants.h"
#include "roatlcom.h"
#include "roatlpersist.h"
#include "roatlmisc.h"
#include "roatlexceptionfilter.h"
#include "rowtlapp.h"
#include "rowtlcrack.h"
#include "rodialogs.h"
#include "rocontrols.h"

////////////////////////////////////////////////////////////
// Common Controls

#if defined _M_IX86
  #pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_IA64
  #pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='ia64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
  #pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
  #pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
