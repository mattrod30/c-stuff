#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    char playAgain = 'y'; 

    while (playAgain == 'y' || playAgain == 'Y') {
        int x = 1 + rand() % 10;  
        int y;
        int guessCount = 0;      
        bool guessedCorrectly = false;

        cout << "Guess a number between 1 and 10." << endl;

        while (!guessedCorrectly) {
            cout << "\nEnter your guess: ";
            cin >> y;
            guessCount++;

            if (y < x) {
                cout << "\nToo Low!" << endl;
            }
            else if (y > x) {
                cout << "\nToo High!" << endl;
            }
            else {
                cout << "\nYou got it!" << endl;
                guessedCorrectly = true;
                cout << "\nIt took you " << guessCount << " guesses." << endl;
            }
        }

        cout << "\nWould you like to play again? (y/n): ";
        cin >> playAgain;
        cout << endl;
    }

    cout << "\nThanks for playing!" << endl;
    return 0;
}
