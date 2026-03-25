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
	Node* searchTree(Node* root, int target);
};

int main() {
	BinaryTree myTree;
	Node* temp;
	myTree.root = nullptr;
	temp = myTree.root;

	cout << "Binary Tree with Search Method" << endl;

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

	//populae right subtree
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
	cout << endl;

	myTree.root->report();

	cout << myTree.findDepth(13) << endl;

	Node* searchResult = myTree.searchTree(myTree.root, 13);

	if (searchResult != nullptr) {
		cout << "Target number is found at index: " << searchResult->data <<
			endl;
	}
	else {
		cout << "target number not found!" << endl;
	}
	return 0;
}

void Node::report() {
	cout << data << " ";
	if (right) right->report();
	if (left) left->report();
};
Node* BinaryTree::searchTree(Node* root, int target) {
	if (root == nullptr) {
		return nullptr;
	}
	if (root->data == target) {
		return root;
	}
	Node* leftResult = searchTree(root->left, target);
	if (leftResult != nullptr) {
		return leftResult;
	}
	return searchTree(root->right, target);
}
