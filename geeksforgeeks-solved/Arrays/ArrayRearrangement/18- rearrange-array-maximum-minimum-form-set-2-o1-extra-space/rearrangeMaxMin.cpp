/*
 * Topic: Rearrange an array in maximum minimum form |
 * Set 2 (O(1) extra space)
 *
 * Description: Given a sorted array of positive integers,
 * rearrange the array alternately i.e first element should
 * be maximum value, second minimum value, third second max,
 * fourth second min and so on.
 *
 * NOTE: The Main aim of this is how to solve this problem with
 * O(1) extra space.
 */

#include <iostream>

using namespace std;

void rearrangeMaxMin(int arr[], int n) {
    reverse(arr, arr+n);
    
    int m;
    if(n % 2 == 0) {
        m = n-1/2;
    }
    else {
        m = n-1/2 + 1;
    }

    int tmp;
    for(int i = 0; i < m; i = i+2) {
        tmp = arr[n-1];

        for(int j = n-1; j > i; j--) {
            arr[j] = arr[j-1];
        }

        arr[i+1] = tmp;
    }
    
    
}

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    rearrangeMaxMin(arr, n);
    printArr(arr, n);
}
