////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2006-2014
// Created by Roman Ryltsov roman@alax.info
//
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#define __IDxtCompositor_INTERFACE_DEFINED__
#define __IDxtAlphaSetter_INTERFACE_DEFINED__
#define __IDxtJpeg_INTERFACE_DEFINED__
#define __IDxtKey_INTERFACE_DEFINED__
#include "C:\SDK-6.1\Include\qedit.h"

//#import "libid:B9EC374B-834B-4DA9-BFB5-C1872CE736FF" no_namespace raw_interfaces_only
#include "rofiles.h"
#include "rodshow.h"

#pragma once

////////////////////////////////////////////////////////////
// CModule

class CModule : 
	public CAtlExeModuleT<CModule>
{
public:

private:
	static CEvent g_TerminationEvent;

public:
	CPath m_sPath;

public:
// CModule
	CModule()
	{
		AtlTraceSetDefaultSettings();
		_Z4_THIS();
	}
	~CModule()
	{
		_Z4_THIS();
	}
	HRESULT PreMessageLoop(INT nShowCommand)
	{
		__C(__super::PreMessageLoop(nShowCommand));
		return S_OK;
	}
	BOOL InternalHandlerRoutine(DWORD nType)
	{
		_tprintf(_T("Stopping...\n"));
		_W(g_TerminationEvent.Set());
		return TRUE;
	}
	static BOOL WINAPI HandlerRoutine(DWORD nType)
	{
		return static_cast<CModule*>(_pAtlModule)->InternalHandlerRoutine(nType);
	}
	VOID RunMessageLoop()
	{
		CComPtr<IMediaDet> pMediaDet;
		__C(pMediaDet.CoCreateInstance(CLSID_MediaDet));
		__C(pMediaDet->put_Filename(CComBSTR(m_sPath)));
		CHeapPtr<BITMAPINFOHEADER> pBitmapInfoHeader;
		__D(pBitmapInfoHeader.AllocateBytes(8 << 20), E_OUTOFMEMORY); // 8 MB
		__C(pMediaDet->GetBitmapBits(15.0, NULL, (char*) (BITMAPINFOHEADER*) pBitmapInfoHeader, 640, 480));
		AtlMessageBox(GetActiveWindow(), _T("Break In"), _T("Debug"), MB_OK);
		BITMAPFILEHEADER FileHeader;
		ZeroMemory(&FileHeader, sizeof FileHeader);
		FileHeader.bfType = 'MB';
		FileHeader.bfOffBits = sizeof FileHeader + sizeof *pBitmapInfoHeader;
		FileHeader.bfSize = FileHeader.bfOffBits + pBitmapInfoHeader->biSizeImage;
		CAtlFile File;
		static LPCTSTR g_pszBitmapPath = _T("D:\\Output.bmp");
		__C(File.Create(g_pszBitmapPath, GENERIC_WRITE, FILE_SHARE_READ, CREATE_ALWAYS));
		__C(File.Write(&FileHeader, sizeof FileHeader));
		__C(File.Write(pBitmapInfoHeader, FileHeader.bfSize - sizeof FileHeader));
		//__E(g_TerminationEvent.Create(NULL, TRUE, FALSE, NULL));
		//__E(SetConsoleCtrlHandler(&CModule::HandlerRoutine, TRUE));
		//...
	}
};

__declspec(selectany) CEvent CModule::g_TerminationEvent;
