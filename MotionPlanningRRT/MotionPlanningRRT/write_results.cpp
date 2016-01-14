#include "stdafx.h" // uncomment if using Visual Studio
#include <fstream> // read and write file
#include <iostream> // for std::cout and std::endl
using namespace std;
void write_results(int ndim,int N, bool found,int near_node, int parent[],
	double Qi[], double Qg[],double **G, double **U){
	ofstream myfile("RRTresults.txt");
	if (myfile.is_open())
	{   
		myfile << ndim  << "\n";
		myfile << N     << "\n";
		myfile << found << "\n";
		myfile << near_node << "\n"; // this is the goal index
		//Qi
		for (int i1 = 0; i1 < ndim; ++i1){ myfile << Qi[i1] << " "; }
		myfile << "\n";
		//Qg
		for (int i1 = 0; i1 < ndim; ++i1){ myfile << Qg[i1]<< " "; }
		myfile << "\n";
		//G
		for (int i1 = 0; i1 < N; ++i1){
			for (int j1 = 0; j1 < ndim; ++j1){
				myfile << G[i1][j1] << " ";
			}
			myfile << "\n";
		}
		// parent
		for (int i1 = 0; i1 < N; ++i1){ myfile << parent[i1] << "\n"; }


		myfile.close();
	}
	else cout << "Unable to open file";

}

