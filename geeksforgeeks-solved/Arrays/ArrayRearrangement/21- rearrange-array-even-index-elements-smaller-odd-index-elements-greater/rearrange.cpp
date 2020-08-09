/*
 * Topic: Rearrange array such that even index
 * elements are smaller and odd index elements
 * are greater
 *
 * Description: Given an array, rearrange the
 * array such that :
 * If index i is even, arr[i] <= arr[i+1]
 * If index i is odd, arr[i] >= arr[i+1]
 * Note : There can be multiple answers.
 */

#include <iostream>

using namespace std;
void swap(int arr[], int x, int y) {
    int tmp = arr[x];
    arr[x] = arr[y];
    arr[y] = tmp;
}

void rearrange(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        if(i%2 == 0) {
            if(arr[i] >= arr[i+1]) {
                swap(arr, i, i+1);
            }
        }
        else {
            if(arr[i] <= arr[i+1]) {
                swap(arr, i, i+1);
            }
        }
    }
}

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int arr[] =  {6, 4, 2, 1, 8, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    rearrange(arr, n);
    
    printArr(arr, n);
}
