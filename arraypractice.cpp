#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void printArray(char arr[], int size);
int countChar(char arr[], int size, char count);

int main() {
    srand (time(0));
    int size = 50;
    char a [50];
    
    for (int i = 0; i < 50; i++) {
        a[i] = rand() % 26 + 'a';
       
    }
   
    printArray(a, size);
  
    char pick;
    char runAgain;

    do {
        cout << "Pick a char from a-z: ";
        cin >> pick;

        int result = countChar(a, size, pick);

        if (result == 1) {
            cout << "The char '" << pick << "' appears " << result << " time" << endl;

        }else cout << "The char '" << pick << "' appears " << result << " times" << endl;

        cout << "Would you like to count another char? ";
        cin >> runAgain;

    } while (runAgain == 'y');

    return 0;
}


void printArray(char a[], int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
int countChar(char arr[], int size,  char target) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    return count;
}
