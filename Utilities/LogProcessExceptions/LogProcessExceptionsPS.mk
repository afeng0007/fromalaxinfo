
LogProcessExceptionsps.dll: dlldata.obj LogProcessExceptions_p.obj LogProcessExceptions_i.obj
	link /dll /out:LogProcessExceptionsps.dll /def:LogProcessExceptionsps.def /entry:DllMain dlldata.obj LogProcessExceptions_p.obj LogProcessExceptions_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del LogProcessExceptionsps.dll
	@del LogProcessExceptionsps.lib
	@del LogProcessExceptionsps.exp
	@del dlldata.obj
	@del LogProcessExceptions_p.obj
	@del LogProcessExceptions_i.obj
