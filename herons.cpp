// Matthew Rodriguez
// 8/27/25
/* Calculate the area of a triangle using heron's formula */
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double triangleArea(double a, double b, double c);


int main(void) {
	double a, b, c;
	double area;

	cout << "\nHeron's Area of a Triangle\n" << endl;
	
	cout << "\nEnter side a: ";
	cin >> a;
	cout << "Enter side b: ";
	cin >> b;
	cout << "Enter side c: ";
	cin >> c;
	
	cout << "\nYou entered side A = " << a << endl;
	cout << "You entered side B = " << b << endl;
	cout << "You entered side C = " << c << endl;
	
	area = triangleArea(a, b, c);

	if (area == -1)
		cout << "\nNo Triangle Possible!" << endl;
	else
		cout << "\nArea = " << area << endl;




	return 0;
}
double triangleArea(double a, double b, double c) {
	// Fix the triangle inequality problem here
	if (a + b <= c)
		return -1;
	
	if (a + c <= b)
		return -1;
	
	if (b + c <= a)
		return -1;

	// do the math here!
	double s = (a + b + c) / 2;

	return  sqrt(s * (s - a) * (s - b) * (s - c));
}