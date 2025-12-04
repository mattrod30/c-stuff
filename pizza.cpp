#include<iostream>
#include<vector>
#include <string>
using namespace std;


class Pizza {
private:
	string toppings;
	int sliceNumber;
	char size;
public:

	Pizza serving(string numToppings = "Pepperoni", int numSlices = 10, char portion = 'L');



};

int main() {





	return 0;
}



Pizza Pizza::serving(string numToppings = "Pepperoni", int numSlices = 10, char portion = 'L'){

toppings = numToppings;
sliceNumber = numSlices;
size = portion;



}
