#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int dieRoll() {
	return rand() % 6 + 1;  
}

int main() {
	srand(time(0)); 
	
	int userInput;
	cout << "\nAwesome Dice Rolling App \n" << endl;

	cout << "Enter the number of dice to roll: ";
	cin >> userInput;

	if (userInput == 1) {
		cout << "Rolling one die: " << dieRoll() << endl;
	
	}else if (userInput == 2) {
		cout << "Rolling two: " << dieRoll() + dieRoll() << endl;

	}else if (userInput == 3) {
		cout << "Rolling three: " << dieRoll() + dieRoll() + dieRoll() << endl;

	}else if (userInput == 4) {
		cout << "Rolling four: " << dieRoll() + dieRoll() + dieRoll() + dieRoll() << endl;

	}else if (userInput == 5) {
		cout << "Rolling five: " << dieRoll() + dieRoll() + dieRoll() + dieRoll() + dieRoll() << endl;

	}else if (userInput == 6) {
		cout << "Rolling six: " << dieRoll() + dieRoll() + dieRoll() + dieRoll() + dieRoll() + dieRoll() << endl;
	}else {
		cout << "\nOnly up to 6 allowed";
	}
	
	return 0;

}