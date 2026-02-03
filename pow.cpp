#include<iostream>
#include<cmath>
using namespace std;

double powIterative(double x, int n);
double powRecursive(double x, int n);


int main(void) {
	double xValue = 3.000;
	int exponent = 4;

	cout << powIterative(xValue, exponent);

	return 0;
}

double powIterative(double x, int n) {
	return pow(x, n);
}

double powRecursive(double x, int n) {
	return  
}
