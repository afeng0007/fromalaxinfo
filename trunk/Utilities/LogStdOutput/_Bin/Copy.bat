@set A=LogStdOutput
@set B=Release

copy /b /y "Win32\%B%\%A%.exe" %A%.exe"
copy /b /y "Win32\%B%\%A%.pdb" %A%.pdb"

rem copy /b /y "x64\%B%\%A%.exe" "%A%-x64.exe"
rem copy /b /y "x64\%B%\%A%.pdb" "%A%-x64.pdb"
