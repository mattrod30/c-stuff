#include <iostream>
using namespace std;

int main() {
    const int NUM_QUESTIONS = 3;

    string questions[NUM_QUESTIONS] = {
        "1) What is the capital of France?",
        "2) Which number is even?",
        "3) What is 2 + 2?"
    };

    string options[NUM_QUESTIONS][4] = {
        {"A) London", "B) Paris", "C) Rome", "D) Berlin"},
        {"A) 3", "B) 7", "C) 10", "D) 5"},
        {"A) 3", "B) 4", "C) 5", "D) 6"}
    };

    char answers[NUM_QUESTIONS] = {'B', 'C', 'B'};

    int score = 0;
    char userAnswer;

    cout << "===== Welcome to the Quiz Game! =====\n\n";

    for (int i = 0; i < NUM_QUESTIONS; i++) {
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
    cout << "Your final score: " << score << " out of " << NUM_QUESTIONS << endl;

    if (score == NUM_QUESTIONS)
        cout << "Perfect score! Great job!" << endl;
    else if (score > 0)
        cout << "Not bad, keep practicing!" << endl;
    else
        cout << "Better luck next time!" << endl;

    return 0;
}
