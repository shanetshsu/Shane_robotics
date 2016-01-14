// those are geader files. you can collect all the declaration
// (not definition) in here
#include <stdafx.h> // Visual Studio users need to uncomment this line
#include <iostream> // for std::cout and std::endl
#include <time.h>       /* time */
#include "constants.h"

// forward definition of functions
void generateQrand(const int ndim, double Qg[], double Qrand[],
	               double **Sbound);
int get_Qnear(const int ndim, int iter, double Qnear[], double Qrand[], 
	          double **G);
void Qnew_restrict_distance(const int ndim, double Qrand[], double Qnear[], 
	                        double Qnew[], int near_node, double dQ);
bool update_tree_and_check_convergence(const int ndim, double **G,
	double Qnew[], int iter, int near_node, int parent[], double Qg[],
	double ConvDist, long long N, double **U, bool found);
void write_results(int ndim, int N, bool found, int near_node, int parent[],
	double Qi[], double Qg[], double **G, double **U);
double euclidean_distance2(const int ndim, double a[], double b[]);
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
		near_node = get_Qnear(ndim, i1, Qnear, Qrand, G);
		// get Qnew by restrict distance
		Qnew_restrict_distance(ndim, Qrand, Qnear, Qnew, near_node, dQ);
		// update tree and check convergence
		found = update_tree_and_check_convergence(ndim, G,Qnew, i1, near_node,
			parent, Qg, ConvDist, N, U, found);
		// found the path
		if (found)
		{
			N = i1+1;
			break;
		}
	}
	// save the result
	write_results(ndim, N, found,near_node, parent,
		Qi, Qg, G, U);
	return 0;
}
