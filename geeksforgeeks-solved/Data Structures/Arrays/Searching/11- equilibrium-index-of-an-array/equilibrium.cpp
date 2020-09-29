/*
 * Topic: Equilibrium index of an array
 *
 * Description: Equilibrium index of an array
 * is an index such that the sum of elements
 * at lower indexes is equal to the sum of elements
 * at higher indexes. For example, in an array A:
 */
#include <iostream>
#include <limits.h>
#include <numeric>
using namespace std;

// More efficient approach, but less intuitive
// Works in O(n) time
int equilibrium(int arr[], int n) {
    int leftSum = 0, sum = 0;
    sum = accumulate(arr, arr+n, 0);
    
    for(int i = 0; i < n; i++) {
        sum -= arr[i]; // now rightSum
        
        if(sum == leftSum) {
            return i;
        }
        
        leftSum += arr[i];
    }
    
    return -1;
}

//// Initial approach
//// Works in O(n^2) time
//int equilibrium(int arr[], int n) {
//    int leftSum = 0, rightSum = 0;
//
//    for(int i = 0; i < n; i++) {
//        leftSum = 0;
//        rightSum = 0;
//
//        leftSum = accumulate(arr, arr+i, 0);
//        rightSum = accumulate(arr+i+1, arr+n, 0);
//
//        cout << leftSum << " " << rightSum << "\n";
//        if(leftSum == rightSum) {
//            return i;
//        }
//    }
//
//    return -1;
//}

int main() {
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout << equilibrium(arr, arr_size) << " is an equilibrium index" << "\n";
    return 0;
}
