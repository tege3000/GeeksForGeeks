/*
 * Topic: Rearrange an array such that ‘arr[j]’
 * becomes ‘i’ if ‘arr[i]’ is ‘j’ | Set 1
 *
 * Description: Given an array of size n where all
 * elements are distinct and in range from 0 to n-1,
 * change contents of arr[] so that arr[i] = j is
 * changed to arr[j] = i.
 */

#include <iostream>

using namespace std;

void rearrange(int arr[], int n) {
    int tmp[n];
    
    for(int i = 0; i < n; i++) {
        tmp[i] = arr[i];
    }
    
    for(int i = 0; i < n; i++) {
        arr[tmp[i]] = i;
    }
    
}

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int arr[] = {3, 2, 1, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    rearrange(arr, n);
    printArr(arr, n);
}
