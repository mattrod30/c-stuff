#include<iostream>
#include<string>
#include<list>
#include<ctime>
using namespace std;

int hashFunction(int ID, int tableSize) {
	return (ID % tableSize);
}

void simplePrintTable(list<int>[], int);


int main(void) {
	srand(time(0));
	const int tableSize = 10;

	list<int> hashTable[tableSize];

	hashTable[0].push_back(555);
	hashTable[1].push_back(777);
	hashTable[2].push_back(888);

	for (int i = 0; i < 100; i++) {
		int value = rand();
		int key = hashFunction(value, tableSize);
		hashTable[key].push_back(value);
	}
	return 0;
}
