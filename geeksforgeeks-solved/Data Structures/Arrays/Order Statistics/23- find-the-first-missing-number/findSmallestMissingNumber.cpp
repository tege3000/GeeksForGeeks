/*
 * Topic: Find the smallest missing number
 *
 *
 * Description: Given a sorted array of n distinct
 * integers where each integer is in the range from
 * 0 to m-1 and m > n. Find the smallest number that
 * is missing from the array.
 */
#include <iostream>

using namespace std;

int findSmallestMissingNumber(int arr[], int n, int m) {
    for(int i = 0; i < m; i++) {
        if(i != arr[i]) {
            return i;
        }
    }
    
    return 0;
}

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = 11;
    
    cout << findSmallestMissingNumber(arr, n, m) << endl;
    return 0;
}
