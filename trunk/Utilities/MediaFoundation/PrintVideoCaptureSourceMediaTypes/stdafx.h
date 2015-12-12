////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2015
// Created by Roman Ryltsov roman@alax.info
//
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#pragma once

////////////////////////////////////////////////////////////
// SDK

#include "targetver.h"

#define _INC_WINDOWSX

#include <stdio.h>
#include <tchar.h>

////////////////////////////////////////////////////////////
// ATL

#define _ATL_APARTMENT_THREADED
#define _ATL_NO_AUTOMATIC_NAMESPACE
#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS
#define _ATL_ALL_WARNINGS
//#define _ATL_ATTRIBUTES

#include "roatltrace.h" // Replacement for <atltrace.h>
#include <atlbase.h>
#include <atlstr.h>
#include <atlpath.h>
#include <atlrx.h>

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
//#include <shellapi.h>
//#include <atlctrlx.h>
//#include <atlmisc.h>
//#include <atlframe.h>
//#include <atldlgs.h>

using namespace WTL;

////////////////////////////////////////////////////////////
// Alax.Info ATL/WTL

#define REGISTRY_PRODUCTROOT	_T("SOFTWARE\\Alax.Info\\Utility")
#define REGISTRY_FILEROOT		REGISTRY_PRODUCTROOT _T("\\PrintVideoCaptureSourceMediaTypes")
#define REGISTRY_ROOT			REGISTRY_FILEROOT

#include "roatlbase.h"
#include "roatlvariants.h"
#include "roatlcom.h"
#include "roatlpersist.h"
#include "roatlmisc.h"
#include "roatlexceptionfilter.h"
#include "rowtlapp.h"
#include "rofiles.h"
//#include "rowtlcrack.h"
//#include "rodialogs.h"
//#include "rocontrols.h"
