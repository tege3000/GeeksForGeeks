/*
 * Topic: Find a Fixed Point (Value equal to index) in
 *  a given array
 *
 * Description: Given an array of n distinct integers
 * sorted in ascending order, write a function that returns
 * a Fixed Point in the array, if there is any Fixed Point
 * present in array, else returns -1. Fixed Point in an array
 * is an index i such that arr[i] is equal to i. Note that
 * integers in array can be negative.
 */
#include <iostream>
using namespace std;

// Initial approcah
// Works in O(n) time
int findFixedPoint(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        if(i == arr[i]) {
            return i;
        }
    }
    
    return -1;
}

int main() {
    int arr[] = {-10, -5, 3, 4, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    if(findFixedPoint(arr, n) != -1) {
        cout << "Output: " << findFixedPoint(arr, n) << "\n";
    }
    else {
        cout << "No fixed point\n";
    }
    return 0;
}
