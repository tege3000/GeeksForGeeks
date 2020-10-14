/*
 * Topic:
 * Find maximum average subarray of k length
 *
 * Description:
 * Given an array with positive and negative numbers,
 * find the maximum average subarray of given length.
 */

#include <iostream>
#include <vector>
using namespace std;

int maxAvgSubArray(int arr[], int n, int k) {
    int maxAvg = 0;
    
    int avg = 0;
    int sum = 0;
    int index = 0;
    
    for(int i = 0; i <= n-k; i++) {
        avg = 0;
        sum = 0;
        for(int j = i; j < k+i; j++) {
            sum += arr[j];
        }
        
        avg = sum/k;
        if(avg > maxAvg) {
            maxAvg = avg;
            index = i;
        }
    }
    
    return index;
    
}


int main() {
    int arr[] = {1, 12, -5, -6, 50, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    
    int ans = maxAvgSubArray(arr, n, k);
    cout << "The maximum average subarray of length " << k << " begins at index " << ans << endl;
    return 0;
    
    
}
