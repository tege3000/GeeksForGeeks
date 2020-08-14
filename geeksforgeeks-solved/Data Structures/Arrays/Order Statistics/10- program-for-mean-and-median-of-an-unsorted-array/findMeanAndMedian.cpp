/*
 * Topic: Program for Mean and median of an unsorted array
 *
 * Description: Given n size unsorted array,
 * find its mean and median.
 */

#include <iostream>

using namespace std;

float findMean(int arr[], int n) {
    float sum = 0.0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum/n;
}


float findMedian(int arr[], int n) {
    sort(arr, arr+n);
    
    int middle = (n-1)/2;
    
    if(n % 2 == 0) {
        return (arr[middle] + arr[middle+1])/2.0;
    }

    return arr[middle];
}

int main() {
    int arr[] {1, 3, 4, 2, 6, 5, 8, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << findMean(arr, n) << endl;
}

