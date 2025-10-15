#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int dieRoll(void);

int main(void) {
	srand(time(0));

	int rolls = 50000;
	const int n = 13;
	int a[n];
	int roll; 

	for (int i = 0; i < n; i++) {
		a[i] = 0;
	}
	for (int j = 0; j < rolls; j++) {
		roll = dieRoll() + dieRoll();
		a[roll]++;
	}
	for (int i = 0; i < n; i++) {
		cout << " sum " << i << "\t=\t" << a[i]
			<< "\tprob. " << 1.0 * a[i] / rolls << endl;
	}
	return 0;
}
int dieRoll(void) {
	return(1 + rand() % 6);
}
