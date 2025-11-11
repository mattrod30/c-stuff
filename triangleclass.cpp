#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

bool isTriangle(double a, double b, double c);
double randomDouble(double min, double max);
string randomColor();

class Triangle {
public:
	double sideA, sideB, sideC;
	string color;
	Triangle(double a = 0, double b = 0, double c = 0, string col = "none");
	void printProperties(void);
	double area(void);
	double perimeter(void);
};
int main() {
	srand(time(0));
	const int SIZE = 50;
	Triangle description[SIZE];
	for (int i = 0; i < SIZE; i++) {
		double a, b, c;
		do {
			a = randomDouble(1.0, 10.0);
			b = randomDouble(1.0, 10.0);
			c = randomDouble(1.0, 10.0);
		} while (!isTriangle(a, b, c));
		description[i] = Triangle(a, b, c, randomColor());
	}
	for (int i = 0; i < SIZE; i++) {
		cout << "Triangle " << i + 1 << " - ";
		description[i].printProperties();
		cout << "Perimeter: " << description[i].perimeter();
		cout << "Area: " << description[i].area() << endl;
	}
	return 0;
}
bool isTriangle(double a, double b, double c) {
	return (a + b > c) && (a + c > b) && (b + c > a);
}
double randomDouble(double min, double max) {
	return min + (max - min) * (rand() / (double)RAND_MAX);
}
string randomColor() {
	string colors[] = { "Red", "Blue", "Green", "Yellow", "Purple", "Orange",
	"Black", "White" };
	int index = rand() % 8;
	return colors[index];
}
Triangle::Triangle(double a, double b, double c, string col) {
	sideA = a;
	sideB = b;
	sideC = c;
	color = col;
}
void Triangle::printProperties(void) {
	cout << fixed << setprecision(2);
	cout << "Sides: (" << sideA << ", " << sideB << ", " << sideC << ")"
		<< ", Color: " << color << endl;
}
double Triangle::area(void) {
	double s = (sideA + sideB + sideC) / 2;
	return sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
}
double Triangle::perimeter(void) {
	return sideA + sideB + sideC;
}
