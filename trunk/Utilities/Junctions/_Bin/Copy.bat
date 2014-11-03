@set A=Junctions
rem @set B=Development Release Trace
@set B=Release
copy /b /y "Win32\%B%\%A%.exe" %A%-Win32.exe"
copy /b /y "x64\%B%\%A%.exe" "%A%-x64.exe"

@copy /b /y "%A%-Win32.exe" "%A%.exe"
