#include<iostream>
#include<string>
using namespace std;

int stringToIndexHash(string userName, int buckets);

int main(void) {
	string userStr = "abc";
	int userInt = 10;

	cout << "Store at index: " << stringToIndexHash(userStr, userInt);


	return 0;
}

int stringToIndexHash(string userName, int buckets) {
	int sum = 0;
	for (int i = 0; i < userName.size(); i++) {
		sum += int(userName[i]);
	}
	return sum % buckets;
}
