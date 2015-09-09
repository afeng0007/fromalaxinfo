#include "targetver.h"
#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <thread>

int _tmain(int argc, _TCHAR* argv[])
{
	for(int index = 0; ; index++)
	{
		if(index & 1)
			std::cerr << "Line " << index << std::endl;
		else
			std::cout << "Line " << index << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}
	return 0;
}

