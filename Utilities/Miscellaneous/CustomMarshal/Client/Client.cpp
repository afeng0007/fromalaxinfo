////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2013
// Created by Roman Ryltsov roman@alax.info

#include "stdafx.h"
#include "..\Server\Server_i.h"
#include "..\Server\Server_i.c"

int _tmain(int argc, _TCHAR* argv[])
{
	CSingleThreadedApartment SingleThreadedApartment;
	CComPtr<IFoo> pFooA;
	__C(pFooA.CoCreateInstance(CLSID_Foo));
	__C(pFooA->put_Value(CComVariant(_T("Test"))));
	_Z4(atlTraceGeneral, 4, _T("Before CoMarshalInterThreadInterfaceInStream\n"));
	CComPtr<IStream> pStream;
	__C(CoMarshalInterThreadInterfaceInStream(__uuidof(IFoo), pFooA, &pStream));
	_Z4(atlTraceGeneral, 4, _T("After CoMarshalInterThreadInterfaceInStream\n"));
	_Z4(atlTraceGeneral, 4, _T("Before CoGetInterfaceAndReleaseStream\n"));
	CComPtr<IFoo> pFooB;
	__C(CoGetInterfaceAndReleaseStream(pStream, __uuidof(IFoo), (VOID**) &pFooB));
	_Z4(atlTraceGeneral, 4, _T("After CoGetInterfaceAndReleaseStream\n"));
	CComVariantArray vValue;
	__C(pFooB->get_Value(&vValue));
	return 0;
}

