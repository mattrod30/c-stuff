#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>   
using namespace std;

bool runAgain(void);

int main() {
    srand(time(0)); 
    const int size = 3;

    string adverbs[size] = { "weirdly", "dangerously", "ominously" };
    string adjectives[size] = { "spectacular", "patient", "dorky" };
    string nouns[size] = { "schools", "fortnite gamers", "oceans" };
    string verbs[size] = { "demonstrates", "dances", "cries" };
    string subjects[size] = { "arrays", "loops", "functions" };

    cout << "Random and Silly Mad Lib Sentence Generator\n" << endl;

    do {
        cout << "Mr. Redden is " << adverbs[rand() % size] << " " << adjectives[rand() % size] << "!";
        cout << " He " << verbs[rand() % size] << " " << subjects[rand() % size]
            << " so well that all the " << nouns[rand() % size] << " noticed.";
        cout << " Even Mr. Banuelos said it was the best class he's ever seen.\n" << endl;

    } while (runAgain());

    return 0;
}

bool runAgain() {
    char userResponse;
    cout << "Would you like to run again? (y or n): ";
    cin >> userResponse;

    return (userResponse == 'y' || userResponse == 'Y');
}
