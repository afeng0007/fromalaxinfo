@set A=StressEvr
@set B=Release Trace
copy /b /y "Win32\%B%\%A%.exe" %A%-Win32.exe"
copy /b /y "x64\%B%\%A%.exe" "%A%-x64.exe"
