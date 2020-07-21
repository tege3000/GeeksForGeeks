/*
 * Topic: Given a sorted and rotated array,
 * find if there is a pair with a given sum
 *
 * Description: Given an array that is sorted
 * and then rotated around an unknown point.
 * Find if the array has a pair with a given
 * sum ‘x’. It may be assumed that all elements
 * in the array are distinct.
 *
 * MY SOLUTION
 */

#include <iostream>

using namespace std;

// After more studying, this is my second implementation
// It works in  O(n) time. which is better than first approach
string findSum(int arr[], int n, int x) {
    
    sort(arr+0, arr+n);
    int left = 0;
    int right = n-1;
    
    while (left < right) {
        if(arr[left]+arr[right] == x) {
            return "true";
        }
        else if(arr[left]+arr[right] < x) {
            left++;
        }
        else {
            right--;
        }
    }
    
    return "false";
    
}


// This is a naive solution (My first approach).
// which works in O(n^2) time
//string findSum(int arr[], int n, int x) {
//    for(int i = 0; i < n; i++) {
//        for(int j = i+1; j < n; j++) {
//            if(arr[i] + arr[j] == x) {
//                return "true";
//            }
//        }
//    }
//
//    return "false";
//
//}

int main() {
    int arr [] = {11, 15, 26, 38, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 35; // sum were looking for
    
    string ans = findSum(arr, n, x);
    
    cout << ans << endl;
    
}
