#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

struct Point {
    double x, y;

    Point(double argX = 0.0, double argY = 0.0);
    void print(void);

};
double distance(Point argA, Point argB);

struct Triangle {
    Point a, b, c;

    Triangle(Point argA = {}, Point argB = {}, Point argC = {});
    void print();
};
int main(void) {

    Triangle x(Point(-2, 1), Point(3, 4), Point(2, 1));

    x.print();

    cout << "Distance between A and B: " << distance(x.a, x.b) << endl;


    return (0);
}
Triangle::Triangle(Point argA, Point argB, Point argC) {
    a = argA;
    b = argB;
    c = argC;
}
void Triangle::print() {
    cout << "Triangle formed by: " << endl;
    a.print();
    b.print();
    c.print();
}

double distance(Point argA, Point argB) {
    return sqrt(pow(argB.x - argA.x, 2) + pow(argB.y - argA.y, 2) );
}
Point::Point(double argX, double argY) {
    x = argX;
    y = argY;
}
void Point::print(void) {
    cout << "{" << x << " , " << y << ")" << endl;
}
