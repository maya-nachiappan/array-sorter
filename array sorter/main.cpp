//
//  main.cpp
//  array sorter
//
//  Created by maya nachiappan on 10/7/24.
//

#include <iostream>
#include <algorithm> // for std::sort
using namespace std;

void sortArray(int arr[], int size) {
    sort(arr, arr + size); // sort the array numerically
}

int main() {
    int size;

    // Ask the user for the number of elements
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    // Create an array of the specified size
    int* arr = new int[size];

    // Ask the user to input the elements
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Original array: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    sortArray(arr, size); // Sort the array

    cout << "Sorted array: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " " << endl;
    }
    cout << endl;

 //   delete[] arr; // Free the dynamically allocated memory
    return 0;
}
