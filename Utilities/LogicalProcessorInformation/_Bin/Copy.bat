@set A=LogicalProcessorInformation
copy /b /y Win32\Release\%A%.exe %A%-Win32.exe
copy /b /y x64\Release\%A%.exe %A%-x64.exe