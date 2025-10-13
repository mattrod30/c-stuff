#include <iostream>
using namespace std;

bool runAgain(void);


int main() {
	int a;
	int sum = 0;
	cout << "\nMultiple Calculator\n" << endl;
	
	do {
		cout << "Type in an A value: ";
		cin >> a;

		cout << "for a =" << " " << a;

		sum = 0;

		cout << "\nThe multiples are: ";
		for (int i = 1; i <= 12; i++){
			int term = i * a;
			sum = sum + term;
		
			if (i == 12)
				cout << term << endl;
			else
				cout << term << ", ";

			

		
		}
		cout << "The sum is: " << sum << endl;

	} while (runAgain());
	return(0);
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