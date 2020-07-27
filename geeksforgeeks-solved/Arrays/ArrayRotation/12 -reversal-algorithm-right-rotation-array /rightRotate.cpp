/*
 * Topic: Reversal algorithm for right rotation of an array
 *
 * Description: Given an array, right rotate it by k elements.
 *
 */

#include <iostream>

using namespace std;
void rightRotate(int arr[], int n, int k) {
    int newArr[n];
    int index = 0;
    for(int i = n-1; i >= 0; i--) {
        index = (i-k)%n;
        if(index < 0) {
            index = index + n;
        }
     
        newArr[i] = arr[index];
        
    }
    
    for(int i = 0; i < n; i++) {
        arr[i] = newArr[i];
    }
    
}

int main() {
    int arr [] = {121, 232, 33, 43 ,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    
    rightRotate(arr, n, k);
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
