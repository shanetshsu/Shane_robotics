// HelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
// this is the library for writing to the screen and 
// getting input from a console user

// Every program must have a main() function.
int main()
{   // << is an output operator
	std::cout << "Hello world!" << std::endl;
	int i;
	for (i = 1; i++; i < 9999999){;}
	std::cout << "i equals to: " << i << std::endl;
	std::cout << "Hello world!" << std::endl;

	// practice for cin
	std::cout << "Enter a number: "; // ask user for a number
	int x ;
	std::cin >> x; // read number from console and store it in x
	std::cout << "You entered " << x << std::endl;

	// cout is in a namespace(a special container)
	// to avoid typing std:: everytime using cout, try
	// using std::cout;
	// or, more general case
	using namespace std;
	cout << "using cout without typing std::" << std::endl;
	//If a using declaration or directive is used within a function, 
	//the names in the namespace are only directly accessible within 
	//that function.That limits the chance for naming collisions to 
	//occur just within that function.However, if a using declaration 
	//or directive is used outside of a function, the names in the 
	//namespace are directly accessible anywhere in the entire file!
	//That can greatly increase the chance for collisions.


	return 0;
}