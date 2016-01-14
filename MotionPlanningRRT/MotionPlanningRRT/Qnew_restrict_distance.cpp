#include "stdafx.h" // uncomment if using Visual Studio
#include <iostream> // for std::cout and std::endl
#include <math.h> 
double euclidean_distance2(const int ndim, double a[], double b[]);

void Qnew_restrict_distance(const int ndim, double Qrand[], double Qnear[], double Qnew[],
	int near_node, double dQ){
	double d = euclidean_distance2(ndim, Qrand, Qnear);
	d = sqrt(d);
	// d is the closest distance between Qnear and Qrand
	// this may be the place you add constraint, naming is not accurate
	if (d <= dQ)
	{
		for (int i1 = 0; i1 < ndim; ++i1){ Qnew[i1] = Qrand[i1]; }
	}
	else
	{
		double *vec = new double[ndim];
		for (int i1 = 0; i1 < ndim; ++i1){ vec[i1] = Qrand[i1] - Qnear[i1]; }
		double norm_vec = 0;
		for (int i1 = 0; i1 < ndim; ++i1){ norm_vec = norm_vec + vec[i1] * vec[i1]; }
		norm_vec = sqrt(norm_vec);
		for (int i1 = 0; i1 < ndim; ++i1){ vec[i1] = vec[i1]/norm_vec; }
		double scale = dQ / d;
		for (int i1 = 0; i1 < ndim; ++i1){ Qnew[i1] = Qnear[i1] + vec[i1] * scale; }
	}

}