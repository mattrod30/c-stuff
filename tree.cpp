#include<iostream>
#include<string>

using namespace std;

class Node {
public:
	int data;
	Node* left;
	Node* right;

	void report(void);
};

class BinaryTree {
public:
	Node* root;


};

int main() {
	BinaryTree myTree;
	Node* temp;

	myTree.root = nullptr;
	temp = myTree.root;

	temp = new Node();
	temp->data = 8;
	temp->left = nullptr;
	temp->right = nullptr;

	myTree.root = temp;

	//populae left side of the tree
	temp->left = new Node();
	temp = temp->left;

	temp->data = 3;
	temp->left = nullptr;
	temp->right = nullptr;

	temp->left = new Node();
	temp = temp->left;//iterate

	temp->data = 1;
	temp->left = nullptr;
	temp->right = nullptr;

	temp = myTree.root; //back to the top
	temp = temp->left;

	temp->right = new Node();
	temp = temp->right;

	temp->data = 6;
	temp->left = nullptr;
	temp->right = nullptr;

	temp->left = new Node();
	temp = temp->left;

	temp->data = 4;
	temp->left = nullptr;
	temp->right = nullptr;

	temp = myTree.root; //back to the top
	temp = temp->left;
	temp = temp->right;

	temp->right = new Node();
	temp = temp->right;

	temp->data = 7;
	temp->left = nullptr;
	temp->right = nullptr;

	//populate right subtree
	temp = myTree.root; //back to the top

	temp->right = new Node();
	temp = temp->right;

	temp->data = 10;
	temp->left = nullptr;
	temp->right = nullptr;

	temp->right = new Node();
	temp = temp->right;

	temp->data = 14;
	temp->left = nullptr;
	temp->right = nullptr;

	temp->left = new Node();
	temp = temp->left;

	temp->data = 13;
	temp->right = nullptr;
	temp->left = nullptr;

	temp = myTree.root;

	myTree.root->report();

	return 0;
}


void Node::report() {
	cout << data << " ";
	if (left) left->report();
	if (right) right->report();

};
