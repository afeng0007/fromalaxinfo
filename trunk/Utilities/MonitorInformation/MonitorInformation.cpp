////////////////////////////////////////////////////////////
// MonitorInformation.cpp -

#include "stdafx.h"
#include <atlframe.h>
#include <atlctrls.h>
#include <atldlgs.h>
#include "resource.h"
#include "MainDialog.h"

CAppModule _Module;

INT WINAPI _tWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR, INT)
{
	ATLVERIFY(SUCCEEDED(CoInitialize(NULL)));
	DefWindowProc(NULL, 0, 0, 0);
	AtlInitCommonControls(ICC_BAR_CLASSES);	// add flags to support other controls
	ATLVERIFY(SUCCEEDED(_Module.Init(NULL, hInstance)));
	CMainDialog Dialog;
	Dialog.DoModal();
	_Module.Term();
	CoUninitialize();
	return 0;
}
