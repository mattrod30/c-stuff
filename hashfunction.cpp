#include<iostream>
#include<string>
#include<vector>

using namespace std;

int hashFunction(string target) {
	return int(target[0]) - 97;
}
void printBucket(vector<string> arg, int index) {
	cout << "Bucket " << index << ": ";
	for (int i = 0; i < arg.size(); i++) {
		cout << arg.at(i) << " ";
	}
}

int main(void) {
	const int size = 26;
	vector<string> data[size];
	string target = "bill";

	data[0].push_back("aaron");
	data[1].push_back("bill");
	data[1].push_back("barry");
	data[1].push_back("bob");
	data[2].push_back("charley");
	data[3].push_back("derek");

	string userStr = "carrie";
	data[hashFunction(userStr)].push_back(userStr);

	for (int i = 0; i < size; i++) {
		printBucket(data[i], i);
		cout << endl;
	}

	//int index = hashFunction(target);
	//printBucket(data[index], index);
