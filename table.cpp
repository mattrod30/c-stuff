#include <iostream>
#include <cmath>
using namespace std;

double f(double x);
bool runAgain(void);

int main(void) {
    bool firstRun = true; 

    do {
        int start, end;

        if (firstRun) {
            cout << "Math Table for the function 5x^2 - x + 7 with x values -2 - 3: " << endl;
            start = -2;
            end = 3;
            firstRun = false; 
        }
        else {
            cout << "\nWhat is the smallest X value you wish to start the table with? ";
            cin >> start;
            cout << "\nWhat is the largest X value you wish to end the table with? ";
            cin >> end;
            cout << "\nNew math Table for the function 5x^2 - x + 7: " << endl;

        }

        cout << "\n\tx\t|\ty " << endl;
        cout << "\t-----------------" << endl;

        for (int n = start; n <= end; n++) {
            cout << "\t " << n << "\t|\t" << f(n) << endl;
        }

    } while (runAgain());

    return 0;
}

double f(double x) {
    return 5 * pow(x, 2) - x + 7;
}

bool runAgain(void) {
    char userResponse;

    cout << "\nWould you like a new table? (y or n): ";
    cin >> userResponse;
    cin.ignore();

    return (userResponse == 'y' || userResponse == 'Y');
}
