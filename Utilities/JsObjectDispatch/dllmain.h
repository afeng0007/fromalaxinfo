////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

class CJsObjectDispatchModule : public ATL::CAtlDllModuleT< CJsObjectDispatchModule >
{
public :
	DECLARE_LIBID(LIBID_JsObjectDispatchLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_JSOBJECTDISPATCH, "{5A0751CF-455E-45A9-BED6-D70D8935BE05}")
};

extern class CJsObjectDispatchModule _AtlModule;
