#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int multiplicationTable[SIZE][SIZE];

    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            multiplicationTable[row][col] = (row + 1) * (col + 1);
        }
    }

    cout << "    ";
    for (int col = 1; col <= SIZE; col++) {
        cout << col << "  "; 
    }
    cout << endl;

    cout << "   ";
    for (int col = 0; col < SIZE * 3; col++) {
        cout << "-";
    }
    cout << endl;

    for (int row = 0; row < SIZE; row++) {
        if (row + 1 < 10)
            cout << row + 1 << " | ";
        else
            cout << row + 1 << "| "; 

        for (int col = 0; col < SIZE; col++) {
            if (multiplicationTable[row][col] < 10)
                cout << multiplicationTable[row][col] << "  "; 
            else
                cout << multiplicationTable[row][col] << " ";  
        }
        cout << endl;
    }

    return 0;
}
