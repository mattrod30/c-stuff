#include<iostream>
#include<string>
using namespace std;





int binarySearch(const string anArray[], int first, int last, string target);

int main(void) {
	const int size = 9;
	int a[size] = { 1, 6, 7, 12, 15, 22, 26, 41, 50 };
	string b[size] = { "Apple", "Orange", "Pineapple", "Grape", "Grapefruit", "Kiwi", "Avocado", "Strawberry", "Dragonfruit" };


	cout << binarySearch(b, 0, size, "Apple") << endl;


	return 0;
}


int binarySearch(const string anArray[], int first, int last, string target) {

	int index;
	if (first > last)
		index = -1;
	else {
		int mid = first + (last - first) / 2;
		if (target == anArray[mid])
			index = mid;
		else if (target < anArray[mid])
			index = binarySearch(anArray, first, mid - 1, target);
		else
			index = binarySearch(anArray, mid + 1, last, target);
	}

	return(index);
}
