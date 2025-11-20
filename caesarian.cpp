#include <iostream>
#include<string>
using namespace std;

class SecretMessage {
private:
	string message;
	int key;
public:
	SecretMessage(string message = "", int argKey = 13);
	void setMessage(string arg);
	void setKey(int argK);
	string getMessage(void);
	int getKey(void);

	string encrypt(void);
	string decrypt(void);
	string lowerCase(void);


};
string lowerCase(string arg);

int main(void) {

	string x, y;
	int key = 13;

	cout << "Enter a message: ";
	getline(cin, y);
	string x = lowerCase(y);

	cout << x << endl;
	for (int i = 0; i < x.size(); i++) {
		if(int(x.at(i)) >= 97 && int (x.at(i)) <= 122)
		if (int(x.at(i)) <= 109)
			cout << char(int(x.at(i)) + key);
		else
			cout << char(int(x.at(i)) - key);

		else {
			cout << x.at(i);

		}
	}
	cout << endl;
}

string lowerCase(string arg) {
	for (int i = 0; i < arg.size(); i++) {
		if (arg[i] >= 'A' && arg[i] <= 'Z') {
			arg[i] = arg[i] - 'A' + 'a';
		}
	}
	return arg;
}
