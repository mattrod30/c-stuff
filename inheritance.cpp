#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string fname, lname;
    int age;
public:
    Person(string fName = "", string lName = "", int age = 0);

    void setFirstName(string arg);
    void setLastName(string arg);
    void setAge(int arg);
    string getFirstName(void);
    string getLastName(void);
    int getAge(void);
    virtual void display(void);
};

class UScitizen : public Person {
private:
    int ssn;
public:
    UScitizen(int arg = 0, string argF = "Jane", string argL = "Doe", int argAge = 0);

    void setSSN(int arg);
    int getSSN(void);

    void display(void);
};

int main() {
    Person p1("Alice", "Johnson", 28);
    Person p2("Bob", "Smith", 45);

    UScitizen c1(123456789, "Charlie", "Brown", 30);
    UScitizen c2(987654321, "Diana", "Prince", 33);
    UScitizen c3(555667777, "Ethan", "Hunt", 40);

    cout << "----- Persons -----" << endl;
    p1.display();
    cout << endl;
    p2.display();
    cout << endl;

    cout << "----- US Citizens -----" << endl;
    c1.display();
    cout << endl;
    c2.display();
    cout << endl;
    c3.display();
    cout << endl;

    return 0;
}

Person::Person(string fName, string lName, int age) {
    setFirstName(fName);
    setLastName(lName);
    setAge(age);
}

void Person::setFirstName(string arg) { 
    fname = arg; 
}

void Person::setLastName(string arg) { 
    lname = arg; 
}

void Person::setAge(int arg) { 
    age = arg; 
}

string Person::getFirstName(void) { 
    return fname; 
}

string Person::getLastName(void) { 
    return lname; 
}

int Person::getAge(void) { 
    return age; 
}

void Person::display(void) {
    cout << "First Name: " << getFirstName() << endl;
    cout << "Last Name: " << getLastName() << endl;
    cout << "Age: " << getAge() << endl;
}

UScitizen::UScitizen(int arg, string argF, string argL, int argAge){
    setFirstName(argF);
    setLastName(argL);
    setAge(argAge);
    setSSN(arg);
}

void UScitizen::setSSN(int arg) { 
    ssn = arg; 

}
int UScitizen::getSSN(void) { 
    return ssn; 
}

void UScitizen::display(void) {
    Person::display();
    cout << "SSN: " << getSSN();
}
