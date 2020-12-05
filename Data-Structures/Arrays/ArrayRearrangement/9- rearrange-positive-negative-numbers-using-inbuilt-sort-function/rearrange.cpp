/*
 * Topic: Rearrange positive and negative numbers using
 * inbuilt sort function
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
void rearrange(int arr[], int n) {
    int tmp[n];
    int start = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) {
            tmp[start] = arr[i];
            start++;
        }
    }
    
    for(int i = 0 ; i < n; i++) {
        if(arr[i] == 0) {
            tmp[start] = arr[i];
            start++;
        }
    }
    
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            tmp[start] = arr[i];
            start++;
        }
    }
    
    for(int i = 0; i < n; i++) {
        arr[i] = tmp[i];
    }
}

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int arr[] = {-12, 11, 0, -5, 6, -7, 5, -3, -6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    rearrange(arr, n);
    printArr(arr, n);
    return 0;
}
