#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void)
{

	srand(time(0));

	int x = 1 + rand() % 10;
	int y; 

	cout << "Guess from 1 to 10: ";
	cin >> y;

	if (y < x) {
		cout << "Too Low" << endl;


	}
	else {
		if (y == x) {
			cout << "You got it!" << endl;
		}else{
			cout << "Too high" << endl;

		}
	
	}

	return 0;

}