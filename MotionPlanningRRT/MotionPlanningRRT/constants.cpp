#include "stdafx.h" // uncomment if using Visual Studio
#include <iostream> // for std::cout and std::endl
#include "constants.h"

void constants()
{
	//using namespace constants;


	//RobotCase = "SimpleCase";

	long long N = 500; // number of possible iterations for RRT
	int ndim = 2; // # dimensions of the problem
	//double Qi[ndim] = { 0, 0 };
	// double *Qi = new double[ndim];
	Qi[0] = 0; Qi[1] = 0; // initial state
	double *Qg = new double[ndim];
	Qg[0] = 10; Qg[1] = 10; // goal state
	double dQ = 0.4; // maximum length of the edges
	//double Sbound[2][ndim] = {
	//		   { 0, 0 },
	//		   { 10, 10 }  };


	double ConvDist = 0.04;// convergence distance
	double dt = 0.1;

	// dummy variables: parameters
	int *parent = new int[N];
	parent[0] = 1; parent[1] = 1;// initialize the first two

	// G saves the position vectors of the vertices from 1 to i
	// i X ndim
	//double G[N][ndim];
	//double U[N][2];
	int near_node = 1;
	bool found = 0;



	double **Sbound = new double*[2];// allocate array of 2 pointers these are rows
	for (int i1 = 0; i1 < 2; ++i1){ Sbound[i1] = new double[ndim]; }
	Sbound[0][0] = 0; Sbound[0][1] = 0;
	Sbound[1][0] = 10; Sbound[1][1] = 10;

	//double G[N][ndim];
	//double **G = new double*[N];
	//for (int i1 = 0; i1 < N; ++i1){ G[i1] = new double[ndim]; }
	//for (int i1 = 0; i1 < ndim; ++i1)
	//{
	//	G[0][i1] = Qi[i1];
	//}
	////double U[N][2];
	//double **U = new double*[N];
	//for (int i1 = 0; i1 < N; ++i1){ U[i1] = new double[2]; }


}