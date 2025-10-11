#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double pi = 3.14159;

//function prototype
double circumference(double radius);
double areaCircle(double radius);
int main(void) {
	double diameter, radius;

	cout << "Circle Calculator\n" << endl;
	
	cout << "Enter the circle's DIAMETER: ";
	cin >> diameter;

	radius = diameter / 2;

	cout << fixed << setprecision(1);
	cout << "\nCircumference: P = 2 * "<< pi << " * " << radius << " = " << circumference(radius) << " square units" << endl;
	cout << "\Area: A = " << pi << " * " << radius << "^2 = " << areaCircle(radius) << " square units" << endl;


}

// function implementation
double circumference(double radius) {
	return(2 * pi * radius);



	}


double areaCircle(double radius) {
	return (pi * pow(radius, 2));



}

