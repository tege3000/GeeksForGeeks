/*
 * Topic: Minimum product of k integers in an
 * array of positive Integers
 *
 * Description: Given an array of n positive integers.
 * We are required to write a program to print the
 * minimum product of k integers of the given array.
 */


#include <iostream>

using namespace std;

int minProduct(int arr[], int n, int k) {
    int ans = 1;
    sort(arr, arr+n);
    
    for(int i = 0; i < k; i++) {
        //cout << arr[i] << endl;
        ans *= arr[i];
    }
    
    return ans;
}

int main() {
    int arr[] =  {11, 8, 5, 7, 5, 100};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    
    int minProd = minProduct(arr, n, k);
    cout << minProd << endl;
    return 0;
}
