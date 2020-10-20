/*
 * Topic: Constant time range add operation on an array
 *
 * Description:
 * Given an array of size N which is initialized with
 * all zeros. We are given many range add queries, which
 * should be applied to this array. We need to print final
 * updated array as our result.
 */


#include <iostream>
using namespace std;
void printArr(int arr[], int N) {
    for(int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void updateArray(int arr[], int N) {
    int sum = 0;
    for(int i = 0; i < N; i++) {
        arr[i] += sum;
        sum = arr[i];
    }
}

void add(int arr[], int N, int l, int r, int val) {
    arr[l] = val;
    if(r != N-1) {
        arr[r+1] = -1 * val;
    }
}

int main() {
    int N = 6;
    
    int arr[6] = {0};
    
    // Range add Queries
    add(arr, N, 0, 2, 100);
    add(arr, N, 1, 5, 100);
    add(arr, N, 2, 3, 100);
    
    updateArray(arr, N);
    printArr(arr, N);
    
}
