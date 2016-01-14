#include "stdafx.h" // uncomment if using Visual Studio
#include <iostream> // for std::cout and std::endl
#include <math.h> 
double euclidean_distance2(const int ndim, double a[], double b[]);

bool update_tree_and_check_convergence(const int ndim, double **G,
	double Qnew[], int iter, int near_node, int parent[], double Qg[],
	double ConvDist, long long N, double **U,bool found)
{
	for (int i1 = 0; i1 < ndim; ++i1){ G[iter][i1] = Qnew[i1]; }
	parent[iter] = near_node;
	if (sqrt(euclidean_distance2(ndim, Qnew, Qg)) < ConvDist)
	{
		std::cout << "found the solution.." << std::endl;
		found = 1;
	}
	if (iter % 2500 == 0){ std::cout << "iteration "<<iter << std::endl; }
	return found;
}