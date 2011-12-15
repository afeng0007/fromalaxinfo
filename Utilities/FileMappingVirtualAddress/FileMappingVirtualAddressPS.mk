
FileMappingVirtualAddressps.dll: dlldata.obj FileMappingVirtualAddress_p.obj FileMappingVirtualAddress_i.obj
	link /dll /out:FileMappingVirtualAddressps.dll /def:FileMappingVirtualAddressps.def /entry:DllMain dlldata.obj FileMappingVirtualAddress_p.obj FileMappingVirtualAddress_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del FileMappingVirtualAddressps.dll
	@del FileMappingVirtualAddressps.lib
	@del FileMappingVirtualAddressps.exp
	@del dlldata.obj
	@del FileMappingVirtualAddress_p.obj
	@del FileMappingVirtualAddress_i.obj
