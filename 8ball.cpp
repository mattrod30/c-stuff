#include <iostream>
#include <string>
#include<cstdlib>
#include<ctime>
using namespace std;

bool runAgain(void);

int main() {
    srand(time(0));

    const int size = 20;
    string a[size] = { "It is certain.", "As I see it, yes.", "Reply hazy, try again.",  "Don't count on it." ,
    "It is decidedly so.", "Without a doubt.", "Yes definitely.",
    "You may rely on it.", "Most likely.", "Outlook good.","Yes.", "Signs point to yes.", "Ask again later.", 
    "Better not tell you now.", "Cannot predict now.", "Concentrate and ask again.",
    "My reply is no.", "My sources say no.", "Outlook not so good.", "Very doubtful." };


    cout << "\nMagic 8-Ball App. (@ Mattel)\n" << endl;

    do {
        string userResp;
        cout << "\nAsk me anything! ";
        getline(cin, userResp);

        cout << "Magic 8-ball says: " << a[rand() % size] << endl;

    } while (runAgain());

    return 0;
}

bool runAgain() {
    char userResponse;
    cout << "\nAsk Magic 8-ball again? (y or n): ";
    cin >> userResponse;
    cin.ignore();

    return (userResponse == 'y' || userResponse == 'Y');
}
