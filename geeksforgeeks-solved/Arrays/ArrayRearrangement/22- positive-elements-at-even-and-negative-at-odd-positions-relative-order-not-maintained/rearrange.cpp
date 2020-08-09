/*
 * Topic: Positive elements at even and negative
 * at odd positions (Relative order not maintained)
 *
 * Description: You have been given an array and you
 * have to make a program to convert that array such
 * that positive elements occur at even numbered places
 * in the array and negative elements occur at odd
 * numbered places in the array. We have to do it in place.
 *
 * There can be unequal number of positive and negative
 * values and the extra values have to left as it is.
 */

#include <iostream>

using namespace std;
void swap(int arr[], int x, int y) {
    int tmp = arr[x];
    arr[x] = arr[y];
    arr[y] = tmp;
}

void rearrange(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        if(i%2 == 0) {
            if(arr[i] < 0) {
                for(int j  = i; j < n; j++) {
                    if(arr[j] > 0 && !(j%2 == 0)) {
                        swap(arr, i, j);
                        break;
                    }
                }
            }
        }
        else {
            if(arr[i] > 0) {
                for(int j  = i; j < n; j++) {
                    if(arr[j] < 0 && j%2 == 0) {
                        swap(arr, i, j);
                        break;
                    }
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
    //int arr[] =  {1, -3, 5, 6, -3, 6, 7, -4, 9, 10};
    int arr[] =  {-1, 3, -5, 6, 3, 6, -7, -4, -9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    rearrange(arr, n);
    
    printArr(arr, n);
}

