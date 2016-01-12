// multiplefiles.cpp : Defines the entry point for the console application.
//

#include <stdafx.h>
#include <iostream> // for std::cout and std::endl
#include "common.h"

int global;
int function();

int main()
{
	global = 42;
	int x = function();
	std::cout << x << std::endl;
	return 0;
}
