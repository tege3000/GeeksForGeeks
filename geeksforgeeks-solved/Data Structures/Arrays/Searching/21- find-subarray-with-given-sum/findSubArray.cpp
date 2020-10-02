/*
 * Topic: Find subarray with given sum | Set 1 (Nonnegative Numbers)
 *
 * Description: Given an unsorted array of nonnegative integers, find
 * a continuous subarray which adds to a given number.
 
 */
#include <iostream>
using namespace std;

int findSubArray(int arr[], int n, int sum) {
    return -1;
}

int main() {
    int arr[] = {-10, -1, 0, 3, 10, 11, 30, 50, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 33;
    int res = findSubArray(arr, n, sum);
    if(res != -1) {
        cout << "Output: " << res << "\n";
    }
    else {
        cout << "There is no subarray with " << sum << " sum\n";
    }
    return 0;
}
