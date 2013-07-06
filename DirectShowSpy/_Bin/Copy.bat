@set A=DirectShowSpy
@set B=Release Trace
copy /b /y "Win32\%B%\%A%.dll" %A%-Win32.dll
copy /b /y "Win32\%B%\%A%.pdb" %A%-Win32.pdb
copy /b /y "x64\%B%\%A%.dll" %A%-x64.dll
copy /b /y "x64\%B%\%A%.pdb" %A%-x64.pdb
