/*
 * Topic: Find maximum value of Sum( i*arr[i])
 * with only rotations on given array allowed
 *
 * Description: Given an array, only rotation operation
 * is allowed on array. We can rotate the array as many
 * times as we want. Return the maximum possbile of
 * summation of i*arr[i].
 */


#include <iostream>

using namespace std;


// NOTE:
//
// This algorithm is based on the assumption that
// for us to find the largest sum, the maximum element
// must be at the last index of the array; before or
// after rotation.
int maxSum(int arr[], int n) {
    int sum = 0;
    
    auto max = max_element(arr+0, arr+n);
    
    int pos = distance(arr,max);
    
    if(pos != n-1) {
        rotate(arr+0, arr+(pos+1), arr+n);
    }
    
    for(int i = 0; i < n; i++) {
        sum += i*arr[i];
    }
    
    return sum;
}

int main() {
    
    int arr[] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    
    cout << maxSum(arr, n) << endl;
    
    return 0;
}
