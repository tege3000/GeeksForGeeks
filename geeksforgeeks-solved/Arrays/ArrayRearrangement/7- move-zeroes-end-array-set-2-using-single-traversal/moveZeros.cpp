/*
 * Topic: Move all zeroes to end of array (Using single traversal)
 *
 * Description: Given an array of n numbers. The problem is to
 * move all the 0’s to the end of the array while maintaining
 * the order of the other elements. Only single traversal of
 * the array is required.
 */


#include <iostream>

using namespace std;
void swap(int arr[], int x, int y) {
    int tmp = arr[x];
    arr[x] = arr[y];
    arr[y] = tmp;
}

void moveZeros(int arr[], int n) {
    int start = 0;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            swap(arr, start, i);
            start++;
        }
    }

}

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout <<"\n";
}

int main() {
    //int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
    int arr[] = {1, 2, 0, 0, 0, 3, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    moveZeros(arr, n);
    printArr(arr, n);
    return 0;
}
