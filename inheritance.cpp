#include<iostream>
#include<string>
using namespace std;

class Person {
private:
	string fname, lname;
	int age;
public:
	Person(string fName, string lName, int age);

	void setFirstName(string arg);
	void setLastName(string arg);
	void setAge(int arg);
	string getFirstName(void);
	string getlastName(void);
	int getAge(void);
	virtual void display(void);

};

class UScitizen : public Person {
private:
	int ssn;
public:
	UScitizen(int arg = 0, string argF = "Jane", string argL = "Doe", int argAge = 0);
	void setSSN(int arg);
	int getSSN(void);

	virtual void display(void);
};

int main() {
	UScitizen x(55567888, "Bill", "Gates", 38);

	x.display();

	return(0);
}
Person::Person(string fName, string lName, int age) {
	setFirstName(fname);
	setLastName(lname);
	setAge(age);
}
void Person::setFirstName(string arg) {
	fname = arg;
}

void Person::setLastName(string arg) {
	lname = arg;
}

void Person::setAge(int arg) {
	age = arg;
}

string Person::getFirstName(void) {
	return fname;
}

string Person::getlastName(void) {
	return lname;
}

int Person::getAge(void) {
	return age;
}

void Person::display(void) {
	cout << getFirstName() << endl;
	cout << getlastName() << endl;
	cout << getAge() << endl;

}
UScitizen::UScitizen(int arg, string argF, string argL, int argAge) {
	Person::Person(argF, argL, argAge);
	setSSN(arg);
}
void UScitizen::setSSN(int arg) {
	ssn = arg;
}
int UScitizen::getSSN(void) {
	return(ssn);
}
void UScitizen::display(void) {
	Person::display();
	cout << getSSN() << endl;
}
