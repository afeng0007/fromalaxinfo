////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include "resource.h"
#include "FilterGraphSpy.h"
#include "FilterMapperSpy.h"
#include "GraphBuilderCallbackPropertySheet.h"
#include "SystemDeviceEnumeratorSpy.h"

////////////////////////////////////////////////////////////
// CGraphBuilderCallbackPropertySheet

#if defined(_WIN64)
extern "C" __declspec(dllexport) 
#else
#pragma comment(linker, "/EXPORT:DoGraphBuilderCallbackPropertySheetModal=_DoGraphBuilderCallbackPropertySheetModal@0,PRIVATE")
extern "C" // __declspec(dllexport) 
#endif // defined(_WIN64)

HRESULT STDMETHODCALLTYPE DoGraphBuilderCallbackPropertySheetModal() throw()
{
	_ATLTRY
	{
		CSingleThreadedApartment SingleThreadedApartment;
		_W(AtlInitCommonControls(ICC_WIN95_CLASSES | ICC_COOL_CLASSES | ICC_STANDARD_CLASSES));
		CGraphBuilderCallbackPropertySheet PropertySheet;
		PropertySheet.DoModal(GetActiveWindow());
	}
	_ATLCATCH(Exception)
	{
		_C(Exception);
	}
	return S_OK;
}
