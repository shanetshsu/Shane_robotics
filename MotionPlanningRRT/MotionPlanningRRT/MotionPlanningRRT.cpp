// those are geader files. you can collect all the declaration
// (not definition) in here
#include <stdafx.h> // Visual Studio users need to uncomment this line
#include <iostream> // for std::cout and std::endl
#include "constants.h"
#include <time.h>       /* time */

//
extern double **Sbound;
// forward definition of functions
void declaration_of_variables(const long long N, const int ndim, double Qi[]);
void generateQrand(const int ndim, double Qg[], double Qrand[],
	               double **Sbound);

// Definition of function main()
int main()
{ 
	// std::cout << dice << std::endl;
	using namespace constants;
	declaration_of_variables(N, ndim, Qi);
	//std::cout << Sbound[0][0] << std::endl;
	// ----------- start the RRT -----------  
	for (int i1 = 1; i1 < N; ++i1){
		// generate Qrand
		//generateQrand(ndim, Qg, Qrand, Sbound);
	    
		// find Qnear
	}
	return 0;
}
