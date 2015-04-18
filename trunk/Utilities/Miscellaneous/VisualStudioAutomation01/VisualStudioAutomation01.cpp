////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2015
// Created by Roman Ryltsov roman@alax.info, http://alax.info

#include "stdafx.h"

VOID Try(const CLSID& ClassIdentifier)
{
	CComPtr<IDispatch> pDispatch;
	ATLENSURE_SUCCEEDED(pDispatch.CoCreateInstance(ClassIdentifier));
	CComVariant vMainWindow;
	ATLENSURE_SUCCEEDED(pDispatch.GetPropertyByName(L"MainWindow", &vMainWindow));
	ATLASSERT(vMainWindow.vt == VT_DISPATCH);
	CComPtr<IDispatch> pMainWindowDispatch = vMainWindow.pdispVal;
	#pragma region Type Information
	UINT nTypeInfoCount;
	ATLENSURE_SUCCEEDED(pMainWindowDispatch->GetTypeInfoCount(&nTypeInfoCount));
	_tprintf(_T("nTypeInfoCount %d\n"), nTypeInfoCount);
	ATLASSERT(nTypeInfoCount == 1);
	CComPtr<ITypeInfo> pTypeInfo;
	ATLENSURE_SUCCEEDED(pMainWindowDispatch->GetTypeInfo(0, LOCALE_USER_DEFAULT, &pTypeInfo));
	_tprintf(_T("pTypeInfo 0x%p\n"), pTypeInfo);
	CComPtr<ITypeLib> pTypeLib;
	UINT nTypeLibIndex;
	ATLENSURE_SUCCEEDED(pTypeInfo->GetContainingTypeLib(&pTypeLib, &nTypeLibIndex));
	_tprintf(_T("pTypeLib 0x%p, nTypeLibIndex %d\n"), pTypeLib, nTypeLibIndex);
	CComBSTR sName, sDocumentation;
	DWORD nHelpContext;
	CComBSTR sHelpPath;
	ATLENSURE_SUCCEEDED(pTypeLib->GetDocumentation(-1, &sName, &sDocumentation, &nHelpContext, &sHelpPath));
	_tprintf(_T("sName \"%s\", sDocumentation \"%s\"\n"), CString(sName), CString(sDocumentation));
	TLIBATTR* pLibAttr;
	ATLENSURE_SUCCEEDED(pTypeLib->GetLibAttr(&pLibAttr));
	OLECHAR pszTypeLibraryIdentifier[64];
	ATLVERIFY(StringFromGUID2(pLibAttr->guid, pszTypeLibraryIdentifier, _countof(pszTypeLibraryIdentifier)));
	_tprintf(_T("pLibAttr->guid %ls, lcid 0x%04X, syskind %d, wMajorVerNum %d, wMinorVerNum %d, wLibFlags 0x%X\n"), 
		pszTypeLibraryIdentifier, 
		pLibAttr->lcid,
		pLibAttr->syskind,
		pLibAttr->wMajorVerNum,
		pLibAttr->wMinorVerNum,
		pLibAttr->wLibFlags,
		0);
	//pTypeLib->ReleaseTLibAttr
	#pragma endregion
	CComVariant vVisible;
	ATLENSURE_SUCCEEDED(pMainWindowDispatch.GetPropertyByName(L"Visible", &vVisible));
	_tprintf(_T("vVisible.vt 0x%X\n"), vVisible.vt);
	_tprintf(_T("\n"));
}

int _tmain(int argc, _TCHAR* argv[])
{
	_ATLTRY
	{
		ATLENSURE_SUCCEEDED(CoInitialize(NULL));
		CLSID ClassIdentifier9, ClassIdentifier10;
		ATLENSURE_SUCCEEDED(CLSIDFromProgID(L"VisualStudio.DTE.9.0", &ClassIdentifier9));
		ATLENSURE_SUCCEEDED(CLSIDFromProgID(L"VisualStudio.DTE.10.0", &ClassIdentifier10));
		_tprintf(_T("Trying VisualStudio.DTE.9.0\n"));
		Try(ClassIdentifier9);
		_tprintf(_T("Trying VisualStudio.DTE.10.0\n"));
		Try(ClassIdentifier10);
	}
	_ATLCATCH(Exception)
	{
		_tprintf(_T("Exception 0x%08X\n"), (HRESULT) Exception);
	}
	return 0;
}

