/*
 * Topic: Find a peak element
 *
 * Description: Given an array of integers. Find a
 * peak element in it. An array element is a peak if
 * it is NOT smaller than its neighbours. For corner
 * elements, we need to consider only one neighbour.
 */
#include <iostream>
using namespace std;

// Initial Implementation
// Works in O(n) time
void findPeak(int arr[], int n) {
    cout << "Peaks are: ";
    // Handle Base Cases
    
    // 1.
    // If input array is sorted in strictly increasing order,
    // the last element is always a peak element
    if(is_sorted(arr, arr+n)) {

        cout << arr[n-1] << " ";
    }
    else if(!is_sorted(arr, arr+n)) {
        // 2.
        // If the input array is sorted in strictly decreasing order,
        // the first element is always a peak element
        reverse(arr, arr+n);
        if(is_sorted(arr, arr+n)) {
            cout << arr[0] << " ";
        }
        reverse(arr, arr+n);
        
        //3.
        // If all elements of input array are same, every element is
        // a peak element
        int isAllSame = 1;
        for(int i = 1; i < n; i++) {
            if(arr[0] != arr[i]) {
                isAllSame = 0;
                break;
            }
        }
        
        if(isAllSame == 1) {
            for(int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
        }
        else {
            // ACTUAL SOLUTION
            // if 3 base cases dont hold then we proceed as follows
            for(int i = 0 ; i < n; i++) {
                if(i == 0 && arr[i] > arr[i+1]) {
                    cout << arr[i] << " ";
                }
                else if(i == n-1 && arr[i] > arr[i-1]) {
                    cout << arr[i] << " ";
                }
                else {
                    if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
                        cout << arr[i] << " ";
                    }
                }
            }
        }
    }

    
    
    
    cout << "\n";
}

int main() {
    int arr[] = { 1, 3, 20, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    findPeak(arr, n);
    return 0;
}
