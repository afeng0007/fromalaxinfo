
DispEventSample03ps.dll: dlldata.obj DispEventSample03_p.obj DispEventSample03_i.obj
	link /dll /out:DispEventSample03ps.dll /def:DispEventSample03ps.def /entry:DllMain dlldata.obj DispEventSample03_p.obj DispEventSample03_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del DispEventSample03ps.dll
	@del DispEventSample03ps.lib
	@del DispEventSample03ps.exp
	@del dlldata.obj
	@del DispEventSample03_p.obj
	@del DispEventSample03_i.obj
