// dllmain.h : Declaration of module class.

class CExcelControlModule : public ATL::CAtlDllModuleT< CExcelControlModule >
{
public :
	DECLARE_LIBID(LIBID_ExcelControlLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_EXCELCONTROL, "{05B243DB-460A-4ADB-BD8F-B8BBFECBB78C}")
};

extern class CExcelControlModule _AtlModule;
