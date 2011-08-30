
EnumerateAudioDevicesps.dll: dlldata.obj EnumerateAudioDevices_p.obj EnumerateAudioDevices_i.obj
	link /dll /out:EnumerateAudioDevicesps.dll /def:EnumerateAudioDevicesps.def /entry:DllMain dlldata.obj EnumerateAudioDevices_p.obj EnumerateAudioDevices_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del EnumerateAudioDevicesps.dll
	@del EnumerateAudioDevicesps.lib
	@del EnumerateAudioDevicesps.exp
	@del dlldata.obj
	@del EnumerateAudioDevices_p.obj
	@del EnumerateAudioDevices_i.obj
