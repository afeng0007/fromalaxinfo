
MfcWindowlessVideoRenderer01ps.dll: dlldata.obj MfcWindowlessVideoRenderer01_p.obj MfcWindowlessVideoRenderer01_i.obj
	link /dll /out:MfcWindowlessVideoRenderer01ps.dll /def:MfcWindowlessVideoRenderer01ps.def /entry:DllMain dlldata.obj MfcWindowlessVideoRenderer01_p.obj MfcWindowlessVideoRenderer01_i.obj \
		kernel32.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \
.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del MfcWindowlessVideoRenderer01ps.dll
	@del MfcWindowlessVideoRenderer01ps.lib
	@del MfcWindowlessVideoRenderer01ps.exp
	@del dlldata.obj
	@del MfcWindowlessVideoRenderer01_p.obj
	@del MfcWindowlessVideoRenderer01_i.obj
