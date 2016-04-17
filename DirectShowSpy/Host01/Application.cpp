#include <SDKDDKVer.h>
#include <stdio.h>
#include <tchar.h>
#include <windows.h>
//#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS
//#include <atlbase.h>
//#include <atlstr.h>

int _tmain(int argc, _TCHAR* argv[])
{
	const HMODULE hModule = LoadLibrary(_T("DirectShowSpy.dll"));
	typedef HRESULT (STDMETHODCALLTYPE *FUNCTION)(HWND hParentWindow, HINSTANCE, LPSTR pszCommandLine, INT nShowCommand);
	const FUNCTION pFunction = (FUNCTION) GetProcAddress(hModule, "DoMediaSampleTracePropertySheetModal");
	(pFunction)(NULL, NULL, "", SW_SHOWNORMAL);
	FreeLibrary(hModule);
	return 0;
}

