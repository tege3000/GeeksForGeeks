#include <iostream>

using namespace std;
void splitAndAdd(int arr[], int n, int k) {
    int tmp[n];
    
    for(int i = 0; i < k; i++) {
        tmp[i] = arr[i];
    }
    
    for(int i = 0; i < n; i++) {
        arr[i] = arr[(i+k) % n];
    }
    
    int start = 0;
    for(int i = n-k; i < n; i++) {
        arr[i] = tmp[start];
        start++;
    }
}
void  printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    cout << "\n";
}

int main() {
    int arr [] = {12, 10, 5, 6, 52, 36};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    
    splitAndAdd(arr, n, k);
    printArr(arr, n);
    return 0;
}
