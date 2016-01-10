#ifndef CONSTANTS_H
#define CONSTANTS_H
#include "stdafx.h" // uncomment if using Visual Studio
namespace constants
{
	// define robotcase named as RobotCase = 'SphericalPendulum';

	const long long N = 5000; // number of possible iterations for RRT
	const int ndim = 4; // # dimensions of the problem
	double Qi[ndim] = { 0.9, 0.1, 0.9, 0 }; // initial state
	double Qg[ndim] = { 1.5, 0.1, 0.9, 0 }; // goal state
	double dQ = 0.4; // maximum length of the edges
	double Sbound[2][ndim] = {
			   { 0.9-0.1, - 0.2,  0.9 - 0.1, - 0.1 },
			   { 0.9+0.1,   0.2,  0.9 + 0.1,   0.1 }  };
	const double ConvDist = 0.04;// convergence distance
	const double dt = 0.1;

	// dummy variables: parameters
	int parent[N] = {1,1};// initialize the first two
	
	// G saves the position vectors of the vertices from 1 to i
	// i X ndim
	double G[N][ndim];
	double U[N][2];
	int near_node = 1;
	bool found = 0;
	double Qrand[ndim];
}

#endif