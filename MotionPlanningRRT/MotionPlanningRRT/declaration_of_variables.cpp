#include "stdafx.h" // uncomment if using Visual Studio
#include <iostream> // for std::cout and std::endl


void declaration_of_variables(const long long N, const int ndim, double Qi[])
{
	double **Sbound = new double*[2];// allocate array of 2 pointers these are rows
	for (int i1 = 0; i1 < 2; ++i1){ Sbound[i1] = new double[ndim]; }
	Sbound[0][0] = 0 ; Sbound[0][1] = 0;
	Sbound[1][0] = 10; Sbound[1][1] = 10;
	
	//double G[N][ndim];
	double **G = new double*[N];
	for (int i1 = 0; i1 < N; ++i1){ G[i1] = new double[ndim]; }
	for (int i1 = 0; i1 < ndim; ++i1)
	{
		G[0][i1] = Qi[i1];
	}
	//double U[N][2];
	double **U = new double*[N];
	for (int i1 = 0; i1 < N; ++i1){ U[i1] = new double[2]; }
	

}