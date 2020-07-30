/*
 * Topic: Rearrange array such that arr[i] >= arr[j]
 * if i is even and arr[i]<=arr[j] if i is odd and j < i
 *
 * Description: Given an array of n elements. Our task
 * is to write a program to rearrange the array such
 * that elements at even positions are greater than all
 * elements before it and elements at odd positions are
 * less than all elements before it.
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

void rearrangeEvenAndOdd(int arr[], int n) {
    int tmp[n];
    auto max = max_element(arr+0, arr+n);
    auto index = distance(arr, max);
    int lowerHalf = index/2;
    int upperHalf = (index/2) + 1;
    for(int i = 0; i < n; i++) {
        tmp[i] = arr[i];
    }
    
    sort(tmp+0, tmp+n);
  
    for(int i = 0; i < n; i++) {
        if(i%2 == 0) {
            //sort from max to min
            arr[i] = tmp[lowerHalf];
            lowerHalf--;
        }
        else {
            // sort from min to max
            arr[i] = tmp[upperHalf];
            upperHalf++;
        }
    }
    
}

int main() {
    int arr[] = {1, 2, 1, 4, 5, 6, 8, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    rearrangeEvenAndOdd(arr, n);
    printArr(arr, n);
}
