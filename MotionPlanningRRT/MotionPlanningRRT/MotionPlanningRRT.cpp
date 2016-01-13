// those are geader files. you can collect all the declaration
// (not definition) in here
#include <stdafx.h> // Visual Studio users need to uncomment this line
#include <iostream> // for std::cout and std::endl
#include <time.h>       /* time */
#include "constants.h"

// forward definition of functions
void generateQrand(const int ndim, double Qg[], double Qrand[],
	               double **Sbound);

// Definition of function main()
int main()
{ 
	// std::cout << dice << std::endl;
	constants();
	// ----------- start the RRT -----------  
	for (int i1 = 1; i1 < N; ++i1){
		// generate Qrand
		generateQrand(ndim, Qg, Qrand, Sbound);
		//find Qnear
	}
	return 0;
}
