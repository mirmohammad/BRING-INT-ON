//
//  2-sort.cpp
//  Sort an 1-D array using bubble sort and insertion sort
//
//  Created by Mirmohammad Saadati on 2019-03-14.
//  Copyright © 2019 Mirmohammad Saadati. All rights reserved.
//

#include <iostream>  // Standard input / output stream library

using namespace std;

//# define M 10

// an implementation of bubble sort (ascending)
void bubbleSort(int nums[], const int size) {
    for(int i = 0; i < size - 1; i++)
        for(int j = 0; j < size - i - 1; j++)
            if(nums[j] > nums[j + 1]) {
                // swap two elements of the array using XOR(!)
                nums[j] ^= nums[j + 1];
                nums[j + 1] ^= nums[j];
                nums[j] ^= nums[j + 1];
                // swap two elements of the array using temp variable
                // int temp = nums[j + 1];
                // nums[j + 1] = nums[j];
                // nums[j] = temp;
            }
}

// an implementation of insertion sort (descending)
void insertionSort(int nums[], const int size) {
    for(int i = 1, j, key; i < size; i++, nums[j + 1] = key)
        for(j = i - 1, key = nums[i]; j >= 0 && nums[j] < key; j--)
            nums[j + 1] = nums[j];
}

// implement selection sort yourself as an exercise
void selectionSort(int nums[], const int size) {
    /// TODO: Implement selection sort
    /// https://en.wikipedia.org/wiki/Selection_sort
}

int main(int argc, const char * argv[]) {

    // size of array must be saved in a separate variable/constant in C++
    const int M = 10;  // same(?) as #define M 10
    // array of numbers to sort
    int numbers[M] = {5, 3, 2, 8, 6, 4, 1, 9, 0, 7};

    // invoke bubbleSort function passing and array of numbers and its size
    bubbleSort(numbers, M);

    // print the sorted array
    for(int i = 0; i < M; i++)
        cout << numbers[i] << " ";
    cout << endl;

    // invoke insertionSort function passing an array of numbers and its size
    insertionSort(numbers, M);

    // print the sorted array
    for(int i = 0; i < M; i++)
        cout << numbers[i] << " ";
    cout << endl;

    return 0;
}

