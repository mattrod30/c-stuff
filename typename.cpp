#include<iostream>

using namespace std;

template<typename T>
struct Person {
	string name;
	string gender;
	T age;

	void printDetails(void);
	bool isMinor(void);  //returns true if Person is a minor.
};

int main(void) {
	Person <int> x, y;

	x.name = "Matthew";
	x.gender = "Male";
	x.age = 19;

	x.printDetails();


	return 0;
}

template<class T>
void Person<T>::printDetails(void) {
	cout << name << endl;
	cout << gender << endl;
	cout << age << endl;
	cout << isMinor() << endl;
}

template <class T>
bool Person<T>::isMinor(void) {

	if (age < 18)
		return true;
	return false;
}
