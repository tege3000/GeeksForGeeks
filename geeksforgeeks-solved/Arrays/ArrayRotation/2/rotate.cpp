// Topic: Reversal algorithm for array rotation
//
// Description: Write a function rotate(arr[], d, n)
// that rotates arr[] of size n by d elements.
//
// MY SOLUTION

#include <iostream>

using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void swap(int arr[], int x, int y) {
    int tmp;
    
    tmp = arr[x];
    arr[x] = arr[y];
    arr[y] = tmp;
}
void reverse(int arr[], int start, int end) {
    int n = end-1;
    
    for(int i = start; i < (end+start)/2; i++) {
        swap(arr, i, n);
        n--;
    }
    
}


void rotate(int arr[], int d, int n) {
    reverse(arr, 0, d);
    reverse(arr, d, n);
    reverse(arr, 0, n);
}




int main() {
    int arr [] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int d = 2;
    
    rotate(arr, d, n);
    printArray(arr,n);
    
}
