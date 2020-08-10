/*
 * Topic: Replace every array element by multiplication
 * of previous and next
 *
 * Description: Given an array of integers, update every
 * element with multiplication of previous and next elements
 * with following exceptions.
 * a) First element is replaced by multiplication of first
 * and second.
 * b) Last element is replaced by multiplication of last and
 * second last.
 */

#include <iostream>

using namespace std;
void replace(int arr[], int n) {
    int tmp[n];
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            tmp[i] = arr[i] * arr[i+1];
        }
        else if(i == n-1) {
            tmp[i] = arr[i] * arr[i-1];
        }
        else {
            tmp[i] = arr[i-1] * arr[i+1];
        }
    }
    
    for(int i = 0; i < n; i++) {
        arr[i] = tmp[i];
    }
}

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int arr[] =  {2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    replace(arr, n);
    
    printArr(arr, n);
}

