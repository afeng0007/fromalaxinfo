////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include <commctrl.h>
#include "resource.h"

#pragma comment(lib, "comctl32.lib")

int _tmain(int argc, _TCHAR* argv[])
{
	INITCOMMONCONTROLSEX Controls = { sizeof Controls, ICC_WIN95_CLASSES };
	ATLVERIFY(InitCommonControlsEx(&Controls));
	HICON hResourceIcon = LoadIcon(NULL, MAKEINTRESOURCE(IDI_MODULE));
	ICONINFOEX ResourceIconInformation = { sizeof ResourceIconInformation };
	ATLVERIFY(GetIconInfoEx(hResourceIcon, &ResourceIconInformation));
	ATLASSERT(ResourceIconInformation.hbmColor);
	BITMAP ResourceIconColorBitmap;
	ATLVERIFY(GetObject(ResourceIconInformation.hbmColor, sizeof ResourceIconColorBitmap, &ResourceIconColorBitmap) == sizeof ResourceIconColorBitmap);
	HDC hDc = CreateCompatibleDC(NULL);

	//HBITMAP hBitmap = CreateCompatibleBitmap(hDc, ResourceIconColorBitmap.bmWidth, ResourceIconColorBitmap.bmHeight);
	BITMAPINFO BitmapInformation;
	ZeroMemory(&BitmapInformation, sizeof BitmapInformation);
	BitmapInformation.bmiHeader.biSize = sizeof BitmapInformation.bmiHeader;
	BitmapInformation.bmiHeader.biWidth = ResourceIconColorBitmap.bmWidth;
	BitmapInformation.bmiHeader.biHeight = ResourceIconColorBitmap.bmHeight;
	BitmapInformation.bmiHeader.biPlanes = 1;
	BitmapInformation.bmiHeader.biBitCount = 24;
	VOID* pvBits;
	HBITMAP hBitmap = CreateDIBSection(hDc, &BitmapInformation, DIB_RGB_COLORS, &pvBits, NULL, 0);

	HGDIOBJ hPreviousBitmap = SelectObject(hDc, hBitmap);
	ATLVERIFY(DrawIcon(hDc, 0, 0, hResourceIcon));
	SelectObject(hDc, hPreviousBitmap);
	HIMAGELIST hImageList = ImageList_Create(ResourceIconColorBitmap.bmWidth, ResourceIconColorBitmap.bmHeight, ILC_COLORDDB, 1, 1);
	ATLASSERT(hImageList);
	INT nIndex = ImageList_Add(hImageList, hBitmap, NULL);
	HICON hIcon = ImageList_GetIcon(hImageList, nIndex, ILD_NORMAL);
	ATLASSERT(nIndex >= 0);
	#pragma region Test Output
	HDC hDesktopDc = GetDC(GetDesktopWindow());
	ATLVERIFY(DrawIcon(hDesktopDc, 1680, 0, hIcon)); // Runtime Icon
	ATLVERIFY(DrawIcon(hDesktopDc, 1680, ResourceIconColorBitmap.bmHeight, hResourceIcon)); // Resource Icon
	hPreviousBitmap = SelectObject(hDc, hBitmap);
	ATLVERIFY(BitBlt(hDesktopDc, 1680, 2 * ResourceIconColorBitmap.bmHeight, ResourceIconColorBitmap.bmWidth, ResourceIconColorBitmap.bmHeight, hDc, 0, 0, SRCCOPY));
	SelectObject(hDc, hPreviousBitmap);
	#pragma endregion 
	return 0;
}

