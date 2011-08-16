////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

////////////////////////////////////////////////////////////
// Windows definitions

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

////////////////////////////////////////////////////////////
// Windows definitions

#include <windows.h>

////////////////////////////////////////////////////////////
// ATL

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // some CString constructors will be explicit

#include <atlbase.h>
#include <atlstr.h>
#include <atlrx.h>
#include <atlpath.h>
#include <atlfile.h>
#include <atlcom.h>

using namespace ATL;

////////////////////////////////////////////////////////////
// WTL

//#include <atlapp.h>
//#include <atluser.h>
