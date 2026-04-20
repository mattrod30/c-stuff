#include <iostream>
#include<string>
using namespace std;

class Person{
private:
    string name;
    int age;
    
public:
    Person(string argN = "Matt", int argAge = 20){
        name = argN;
        age = argAge;
    }
    
};

class Student:public Person{
    private:
    int ID;
public:
    Student(int argID = 01234){
        ID = argID;
    }
};
int stringHash(string name, int buckets);

int main(){
    
    
    
    return 0;
}

int stringHash(string name, int buckets){
    int sum = 0;
        for (int i = 0; i < name.size(); i++) {
            sum += int(name[i]);
        }
        return sum % buckets;
    }
