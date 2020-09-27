/*
 * Topic: Find the only repetitive element between 1 to n-1
 *
 * Description: We are given an array arr[] of size n. Numbers
 * are from 1 to (n-1) in random order. The array has only one
 * repetitive element. We need to find the repetitive element.
 */
#include <iostream>
#include <numeric>
using namespace std;

int findRepetitiveElement(int arr[], int n) {
    int regSum = accumulate(arr, arr+n, 0);
    
    // for n sorted elements the sum is = n(n+1)/2
    // so since there is only one duplicated element in our array
    // we can assume that there are n-1 elements, hence why
    // the formular can be modified to sum of n-1 elements = n(n-1)/2
    int sumOfElements  = n*(n-1)/2;
    
    return regSum - sumOfElements;
}

int main() {
    int arr[] = { 9, 8, 2, 6, 1, 8, 5, 3, 4, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Ouptut: " << findRepetitiveElement(arr, n) << "\n";
    return 0;
}

