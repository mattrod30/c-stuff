#include <iostream>
using namespace std;

int main() {
    const int numQuestions = 3;

    string questions[numQuestions] = {
        "1) What is the capital of Califronia?",
        "2) Which number is NOT a prime number?",
        "3) What is the correct way to spell this word?"
    };

    string options[numQuestions][4] = {
        {"A) Sacramento", "B) Los Angeles", "C) Fresno", 
        "D) San Francisco"},
        {"A) 2", "B) 1", "C) 6", "D) 7"},
        {"A) Misissippi", "B) Missisipi", "C) Misisippi", "D) Mississippi"}
    };

    char answers[numQuestions] = {'A', 'C', 'D'};

    int score = 0;
    char userAnswer;

    cout << "===== Quiz Game =====\n\n";

    for (int i = 0; i < numQuestions; i++) {
        cout << questions[i] << endl;

        for (int j = 0; j < 4; j++) {
            cout << options[i][j] << endl;
        }

        cout << "Your answer (A/B/C/D): ";
        cin >> userAnswer;

        userAnswer = toupper(userAnswer);

        if (userAnswer == answers[i]) {
            cout << "Correct!\n\n";
            score++;
        } else {
            cout << "Wrong! The correct answer was " << answers[i] << ".\n\n";
        }
    }

    cout << "===== Quiz Finished! =====" << endl;
    cout << "Your final score: " << score << " out of " << numQuestions << endl;

    if (score == numQuestions)
        cout << "Perfect score! Well done!" << endl;
    else if (score > 0)
        cout << "Almost there!" << endl;
    else
        cout << "Better luck next time!" << endl;

    return 0;
