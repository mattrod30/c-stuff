#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int maxInteger(int a[], int size);
int minInteger(int a[], int size);


int main() {
	const int size = 20;
	int randomNumbers[size];
	srand(time(0));

	for (int i = 0; i < size; i++) {
		randomNumbers[i] = rand() % 1000 + 1;
		cout << randomNumbers << endl;

	}
	int maxInt = maxInteger(randomNumbers, size);
	int minInt = minInteger(randomNumbers, size);
	cout << "The maximum is: " << maxInt << endl;
	cout << "The minimum is: " << minInt << endl;




	return 0;
}
int maxInteger(int a[], int size) {
	int max = a[0];
	for (int i = 1; i < size; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;

}
int minInteger(int a[], int size) {
	int min = a[0];
	for (int i = 1; i < size; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	return min;
}


