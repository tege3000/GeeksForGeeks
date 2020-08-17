/*
 * Topic: K maximum sums of overlapping contiguous
 * sub-arrays
 *
 * Description: Given an Array of Integers and an
 * Integer value k, find out k sub-arrays(may be overlapping)
 * which have k maximum sums.
 */
#include <iostream>
#include <vector>
#include <set>

using namespace std;

void kMaxSumNonOverlapping(int arr[], int n, int k) {
    int min = *min_element(arr, arr+n);
    int count = 0;
    int sum, maxSum, a, b;
    while (count != k) {
        sum = arr[0];
        maxSum = min;
        a = 0;

        for(int j = 1; j < n; j++) {
            if(arr[j] + sum >= sum) {
                sum += arr[j];
                b = j;
            }
            else {
                
                maxSum = max(maxSum, sum);
                sum = arr[j];
                a = j;
            }
        }
        cout << maxSum << " ";
        count++;
    }
}

int main() {
    int arr[] =  {4, 1, 1, -1, -3, -5, 6, 2, -6, -2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    
    kMaxSumNonOverlapping(arr, n, k);
    return 0;
}
