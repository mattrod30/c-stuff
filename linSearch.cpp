#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void printArray(char arr[], const int n);
int searchFor(char arr[], const int N, char target);
bool runAgain(void);


int main() {
    srand(time(0));

    cout << "Linear Search an Array" << endl;
    const int size = 10;
    char a[size];
    int count;
    char pick;
    int ans;

    for (int i = 0; i < size; i++) {
        a[i] = 97 + rand() % 26;

    }
    printArray(a, size);

    do {
        cout << "\nPick a char to search for: ";
        cin >> pick;

        ans = searchFor(a, size, pick);
        if (ans >= 0)
            cout << "Found at index: " << ans << endl;
        else
            cout << "Char not found!" << endl;
       

    } while (runAgain());;

    return 0;
}


void printArray(char a[], const int n) {
    for (int i = 0; i < n; i++) {
        cout << "Index " << i << " has value: " << a[i] << endl;
    }
}

int searchFor(char arr[], const int n, char target) {
    for (int i = 0; i < n; i++) {
        if (tolower(arr[i]) == tolower(target)) {
            return i;
        }
       
    }
    return -1;
}

bool runAgain(void) {
    char userResponse;

    cout << "\nWould you like to run again (y or n): ";
    cin >> userResponse;
    cin.ignore(); // to clean up the input stream

    if (userResponse == 'y' || userResponse == 'Y')
        return(true);

    return(false);
}
