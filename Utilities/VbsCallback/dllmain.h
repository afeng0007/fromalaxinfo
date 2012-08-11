////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

class CVbsCallbackModule : 
	public ATL::CAtlDllModuleT<CVbsCallbackModule>
{
public:

DECLARE_LIBID(LIBID_AlaxInfoVbsCallback)
DECLARE_REGISTRY_APPID_RESOURCEID(IDR_MODULE, "{C1C6CD9F-B226-4BE2-9650-70939FD17AAF}")
};

extern class CVbsCallbackModule _AtlModule;
