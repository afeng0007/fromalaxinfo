////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

class CServerModule : public ATL::CAtlDllModuleT< CServerModule >
{
public :
	DECLARE_LIBID(LIBID_ServerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_SERVER, "{23787BCF-B7F6-4E51-AC06-19C7479A4FB8}")
};

extern class CServerModule _AtlModule;
