/*
 * Topic: Median of Stream of Running Integers using STL
 *
 * Description: Given that integers are being read from
 * a data stream. Find the median of all the elements
 * read so far starting from the first integer till the
 * last integer. This is also called the Median of Running
 * Integers.
 */

#include <iostream>

using namespace std;

float findMedian(int arr[], int start, int end) {
    sort(arr+start, arr+end);
    
    int middle = (start+end-1)/2;
    
    if(end % 2 == 0) {
        return (arr[middle] + arr[middle+1])/2.0;
    }
    
    return arr[middle];
}

void outputStreamOfMedians(int arr[], int n) {
    float median = 0.0;
    for(int i = 0; i < n; i++) {
        median = findMedian(arr, 0, i+1);
        cout << median << " ";
    }
    cout << "\n";
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    outputStreamOfMedians(arr, n);
}

