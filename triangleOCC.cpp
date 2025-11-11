#include<iostream>
#include<cmath>
using namespace std;

struct Point {
	double x, y;

	Point(double argX = 0.0, double argY = 0.0);
	void print(void);
	double distToOrigin(void);

};

int main(void) {
	Point A(-3, 2);
	Point B;
	A.print();
	cout << "Distance to origin: " << A.distToOrigin() << endl;
	cout << "Distance to origin: " << B.distToOrigin() << endl;


	return 0;
}
double distance(Point argA, Point argB) {
	return sqrt(pow(argB.x - argA.x, 2) + pow(argB.y - argA.y, 2) );
}
Point::Point(double argX, double argY) {
	if (argX < 0)
		x = -1 * argX;
	else
		x = argX;
	
	if (argY < 0)
		x = -1 * argY;
	else
	y = argY;
}
void Point::print(void) {
	cout << "(" << x << " , " << y << ")" << endl;
}

double Point::distToOrigin(void) {
	return sqrt(x * x + y * y);
}
