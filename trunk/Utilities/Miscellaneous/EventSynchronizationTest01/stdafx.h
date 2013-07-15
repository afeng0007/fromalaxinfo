////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id: stdafx.h 244 2011-03-16 19:40:21Z alax $

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // some CString constructors will be explicit

#include "roatltrace.h" // Replacement for <atltrace.h>
#include <atlbase.h>
#include <atlstr.h>

using namespace ATL;

#include "roatlbase.h"
#include "roatlvariants.h"
#include "roatlcom.h"
