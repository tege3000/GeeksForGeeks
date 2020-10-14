/*
 * Topic: Maximum Subarray Sum Excluding Certain Elements
 *
 * Description: Given an array of A of n integers and an
 * array B of m integers find the Maximum Contiguous Subarray
 * Sum of array A such that any element of array B is not
 * present in that subarray
 */
#include <iostream>
#include <limits.h>
using namespace std;

int maxSubArraySum(int arr1[], int arr2[], int n, int m) {
    int sum = 0;
    int maxSum = INT_MIN;
    for(int i = 0; i < n; i++) {
        sum = 0;
        for(int j = i; j < n; j++) {
            if(find(arr2, arr2+m, arr1[j]) != arr2+m) {
                break;
            }
            sum += arr1[j];
            maxSum = max(sum, maxSum);
        }
    }
    return maxSum;
}

int main() {
    int arr1[] = {3, 4, 5, -4, 6};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    
    int arr2[] = {1, 8, 5};
    int m = sizeof(arr2)/sizeof(arr2[0]);
    
    cout << maxSubArraySum(arr1, arr2, n, m) << endl;
    return 0;
}
