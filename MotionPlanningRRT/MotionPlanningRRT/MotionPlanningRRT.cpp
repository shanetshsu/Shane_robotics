// those are geader files. you can collect all the declaration
// (not definition) in here
#include <stdafx.h> // Visual Studio users need to uncomment this line
#include <iostream> // for std::cout and std::endl
#include "constants.h"

// Definition of function main()
int main()
{
	using namespace constants;
	for (int i1 = 0; i1 < ndim; ++i1)
	{
		G[0][i1] = Qi[i1];
	}

	std::cout << N << std::endl;
	std::cout << G[0][0] << std::endl;
	std::cout << parent[2] << std::endl;
	return 0;
}
