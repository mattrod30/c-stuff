#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

// Class that defines the node object
class Node {
private:
	char item;
	Node* nextPtr;
public:
	//constructors
	Node();
	Node(char);
	Node(char, Node*);

	//Accessor Methods
	void setItem(char);
	char getItem();
	void setNextPtr(Node*);
	Node* getNextPtr();
};

void printCharList(Node* beginningNodePtr);

int main(void) {
	srand(time(0));

	Node* head = nullptr;
	Node* temp = nullptr;

	temp = new Node (char(97 + rand() % 26));
	head = temp;

	for (int i = 0; i < 99; i++) {
		char c = char(97 + rand() % 26);
		temp->setNextPtr(new Node(c));
		temp = temp->getNextPtr();
	}

	printCharList(head);

	temp = head;
	for (int i = 0; i < 100; i++) {
		head = temp->getNextPtr();
		delete temp;
		temp = head;
	}

	head = nullptr;
	temp = nullptr;

	printCharList(head);

	return (0);
}
void printCharList(Node* beginningNodePtr) {
	Node* tempNodePtr = beginningNodePtr;
	if (tempNodePtr == nullptr) {
		cout << "List Empty" << endl;
	}
	else {
		while (tempNodePtr != nullptr) {
			cout << tempNodePtr->getItem() << endl;
			tempNodePtr = tempNodePtr->getNextPtr();
		};
	}
	cout << "******************" << endl;
}
//Node Implementation
Node::Node()
{
	setItem('\0'); //default to empty char
	setNextPtr(nullptr); //default to null pointer
}

Node::Node(char arg)
{
	setItem(arg);
	setNextPtr(nullptr);
}

Node::Node(char arg, Node* argPtr)
{
	setItem(arg);
	setNextPtr(argPtr);
}

void Node::setItem(char arg)
{
	item = arg;
}

char Node::getItem()
{
	return item;
}

void Node::setNextPtr(Node* argPtr)
{
	nextPtr = argPtr;
}

Node* Node::getNextPtr()
{
	return nextPtr;
}
