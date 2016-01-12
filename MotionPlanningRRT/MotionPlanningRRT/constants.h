#ifndef CONSTANTS_H

#define CONSTANTS_H
#include "stdafx.h" // uncomment if using Visual Studio
//namespace constants
//{
	// define robotcase named as RobotCase = 'SphericalPendulum';
	extern char RobotCase[];
	extern long long N; // number of possible iterations for RRT
	extern int ndim; // # dimensions of the problem
	extern double *Qi = new double[ndim]; // initial state
	extern double *Qg = new double[ndim]; // goal state
	extern double dQ; // maximum length of the edges


	extern double ConvDist;// convergence distance
	extern double dt;

	// dummy variables: parameters
	extern int *parent = new int[N];
	
	// G saves the position vectors of the vertices from 1 to i
	// i X ndim
	//double G[N][ndim];
	//double U[N][2];
	extern int near_node;
	extern bool found;
	extern double *Qrand = new double[ndim];

	extern double **Sbound;

//}
	
#endif
