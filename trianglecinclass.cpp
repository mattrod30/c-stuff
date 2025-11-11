#include <iostream>
#include <string>
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
    double perimeter(void);
    double semiperimeter(void);
    double area(void);
};

int main(void) {

    Point A(-3, 2), B(3, 2), C(4, -5);
    
    Triangle mytri(A, B, C);

    mytri.print();

    cout << "\nPerimeter: " << mytri.perimeter() << endl;
    cout << "\nSemiperimeter: " << mytri.semiperimeter() << endl;
    cout << "\nArea: " << mytri.area() << endl;


    return(0);
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
double Triangle::perimeter(void) {
    double s1, s2, s3;
    s1 = distance(a, b);
    s2 = distance(a, c);
    s3 = distance(b, c);

    return s1 + s2 + s3;
}
double Triangle::semiperimeter(void) {
    return perimeter() / 2;

}
double Triangle::area(void) {
    double s = semiperimeter();
    double area = sqrt(s * (s - distance(a, b)) * (s - distance(a, c)) * (s - distance(b,c)) );
    return area;
}


double distance(Point argA, Point argB) {
    return sqrt(pow(argB.x - argA.x, 2) + pow(argB.y - argA.y, 2));
}

Point::Point(double argX, double argY) {
    x = argX;
    y = argY;
}
void Point::print(void) {
    cout << "(" << x << ", " << y << ")" << endl;
}
