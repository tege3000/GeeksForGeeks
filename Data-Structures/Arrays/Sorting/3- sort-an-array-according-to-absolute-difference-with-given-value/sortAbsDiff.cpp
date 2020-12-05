/*
 * Topic:
 * Sort an array according to absolute difference with given value
 *
 * Description:
 * Given an array of n distinct elements and a number x, arrange
 * array elements according to the absolute difference with x,
 * i.e., element having minimum difference comes first and so on.
 * Note : If two or more elements are at equal distance arrange them
 * in same sequence as in the given array.
 */
#include <iostream>
#include <limits.h>

using namespace std;
void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void sortAbsDiff(int arr[], int n, int k) {
    int tmp[n];
    int ans[n];
    
    for(int i = 0; i < n; i++) {
        tmp[i] = abs(k - arr[i]);
    }
    
    for(int i = 0; i < n; i++) {
        int pos = distance(tmp, min_element(tmp, tmp+n));
        ans[i] = arr[pos];
        tmp[pos] = INT_MAX;
    }
    
    printArr(ans, n);
}



int main() {
    int arr[] = {2, 6, 8, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 5;
    
    sortAbsDiff(arr, n, k);
}
