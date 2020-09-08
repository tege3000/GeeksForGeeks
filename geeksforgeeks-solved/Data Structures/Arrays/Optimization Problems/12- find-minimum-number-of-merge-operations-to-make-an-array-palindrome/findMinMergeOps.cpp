/*
 * Topic:
 * Find minimum number of merge operations to make an array
 * palindrome
 *
 * Description:
 * Given an array of positive integers. We need to make the given
 * array a ‘Palindrome’. Only allowed operation on array is merge.
 * Merging two adjacent elements means replacing them with their sum.
 * The task is to find minimum number of merge operations required
 * to make given array a ‘Palindrome’.
 *
 * To make an array a palindromic we can simply apply merging operations
 * n-1 times where n is the size of array (Note a single element array
 * is alway palindrome similar to single character string). In that case,
 * size of array will be reduced to 1. But in this problem we are asked
 * to do it in minimum number of operations.
 */
#include <iostream>
using namespace std;

int findMinMergeOps(int arr[], int n) {
    int count = 0;
    int end = n-1;
    for(int i = 0; i <= end; i++){
        if(arr[i] == arr[end]) {
            end--;
        }
        else {
            arr[i+1] += arr[i];
            count++;
        }
    }
    
    return count;
    
}


int main() {
    int arr[] = {11, 14, 15, 99};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << findMinMergeOps(arr, n) << endl;

    
    
}
