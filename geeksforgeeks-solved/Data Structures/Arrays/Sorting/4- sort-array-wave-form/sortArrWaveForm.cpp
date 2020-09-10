/*
 * Topic:
 * Sort an array in wave form
 *
 * Description:
 * Given an unsorted array of integers, sort the array
 * into a wave like array. An array ‘arr[0..n-1]’ is sorted
 * in wave form if arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= …..
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

void sortArrWaveForm(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        if(i%2 == 0) {
            if(arr[i] <= arr[i+1]) {
                swap(arr[i], arr[i+1]);
            }
        }
        else {
            if(arr[i] >= arr[i+1]) {
        
                swap(arr[i], arr[i+1]);
            }
        }
       
    }
}



int main() {
    int arr[] = {3, 6, 5, 10, 7, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    sortArrWaveForm(arr, n);
    printArr(arr, n);
}
