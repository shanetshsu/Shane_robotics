// those are geader files. you can collect all the declaration
// (not definition) in here
#include <cmath> // needed for pow() , fabs()
#include <stdafx.h> // <> is the header file from the compiler
#include <iostream> // for std::cout and std::endl
#include "add.h"  // "" is the header file for user supplied
#include "constants.h"
#define int_pi 3 // global scope value

// for user-supplied headers, you can add other directories eg "../../fem-matlab/a.h"
// try include path also


// Definition of function main()
int main()
{
	
	int a = 3;
	int b = 2; 
	b = b + 1;
	std::cout << add(a, b) + 2 << std::endl;
	std::cout << multiply(a, b) + 2 << std::endl;
	std::cout << "round of pi: " << int_pi << std::endl;



	// str2num
	char ch(97);
	std::cout << ch << std::endl;
	std::cout << static_cast<int>(ch) << std::endl;

	char ch2('9'); // char only holds one symbol
	std::cout << ch2 << std::endl;
	std::cout << static_cast<int>(ch2) << std::endl;

	// constant
	const double gravity{ 9.8 };
	std::cout << gravity << "\n" << std::endl;
	std::cout << constants::PI << "\n" << std::endl;
	

	// power
	double x1 = pow(3.0, 4.0);
	int    y1 = static_cast<int>(pow(3.0, 4.0));
	std::cout << x1 << std::endl;
	std::cout << y1 << std::endl;


	return 0;
}
