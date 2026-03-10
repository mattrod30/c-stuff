#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;

void copyArray(vector<int>& a, int begin, int end, vector<int>& b);
void topDownMerge(vector<int>& a, int begin, int middle, int end, vector<int>& b, int& count);
void topDownSplitMerge(vector<int>& a, int begin, int end, vector<int>& b, int& count);
void topDownMergeSort(vector<int>& a, vector<int>& b, int n, int& count);


int main() {
    srand(unsigned(time(0)));
    int counter = 0;


    const int size = 100;
    vector<int> myVec, myVecsorted;

    for (int i = 0; i < size; i++) {
        myVec.push_back(rand());
    }
    cout << endl;

    for (int i = 0; i < size; i++) {
        cout << myVec[i] << endl;
    }

    topDownMergeSort(myVec, myVecsorted, size, counter);
    cout << "Num comparisons: " << counter << endl;
    for (int i = 0; i < size; i++) {
        cout << myVecsorted[i] << endl;
    }

    return 0;
}

void copyArray(vector<int>& a, int begin, int end, vector<int>& b) {
    for (int k = begin; k < end; ++k) {
        b.push_back(a[k]);
        b[k] = a[k];
    }
}

// Merge two sorted halves (from b) into a single sorted run (into a)
void topDownMerge(vector<int>& a, int begin, int middle, int end, vector<int>& b, int& count) {
    int i = begin;
    int j = middle;

    // Merge the two sorted runs into b
    for (int k = begin; k < end; ++k) {
        count++;

        count += 2;

        if (i < middle && (j >= end || a[i] <= a[j])) {
            b[k] = a[i]; // Take element from the left run
            i++;
        }
        else {
            b[k] = a[j]; // Take element from the right run
            j++;
        }
    }
    count++;
}

// Split the array a into two halves, sort both halves into b,
// and merge the sorted halves back into a
void topDownSplitMerge(vector<int>& a, int begin, int end, vector<int>& b, int& count) {
    count++;
    if (end - begin <= 1) {
        return; // Base case: Run size is 1, so it's already sorted
    }

    int middle = (begin + end) / 2;  // Find the midpoint to split the array

    // Recursively sort the left and right halves into b
    topDownSplitMerge(b, begin, middle, a, count);
    topDownSplitMerge(b, middle, end, a, count);

    // Merge the sorted halves back into a
    topDownMerge(b, begin, middle, end, a, count);
}

void topDownMergeSort(vector<int>&a, vector<int>& b, int n, int& count) {
    // Copy the entire array a into b initially
    copyArray(a, 0, n, b);
    // Recursively split and merge the array b into a
    topDownSplitMerge(b, 0, n, a, count);
}
