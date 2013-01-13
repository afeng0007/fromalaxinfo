@set A=EnumerateTreatAsClasses
@set B=.exe
copy /b "Win32\Release\%A%%B%" %A%-Win32%B%
copy /b "x64\Release\%A%%B%" %A%-x64%B%
@pause
