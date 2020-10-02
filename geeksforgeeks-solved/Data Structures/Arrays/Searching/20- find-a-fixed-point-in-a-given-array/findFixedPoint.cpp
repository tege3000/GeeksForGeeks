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

// Second approach - Uses Binary Search
// Works in O(logn) time
int findFixedPoint(int arr[], int n) {
    int low = 0;
    int high = n-1;
    
    while(low <= high) {
        int middle = (low+high)/2;
        
        if(middle == arr[middle]) {
            return middle;
        }
        else if(middle > arr[middle]) {
            low = middle+1;
        }
        else {
            high = middle-1;
        }
    }
    
    return -1;
}

//// Initial approcah - Uses linear search
//// Works in O(n) time
//int findFixedPoint(int arr[], int n) {
//    for(int i = 0; i < n; i++) {
//        if(i == arr[i]) {
//            return i;
//        }
//    }
//
//    return -1;
//}

int main() {
    int arr[] = {-10, -1, 0, 3, 10, 11, 30, 50, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int ans = findFixedPoint(arr, n);
    if(ans != -1) {
        cout << "Output: " << ans << "\n";
    }
    else {
        cout << "No fixed point\n";
    }
    return 0;
}
