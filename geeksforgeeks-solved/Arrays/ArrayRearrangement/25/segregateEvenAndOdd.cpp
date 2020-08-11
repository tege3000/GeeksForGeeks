/*
 * Topic: Segregate even and odd numbers | Set 3
 *
 * Description: Given an array of integers, segregate
 * even and odd numbers in the array. All the even numbers
 * should be present first, and then the odd numbers.
 */

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}


// Initial implementation
// O(n^2) time complexity
void segregateEvenAndOdd(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        if(!(arr[i] %2 == 0)) {
            for(int j = i+1; j < n; j++) {
                if(arr[j] % 2 == 0) {
                    swap(&arr[i], &arr[j]);
                    break;
                }
            }
        }
    }
}

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    //int arr[] =  {1, 9, 5, 3, 2, 6, 7, 11};
    int arr[] = {1, 3, 2, 4, 7, 6, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    segregateEvenAndOdd(arr, n);
    printArr(arr, n);
}

