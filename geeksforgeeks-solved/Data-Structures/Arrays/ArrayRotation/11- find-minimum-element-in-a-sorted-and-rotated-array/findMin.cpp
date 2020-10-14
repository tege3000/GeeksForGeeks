/*
 * Topic: Find the minimum element in a sorted and rotated array
 *
 * Description: A sorted array is rotated at some unknown point,
 * find the minimum element in it.
 *
 */


#include <iostream>

using namespace std;

// Finds the minimum value in an array that has been rotated.
// Using Binary Search.
// Time complexity: O(logn)
int findMin(int arr[], int start, int end) {
    while(start != end) {
        if(end < start) {
            return arr[0];
        }
        
        int pivot = (start+end)/2;
        if(pivot < end && arr[pivot + 1] < arr[pivot]) {
            return arr[pivot+1];
        }
        
        if(pivot > start && arr[pivot] < arr[pivot-1]) {
            return arr[pivot];
        }
        
        if(arr[end] > arr[pivot]) {
            
            end = pivot -1;
        }
        else {
            
            start = pivot+1;
        }
    }
    
    if(end == start) {
        return arr[start];
    }
    
    return 0;
    
}

// Got these test cases from geeksforgeeks to test my function
int main() {
    int arr1[] = {5, 6, 1, 2, 3, 4};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    cout << "The minimum element is " << findMin(arr1, 0, n1-1) << endl;
    
    int arr2[] = {1, 2, 3, 4};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    cout << "The minimum element is " << findMin(arr2, 0, n2-1) << endl;
    
    int arr3[] = {1};
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    cout<<"The minimum element is "<<findMin(arr3, 0, n3-1)<<endl;
    
    int arr4[] = {1, 2};
    int n4 = sizeof(arr4)/sizeof(arr4[0]);
    cout<<"The minimum element is "<<findMin(arr4, 0, n4-1)<<endl;
    
    int arr5[] = {2, 1};
    int n5 = sizeof(arr5)/sizeof(arr5[0]);
    cout<<"The minimum element is "<<findMin(arr5, 0, n5-1)<<endl;
    
    int arr6[] = {5, 6, 7, 1, 2, 3, 4};
    int n6 = sizeof(arr6)/sizeof(arr6[0]);
    cout<<"The minimum element is "<<findMin(arr6, 0, n6-1)<<endl;
    
    int arr7[] = {1, 2, 3, 4, 5, 6, 7};
    int n7 = sizeof(arr7)/sizeof(arr7[0]);
    cout << "The minimum element is " << findMin(arr7, 0, n7-1) << endl;
    
    int arr8[] = {2, 3, 4, 5, 6, 7, 8, 1};
    int n8 = sizeof(arr8)/sizeof(arr8[0]);
    cout << "The minimum element is " << findMin(arr8, 0, n8-1) << endl;
    
    int arr9[] = {3, 4, 5, 1, 2};
    int n9 = sizeof(arr9)/sizeof(arr9[0]);
    cout << "The minimum element is " << findMin(arr9, 0, n9-1) << endl;
    
    return 0;

}
