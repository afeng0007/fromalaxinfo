#include "stdafx.h"
#include "..\Module_i.h"
#include "..\Module_i.c"

int _tmain(int argc, _TCHAR* argv[])
{
	CoInitialize(NULL);
	{
		CComPtr<IClassFactory> pClassFactory;
		const HRESULT nCoGetClassObjectResult = CoGetClassObject(CLSID_Foo, CLSCTX_ALL, NULL, __uuidof(IClassFactory), (VOID**) &pClassFactory);
		_tprintf(_T("nCoGetClassObjectResult 0x%08X\n"), nCoGetClassObjectResult);
		Sleep(10000);
		CComPtr<IFoo> pFoo;
		const HRESULT nCreateInstanceResult = pClassFactory->CreateInstance(NULL, __uuidof(IFoo), (VOID**) &pFoo);
		_tprintf(_T("nCreateInstanceResult 0x%08X\n"), nCreateInstanceResult);
	}
	CoUninitialize();
	return 0;
}

