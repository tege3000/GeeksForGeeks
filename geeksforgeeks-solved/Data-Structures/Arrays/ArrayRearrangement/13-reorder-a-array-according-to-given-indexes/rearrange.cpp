/*
 * Topic: Reorder an array according to given indexes
 *
 * Description: Given two integer arrays of same size,
 * “arr[]” and “index[]”, reorder elements in “arr[]”
 * according to given index array. It is not allowed to
 * given array arr’s length.
 */


#include <iostream>

using namespace std;
void rearrange(int arr[], int index[], int n) {
    int tmp[n];
    
    for(int i = 0; i < n; i++) {
        tmp[index[i]] = arr[i];
    }
    
    for(int i = 0; i < n; i++) {
        arr[i] = tmp[i];
    }
    
    sort(index, index+n);
    
}

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main() {
    int arr[] = {50, 40, 70, 60, 90};
    int index[] = {3,  0,  4,  1,  2};
    int n = sizeof(arr)/sizeof(arr[0]);
    

    rearrange(arr, index, n);
    printArr(arr, n);
    printArr(index, n);
}
