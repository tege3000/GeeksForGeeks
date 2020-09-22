/*
 * Topic: Find number of pairs (x, y) in an array
 * such that x^y > y^x
 *
 * Description: Given two arrays X[] and Y[] of positive
 * integers, find number of pairs such that x^y > y^x
 * where x is an element from X[] and y is an element from Y[].
 */
#include <iostream>
#include <math.h>
using namespace std;

int findNumPairs(int arr1[], int arr2[], int n, int m) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(pow(arr1[i], arr2[j]) > pow(arr2[j], arr1[i])) {
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    int X[] = {2, 1, 6}, Y[] = {1, 5};
    int n = sizeof(X)/sizeof(X[0]);
    int m = sizeof(Y)/sizeof(Y[0]);

    
    cout << findNumPairs(X, Y, n, m) << "\n";
    
    return 0;
}

