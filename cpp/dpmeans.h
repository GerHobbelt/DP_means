#pragma once

#include<Eigen/Dense>
#include<time.h>
#include<vector>

using namespace Eigen;
using namespace std;

class dpmeans
{

public:
	dpmeans(Matrix<float, Dynamic, Dynamic> X);  //n x d
	//~dpmeans();

	float kpp_init(Matrix<float,Dynamic,Dynamic> X, int k);
	VectorXi dpmeans_fit(Matrix<float, Dynamic, Dynamic> X);
	float compute_nmi(VectorXi z1, VectorXi z2);
	void display_params();

	int K;
	int K_init;
	int n;
	int d;

	VectorXi z;
	Matrix<float, Dynamic, Dynamic> mu;  //K x d
	float sigma;
	VectorXf nk;
	VectorXf pik;
	float lambda;
    
	int max_iter;
	vector<double> obj;
	vector<double> em_time;

private:

};