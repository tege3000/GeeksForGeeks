/*
 * Topic:
 * Sort an array containing two types of elements
 *
 * Description:
 * We are given an array of 0s and 1s in random order.
 * Segregate 0s on left side and 1s on right side of
 * the array. Traverse array only once.
 */
#include <iostream>
using namespace std;

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout <<  arr[i] << " ";
    }
    cout << "\n";
}

void segregate(int arr[], int n) {
    int count0 = count(arr, arr+n, 0);
    int count1 = count(arr, arr+n, 1);
    
    for(int i = 0; i < count0; i++) {
        arr[i] = 0;
    }
    
    for(int i = count0; i < count0+count1; i++) {
        arr[i] = 1;
    }
}

int main() {
    int arr[] = {1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1};

    int n = sizeof(arr) / sizeof(arr[0]);
    
    segregate(arr, n);
    
    printArr(arr, n);

    return 0;
}
