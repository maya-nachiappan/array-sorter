//
//  main.cpp
//  array sorter
//
//  Created by maya nachiappan on 10/7/24.
//

#include <iostream>
#include <algorithm> // for std::sort


void sortArray(int arr[], int size) { // creates function to sort array
    std::sort(arr, arr + size); // sort the array numerically
}

int main() {
    int size;

    // Ask the user for the number of elements
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> size;

    // Create an array of the specified size
    int* arr = new int[size];

    // Ask the user to input the elements
    std::cout << "Enter " << size << " integers:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i]; // integers are inputted in array
    }

    std::cout << "Original array: " << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " "; // prints original array
    }
    std::cout << std::endl;

    sortArray(arr, size); // Sorts the array

    std::cout << "Sorted array: " << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " " << std::endl; // prints sorted array
    }
    std::cout << std::endl;
    return 0;
}
