/*
 * Topic:
 * Sort a nearly sorted (or K sorted) array
 *
 * Description:
 * Given an array of n elements, where each element
 * is at most k away from its target position, devise
 * an algorithm that sorts in O(n log k) time. For example,
 * let us consider k is 2, an element at index 7 in the
 * sorted array, can be at indexes 5, 6, 7, 8, 9 in the given
 * array.
 */
#include <iostream>
using namespace std;
void nearlySorted(int arr[], int n, int k) {
    int pos = 0;
    for(int i = 0; i < n; i++) {
        if(i+k <= n-1) {
            pos = distance(arr, min_element(arr+i, arr+(i+k+1)));
        }
        else {
            pos = distance(arr, min_element(arr+i, arr+n));
        }
        swap(arr[i], arr[pos]);
    }
}

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int arr[] = {10, 9, 8, 7, 4, 70, 60, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    
    nearlySorted(arr, n, k);
    
    printArr(arr, n);
    
    
}
