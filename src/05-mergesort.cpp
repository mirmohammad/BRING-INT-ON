//
//  04-mergesort.cpp
//  An implementation of merge sort in C++
//
//  Created by Mirmohammad Saadati on 2019-03-14.
//  Copyright © 2019 Mirmohammad Saadati. All rights reserved.
//

#include <iostream>  // Standard input / output stream library

using namespace std;

// auxiliary function to merge two parts of array into one
void merge(int n[], int left, int middle, int right) {
    int half1 = middle - left + 1;  // size of first split
    int half2 = right - middle;  // size of second split
    int LEFT[half1], RIGHT[half2];
    for(int i = 0; i < half1; i++)
        LEFT[i] = n[left + i];
    for(int i = 0; i < half2; i++)
        RIGHT[i] = n[middle + 1 + i];
    for(int i = 0, j = 0, k = left; k <= right; k++)
        if(i < half1 && j < half2)
            if(LEFT[i] <= RIGHT[j])
                n[k] = LEFT[i++];
            else
                n[k] = RIGHT[j++];
            else
                if(i < half1)
                    n[k] = LEFT[i++];
                else
                    n[k] = RIGHT[j++];
}

// recursive merge sort function
void mergeSort(int n[], int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;
        mergeSort(n, left, middle);
        mergeSort(n, middle + 1, right);
        merge(n, left, middle, right);
    }
}

int main(int argc, const char * argv[]) {
    // size of array
    const int N = 8;
    int n[N] = {1, 4, 2, 8, 9, 3, 5, 0};
    // call merge sort with left index of 0 and right index of N - 1
    mergeSort(n, 0, N - 1);
    // print sorted array
    for(int i = 0; i < N; i++)
        cout << n[i] << ", ";
    cout << endl;
    return 0;
}

