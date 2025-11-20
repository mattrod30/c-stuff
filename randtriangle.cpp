#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <cstdlib> 
#include <ctime>   
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

int randomInt(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main(void) {
    srand(time(0)); 

    Triangle x(Point(-2, 1), Point(3, 4), Point(2, 1));
    x.print();
    cout << "Distance between A and B: " << distance(x.a, x.b) << endl;
    cout << "Distance between B and C: " << distance(x.b, x.c) << endl;
    cout << "Distance between A and C: " << distance(x.a, x.c) << endl;

    cout << "\n--- 50 Random Triangles ---\n";

    vector<Triangle> triangles;
    for (int i = 0; i < 50; i++) {
        Point p1(randomInt(-10, 10), randomInt(-10, 10));
        Point p2(randomInt(-10, 10), randomInt(-10, 10));
        Point p3(randomInt(-10, 10), randomInt(-10, 10));
        triangles.push_back(Triangle(p1, p2, p3));
    }

    for (int i = 0; i < triangles.size(); i++) {
        cout << "Triangle " << i + 1 << ":\n";
        triangles[i].print();
    }

    return 0;
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
    return sqrt(pow(argB.x - argA.x, 2) + pow(argB.y - argA.y, 2));
}

Point::Point(double argX, double argY) {
    x = argX;
    y = argY;
}

void Point::print(void) {
    cout << "(" << x << ", " << y << ")" << endl;
}
