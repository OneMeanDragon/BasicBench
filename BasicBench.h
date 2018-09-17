#pragma once
#include <iostream>
#include <conio.h>
#include <chrono>

struct BasicBench
{
	std::chrono::time_point<std::chrono::steady_clock> starttime, endtime;
	std::chrono::duration<float> speedtime;

	BasicBench()
	{
		starttime = std::chrono::high_resolution_clock::now();
	}
	~BasicBench()
	{
		endtime = std::chrono::high_resolution_clock::now();
		speedtime = (endtime - starttime) * 1000.0f;

		//<add your print screen here>
		std::cout << speedtime.count() << "ms.\r\n";
	}
};
