// those are geader files. you can collect all the declaration
// (not definition) in here
#include <stdafx.h> // Visual Studio users need to uncomment this line
#include <iostream> // for std::cout and std::endl

// Definition of function doPrint()
int add(int x, int y)
{   // pass by value
	// create a local copy of x and y that can only be seen in add() function
	// destroy after passing x+y back to main()
	return x+y;
}

int multiply(int x, int y);

// Definition of function main()
int main()
{
	int a = 3;
	int b = 2;
	std::cout << add(a,b)+2 << std::endl;
	std::cout << multiply(a, b) + 2 << std::endl;
	return 0;
}
