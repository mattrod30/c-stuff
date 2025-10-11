/*
Matthew Rodriguez
9/5/25

This is a temperature converter from degrees celsius to degrees fahrenheit. With a function, the user types celsius temperature number they would like to see in 
degrees fahrenheit, and the computer will use the celsius to fahrenheit converter formula C (stands for degrees celsius) * 9 / 5 + 32. After this, the 
computer will display the temperature they are seeking to find in degrees fahrenheit.



*/
#include <iostream>
#include <iomanip>
using namespace std;

// function prototype
double cels(double fahr);

int main() {
	double celsTemp;

	cout << "Enter the temperature in degrees celsius: ";
	cin >> celsTemp;
	
	double fahrTemp = cels(celsTemp);
	cout << fixed << setprecision(1);
	cout << "The temperature in Fahrenheit is: " << fahrTemp << " degrees" << endl;



}

// Function implementation
double cels(double fahr) {
	return fahr * 9 / 5 + 32;
}