////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

class CVbsEventsModule : public ATL::CAtlDllModuleT< CVbsEventsModule >
{
public :
	DECLARE_LIBID(LIBID_VbsEventsLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_VBSEVENTS, "{FE0FC952-F3E7-42BA-B03B-83B4C4FBB498}")
};

extern class CVbsEventsModule _AtlModule;
