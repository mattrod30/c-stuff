#include<iostream>
using namespace std;

double average(double a[], const int size);
bool runAgain(void);


int main() {
	const int size = 5;
	double data[size];
	
	cout << "5-element array average calculator\n" << endl;
	
	do {for (int i = 0; i < size; i++) {
		cout << "Enter score " << (i + 1) << ": ";
		cin >> data[i];
	}
	double arrayAvg = average(data, size);
		cout << "\nThe average is: " << arrayAvg << endl;

	}while(runAgain());
	
	return (0);
}
double average(double a[], const int size) {
	double sum = 0;
	
	for (int i = 0; i < size; i++) {
		sum = sum + a[i];
	}
	return sum / size;
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