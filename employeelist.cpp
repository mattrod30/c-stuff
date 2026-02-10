#include<iostream>
#include<list>
#include<string>

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

class Employee : public UScitizen {
private:
    int employeeID;
    float salary;
public:
    Employee(string argF, int argID, string argL, int argAge, int arg, double argSalary);
    void setID(int arg);
    void setSalary(float arg);
    int getID(void);
    double getSalary(void);
    void display(void);
};

int main(void) {

    list<Employee*> minions;
    list<Employee*>::iterator temp;
    Employee* b;

    for (int i = 0; i < 300; i++) {
        b = new Employee("Bob", i);
        minions.push_back(b);
    }

    printMinions(minions);
    
    int size = minions.size();
    temp = minions.begin();

    for (temp = minions.begin(); temp != minions.end(); temp++) {
        delete (*temp);
        temp++;

        minions.pop_front();
    }
    cout << minions.size() << endl;

    return 0;
}

/* === Implementations unchanged below === */

Person::Person(string fName, string lName, int age) {
    setFirstName(fName);
    setLastName(lName);
    setAge(age);
}

void Person::setFirstName(string arg) { fname = arg; }
void Person::setLastName(string arg) { lname = arg; }
void Person::setAge(int arg) { age = arg; }

string Person::getFirstName(void) { return fname; }
string Person::getLastName(void) { return lname; }
int Person::getAge(void) { return age; }

void Person::display(void) {
    cout << "First Name: " << getFirstName() << endl;
    cout << "Last Name: " << getLastName() << endl;
    cout << "Age: " << getAge() << endl;
}

UScitizen::UScitizen(int arg, string argF, string argL, int argAge) {
    setFirstName(argF);
    setLastName(argL);
    setAge(argAge);
    setSSN(arg);
}

void UScitizen::setSSN(int arg) { ssn = arg; }
int UScitizen::getSSN(void) { return ssn; }

void UScitizen::display(void) {
    Person::display();
    cout << "SSN: " << getSSN() << endl;
}

Employee::Employee(string argF, int argID,   string argL, int argAge, int arg, double argSalary) {
    setFirstName(argF);
    setLastName(argL);
    setAge(argAge);
    setSSN(arg);
    setID(argID);
    setSalary(argSalary);
}

void Employee::setID(int argID) { 
    employeeID = argID; 
}
void Employee::setSalary(float argSalary) { 
    salary = argSalary; 
}
int Employee::getID(void) { 
    return employeeID; 
}
double Employee::getSalary(void) { 
    return salary;
}

void Employee::display(void) {
    UScitizen::display();
    cout << "Employee ID: " << getID() << endl;
    cout << "Salary (Annual): $" << getSalary() << endl;
}

void printMinions(list<Employee*>& arg) {
    list<Employee*>::iterator cur;
    cur = arg.begin();

    for (cur = arg.begin(); cur != arg.end(); cur++) {
        cout << (*cur)->getFirstName << (*cur)->getID << endl;
    }
}
