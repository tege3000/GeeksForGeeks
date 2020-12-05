/*
 * Topic: Quickly find multiple left rotations of an array
 *
 *
 * Description: Given an array of size n and multiple values
 * around which we need to left rotate the array.
 * How to quickly find multiple left rotations?
 */


#include <iostream>
using namespace std;
void duplicateArray(int arr[], int n, int tmp[]) {
    for(int i = 0; i < n; i++) {
        tmp[i] = arr[i];
        tmp[i+n] = arr[i];
    }
}

void rotate(int arr [], int n, int k, int tmp[]) {
    int start = k%n;
    
    for(int i = start; i < start+n; i++) {
        cout << tmp[i] <<  " ";
    }
    cout << "\n";
    
}

int main() {
    int arr [] = {1, 3, 5, 7, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int tmp[2*n];
    
    //before rotating lets duplicate the elements of the original array
    duplicateArray(arr, n, tmp);
    
    int k = 1;
    rotate(arr, n, k, tmp);
    
    k = 3;
    rotate(arr, n, k, tmp);
    
    k = 4;
    rotate(arr, n, k, tmp);
    
    k = 6;
    rotate(arr, n, k, tmp);
    
}
