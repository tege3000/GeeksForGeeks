/*
 * Topic: k smallest elements in same order using O(1)
 * extra space
 *
 * Description: You are given an array of n-elements you
 * have to find k smallest elements from the array but
 * they must be in the same order as they are in given
 * array and we are allowed to use only O(1) extra space.
 */
#include <iostream>

using namespace std;

// second implementation; after looking at geeksforgeeks solution
// O(n^2) time
void kSmallestElInSameOrder(int arr[], int n, int k) {
    int pos = 0;
    for(int i = k; i < n; i++) {
        auto maxEl = max_element(arr, arr+k);
        pos = distance(arr, maxEl);
        
        if(*maxEl > arr[i]) {
            for(int j = pos; j < k-1; j++) {
                arr[j] = arr[j+1];
            }
            
            arr[k-1] = arr[i];
        }
        
    }
    
    for(int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

//// initial implementation
//// O(n^2) time
//// NOTE: Normally, this approach makes more sense to me
//
//void kSmallestElInSameOrder(int arr[], int n, int k) {
//    int size = n-k;
//    for(int i = 0; i < size; i++) {
//        auto maxEl = max_element(arr, arr+n);
//        int pos = distance(arr, maxEl);
//
//        // basically this (technically) deletes the element from the array
//        // This happens by performing arr[i] = arr[i+1] from the index to delete
//        // then copying all subsequent elements from the next index to the
//        // prev index.
//        // Then finally reducing the size of the array by 1
//        for(int i = pos; i < n-1; i++) {
//            arr[i] = arr[i+1];
//        }
//        n--;
//    }
//
//    for(int i = 0; i < n; i++) {
//        if(arr[i] != -1) {
//            cout << arr[i] << " ";
//        }
//    }
//    cout << "\n";
//
//}

int main() {
    //int arr[] =  {4, 2, 6, 1, 5};
    //int arr[] = {4, 12, 16, 21, 25};
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 5;
    //int k = 3;
    
    kSmallestElInSameOrder(arr, n, k);
    return 0;
}
