/*
 * Topic: Find subarray with given sum | Set 1 (Nonnegative Numbers)
 *
 * Description: Given an unsorted array of nonnegative integers, find
 * a continuous subarray which adds to a given number.
 */
#include <iostream>
#include <numeric>
using namespace std;

bool findSubArray(int arr[], int n, int sum) {
    
    for(int i = 0; i < n; i++) {
        int sumOfEls = 0;
        for(int j = i; j < n; j++) {
            sumOfEls = accumulate(arr+i, arr+j+1, 0);
            if(sumOfEls == sum) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[] = {1, 4, 0, 0, 3, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 7;
    int res = findSubArray(arr, n, sum);
    if(res) {
        cout << "Sum found" << "\n";
    }
    else {
        cout << "There is no subarray with " << sum << " sum\n";
    }
    return 0;
}
