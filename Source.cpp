#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

float f(float x);

int main() {
    float xValue;
    cout << "For function: f(x) = 3x^2 - 2x + 1\n";

    cout << "Enter an x value: ";
    cin >> xValue;

    cout << fixed << setprecision(2);
    float answer = f(xValue); 
    cout << "Result: f(" << xValue << ")" << "= 3("<<xValue<<")^2 - 2("<<xValue<<") + 1 = ("<<answer<<")";

    return 0;
}

float f(float x) {
    return 3 * pow(x, 2) - (2 * x) + 1;
}