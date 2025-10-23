#include <iostream>
#include<string>
using namespace std;

bool runAgain(void);
void printArray(char arr[], int size);

int main() {
    srand(time(0));

    cout << "Linear Search an Array" << endl;
    string userString;
    string userChar;
    int count;

    cout << "\nEnter a string: ";
    getline(cin, userString);

    
    do {
        cout << "Enter char to search for: ";
        getline(cin, userChar);

    count = 0;
        for (int i = 0; i < userString.size(); i++) {
            if (tolower(userString[i]) == tolower(userChar[0])) {
                count++;
            }
        }
        cout << "\nThe number of " << userChar << "'s " << " is " << count << endl;
 
    } while (runAgain());

    return 0;
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

void printArray(char a[], const int n) {
    for (int i = 0; i < n; i++) {
        cout << "Index " << i << " has value: " << a[i] << endl;
    }
}
