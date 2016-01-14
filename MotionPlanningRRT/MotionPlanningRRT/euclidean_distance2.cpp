#include "stdafx.h"
#include <iostream> // for std::cout and std::endl
#include <math.h> 
double euclidean_distance2(int ndim, double a[], double b[]){
	// return the square of the euclidean distance
	double d = 0;
	for (int i1 = 0; i1 < ndim; ++i1){
		d = d + pow(a[i1] - b[i1],2.0);
	}
	return d;
}