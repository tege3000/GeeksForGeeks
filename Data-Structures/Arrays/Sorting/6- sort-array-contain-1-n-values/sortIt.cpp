/*
 * Topic:
 * Sort an array which contain 1 to n values
 *
 * Description:
 * You have given an array which contain 1 to n element,
 * your task is to sort this array in an efficient way
 * and without replace with 1 to n numbers.
 */
#include <iostream>
using namespace std;

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

// Efficient approach
// O(n) time
void sortIt(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        arr[i] = i+1;
    }
}



int main() {
    int arr[] = {10, 7, 9, 2, 8, 3, 5, 4, 6, 1};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    
    sortIt(arr, n);
    
    printArr(arr, n);
    
    return 0;
}
