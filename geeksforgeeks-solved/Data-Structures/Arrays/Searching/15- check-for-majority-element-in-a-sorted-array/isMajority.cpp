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

// modified binary search that returns first occurrence of a number, if found.
int binarySearch(int arr[], int start, int end, int x) {
    
    while(start <= end) {
        int middle = (start+end)/2;
        
        /* Check if arr[mid] is the first occurrence of x.
         arr[mid] is first occurrence if x is one of the following
         is true:
         (i) mid == 0 and arr[mid] == x
         (ii) arr[mid-1] < x and arr[mid] == x
         */
        if( (middle == 0 || arr[middle-1] < x) && arr[middle] == x) {
            return middle;
        }
        else if(arr[middle] < x) {
            start = middle+1;
        }
        else if(arr[middle > x]) {
            end = middle - 1;
        }
    }
    
    return -1;
}

// Better approach
// works in O(logn) time
bool isMajority(int arr[], int n, int x) {
    //since array is sorted, we can use binary search
    int pos = binarySearch(arr, 0, n-1, x);
    
    if(pos != -1) {
        if(arr[pos+(n/2)] == x && pos+(n/2) < n-1) {
            return true;
        }
        else {
            return false;
        }
    }
    
    return false;
    
}


//// Initial Implementation
//// Works in O(n) time
//bool isMajority(int arr[], int n, int x) {
//    if(count(arr, arr+n, x) > n/2) {
//        return true;
//    }
//    else {
//        return false;
//    }
//}


int main() {
    int arr[] = {1, 2, 3, 3, 3, 3, 10};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    
    if(isMajority(arr, arr_size, x)) {
        cout << "True (x appears more than n/2 times in the given array) \n";
    }
    else {
        cout << "False (x doesn't appear more than n/2 times in the given array) \n";
    }
    
    return 0;
}
