#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

void copyArray(vector<int>& a, int begin, int end, vector<int>& b);
void topDownMerge(vector<int>& a, int begin, int middle, int end, vector<int>& b, int& count);
void topDownSplitMerge(vector<int>& a, int begin, int end, vector<int>& b, int& count);
void topDownMergeSort(vector<int>& a, vector<int>& b, int n, int& count);


int main() {
    srand(unsigned(time(0)));
    const int size = 100;
    const int trials = 1000;
    int totalComparisons = 0;

    for (int x = 0; x < trials; x++) {
        vector<int> myVec(size);
        vector <int> myVecSorted;
        int counter = 0;

        for (int i = 0; i < size; i++) {
            myVec[i] = (rand() % 100 + 1);
        }
      
        topDownMergeSort(myVec, myVecSorted, size, counter);
        totalComparisons += counter;

        if (x == 0) {
            cout << "Num comparisons: " << counter << endl;
        }
    }

    cout << "Average comparisons over " << trials << " vectors: "
        << (double)totalComparisons / trials << endl;

    return 0;
}

void copyArray(vector<int>& a, int begin, int end, vector<int>& b) {
    b.resize(end);
    for (int k = begin; k < end; ++k) {
        b[k] = a[k];
    }
}

// Merge two sorted halves (from b) into a single sorted run (into a)
void topDownMerge(vector<int>& a, int begin, int middle, int end, vector<int>& b, int& count) {
    int i = begin;
    int j = middle;

    // Merge the two sorted runs into b
    for (int k = begin; k < end; ++k) {
        if (i < middle && (j >= end || a[i] <= a[j])) {
            b[k] = a[i]; // Take element from the left run
            i++;
            if (j < end) count++;
        }
        else {
            b[k] = a[j]; // Take element from the right run
            j++;            
            if (i < middle) count++;

        }
    }
}

// Split the array a into two halves, sort both halves into b,
// and merge the sorted halves back into a
void topDownSplitMerge(vector<int>& a, int begin, int end, vector<int>& b, int& count) {
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

void topDownMergeSort(vector<int>& a, vector<int>& b, int n, int& count) {
    // Copy the entire array a into b initially
    copyArray(a, 0, n, b);
    // Recursively split and merge the array b into a
    topDownSplitMerge(b, 0, n, a, count);
}
