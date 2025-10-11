#include <iostream>
using namespace std;

int main() {
    int sum;

    sum = 0;
    for (int i = 0; i <= 9; i++) {
        sum += i;
    }
    cout << "Sum using for loop: " << sum << endl;

    sum = 0;
    int i = 0;
    while (i <= 9) {
        sum += i;
        i++;
    }
    cout << "Sum using while loop: " << sum << endl;

    sum = 0;
    i = 0;
    do {
        sum += i;
        i++;
    } while (i <= 9);
    cout << "Sum using do loop: " << sum << endl;

    return 0;
}