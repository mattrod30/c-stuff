#include <iostream>
#include<string>
#include<vector>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string argN = "Matt", int argAge = 20) {
        name = argN;
        age = argAge;
    }

    string getName();
    int getAge();
};

class Student :public Person {
private:
    int ID;
public:
    Student(string argN = "Matt", int argAge = 20, int argID = 1234)
        : Person(argN, argAge) {
        ID = argID;
    }

    int getID();
    void display();
};
int stringHash(string name, int buckets);

int main() {
    int buckets = 5;


    return 0;
}

int stringHash(string name, int buckets) {
    int sum = 0;
    for (int i = 0; i < name.size(); i++) {
        sum += int(name[i]);
    }
    return sum % buckets;
}

string Person::getName() {
    return name;
}

int Person::getAge() {
    return age;
}

int Student::getID() {
    return ID;
}

void Student::display() {
    cout << "Name: " << getName() << " | Age: " << getAge() << " | ID: " << getID << endl;
}

