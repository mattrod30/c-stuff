#include <iostream>
using namespace std;

double discriminant(double a, double b, double c);

int main() {
    double a, b, c;

    cout << " Quadratic Equation Solver" << endl;
    cout << " Solve ax^2 + bx + c = 0" << endl;

    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

    cout << "\nYou entered the equation: "
        << a << "x^2 + " << b << "x + " << c << " = 0\n";

    if (a == 0) {
        cout << "This is not a quadratic equation (a cannot be 0)." << endl;
    }
    else {
        double disc = discriminant(a, b, c);

        if (disc > 0) {
            cout << "This equation has two real solutions." << endl;
        }
        else if (disc < 0) {
            cout << "This equation has two complex solutions." << endl;
        }
        else {
            cout << "This equation has one real solution." << endl;
        }
    }

    return 0;
}

double discriminant(double a, double b, double c) {
    return (b * b) - (4 * a * c);
}
