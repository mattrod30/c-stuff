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
        cout << col << "  "; // two spaces for nicer spacing
    }
    cout << endl;

    // Print a separator line
    cout << "   ";
    for (int col = 0; col < SIZE * 3; col++) {
        cout << "-";
    }
    cout << endl;

    // Print the table with row headers
    for (int row = 0; row < SIZE; row++) {
        if (row + 1 < 10)
            cout << row + 1 << " | "; // single-digit row
        else
            cout << row + 1 << "| ";  // double-digit row

        for (int col = 0; col < SIZE; col++) {
            if (multiplicationTable[row][col] < 10)
                cout << multiplicationTable[row][col] << "  "; // single-digit spacing
            else
                cout << multiplicationTable[row][col] << " ";  // double-digit spacing
        }
        cout << endl;
    }

    return 0;
}
