#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

void printArray(int arg[], const int n);
int bubbleSort(int arg[], const int n);

int main(void){
	srand(time(0));

	const int size = 10;
	int a[size];
	int numSwaps;
	int runs = 50000;
	int total = 0;

	for (int r = 0; r < runs; r++) {
		for (int i = 0; i < size; i++) {
			a[i] = rand() % 51;

		}
		//printArray(a, size);
		numSwaps = bubbleSort(a, size);
		total = total + numSwaps;
		//printArray(a, size);
		//cout << numSwaps << " swaps were taken to sort this." << endl;



	}

	cout << "\nThe average number of swaps: " << 1.0*total / runs << endl;

	return 0;
}

void printArray(int arg[], const int n) {
	for (int i = 0; i < n; i++) {
		cout << arg[i] << " ";
	}
	cout << endl;
}

int bubbleSort(int arg[], const int n) {
	int count = 0;
	for (int i = 0; i < n - 1; i++) {
		bool swapped = false;
		for (int j = 0; j < n - 1 - i; j++) {
			if (arg[j] > arg[j + 1]) {
				swap(arg[j], arg[j + 1]);
				count++;
				swapped = true;
			}
	
		}
		if (!swapped)
			break;


	}
	return count;
}

