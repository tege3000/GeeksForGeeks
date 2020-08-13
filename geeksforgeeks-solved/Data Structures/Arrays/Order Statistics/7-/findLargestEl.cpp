/*
 * Topic: Program to find largest element in an array
 *
 * Description: Given an array, find the largest element
 * in it.
 */

#include <iostream>

using namespace std;

int findLargestEl(int arr[], int n) {
    sort(arr, arr+n);
    
    return arr[n-1];
}

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int arr[] {10, 20, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int ans = findLargestEl(arr, n);
    
    cout << ans << endl;
}

