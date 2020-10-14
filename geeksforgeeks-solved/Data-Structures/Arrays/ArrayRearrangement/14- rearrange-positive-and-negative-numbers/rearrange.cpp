/*
 * Topic: Rearrange positive and negative numbers with
 * constant extra space
 *
 * Description: Given an array of positive and negative
 * numbers, arrange them such that all negative integers
 * appear before all the positive integers in the array
 * without using any additional data structure like hash
 * table, arrays, etc. The order of appearance should be
 * maintained.
 */


#include <iostream>

using namespace std;

/* Algorithm -
 * Loop from i=0 to n-1
 *
 * a) If the current element is positive, do nothing.
 * b) If the current element arr[i] is negative, we
 * insert it into sequence arr[0..i-1] such that
 * all positive elements in arr[0..i-1] are shifted
 * one position to their right and arr[i] is inserted
 * at index of first positive element.
 */
 void rearrange(int arr[], int n) {
    int val, j;
    
    for(int i = 0; i < n; i++) {
        val = arr[i];
        
        
        if(val > 0) {
            continue;
        }
        
        
        // if val is negative,
        // shift all the other +ve values to the right by 1
        // to make space for the negative number
        j = i-1;
        while(j>=0 && arr[j] > 0) {
            arr[j+1] = arr[j];
            j--;
        }
        
        arr[j+1] = val;
    }
    
}

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main() {
    int arr[] = {12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(arr)/sizeof(arr[0]);
    

    rearrange(arr, n);
    printArr(arr, n);
}
