////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2013
// Created by Roman Ryltsov roman@alax.info

#pragma once

////////////////////////////////////////////////////////////
// Windows definitions

#include "targetver.h"

#define _USE_MATH_DEFINES

#include <stdio.h>
#include <tchar.h>
#include <math.h>

////////////////////////////////////////////////////////////
// Windows definitions

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS

#include "roatltrace.h" // Replacement for <atltrace.h>
#include <atlbase.h>
#include <atlstr.h>
#include <atlrx.h>
#include <atlpath.h>
#include <atlfile.h>

using namespace ATL;

////////////////////////////////////////////////////////////
// WTL

////////////////////////////////////////////////////////////
// Alax.Info ATL/WTL

#define REGISTRY_PRODUCTROOT	_T("SOFTWARE\\Alax.Info\\Utility") _T("\\") _T("CheckLog")
#define REGISTRY_FILEROOT		REGISTRY_PRODUCTROOT
#define REGISTRY_ROOT			REGISTRY_FILEROOT

#include "roatlbase.h"
#include "roatlpersist.h"
#include "roatlmisc.h"
#include "roatlexceptionfilter.h"
#include "rowtlapp.h"
#include "rores.h"
#include "rodialogs.h"


