#include <iostream>
#include <algorithm> 
#include <vector>    

// This line lets you use std commands without the "std::" prefix
using namespace std;

/*
* YOUR FUNCTION (FROM THE IMAGE)
* Now without using "std::"
*/
void bubbleSort(vector<int> &v) {
    int n = v.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]); // No "std::" needed
            }
        }
    }
}


int main() {
   
    vector<int> my_vector = {64, 34, 25, 12, 22, 11, 90};

    cout << "Original array: ";
    // Loop to print the vector
    for (int num : my_vector) {
        cout << num << " ";
    }
    cout << endl;

    // 2. Called your bubbleSort function
    bubbleSort(my_vector); 

    // 3. Printed the sorted array
    cout << "Sorted array: ";
    for (int num : my_vector) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
