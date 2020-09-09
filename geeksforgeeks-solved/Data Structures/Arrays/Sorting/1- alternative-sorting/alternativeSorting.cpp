/*
 * Topic:
 * Alternative Sorting
 *
 * Description:
 * Given an array of integers, print the array in
 * such a way that the first element is first maximum
 * and second element is first minimum and so on.
 */
#include <iostream>
using namespace std;

void alternativeSorting(int arr[], int n) {
    int tmp[n];
    
    for(int i = 0; i < n; i++) {
        tmp[i] = arr[i];
    }
    
    
    sort(tmp, tmp+n, greater<int>());
    
    int start = 0;
    for(int i = 0; i < n; i = i+2) {
        arr[i] = tmp[start];
        start++;
    }
    
    sort(tmp, tmp+n);

    start = 0;
    for(int i = 1; i < n; i = i+2) {
        arr[i] = tmp[start];
        start++;
    }

}

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int arr[] = {7, 1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    alternativeSorting(arr, n);
    
    printArr(arr, n);
    
    
}
