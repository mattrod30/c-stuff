#include <iostream>
#include<cstdlib>
#include<ctime>
#include <string>
#include <list>
using namespace std;

struct Employee {
    string name;
    int ID;

    Employee(string argN, int argID) {
        name = argN;
        ID = argID;
    }
};

void printEmployees(list<Employee*>& arg);

int main(void)
{
    srand(time(0));
    list<Employee*> minions;
    list<Employee*>::iterator temp;
    int randomID = rand() % 9000 + 1000;
    const char* names[] = { "Bob", "Alice", "Matthew", "Ethan", "Andrew" };
    int nameCount = 5;

    // populate the list dynamically
    for (int i = 0; i < 300; i++) {
        const char* randomName = names[rand() % nameCount];
        int randomId = rand() % 9000 + 1000;
        minions.push_back(new Employee(randomName, randomID));
        cout << randomID << endl;

    }
    temp = minions.begin();

    printEmployees(minions);


    //manual memory management.
    int n = minions.size();
    temp = minions.begin();
    for (int i = 0; i < n; i++) {
        delete (*temp); //de-allocates memory
        temp++;
        minions.pop_front();
    }
    cout << minions.size() << endl;

    return 0;
}

void printEmployees(list<Employee*>& arg) {
    list<Employee*>::iterator cur;
    cur = arg.begin();

    for (cur = arg.begin(); cur != arg.end(); cur++) {
        cout << (*cur)->name << (*cur)->ID << endl;
    }

}
