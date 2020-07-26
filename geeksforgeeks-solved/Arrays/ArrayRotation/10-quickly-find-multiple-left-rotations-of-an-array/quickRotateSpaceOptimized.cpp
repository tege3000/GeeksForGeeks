/*
 * Topic: Quickly find multiple left rotations of an array
 *
 *
 * Description: Given an array of size n and multiple values
 * around which we need to left rotate the array.
 * How to quickly find multiple left rotations?
 *
 *
 * NOTE: THIS IS A SPACE OPTIMIZED APPROACH; uses less memory
 */


#include <iostream>
using namespace std;

void rotate(int arr [], int n, int k) {
    
    for(int i = k; i < k+n; i++) {
        cout << arr[i%n] <<  " ";
    }
    cout << "\n";
    
}

int main() {
    int arr [] = {1, 3, 5, 7, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int k = 1;
    rotate(arr, n, k);
    
    k = 3;
    rotate(arr, n, k);
    
    k = 4;
    rotate(arr, n, k);
    
    k = 6;
    rotate(arr, n, k);
    
}
