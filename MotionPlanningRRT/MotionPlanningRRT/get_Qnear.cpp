
#include "stdafx.h" // uncomment if using Visual Studio
#include <iostream> // for std::cout and std::endl
double euclidean_distance2(const int ndim, double a[], double b[]);
int get_Qnear(const int ndim,int iter, double Qnear[], double Qrand[], double **G)
//void get_Qnear(const int ndim)
{
	
	for (int i1 = 0; i1 < ndim; ++i1){ Qnear[i1] = G[0][i1]; }
	double d = euclidean_distance2(ndim, Qrand, Qnear);
	int near_node = 0;
	double rho;
	double *vertex = new double[ndim];
	for (int i1 = 0; i1 < iter; ++i1)
	{
		for (int j1 = 0; j1 < ndim; ++j1){ vertex[j1] = G[i1][j1]; }

		rho = euclidean_distance2(ndim, Qrand, vertex);
		if (rho < d){
			for (int j1 = 0; j1 < ndim; ++j1){ Qnear[j1] = vertex[j1]; }
			d = rho;
			near_node = i1;
		}

	}
	return near_node;
}