////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

////////////////////////////////////////////////////////////
// Windows definitions

#ifndef STRICT
#define STRICT
#endif

#define _INC_WINDOWSX

#include "targetver.h"
#include <stdio.h>
#include <tchar.h>
#include <math.h>

////////////////////////////////////////////////////////////
// ATL definitions

#define _ATL_APARTMENT_THREADED
#define _ATL_NO_AUTOMATIC_NAMESPACE
#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS
#define _ATL_ALL_WARNINGS
//#define ATL_NO_ASSERT_ON_DESTROY_NONEXISTENT_WINDOW

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
#include <atlgdi.h>
#include <atluser.h>
#include <atlcrack.h>
#include <atlctrls.h>
#include <shellapi.h>
//#include <atlctrlx.h>
#include <atlmisc.h>
#include <atlframe.h>
#include <atldlgs.h>

using namespace WTL;

////////////////////////////////////////////////////////////
// Alax.Info ATL/WTL

#define REGISTRY_PRODUCTROOT	_T("SOFTWARE\\Alax.Info\\Utilities")
#define REGISTRY_FILEROOT		REGISTRY_PRODUCTROOT _T("\\EnumerateTransforms")
#define REGISTRY_ROOT			REGISTRY_FILEROOT

#include "roatlbase.h"
#include "roatlvariants.h"
#include "roatlcom.h"
#include "roatlpersist.h"
#include "roatlmisc.h"
#include "roatlexceptionfilter.h"
#include "rowtlapp.h"
//#include "rowtlcrack.h"
//#include "rodialogs.h"
//#include "rocontrols.h"

