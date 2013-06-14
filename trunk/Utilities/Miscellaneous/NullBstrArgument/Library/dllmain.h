////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2013
// Created by Roman Ryltsov roman@alax.info

class CLibraryModule : public ATL::CAtlDllModuleT< CLibraryModule >
{
public :
	DECLARE_LIBID(LIBID_LibraryLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_LIBRARY, "{D9DB8B75-E20F-4C82-84B6-82DBD99D543C}")
};

extern class CLibraryModule _AtlModule;
