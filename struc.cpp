#include <iostream>
#include <vector>
using namespace std;

struct Point {
    double x, y;
    void print() const {
        cout << "(" << x << ", " << y << ")\n";
    }
};

double f(double x);
void printVec(const vector<char>& arg);
void printPoints(const vector<Point>& arg);

int main() {
    vector<char> v;
    vector<Point> w;
    Point temp;
    int numPoints = 100;
    double startX = -10;
    double incX = 0.1;

    for (int i = 0; i < 5; i++) {
        v.push_back(char(97 + i));
    }
    printVec(v);

    for (int i = 0; i < numPoints; i++) {
        temp.x = startX + incX * i;
        temp.y = f(temp.x);
        w.push_back(temp);
    }
    printPoints(w);

    return 0;
}

double f(double x) {
    return x * x * x;
}

void printVec(const vector<char>& arg) {
    for (int i = 0; i < arg.size(); i++) {
        cout << "Contents: " << arg.at(i) << endl;
    }
}

void printPoints(const vector<Point>& arg) {
    for (int i = 0; i < arg.size(); i++) {
        arg.at(i).print();
    }
}
