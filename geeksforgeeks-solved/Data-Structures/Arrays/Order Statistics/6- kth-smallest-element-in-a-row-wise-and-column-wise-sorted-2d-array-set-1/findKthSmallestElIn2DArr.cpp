/*
 * Topic: Kth smallest element in a row-wise and
 * column-wise sorted 2D array | Set 1
 *
 * Description: Given an n x n matrix, where every
 * row and column is sorted in non-decreasing order.
 * Find the kth smallest element in the given 2D array.
 */

#include <iostream>

using namespace std;

int findKthSmallestElIn2DArr(int arr[][4], int n, int m, int k) {
    int tmp[n*m];
    int start = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            tmp[start] = arr[i][j];
            start++;
        }
    }
    
    sort(tmp, tmp+(n*m));
    return tmp[k-1];
}

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int n = 4;
    int m = 4;
    int arr[4][4] =  {{10, 20, 30, 40}, {15, 25, 35, 45}, {24, 29, 37, 48}, {32, 33, 39, 50}};
    int k = 7;
    
    int ans = findKthSmallestElIn2DArr(arr, n, m, k);
    
    cout << ans << endl;
    
}

