#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int searchListLinear(vector<int>& arg, int target);
int searchListBinary(vector<int>& arg, int target);
void printVec(vector<int>& v);

int main()
{
    srand(time(0));

    vector<int> myVec;
    char userInput;
    int target;

    do
    {
        myVec.clear();

        // Generate 100 unique random numbers
        while (myVec.size() < 100)
        {
            int randNum = 1 + rand() % 100;
            bool duplicate = false;

            for (int j = 0; j < myVec.size(); j++)
            {
                if (myVec[j] == randNum)
                {
                    duplicate = true;
                    break;
                }
            }

            if (!duplicate)
            {
                myVec.push_back(randNum);
            }
        }

        // Selection Sort
        for (int i = 0; i < myVec.size() - 1; i++)
        {
            int minIndex = i;

            for (int j = i + 1; j < myVec.size(); j++)
            {
                if (myVec[j] < myVec[minIndex])
                {
                    minIndex = j;
                }
            }

            int temp = myVec[i];
            myVec[i] = myVec[minIndex];
            myVec[minIndex] = temp;
        }

        printVec(myVec);

        cout << "\nEnter search target: ";
        cin >> target;

        int index = searchListBinary(myVec, target);

        if (index != -1)
            cout << "Binary Search: integer found at index " << index << endl;
        else
            cout << "Binary Search: integer not found\n";

        index = searchListLinear(myVec, target);

        if (index != -1)
            cout << "Linear Search: integer found at index " << index << endl;
        else
            cout << "Linear Search: integer not found\n";

        cout << "\nRun again? (y or n): ";
        cin >> userInput;

    } while (userInput == 'y' || userInput == 'Y');

    return 0;
}

int searchListLinear(vector<int>& arg, int target)
{
    for (int i = 0; i < arg.size(); i++)
    {
        if (arg[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int searchListBinary(vector<int>& arg, int target)
{
    int first = 0;
    int last = arg.size() - 1;

    while (first <= last)
    {
        int mid = (first + last) / 2;

        if (arg[mid] == target)
        {
            return mid;
        }
        else if (target < arg[mid])
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }

    return -1;
}

void printVec(vector<int>& v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
}
