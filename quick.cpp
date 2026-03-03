#include <iostream>
#include <string>
#include <map>
#include <cstdlib>
#include <ctime>
#include<vector>
using namespace std;

// for quick sorting an array
void swap(int* a, int* b);
int partition(vector<int>& arr, int low, int high, int& cnt);
void quickSort(vector<int>& arr, int low, int high, int& cnt);
void printVec(vector<int>& arr);

int main(void)
{
    srand(time(0));

    vector<int>myVec;
    int numCompares;

    myVec.push_back(1 + rand() % 100);
    for (int i = 0; i < 10; i++) {
        cout << myVec[i] << " ";
    }
    printVec(myVec);
    quickSort(myVec, 0, myVec.size() - 1, numCompares);
    printVec(myVec);
    cout << "num compares: " << numCompares << endl;

    return(0);
}


void swap(int* a, int* b)
{
    // free - no coparisons
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(vector<int>& arr, int low, int high, int& cnt)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high - 1; j++)
    {
        cnt++;
        // If current element is smaller than or
        // equal to pivot
        cnt++;
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);

    return (i + 1);
}


void quickSort(vector<int>& arr, int low, int high, int& cnt)
{
    cnt++;
    if (low < high)
    {
        int pi = partition(arr, low, high, cnt);

        quickSort(arr, low, pi - 1, cnt);
        quickSort(arr, pi + 1, high, cnt);
    }
}
void printVec(vector<int>& arr) {

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
