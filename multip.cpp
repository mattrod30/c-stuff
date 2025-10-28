#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int multiplicationTable[SIZE][SIZE];

    // Fill the table
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            multiplicationTable[row][col] = (row + 1) * (col + 1);
        }
    }

    // Print column headers
    cout << "    "; // space for row headers
    for (int col = 1; col <= SIZE; col++) {
        cout << col << " ";
    }
    cout << endl;

    // Print a separator line
    cout << "   ";
    for (int col = 0; col < SIZE * 2; col++) {
        cout << "-";
    }
    cout << endl;

    // Print the table with row headers
    for (int row = 0; row < SIZE; row++) {
        cout << row + 1 << "| "; // row header
        for (int col = 0; col < SIZE; col++) {
            cout << multiplicationTable[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}
