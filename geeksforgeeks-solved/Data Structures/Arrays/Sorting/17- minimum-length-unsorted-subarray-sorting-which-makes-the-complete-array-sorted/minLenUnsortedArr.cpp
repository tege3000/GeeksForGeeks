/*
 * Topic: Find the Minimum length Unsorted Subarray,
 * sorting which makes the complete array sorted
 *
 * Description: Given an unsorted array arr[0..n-1] of
 * size n, find the minimum length subarray arr[s..e]
 * such that sorting this subarray makes the whole array sorted.
 */
#include <iostream>
using namespace std;

void minLenUnsortedArr(int arr[], int n) {
    int min_pos = 0;
    int startIndex = 0;
    for(int i = 0; i < n; i++) {
        min_pos = distance(arr, min_element(arr+i, arr+n));
        
        if(min_pos != i) {
            startIndex = i;
            break;
        }
        
    }
    
    int initMaxInUnsortedRange = *max_element(arr+startIndex, arr+min_pos+1);
    int endIndex = 0;
    for(int i = min_pos; i < n; i++) {
        if(arr[i] > initMaxInUnsortedRange) {
            initMaxInUnsortedRange = arr[i];
            if(is_sorted(arr+i, arr+n)) {
                endIndex = i-1;
                break;
            }
        }
    }
    
    cout << "The unsorted subarray which makes the array sorted lies between the indexes: " << startIndex << " and " << endIndex << endl;
}



int main()
{
    
    int arr[] = {10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    minLenUnsortedArr(arr, n);
    
    
    
    return 0;
}

