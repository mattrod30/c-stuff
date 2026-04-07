#include <iostream> 
#include<fstream>
#include<string>
#include<list>
#include<vector>
using namespace std;

class person {
private:
    string name;
    int age;
    char gender;
public:
    person(string n, int a, char g) {
        name = n;
        age = a;
        gender = g;
    }
    string getName() { return name; }
    int getAge() { return age; }
    char getGender() { return gender; }
};


int main() {
    list<person*> myList;
    list<person*>::iterator cur;
    char userChoice;
    string name;
    int age;
    char gender;

    do {
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter gender (M/F): ";
        cin >> gender;

        myList.push_back(new person(name, age, gender));

       
        cout << "Would you like to add a different person? (Y or N): ";
        cin >> userChoice;
    } while (userChoice == 'y' || userChoice == 'Y');

    ofstream outFile("people.csv");

    cur = myList.begin();

    for (cur = myList.begin(); cur != myList.end(); cur++) {
        outFile << (*cur)->getName() << "," << (*cur)->getAge() << (*cur)->getGender() << endl;

    }

    for (person* deletedName : myList) {
        delete deletedName;
    }
 
    outFile.close();


   //Part II
    ifstream inFile("");



    return(0);
}
