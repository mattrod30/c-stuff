#include<iostream>
#include<string>
#include<list>
using namespace std;

int stringToIndexHash(string userName, int buckets);
void printTable(list<string>arg[], const int n);

int main(void) {
	string userStr;
	int index;
	const int size = 3;
	list<string> a[size];

	while (true) {
		cout << "Enter a string: ";
		getline(cin, userStr);

		if (userStr == "") {
			break;
		}

		index = stringToIndexHash(userStr, size);
		a[index].push_back(userStr);
		a[index].sort();

		printTable(a, size);

	}

	return 0;
}

int stringToIndexHash(string userName, int buckets) {
	int sum = 0;
	for (int i = 0; i < userName.size(); i++) {
		sum += int(userName[i]);
	}
	return sum % buckets;
}

void printTable(list<string>arg[], const int n) {
	list<string>::iterator temp;
	for (int i = 0; i < n; i++) {
		cout << "Index " << i << ": ";
		for (temp = arg[i].begin(); temp != arg[i].end(); temp++) {
			cout << *temp << ", ";
		}
		cout << endl;
	}
}
