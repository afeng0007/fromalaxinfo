////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include "resource.h"
#include "Configuration.h"

////////////////////////////////////////////////////////////
// CRegistrationPropertySheet

#if defined(_WIN64)
extern "C" __declspec(dllexport) 
#else
#pragma comment(linker, "/EXPORT:DoRegistrationPropertySheetModal=_DoRegistrationPropertySheetModal@0,PRIVATE")
extern "C" // __declspec(dllexport) 
#endif // defined(_WIN64)

HRESULT STDMETHODCALLTYPE DoRegistrationPropertySheetModal() throw()
{
	_ATLTRY
	{
		CSingleThreadedApartment SingleThreadedApartment;
		_W(AtlInitCommonControls(ICC_WIN95_CLASSES | ICC_COOL_CLASSES | ICC_STANDARD_CLASSES));
		CRegistrationPropertySheet PropertySheet;
		PropertySheet.DoModal(GetActiveWindow());
	}
	_ATLCATCH(Exception)
	{
		_C(Exception);
	}
	return S_OK;
}
