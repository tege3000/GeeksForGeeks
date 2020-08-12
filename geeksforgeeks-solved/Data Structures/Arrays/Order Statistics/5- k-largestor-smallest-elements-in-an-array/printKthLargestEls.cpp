/*
 * Topic: k largest(or smallest) elements in an
 * array | added Min Heap method
 *
 * Description: Write an efficient program for
 * printing k largest elements in an array.
 * Elements in array can be in any order.
 */

#include <iostream>

using namespace std;

void printKthLargestEls(int arr[], int n, int k) {
    // sorts the array in descending order
    sort(arr, arr+n, greater<int>());
    
    for(int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int arr[] =  {1, 23, 12, 9, 30, 2, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    
    printKthLargestEls(arr, n, k);
    
}

