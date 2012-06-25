#include "stdafx.h"

HHOOK hKeyboardHook = 0;

LRESULT CALLBACK KeyboardCallback(int code,WPARAM wParam,LPARAM lParam) {  
  cout << "a key was pressed" << endl;
  return CallNextHookEx(hKeyboardHook,code,wParam,lParam);
}

int main() {
  HWND consoleWindow = GetConsoleWindow();
  HINSTANCE hInstCons = (HINSTANCE)GetWindowLong( consoleWindow, GWL_HINSTANCE );

  // NOTE: This has to be NULL
  hInstCons = NULL;

  hKeyboardHook = SetWindowsHookEx( WH_KEYBOARD, (HOOKPROC)KeyboardCallback, hInstCons, GetCurrentThreadId());
  _tprintf(_T("consoleWindow 0x%p, hInstCons 0x%p, hKeyboardHook 0x%p\n"), consoleWindow, hInstCons, hKeyboardHook);

  MessageBox(NULL, _T("It is keyboard time!"), _T("Let's Go"), MB_OK);

  //for(int i=0; i<=10; i++) {
  //  cout << i << endl;
  //  Sleep(1000);
  //}
}
