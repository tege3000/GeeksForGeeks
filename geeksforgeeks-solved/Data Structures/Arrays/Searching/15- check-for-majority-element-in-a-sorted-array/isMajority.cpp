/*
 * Topic: Check for Majority Element in a sorted array
 *
 * Description: Write a C function to find if
 * a given integer x appears more than n/2 times in a sorted
 * array of n integers.
 * Basically, we need to write a function say isMajority() that
 * takes an array (arr[] ), array’s size (n) and a number to be
 * searched (x) as parameters and returns true if x is a majority
 * element (present more than n/2 times).
 */
#include <iostream>

using namespace std;

bool isMajority(int arr[], int n, int x) {
    if(count(arr, arr+n, x) > n/2) {
        return true;
    }
    else {
        return false;
    }
}


int main() {
    int arr[] = {1, 1, 1, 2, 2};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int x = 1;
    
    if(isMajority(arr, arr_size, x)) {
        cout << "True (x appears more than n/2 times in the given array) \n";
    }
    else {
        cout << "False (x doesn't appear more than n/2 times in the given array) \n";
    }
    
    return 0;
}
