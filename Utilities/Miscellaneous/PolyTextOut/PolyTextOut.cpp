////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2015
// Created by Roman Ryltsov roman@alax.info
// 
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#include "stdafx.h"
#include <windows.h>

HDC hDc;
POINT Position = { 2000, 750 };
SIZE Extent = { 400, 50 };

VOID Do(LPCTSTR pszText, BOOL bExtTextOut = FALSE)
{
	POLYTEXT pPolyTexts[1];
	pPolyTexts[0].x = Position.x;
	pPolyTexts[0].y = Position.y;
    pPolyTexts[0].n = (INT) _tcslen(pszText);
    pPolyTexts[0].lpstr = pszText;
    pPolyTexts[0].uiFlags = 0;
	SetRect(&pPolyTexts[0].rcl, Position.x, Position.y, Extent.cx, Extent.cy);
    pPolyTexts[0].pdx = NULL;
	if(bExtTextOut)
		for(auto&& PolyText: pPolyTexts)
			ExtTextOut(hDc, PolyText.x, PolyText.y, PolyText.uiFlags, &PolyText.rcl, PolyText.lpstr, PolyText.n, PolyText.pdx);
	else
		PolyTextOut(hDc, pPolyTexts, _countof(pPolyTexts));
}

int _tmain(int argc, _TCHAR* argv[])
{
	LOGFONT FontFormat;
	ZeroMemory(&FontFormat, sizeof FontFormat);
    FontFormat.lfHeight = -28;
	FontFormat.lfWeight = FW_SEMIBOLD;
    FontFormat.lfCharSet = DEFAULT_CHARSET;
	_tcscpy_s(FontFormat.lfFaceName, _T("Arial"));
	HFONT hFont = CreateFontIndirect(&FontFormat);
	hDc = GetDC(NULL);
	SelectObject(hDc, hFont);
	SetBkMode(hDc, OPAQUE);
	SetBkColor(hDc, RGB(0x00, 0x00, 0x00));
	SetTextColor(hDc, RGB(0x44, 0xFF, 0x44));
	Do(L"Мама мыла раму");
	Position.y += Extent.cy;
	Do(L"Mother washed window");
	Position.y += Extent.cy;
	Do(L"ママソープフレーム");
	Position.y -= 2 * Extent.cy;
	Position.x += Extent.cx;
	Do(L"Мама мыла раму", TRUE);
	Position.y += Extent.cy;
	Do(L"Mother washed window", TRUE);
	Position.y += Extent.cy;
	Do(L"ママソープフレーム", TRUE);
	// NOTE: Resource disposal ignored
	ReleaseDC(NULL, hDc);
	return 0;
}

