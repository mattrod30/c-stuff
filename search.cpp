#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& v, int first, int last, int target, int&count);
int linearSearch(vector<int>& v, int first, int last, int target, int& count);

void printVec(vector<int>& v);

int main() {
	int a[5] = { 5, 10, 15, 20, 25};
	vector<int>myVec;
	char userInput;
	int target;
	int numCompares;

	do {
		myVec.clear();                
		for (int i = 1; i <= 100; i++) {
			myVec.push_back(2 * i);
		}
		printVec(myVec);

		cout << "\nEnter search target: ";
		cin >> target;

		numCompares = 0;
		cout << "Target found at index: " << binarySearch(myVec, 0, myVec.size() - 1, target, numCompares) << endl;
		cout << "Binary Search compares: " << numCompares << endl;
		numCompares = 0;
		cout << "Target found at index: " << linearSearch (myVec, 0, myVec.size() - 1, target, numCompares) << endl;		cout << "Linear Search compares: " << numCompares << endl;
		cout << "Linear Search compares: " << numCompares << endl;



		cout << "\nRun again? (y or n): ";
		cin >> userInput;

	} while (userInput == 'Y' || userInput == 'y');

	return 0;
}

int binarySearch(vector<int>& v, int first, int last, int target, int& count){
	int index;

	count++;
	if (first > last)
		index = -1;

	else {

		int mid = first + (last - first) / 2;
		count++;
		if (target == v[mid])
			index = mid;
		else {
			if (target < v[mid])
				index = binarySearch(v, first, mid - 1, target, count);
			else
				index = binarySearch(v, mid + 1, last, target, count);
		}
	}

	return(index);
}

int linearSearch(vector<int>& v, int first, int last, int target, int& count){
	count = 0;
	for (int i = first; i <= last; i++) {
		count++;

		count++;
		if (v[i] == target) {
			return i;
		}
	}
	return -1;
}
 
void printVec(vector<int>& v) {
for (int i = 0; i < v.size() ; i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}
