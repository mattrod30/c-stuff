#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printArray(const int* a, int size) {
    cout << "[ ";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << "]\n";
}

int main(void) {

    vector<int> v;

    v.push_back(10);
    v.push_back(20);

    cout << v[1] << endl;

    // the csc i 001 way

    int n = 5;
    int* a = new int[n];

    for (int i = 0; i < n; i++) {
        a[i] = (i + 1) * 10;

    }
    cout << "Original array: ";
    printArray(a, n);


    //Part A
    int valueEnd = 123;
    
    int newSize = n + 1;
    int* b = new int[newSize];

    for (int i = 0; i < n; i++) {
        b[i] = a[i];
    }
    b[n] = valueEnd;

    cout << "\add in the end array: ";
    printArray(b, newSize);


    //Part B
    int valueFront = 999;


    int newNewsize = newSize + 1;
    int* c = new int[newNewsize];

    c[0] = valueFront;
    for (int i = 1; i < newNewsize; i++) {
        c[i] = b[i-1];
    }
    cout << "\n add in the front array: ";
    printArray(c, newNewsize);


    int valueAt3 = 777;
    int insertIndex = 3;

    int s = newNewsize + 1;
    int* d = new int[s];

    for (int i = 0; i < insertIndex; i++) {
        d[i] = c[i];
    }
    d[insertIndex] = valueAt3;
    for (int i = insertIndex + 1; i < s; i++) {
        d[i] = c[i-1];
    }
    cout << "\n add in the middle array: ";
    printArray(d, s);


    delete[]a;
    delete[]b;
    delete[]c;
    a = nullptr;
    b = nullptr;
    c = nullptr;

    return 0;

}
