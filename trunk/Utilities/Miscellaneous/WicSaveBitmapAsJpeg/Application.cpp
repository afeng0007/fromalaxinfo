////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2016
// Created by Roman Ryltsov roman@alax.info
// 
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#include "stdafx.h"
#include <wincodecsdk.h>
#include <atlbase.h>

#define __C ATLENSURE_SUCCEEDED

int _tmain(int argc, _TCHAR* argv[])
{
	CoInitialize(NULL);
	{
		HBITMAP hBitmap;
		{
			HDC hDc = GetDC(NULL);
			hBitmap = CreateCompatibleBitmap(hDc, 800, 600);
			HDC hBitmapDc = CreateCompatibleDC(hDc);
			HGDIOBJ hPreviousBitmap = SelectObject(hBitmapDc, hBitmap);
			BitBlt(hBitmapDc, 0, 0, 800, 600, hDc, 0, 0, SRCCOPY);
			SelectObject(hBitmapDc, hPreviousBitmap);
			DeleteDC(hBitmapDc);
			ReleaseDC(NULL, hDc);
		}
	    CComPtr<IWICImagingFactory> pFactory;
		__C(pFactory.CoCreateInstance(CLSID_WICImagingFactory));
	    CComPtr<IWICBitmap> pBitmap;
		__C(pFactory->CreateBitmapFromHBITMAP(hBitmap, NULL, WICBitmapIgnoreAlpha, &pBitmap));
	    CComPtr<IWICBitmapEncoder> pBitmapEncoder;
        __C(pFactory->CreateEncoder(GUID_ContainerFormatJpeg, NULL, &pBitmapEncoder));
	    CComPtr<IWICStream> pFileStream;
        __C(pFactory->CreateStream(&pFileStream));
		__C(pFileStream->InitializeFromFilename(L"D:\\Output.jpg", GENERIC_WRITE));
		__C(pBitmapEncoder->Initialize(pFileStream, WICBitmapEncoderNoCache));
	    CComPtr<IWICBitmapFrameEncode> pBitmapFrameEncode;
	    CComPtr<IPropertyBag2> pPropertyBag;
		__C(pBitmapEncoder->CreateNewFrame(&pBitmapFrameEncode, &pPropertyBag));
		PROPBAG2 Property;
		ZeroMemory(&Property, sizeof Property);
		Property.pstrName = L"ImageQuality";
		CComVariant vQuality(0.85f);
		__C(pPropertyBag->Write(1, &Property, &vQuality));
		__C(pBitmapFrameEncode->Initialize(pPropertyBag));
		__C(pBitmapFrameEncode->WriteSource(pBitmap, NULL));
		__C(pBitmapFrameEncode->Commit());
		__C(pBitmapEncoder->Commit());
	}
	CoUninitialize();
	return 0;
}

