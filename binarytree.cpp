#include<iostream>
#include<string>

using namespace std;

template<typename T>
class Node {
public:
	T data;
	Node* left;
	Node* right;

	Node(T value) : data(value), left(nullptr), right(nullptr) {};

	int findDepth(int);
	void report(void);

};

template<typename T>
class BinaryTree {
public:
	Node<T>* root;

	int findDepth(int);
	Node<T>* deleteNode(Node<T>* cur, T value);

};

int main() {
	BinaryTree <string> myTree;
	Node* left;

	myTree.root->report();

	cout << myTree.findDepth(13) << endl;

	return 0;

}


template<typename T>
int BinaryTree<T>::findDepth(int i) {
	if (root)
		return (root->findDepth(i));
	else {
		return(-1);
	}
}

template<typename T>
int Node<T>::findDepth(int i) {
	if (i == data) return(0);

	int d;

	if (i < data) {
		if (left) d = left->findDepth(i);
		else d = -1;
	}
	if (i > data) {
		if (right) d = right->findDepth(i);
		else d = -1;
	}
	if (d == -1) return(-1);
	else return(d + 1);
}

template<typename T>
void Node<T>::report() {
	cout << data << " ";
	if (left) left->report();
	if (right) right->report();
}

template<typename T>
Node<T>* deleteNode(Node <T>* cur, T value) {
	if (cur == nullptr) {
		return nulllptr;
	}
	if (cur->data == value) {

		if (cur->left == nullptr && cur->right == nullptr) {
			delete cur;
			return nullptr;
		}

		if (cur->left == nullptr) {
			Node<T>* temp = cur->right;
			delete cur;
			return temp;
		}
	}
	
}
