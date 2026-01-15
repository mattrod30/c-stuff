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
	Person <float> a, b;


	x.name = "Matthew";
	x.gender = "Male";
	x.age = 19;

	y.name = "Ella";
	y.gender = "Female";
	y.age = 17;

	a.name = "Brooke";
	a.gender = "Female";
	a.age = 14.5;

	b.name = "John";
	b.gender = "Male";
	b.age = 21.3;


	x.printDetails();
	y.printDetails();

	a.printDetails();
	b.printDetails();


	return 0;
}

template<class T>
void Person<T>::printDetails(void) {
	cout << "Name: " << name << endl;
	cout << "Gender: " << gender << endl;
	cout << "Age: " << age << endl;
	cout << isMinor() << endl;
	cout << endl;


}

template <class T>
bool Person<T>::isMinor(void) {
	return age < 18;

}
