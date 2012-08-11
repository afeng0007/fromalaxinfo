////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"

template <INT t_nA> 
class CB 
{ 
};

template <typename CC> 
class CD 
{ 
};

class CE :
	public CD<CB<1> >
{
public:
	void G()
	{
	}
	void H()
	{
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	CE E;
	return 0;
}

