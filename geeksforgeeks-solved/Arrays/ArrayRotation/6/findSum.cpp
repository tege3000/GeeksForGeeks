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
string findSum(int arr[], int n, int x) {
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] + arr[j] == x) {
                return "true";
            }
        }
    }
    
    return "false";
    
}


int main() {
    int arr [] = {11, 15, 26, 38, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 45;
    
    string ans = findSum(arr, n, x);
    
    cout << ans << endl;
    
}
