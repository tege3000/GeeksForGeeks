/*
 * Topic: Move all negative elements to end in order
 * with extra space allowed
 *
 * Description: Given an unsorted array of both 
 * negative and positive integer. The task is place all
 * negative element at the end of array without changing
 * the order of positive element and negative element.
 */
 
#include <iostream>

using namespace std;

void rearrange(int arr[], int n) {
    int neg[n];
    int s = 0;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) {
            neg[s] = arr[i];
            s++;
        }
    }
    for(int i = s; i < n; i++) {
        neg[i] = 0;
    }
    
    int pos[n];
    s = 0;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            pos[s] = arr[i];
            s++;
        }
    }
    for(int i = s; i < n; i++) {
        pos[i] = 0;
    }
    
    s = 0;
    for(int i = 0; i < n; i++) {
        if(pos[i] != 0) {
            arr[s] = pos[i];
            s++;
        }
        else {
            break;
        }
    }
    
    for(int i = 0; i < n; i++) {
        if(neg[i] != 0) {
            arr[s] = neg[i];
            s++;
        }
        else {
            break;
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
    int n = sizeof(arr)/sizeof(arr[0]);
    
    rearrange(arr, n);
    
    printArr(arr, n);
}
