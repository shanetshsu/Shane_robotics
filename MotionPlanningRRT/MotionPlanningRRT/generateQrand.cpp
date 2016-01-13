
#include "stdafx.h" // uncomment if using Visual Studio
#include <stdlib.h>     /* srand, rand */
#include <iostream> // for std::cout and std::endl
void generateQrand(const int ndim, double Qg[],  double Qrand[],
	                 double **Sbound)
// double *Qg is idendical to double Qg[]
{
	double bias_threshold = 0.03;
	double rand01=0; // random number from 0 to 1
	double dice = static_cast<double>(rand()) / RAND_MAX;
	
	
	if (dice > bias_threshold)
	{
		for (int i1 = 0; i1 < ndim; ++i1){
			rand01 = static_cast<double>(rand()) / RAND_MAX;
			Qrand[i1] = Sbound[0][i1] + (Sbound[1][i1] - Sbound[0][i1])*rand01;
		}
	}
	else {
		for (int i1 = 0; i1 < ndim; ++i1)
			Qrand[i1] = Qg[i1];
	}

}