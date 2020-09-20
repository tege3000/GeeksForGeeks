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

// Second Implementation
// Works in O(n) time
void minLenUnsortedArr(int arr[], int n) {
    int startIndex = 0;
    int endIndex = 0;
    
    // going from left to right, find the index of the
    // first element that is greater than the next element
    for(int i = 0; i < n-1; i++) {
        if(arr[i] > arr[i+1]) {
            startIndex = i;
            break;
        }
    }
    
    // going from right to left, find the index of the first
    // element that is less than the next element
    for(int i = n-1; i > 0; i--) {
        if(arr[i] < arr[i-1]) {
            endIndex = i;
            break;
        }
    }
    
    // find the minimum and maximum values in the unsorted region
    int minElInUnsortedRegion = *min_element(arr+startIndex, arr+endIndex+1);
    int maxElInUnsortedRegion = *max_element(arr+startIndex, arr+endIndex+1);
    
    
    // going from arr[0] to arr[startIndex] find the first
    // element that is greater than the minElInUnsortedRegion
    for(int i = 0; i <= startIndex; i++) {
        if(arr[i] >= minElInUnsortedRegion) {
            startIndex = i;
            break;
        }
    }
    
    
    // going from arr[n-1] to arr[endIndex] find the first
    // element that is less than the maxElInUnsortedRegion
    for(int i = n-1; i >= endIndex; i--) {
        if(arr[i] <= maxElInUnsortedRegion) {
            endIndex = i;
            break;
        }
    }
    
    
    cout << "The unsorted subarray which makes the array sorted lies between the indexes: " << startIndex << " and " << endIndex << endl;
    
}


//// Initail implementation
//// Works in O(n^2) time because of the min_element
//// function being in the loop
//void minLenUnsortedArr(int arr[], int n) {
//    int min_pos = 0;
//    int startIndex = 0;
//    for(int i = 0; i < n; i++) {
//        min_pos = distance(arr, min_element(arr+i, arr+n));
//
//        if(min_pos != i) {
//            startIndex = i;
//            break;
//        }
//
//    }
//
//    int initMaxInUnsortedRange = *max_element(arr+startIndex, arr+min_pos+1);
//    int endIndex = 0;
//    for(int i = min_pos; i < n; i++) {
//        if(arr[i] > initMaxInUnsortedRange) {
//            initMaxInUnsortedRange = arr[i];
//            if(is_sorted(arr+i, arr+n)) {
//                endIndex = i-1;
//                break;
//            }
//        }
//    }
//
//    cout << "The unsorted subarray which makes the array sorted lies between the indexes: " << startIndex << " and " << endIndex << endl;
//}



int main()
{
    int arr[] = {0, 1, 15, 25, 6, 7, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    minLenUnsortedArr(arr, n);
    
    return 0;
}

