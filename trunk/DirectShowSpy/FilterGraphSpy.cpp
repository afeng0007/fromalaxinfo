////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2015
// Created by Roman Ryltsov roman@alax.info, http://alax.info
//
// This source code is published to complement DirectShowSpy developer powertoy 
// and demonstrate the internal use of APIs and tricks powering the tool. It is 
// allowed to freely re-use the portions of the code in other projects, commercial 
// or otherwise (provided that you don’t pretend that you wrote the original tool).
//
// Please keep in mind that DirectShowSpy is a developer tool, it is strongly recommended
// that it is not shipped with release grade software. It is allowed to distribute
// DirectShowSpy if only it is not registered with Windows by default and either
// used privately, or registered on specific throubleshooting request. The advice applies 
// to hooking methods used by DirectShowSpy in general as well.

#include "stdafx.h"
#include "resource.h"
#include "FilterGraphSpy.h"
#include "FilterMapperSpy.h"
#include "SystemDeviceEnumeratorSpy.h"

////////////////////////////////////////////////////////////
// DoGraphBuilderCallbackPropertySheetModal

#include "GraphBuilderCallbackPropertySheet.h"

#if defined(_WIN64)
	extern "C" __declspec(dllexport) 
#else
	#pragma comment(linker, "/EXPORT:DoGraphBuilderCallbackPropertySheetModal=_DoGraphBuilderCallbackPropertySheetModal@0,PRIVATE")
	extern "C" // __declspec(dllexport) 
#endif // defined(_WIN64)

HRESULT STDMETHODCALLTYPE DoGraphBuilderCallbackPropertySheetModal()
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

////////////////////////////////////////////////////////////
// DoFilterGraphListPropertySheetModal

#include "FilterGraphList.h"

#if defined(_WIN64)
	extern "C" __declspec(dllexport) 
#else
	#pragma comment(linker, "/EXPORT:DoFilterGraphListPropertySheetModal=_DoFilterGraphListPropertySheetModal@0,PRIVATE")
	extern "C" // __declspec(dllexport) 
#endif // defined(_WIN64)

HRESULT STDMETHODCALLTYPE DoFilterGraphListPropertySheetModal()
{
	_ATLTRY
	{
		CSingleThreadedApartment SingleThreadedApartment;
		_W(AtlInitCommonControls(ICC_WIN95_CLASSES | ICC_COOL_CLASSES | ICC_STANDARD_CLASSES));
		CFilterGraphListPropertySheet PropertySheet;
		PropertySheet.DoModal(GetActiveWindow());
	}
	_ATLCATCH(Exception)
	{
		_C(Exception);
	}
	return S_OK;
}

////////////////////////////////////////////////////////////
// DoGraphBuilderCallbackPropertySheetModal

#include "MediaSampleTrace.h"

#if defined(_WIN64)
	extern "C" __declspec(dllexport) 
#else
	#pragma comment(linker, "/EXPORT:DoMediaSampleTracePropertySheetModal=_DoMediaSampleTracePropertySheetModal@0,PRIVATE")
	extern "C" // __declspec(dllexport) 
#endif // defined(_WIN64)

HRESULT STDMETHODCALLTYPE DoMediaSampleTracePropertySheetModal()
{
	_ATLTRY
	{
		CSingleThreadedApartment SingleThreadedApartment;
		_W(AtlInitCommonControls(ICC_WIN95_CLASSES | ICC_COOL_CLASSES | ICC_STANDARD_CLASSES));
		CMediaSampleTracePropertySheet PropertySheet;
		PropertySheet.DoModal(GetActiveWindow());
	}
	_ATLCATCH(Exception)
	{
		_C(Exception);
	}
	return S_OK;
}

#if defined(_WIN64)
	extern "C" __declspec(dllexport) 
#else
	#pragma comment(linker, "/EXPORT:DoMediaSampleTraceTasks=_DoMediaSampleTraceTasks@16,PRIVATE")
	extern "C" // __declspec(dllexport) 
#endif // defined(_WIN64)

HRESULT STDMETHODCALLTYPE DoMediaSampleTraceTasks(HWND hParentWindow, HINSTANCE, LPSTR pszCommandLine, INT nShowCommand)
{
	_ATLTRY
	{
		CSingleThreadedApartment SingleThreadedApartment;
		hParentWindow; nShowCommand;
		CCommandLineArguments Arguments((LPCWSTR) CStringW(pszCommandLine), 0);
		for(; ; )
		{
			CCommandLineArguments::CArgument Argument;
			if(!Arguments.Next(Argument))
				break;
			__D(!Argument.m_bSwitch, E_INVALIDARG);
			if(Argument.m_sValue.CompareNoCase(_T("reset")) == 0)
			{
				CMediaSampleTraceBase::ResetData();
			} else
			if(Argument.m_sValue.CompareNoCase(_T("write")) == 0)
			{
				CCommandLineArguments::CArgument PathArgument;
				__D(Arguments.Next(PathArgument), E_INVALIDARG);
				__D(!PathArgument.m_bSwitch, E_INVALIDARG);
				CMediaSampleTraceBase::SaveToFile(CMediaSampleTraceBase::CreateDataText(), (LPCTSTR) PathArgument.m_sValue);
			} else
				__C(E_INVALIDARG);
		}
	}
	_ATLCATCH(Exception)
	{
		_C(Exception);
	}
	return S_OK;
}

