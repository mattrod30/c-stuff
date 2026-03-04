#include<iostream>
using namespace std;

class Fraction {
private:
	int a, b;
public:
	Fraction(int aValue = 0, int bValue = 0);
	int setaValue(int arg);
	int setbValue(int arg);
	int getaValue();
	int getbValue();
};
int main(void){
	




	return(0);
}
Fraction::Fraction(int aValue, int bValue) {
	getaValue(a);
	getbValue(b);
}

int Fraction::setaValue(int arg) {
	a = arg;
}

int Fraction::setbValue(int arg) {
	b = arg;
}

int Fraction::getaValue() {
	return a;
}

int Fraction::getbValue() {
	return b;
}

