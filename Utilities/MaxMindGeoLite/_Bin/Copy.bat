@set A=MaxMindGeoLite
@set B=Release
@set C=dll
copy /b /y "Win32\%B%\%A%.%C%" %A%-Win32.%C%"
copy /b /y "x64\%B%\%A%.%C%" "%A%-x64.%C%"
copy /b /y "Win32\%B%\%A%.pdb" %A%-Win32.pdb"
copy /b /y "x64\%B%\%A%.pdb" "%A%-x64.pdb"
rem @set C=tlb
rem copy /b /y "Win32\%B%\%A%\%A%.%C%" %A%-Win32.%C%"
rem copy /b /y "x64\%B%\%A%\%A%.%C%" "%A%-x64.%C%"
