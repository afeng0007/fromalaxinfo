////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2015
// Created by Roman Ryltsov roman@alax.info
// 
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

class CServerModule : public ATL::CAtlDllModuleT< CServerModule >
{
public :
	DECLARE_LIBID(LIBID_ServerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_SERVER, "{293DAE5C-3145-447E-AF10-783B2F649F50}")
};

extern class CServerModule _AtlModule;
