#include<iostream>
#include<string>
#include <cstdlib>
using namespace std;

struct circle {
	const float PI = 3.14159;
	double radius;
	double h, k;
	string units;
	string fillcolor;
	string strokecolor;

	double diameter(void);
	double circumference(void);
	double area(void);
	void print(void);
};

int main(void) {
	const int size = 10;
	circle a[size];

	string units[5] = { "cm", "in", "m", "mm", "ft" };
	string colors[5] = { "red", "green", "blue", "black", "white"};

	for (int i = 0; i < size; i++) {
		a[i].radius = rand() % 100;
		a[i].h = rand() % 10;
		a[i].k = rand() % 10;
		a[i].units = units[rand() % 5];
		a[i].fillcolor = colors[rand() % 5];
		a[i].strokecolor = colors[rand() % 5];
		a[i].print();
	}

	return(0);
}
void circle:: print(void) {
	cout << "(x- " << h << " , ) ^2 + (y - " << k << ")^2 " 
		<<  radius * radius << endl;
	cout << "Diameter: " << diameter() << " units " << units << endl;
	cout << "Circumference: " << circumference() << endl;
	cout << "Area: " << area() << endl;
	cout << "Color: " << fillcolor << " and stroke " << strokecolor << endl;

}
double circle::diameter(void) {
	return 2 * radius;
}
double circle::circumference(void) {
	return 2 * PI * radius;
}
double circle::area(void) {
	return PI * radius * radius;
}
