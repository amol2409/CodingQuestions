#include<iostream>
#include<vector>
#include "common.hpp"

void logVec(std::vector<int> &vec)
{
	for(int x : vec)
	{
        std::cout << x << " ";
	}
	std::cout << std::endl;
}


