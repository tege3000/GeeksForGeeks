/*
 * Topic: Write a program to reverse an array or string
 *
 * Description: Given an array (or string), the task is
 * to reverse the array/string.
 *
 */

#include <iostream>
using namespace std;
void swap(int arr[], int x, int y) {
    int tmp = arr[x];
    arr[x] = arr[y];
    arr[y] = tmp;
}
void reverseArr(int arr[], int n) {
    int end = n-1;
    for(int i = 0; i < n/2; i++) {
        swap(arr, i, end);
        end--;
    }
}
void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverseArr(arr, n);
    printArr(arr, n);
}
