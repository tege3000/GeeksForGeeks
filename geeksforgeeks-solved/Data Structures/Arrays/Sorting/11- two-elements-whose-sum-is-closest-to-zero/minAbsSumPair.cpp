/*
 * Topic: Two elements whose sum is closest to zero
 *
 * Description: An Array of integers is given, both
 * +ve and -ve. You need to find the two elements such
 * that their sum is closest to zero.
 */
#include <iostream>
#include <limits.h>

using namespace std;


// First approach
// O(n^2) time
void minAbsSumPair(int arr[], int n) {
    int minAbsSum = INT_MAX;
    int min_l = 0, min_r = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(abs(arr[i] + arr[j]) < minAbsSum) {
                minAbsSum = abs(arr[i] + arr[j]);
                min_l = i;
                min_r = j;
            }
        }
    }
    
    cout << minAbsSum << endl;
    cout << "The two elements whose sum is minimum are " << arr[min_l] << " and " << arr[min_r] << endl;
}

int main()
{
    
    int arr[] = {1, 60, -10, 70, -80, 85};
    int n = sizeof(arr)/sizeof(arr[0]);
    minAbsSumPair(arr, n);
    
    return 0;
}

