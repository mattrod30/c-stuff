#include <iostream>
#include <string>
#include<cstdlib>
#include<ctime>
using namespace std;

bool runAgain(void);

int main() {
    srand(time(0));

    string userResp;
    const int size = 20;
    string a[size] = { "It is certain.", "Reply hazy, try again.", "Don't count on it." };


    cout << "\n Magic 8-Ball App. (@ Mattel)\n" << endl;

    do {
        cout << "Ask me anything!" << endl;
        getline(cin, userResp);
       
        cout << "\nMagic 8-ball says: " << a[rand() % size] << endl;

    } while (runAgain());

    return 0;
}

bool runAgain() {
    char userResponse;
    cout << "Would you like to run again? (y or n): ";
    cin >> userResponse;

    return (userResponse == 'y' || userResponse == 'Y');
}
