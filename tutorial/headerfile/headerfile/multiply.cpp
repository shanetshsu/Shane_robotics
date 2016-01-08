#include <stdafx.h> // Visual Studio users need to uncomment this line

// Definition of function doPrint()
int multiply(int x, int y)
{   // pass by value
	// create a local copy of x and y that can only be seen in add() function
	// destroy after passing x+y back to main()
	return x * y;
}