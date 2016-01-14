#include "stdafx.h" // uncomment if using Visual Studio
#include <iostream> // for std::cout and std::endl
#include "constants.h"

long long N = 5000; // number of possible iterations for RRT
const int ndim = 2; // # dimensions of the problem
//RobotCase = "SimpleCase";

double *Qi = new double[ndim];
double *Qg = new double[ndim];
double dQ = 2; // maximum length of the edges
double ConvDist = 1;// convergence distance
double dt = 0.1;

// dummy variables: parameters
int *parent = new int[N];




int near_node = 1;
bool found = 0;
double *Qrand = new double[ndim];
double *Qnear = new double[ndim];
double *Qnew  = new double[ndim];
double **Sbound = new double*[2];// allocate array of 2 pointers these are rows

// G saves the position vectors of the vertices from 1 to i
// i X ndim
//double G[N][ndim];
double **G = new double*[N];

//double U[N][2];
double **U = new double*[N];


void constants(){

		Qi[0] = 0; Qi[1] = 0; // initial state
		Qg[0] = 10; Qg[1] = 10; // goal state
		parent[0] = 0; parent[1] = 0;// initialize the first two
		// Sbound
		for (int i1 = 0; i1 < 2; ++i1){ Sbound[i1] = new double[ndim]; }
		Sbound[0][0] = 0; Sbound[0][1] = 0;
		Sbound[1][0] = 10; Sbound[1][1] = 10;
		//double G[N][ndim];
		for (int i1 = 0; i1 < N; ++i1){ G[i1] = new double[ndim]; }
		for (int i1 = 0; i1 < ndim; ++i1)
		{
			G[0][i1] = Qi[i1];
		}
		//double U[N][2];
		for (int i1 = 0; i1 < N; ++i1){ U[i1] = new double[2]; }
}