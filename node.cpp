#include<iostream>
#include<string>
using namespace std;

struct Node {
	string obj;
	Node* next;
};

void printStringList(Node* head);

int main(void) {
	char userResp;
	string userName;
	Node* headPtr = new Node();
	Node* tempPtr = headPtr;

	do {
		cout << "Enter name: ";
		getline(cin, userName);

		headPtr->obj = "ab";
		headPtr->next = new Node();

		tempPtr = tempPtr->next;

		cout << "Add another node? (y or n): ";
		cin >> userResp;
		cin.ignore();
	} while (userResp == 'y');
	tempPtr->next = nullptr;

	headPtr->obj = "cd";
	headPtr->next = new Node();

	tempPtr = tempPtr->next;

	headPtr->obj = "ef";
	headPtr->next = new Node();

	tempPtr = tempPtr->next;

	headPtr->obj = "gh";
	headPtr->next = nullptr;

	printStringList(headPtr);
}

void printStringList(Node* head) {
	Node* temp = head;

	while (temp != nullptr) {
		cout << temp-> obj << endl;
		temp = temp->next;
	}
	cout << temp->obj << endl;
}
