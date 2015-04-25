////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2015
// Created by Roman Ryltsov roman@alax.info

class CJsFunctionDispatchModule : public ATL::CAtlDllModuleT< CJsFunctionDispatchModule >
{
public :
	DECLARE_LIBID(LIBID_JsFunctionDispatchLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_JSOBJECTDISPATCH, "{3A918D1E-5964-41E2-AA3F-82A589CB21DA}")
};

extern class CJsFunctionDispatchModule _AtlModule;
