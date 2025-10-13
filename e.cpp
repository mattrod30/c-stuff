#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

bool runAgain(void);
int factorial(int n);

int main() {
    int n;
    float t, sum;
    cout << "\n Calculate e^t App\n" << endl;
    
    do {
        cout << "Enter an power t: ";
        cin >> t;
        cout << "Enter number of terms (13 max): ";
        cin >> n;

        sum = 0;

        for (int i = 0; i <= n; i++) {
            sum = sum + pow(t, i) / factorial(i);
        }

        cout << fixed << setprecision(1) << "e^" << t << " = ";
        cout << fixed << setprecision(3) << sum << endl;


    } while (runAgain());
    return (0);
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}
bool runAgain(void) {
    char userResponse;

    cout << "\nWould you like to run again (y or n): ";
    cin >> userResponse;
    cin.ignore();

    if (userResponse == 'y' || userResponse == 'Y')
        return(true);

    return(false);
}