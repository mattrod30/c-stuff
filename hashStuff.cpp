#include <iostream>
#include <string>
#include <cmath> //for sqrt()
#include <list>
using namespace std;

class User {
public:
    string name;
    int ID;
    string profile;
    int age;

    User(string argN, int argID, string argProf) {
        name = argN;
        ID = argID;
        profile = argProf;
    }
};
//comparator
bool compareUsersID(User* user1, User* user2) {
    return (user1->ID < user2->ID);
}

bool compareUserNames(User* user1, User* user2) {
    return (user1->name < user2->name);
}

void simplePrintTable(list<User*> arg[], int size);
// Hash function returns the INDEX of the bucket where the data is to go or be found.
int simpleHashFunction(int data, int size);


int main(void) {
    char userResponse;
    int userID;
    string userName;
    int userChoice;

    //Empty hash table of website USERS
    string arr[10] = { "joe","mary","james","bill","marty","barry","Zack","Mandy","sarah","matty" };
    const int tableSize = 100;
    list<User*> a[tableSize];   //hash table of objects.

    int count = 1;
    do {
        userName = arr[rand() % 10];
        //cout << "Auto generated a name: " << userName << endl;

        userID = rand();
        //cout << "Auto generate an ID: " << userID << endl;

        User* temp = new User(userName, userID, "single");
        int i = simpleHashFunction(temp->ID, tableSize);

        a[i].push_back(temp);

        count++;

    } while (count < 200);

    //TODO: sort a bucket of objects!
    cout << "\n\How to sort? (1. ID, 2. Name)";
    cin >> userChoice;
    if (userChoice == 1) {
        for (int i = 0; i < tableSize; i++) {
            a[i].sort(compareUsersID);

        } else{
        for (int i = 0; i < tableSize; i++) {
            a[i].sort(compareUserNames);

        }
     
    }

    //print
    cout << "******************" << endl;
    simplePrintTable(a, tableSize);




    return(0);
}

//A calculation -- finite comparisons
int simpleHashFunction(int data, int size) {

    //hashing is an ART
    int index = data % size;

    return(index);

}

void simplePrintTable(list<User*> arg[], int size) {
    // Print the buckets...
    list<User*>::iterator myItr;

    for (int i = 0; i < size; i++) {
        cout << "bucket " << i << " ==> ";
        myItr = arg[i].begin();

        while (myItr != arg[i].end()) {
            cout << (*myItr)->name << ", " << (*myItr)->ID << " : ";
            myItr++;
        }
        cout << endl;
    }
}
