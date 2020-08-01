/*
 * Topic: Move all zeroes to end of array
 *
 * Description: Given an array of random numbers,
 * Push all the zero’s of a given array to the end of
 * the array. For example, if the given arrays is
 * {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0}, it should be changed
 * to {1, 9, 8, 4, 2, 7, 6, 0, 0, 0, 0}. The order of all
 * other elements should be same. Expected time complexity
 * is O(n) and extra space is O(1).
 */


#include <iostream>

using namespace std;
void swap(int arr[], int x, int y) {
    int tmp = arr[x];
    arr[x] = arr[y];
    arr[y] = tmp;
}


// second implemntation.
// works in O(n) time
void moveZeros(int arr[], int n) {
    int start = 0;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[start] = arr[i];
            start++;
        }
    }
    
    for(int i = start; i < n; i++) {
        arr[i] = 0;
    }
}


// initial implementation.
// works in O(n^2) time
//void moveZeros(int arr[], int n) {
//    for(int i = 0; i < n; i++) {
//        if(arr[i] == 0) {
//            for(int j = i; j < n; j++) {
//                if(arr[j] != 0) {
//                    swap(arr, i, j);
//                    break;
//                }
//            }
//        }
//    }
//}

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout <<"\n";
}

int main() {
    int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
    //int arr[] = {1, 2, 0, 0, 0, 3, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    moveZeros(arr, n);
    printArr(arr, n);
    return 0;
}
