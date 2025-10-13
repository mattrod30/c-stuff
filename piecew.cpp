
#include <iostream>
using namespace std;

bool runAgain(void);
double f(double x);

int main() {
	double userX;

	cout << "\nPiecewise defined Function\n" << endl;

	do {
		cout << "enter an x-value : ";
		cin >> userX;

		cout << "f(" << userX << ") = " << f(userX) << endl;
	} while (runAgain());
	
	cout << "Thank you!" << endl;

	return 0;
}

double f(double x) {
	double answer;
	if (x > 0) {
		answer = 2 * x * x - 1;
	}
	else if (x < 0) {
		answer = -1 * x + 1;
	}
	else {
		answer = 3;
		return answer;
	}
}

bool runAgain(void) {
	char userResponse;

	cout << "\nWould you like to run again (y or n): ";
	cin >> userResponse;
	cin.ignore(); // to clean up the input stream

	if (userResponse == 'y' || userResponse == 'Y')
		return(true);

	return(false);
}