@set A=..\..\Repository-Private

@set B=DeflateTools
@set C=dll
copy /b /y "%A%\Utilities\%B%\_Bin\%B%-Win32.%C%" .
copy /b /y "%A%\Utilities\%B%\_Bin\%B%-x64.%C%" .

@set B=DeckLinkCapabilities
@set C=exe
copy /b /y "%A%\Utilities\%B%\_Bin\%B%-Win32.%C%" ".\Hardware Specific"
copy /b /y "%A%\Utilities\%B%\_Bin\%B%-x64.%C%" ".\Hardware Specific"

@set B=MatroxDsxCapabilities
@set C=exe
copy /b /y "%A%\Utilities\%B%\_Bin\%B%-Win32.%C%" ".\Hardware Specific"
copy /b /y "%A%\Utilities\%B%\_Bin\%B%-x64.%C%" ".\Hardware Specific"

@set B=DirectShowCaptureCapabilities
@set C=exe
copy /b /y "%A%\Utilities\%B%\_Bin\%B%-Win32.%C%" .
copy /b /y "%A%\Utilities\%B%\_Bin\%B%-x64.%C%" .

@set B=BuildOutputHelper
copy /b /y "%A%\Utilities\%B%\_Bin\Win32\Development Release Trace\%B%.exe" .

@set A=..\..\Repository-Public

@set B=LogProcessExceptions
copy /b /y "%A%\Utilities\%B%\_Bin\%B%-Win32.exe" .
copy /b /y "%A%\Utilities\%B%\_Bin\%B%-x64.exe" .

@set B=DirectShowSpy
copy /b /y "%A%\%B%\_Bin\%B%-Win32.dll" .
copy /b /y "%A%\%B%\_Bin\%B%-x64.dll" .
copy /b /y "%A%\%B%\_Bin\%B%-*.bat" .

@set B=StressEvr
copy /b /y "%A%\Utilities\%B%\_Bin\%B%-Win32.exe" .
copy /b /y "%A%\Utilities\%B%\_Bin\%B%-x64.exe" .

rem EmailTools, SupportTools
rem DirectShowTools
