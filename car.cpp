#include <iostream>
#include <iomanip>
using namespace std;

bool runAgain(void);
float salesCommision(float amount, char job);

int main() {
	float salesPrice;
	char jobType;

	cout << "\nCommission Calculator\n" << endl;

	do {
		cout << "Enter the sale amount: ";
		cin >> salesPrice;

		cout << "Are you a salesperson (s) or loan officer (l)? ";
		cin >> jobType;

		cout << fixed << setprecision(2);
		if (jobType == 's') {
			cout << "\nSale: $" << salesPrice << " Job Type: " << jobType << endl;
			cout << "\nSalesman Commision: $" << salesCommision(salesPrice, jobType) << "\n";
		}
		else {
			cout << "you earn nothing!" << endl;

		}
	} while (runAgain());
}
float salesCommision(float amount, char job) {

	if (job == 's' || job == 'S') {
		if (amount <= 12000) {
			return amount * 0.021;
		}
		else if (amount > 12000 && amount <= 22000) {
			return amount * 0.029;
		}
		else {
			return amount * 0.032;
		}
	}
	if (job == 'l' || job == 'L') {
		if (amount <= 12000) {
			return amount * 0.005;
		}else if (amount > 12000 && amount <= 22000) {
			return amount * 0.007;
		}
		else {
			return amount * 0.01;

		}
	}
	
	return 0;
}
bool runAgain(void) {
		char userResponse;

		cout << "\nWould you like to run again? (y or n): ";
		cin >> userResponse;
		cin.ignore(); 

		if (userResponse == 'y' || userResponse == 'Y')
			return(true);

		return(false);
	}