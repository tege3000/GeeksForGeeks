/*
 * Topic: Rearrange array such that even positioned
 * are greater than odd
 *
 * Description: Given an array A of n elements, sort
 * the array according to the following relations :
 * A[i] >= A[i-1] , if i is even.
 * A[i] <= A[i-1] , if i is odd.
 * Print the resultant array.
 *
 */

#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void rearrange(int arr[], int n) {
    int tmp[n];
    for(int i = 0; i < n; i++) {
        tmp[i] = arr[i];
    }
    
    sort(tmp, tmp+n);
    
    int half = (n-1)/2;
    int start = 0;
    for(int i = 0; i <= half; i++) {
        arr[start] = tmp[i];
        start += 2;
    }
    
    
    start = 1;
    for(int i = n-1; i > half; i--) {
        arr[start] = tmp[i];
        start += 2;
    }
}

int main() {
    int arr[] = {1, 3, 2, 2, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    rearrange(arr, n);
    printArr(arr, n);
}
