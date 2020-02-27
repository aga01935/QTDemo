#include <iostream>
#include <math.h>
#include  <complex>
using namespace std;

complex<double> findTrace(complex<double> matrix [3][3])
{
  complex<double> trace=0;
  trace = matrix[0][0] + matrix[1][1] + matrix[2][2];
  cout<<"Trace of matrix: "<<trace<<endl;
  return trace;
}

complex<double> matrixForm [3][3](complex<double> list[9])
{
  double matrix [3][3];
  for(int i=0; i < list.length();i++)
  {	
    int l = i/3;
    int j = i%3;
    matrix[l][j] = list[i];
  }
  return matrix;
}

complex<double> rapidity(complex<double> vector vec[4])
{
	complex<double> rapid = 0.5*log((vec[0] + vec[3])/(vec[0] - vec[3]));
	return rapid;
}

int dimensions(complex<double> matrix[3][3])
{
	int dim = 9;
	return dim;
}

complex<double> [3][3] adj(complex<double> matrix [3][3])
{
  double adjoint [3][3];
  for(int i=0; i<3; i++)
  {
		for(int j=0; j<3; j++)
	  {
	  	adjoint[i][j] = conj(matrix[j][i]);
	  }
	}
	return adjoint;
}
double dot(double a [4][4], double b [4][4], gee)
{
  int[4][4] gee{{1,0,0,0},{0,-1,0,0},{0,0,-1,0},{0,0,0,1}};
	double dp = a[0][0]*gee[0][0]*b[0][0] + a[1][1]*gee[1][1]*b[1][1] + a[2][2]*gee[2][2]*b[2][2] + a[3][3]*gee[3][3]*b[3][3];
  return dp;
}

double hatr[3](double phi, double theta)
{
	double[3] r_unit = {cos(phi)*sin(theta),sin(phi)*sin(theta),cos(theta)};
  return r_unit;
}

int main() 
{
  return 0;
}
