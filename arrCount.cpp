#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

bool runAgain(void);
void printArray(char arr[], int size);

int main() {
    srand(time(0));

    cout << "Linear Search an Array" << endl;
    const int size = 50;
    char a[size];
    int count;
    char pick;

    for (int i = 0; i < size; i++) {
        a[i] = 97 + rand() % 26;

    }
    printArray(a, size);

    do {
        cout << "\nPick a char from a - z: ";
        cin >> pick;

        pick = tolower(pick);

        count = 0;
        for (int i = 0; i < size; i++) {
            if (a[i] == pick) {
                count++;
            }

        }
        cout << "\nThe number of " << pick << "'s " << "is " << count << endl;

    } while (runAgain());

    return 0;
}

bool runAgain(void) {
    char userResponse;

    cout << "\nWould you like to run again (y or n): ";
    cin >> userResponse;
    cin.ignore(); 

    if (userResponse == 'y' || userResponse == 'Y')
        return(true);

    return(false);
}

void printArray(char a[], const int n) {
    for (int i = 0; i < n; i++) {
        cout << "Index " << i << " has value: " << a[i] << endl;
    }
}

