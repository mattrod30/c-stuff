#include<iostream>
#include<map>
#include<vector>
using namespace std;

struct Employee {
    string name;
    int ID;

    Employee(string arg1, int arg2) {
        name = arg1;
        ID = arg2;
    }
};

int main() {

   map<string, vector<Employee*>> categoryMap;
   categoryMap["Project manager"].push_back(new Employee("Matthew Rodriguez", 314159));
    categoryMap["Project manager"].push_back(new Employee("Stephen Curry", 303030));
    categoryMap["Project manager"].push_back(new Employee("John Doe", 632877));
    categoryMap["Programmer"].push_back(new Employee("John Redden", 123456));
    categoryMap["Programmer"].push_back(new Employee("David Jones", 267890));
    categoryMap["Programmer"].push_back(new Employee("Dillon Allen", 564322));
    categoryMap["Support staff"].push_back(new Employee("Jane Doe", 777832));
    categoryMap["Support staff"].push_back(new Employee("Aubrey Graham", 105991));
    categoryMap["Support staff"].push_back(new Employee("LeBron James", 230688));




    




    return 0;

}
