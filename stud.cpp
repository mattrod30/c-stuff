#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Student {
    string firstName;
    string lastName;
    string school;
    float GPA;
};

void capitalize(Student& arg);
void printStudent(Student arg);

int main() {
    Student s;

    cout << "Enter first name: ";
    getline(cin, s.firstName);
    cout << "Enter last name: ";
    getline(cin, s.lastName);
    cout << "Enter school: ";
    getline(cin, s.school);
    cout << "Enter GPA: ";
    cin >> s.GPA;

    capitalize(s);

    cout << "\n--- Student Information ---\n";
    printStudent(s);

    return 0;
}

void capitalize(Student& arg) {
    if (!arg.firstName.empty()) {
        arg.firstName[0] = toupper(arg.firstName[0]);
        for (size_t i = 1; i < arg.firstName.size(); ++i)
            arg.firstName[i] = tolower(arg.firstName[i]);
    }
    if (!arg.lastName.empty()) {
        arg.lastName[0] = toupper(arg.lastName[0]);
        for (size_t i = 1; i < arg.lastName.size(); ++i)
            arg.lastName[i] = tolower(arg.lastName[i]);
    }
}

void printStudent(Student arg) {
    cout << "First name: " << arg.firstName << '\n';
    cout << "Last name: " << arg.lastName << '\n';
    cout << "School: " << arg.school << '\n';
    cout << fixed << setprecision(2);
    cout << "GPA: " << arg.GPA << "\n";
}

