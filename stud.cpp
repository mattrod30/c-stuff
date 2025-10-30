#include <iostream>
#include <string>
using namespace std;

struct Student {
    string firstName;
    string lastName;
    string school;
    string ID;
    float GPA;

    void capitalizeName(void);
    void print(void);
    char grade(void);
};


int main(void) {

    const int size = 3;
    Student studentList[size];  


    for (int i = 0; i < size; i++) {
        cout << "Enter student first name: ";
        getline(cin, studentList[i].firstName);
        cout << "Enter student last name: ";
        getline(cin, studentList[i].lastName);
        cout << "Enter school: ";
        getline(cin, studentList[i].school);
        cout << "Enter school ID: ";
        getline(cin, studentList[i].ID);
        cout << "Enter GPA: ";
        cin >> studentList[i].GPA;
        cin.ignore();
        studentList[i].capitalizeName();
        cout << endl;
    }

    
    cout << "\nList of all students in the array. \n" << endl;
    for (int i = 0; i < size; i++) {
        studentList[i].print();
        cout << "\n***\n" << endl;
    }

    return 0;
}

void Student::capitalizeName(void) {
    if (!firstName.empty())
        firstName[0] = toupper(firstName[0]);
    if (!lastName.empty())
        lastName[0] = toupper(lastName[0]);
}


char Student::grade(void) {
    if (GPA >= 3.5)
        return 'A';
    else if (GPA >= 3.0)
        return 'B';
    else if (GPA >= 2.0)
        return 'C';
    else if (GPA >= 1.0)
        return 'D';
    else
        return 'F';
}
void Student::print(void) {
    cout << "Student name: " << firstName << " " << lastName << endl;
    cout << "Attends " << school << " with GPA: " << GPA << endl;
    cout << "ID: " << ID << " with grade: " << grade() << endl;
}
