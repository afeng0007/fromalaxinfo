////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id: stdafx.h 1387 2015-02-28 11:30:21Z roman $

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // some CString constructors will be explicit

#define ATLENSURE_SUCCEEDED(x) { const HRESULT nResult = (x); ATLENSURE_THROW(SUCCEEDED(nResult), nResult); }

#include <atlbase.h>
#include <atlstr.h>

// TODO: reference additional headers your program requires here
