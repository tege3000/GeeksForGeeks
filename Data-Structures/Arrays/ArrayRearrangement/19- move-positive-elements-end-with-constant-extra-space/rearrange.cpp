/*
 * Topic: Move all negative numbers to beginning
 * and positive to end with constant extra space.
 * while maintaining order
 *
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
        for(int j = i; j < n; j++) {
            if(arr[j] < 0) {
                for(int k = j; k > i; k--) {
                    swap(arr, k, k-1);
                }
                break;
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
    int arr[] = {-5, 7, -3, -4, 9, 10, -1, 11};
    //int arr[] = {1, -1, 3, 2, -7, -5, 11, 6 };
    int n = sizeof(arr)/sizeof(arr[0]);
    
    rearrange(arr, n);
    
    printArr(arr, n);
}
