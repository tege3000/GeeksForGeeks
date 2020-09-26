/*
 * Topic: Find position of an element in a sorted array
 * of infinite numbers
 *
 * Description: Suppose you have a sorted array of infinite
 * numbers, how would you search an element in the array?
 */
#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int val){
    int middle = 0;
    while(left <= right) {
        middle = (left+right)/ 2;
        
        if(val == arr[middle]) {
            return middle;
        }
        else if(arr[middle] > val) {
            right = middle - 1;
        }
        else {
            left = middle + 1;
        }
    }
    
    return 0;
}

int findPos(int arr[], int val) {
    int left = 0;
    int right = 1;
    
    // infinte loop
    while(1) {
        if(val < arr[right]) {
            return binarySearch(arr, left, right, val);
        }
        else {
            left = right;
            right *= 2;
        }
    }
    return 0;
}

int main() {
    int arr[] = {3, 5, 7, 9, 10, 90, 100, 130, 140, 160, 170};

    cout << "Element found at index " << findPos(arr, 10) << endl;
    return 0;
}

