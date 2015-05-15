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
#include <dshow.h>
#include "resource.h"
#include "Common.h"
#include "Configuration.h"

////////////////////////////////////////////////////////////
// UnregisterTreatAsClasses

#if defined(_WIN64)
	extern "C" __declspec(dllexport) 
#else
	#pragma comment(linker, "/EXPORT:UnregisterTreatAsClasses=_UnregisterTreatAsClasses@0,PRIVATE")
	extern "C" // __declspec(dllexport) 
#endif // defined(_WIN64)

HRESULT STDMETHODCALLTYPE UnregisterTreatAsClasses() throw()
{
	_ATLTRY
	{
		static const CLSID* g_ppClassIdentifiers[] = 
		{
			&CLSID_FilterMapper2, // CFilterMapperSpy
			&CLSID_SystemDeviceEnum, // CLSID_SystemDeviceEnumeratorSpy
			&CLSID_FilterGraph, // CLSID_Spy
			&CLSID_FilterGraphNoThread, // CLSID_NoThreadSpy
		};
		CProcessTokenPrivileges ProcessTokenPrivileges;
		BOOL bProcessTokenPrivilegesAdjustNeeded = TRUE;
		for(SIZE_T nIndex = 0; nIndex < DIM(g_ppClassIdentifiers); nIndex++)
		{
			const CLSID& ClassIdentifier = *g_ppClassIdentifiers[nIndex];
			_Z4(atlTraceGeneral, 4, _T("nIndex %d, ClassIdentifier %ls\n"), nIndex, _PersistHelper::StringFromIdentifier(ClassIdentifier));
			_ATLTRY
			{
				CLSID CurrentTreatAsClassIdentifier = CLSID_NULL;
				const HRESULT nCoGetTreatAsClassResult = CoGetTreatAsClass(ClassIdentifier, &CurrentTreatAsClassIdentifier);
				_Z4_HRESULT(nCoGetTreatAsClassResult);
				__C(nCoGetTreatAsClassResult);
				if(nCoGetTreatAsClassResult != S_OK)
					continue;
				_Z4(atlTraceGeneral, 4, _T("CurrentTreatAsClassIdentifier %ls\n"), _PersistHelper::StringFromIdentifier(CurrentTreatAsClassIdentifier));
				#pragma region Adjust
				if(bProcessTokenPrivilegesAdjustNeeded)
				{
					bProcessTokenPrivilegesAdjustNeeded = FALSE;
					if(IsWindowsVistaOrGreater())
						_ATLTRY
						{
							ProcessTokenPrivileges.Adjust();
						}
						_ATLCATCHALL()
						{
							_Z_EXCEPTION();
						}
				}
				#pragma endregion 
				CClassIdentifierRegKeySecurity ClassIdentifierRegKeySecurity(ClassIdentifier);
				if(IsWindowsVistaOrGreater())
					ClassIdentifierRegKeySecurity.Adjust();
				const HRESULT nCoTreatAsClassResult = CoTreatAsClass(ClassIdentifier, CLSID_NULL);
				_Z4_HRESULT(nCoTreatAsClassResult);
				__C(nCoTreatAsClassResult);
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
		}
	}
	_ATLCATCH(Exception)
	{
		_C(Exception);
	}
	return S_OK;
}

////////////////////////////////////////////////////////////
// DoRegistrationPropertySheetModal

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
