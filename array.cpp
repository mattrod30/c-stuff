#include <iostream>
#include <cstdlib>  
#include <ctime>     
using namespace std;

void printArray(int a[], int size);
void printArrayDouble(double b[], int n);

int main() {
    const int size = 10;
    int a[size];

    srand(time(0)); 

    cout << "Array a: \n";
    for (int i = 0; i < size; i++) {
        a[i] = 3;
    }
    printArray(a, size);

    for (int i = 0; i < size; i++) {
        a[i] = rand() % 24 + 2; 
    }
    printArray(a, size);

    for (int i = 0; i < size; i++) {
        a[i] = 2 * (i + 1);
    }
    printArray(a, size);

    const int n = 100;
    double b[n];

    cout << "\nArray b: \n";
    for (int i = 0; i < n; i++) {
        b[i] = rand() / double(RAND_MAX);
    }
    printArrayDouble(b, n);

    cout << "\nArray b backwards\n";
    for (int i = n - 1; i >= 0; i--) {
        cout << b[i] << " ";
    }

    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += b[i];
    }
    cout << "\n\nSum of array b = " << sum << endl;

    return 0;
}

void printArray(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void printArrayDouble(double b[], int n) {
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
}
