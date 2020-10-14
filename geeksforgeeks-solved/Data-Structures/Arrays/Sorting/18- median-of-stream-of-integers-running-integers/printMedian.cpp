/*
 * Topic: Median in a stream of integers (running integers)
 *
 * Description: Given that integers are read from a data stream.
 * Find median of elements read so for in efficient way. For
 * simplicity assume there are no duplicates. For example, let us
 * consider the stream 5, 15, 1, 3 …
 */
#include <iostream>
using namespace std;

void printMedian(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        sort(arr, arr+i+1);
        if(i%2 == 0) {
            cout << "After reading item " << i+1 << " Median is " << arr[i/2] << "\n";

        }
        else {
            cout << "After reading item " << i+1 << " Median is " << (arr[i/2] + arr[(i/2) + 1])/2.0 << "\n";
        }
        
    }
}

int main() {
    int arr[] = {5, 15, 1, 3, 2, 8, 7, 9, 10, 6, 11, 4};
//    int arr[] = {5, 15, 10, 20, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printMedian(arr, n);
    
    
    return 0;
}

