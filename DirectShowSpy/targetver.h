////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2014
// Created by Roman Ryltsov roman@alax.info
//
// This source code is published to complement DirectShowSpy developer powertoy 
// and demonstrate the internal use of APIs and tricks powering the tool. It is 
// allowed to freely re-use the portions of the code in other projects, commercial or otherwise 
// (provided that you don’t pretend that you wrote the original tool).
//
// Please keep in mind that DirectShowSpy is a developer tool, it is strongly recommended
// that it is not shipped with release grade software. The advise applies to hooking methods
// used by DirectShowSpy in general as well.

#pragma once

#define WINVER			0x0600        
#define _WIN32_WINNT	0x0600  
#define _WIN32_WINDOWS	0x0410
#define _WIN32_IE		0x0700     
#define _RICHEDIT_VER	0x0200	// RichEdit 2.0
