@set A=PrintVideoCaptureSourceMediaTypes
@set B=Release
@set C=exe
copy /b /y "Win32\%B%\%A%.%C%" %A%-Win32.%C%"
copy /b /y "x64\%B%\%A%.%C%" "%A%-x64.%C%"