////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2014
// Created by Roman Ryltsov roman@alax.info

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
		const ULONG nOsVersion = GetOsVersion();
		_Z4(atlTraceGeneral, 4, _T("nOsVersion 0x%08x\n"), nOsVersion);
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
					if(nOsVersion >= 0x060000) // Win Vista+
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
				if(nOsVersion >= 0x060000) // Win Vista+
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
