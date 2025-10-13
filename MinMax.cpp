#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int maxInteger(int a[], int size);

int main() {
	const int size = 20;
	int randomNumbers[size];
	srand(time(0));
	
	for (int i = 0; i < size; i++) {
		randomNumbers[i] = rand() % 100 + 1;

	}




	return 0;
}
int maxInteger(int a[], int size) {
	int min = a[0];
	int max = a[0];

	return 0;
}
