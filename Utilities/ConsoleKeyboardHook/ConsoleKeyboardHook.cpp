#include "stdafx.h"

HHOOK hKeyboardHook = 0;

LRESULT CALLBACK KeyboardCallback(int code,WPARAM wParam,LPARAM lParam) {  
  cout << "a key was pressed" << endl;
  return CallNextHookEx(hKeyboardHook,code,wParam,lParam);
}

int main() {
  HWND consoleWindow = GetConsoleWindow();
  HINSTANCE hInstCons = (HINSTANCE)GetWindowLong( consoleWindow, GWL_HINSTANCE );
  hKeyboardHook = SetWindowsHookEx( WH_KEYBOARD, (HOOKPROC)KeyboardCallback, hInstCons, GetCurrentThreadId());

  MessageBox(NULL, _T("It is keyboard time!"), _T("Let's Go"), MB_OK);

  //for(int i=0; i<=10; i++) {
  //  cout << i << endl;
  //  Sleep(1000);
  //}
}
