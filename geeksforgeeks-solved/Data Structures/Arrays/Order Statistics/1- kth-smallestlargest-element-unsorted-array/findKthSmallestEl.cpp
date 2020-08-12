/*
 * Topic: K’th Smallest/Largest Element in Unsorted
 * Array | Set 1
 *
 * Description: Given an array and a number k where
 * k is smaller than size of array, we need to find
 * the k’th smallest element in the given array. It
 * is given that ll array elements are distinct.
 */

#include <iostream>

using namespace std;

// second implementation
// O(nlogn) time
// better and concise algorithm
int findKthSmallestEl(int arr[], int n, int k) {
    sort(arr, arr+n);
    
    return arr[k-1];
}


//// first implementation
//// O(n) time -- now that i think about it, might not be O(n)
//int findKthSmallestEl(int arr[], int n, int k) {
//    int min;
//    int max = *max_element(arr, arr+n);
//    for(int i = 0; i < k; i++) {
//        min = *min_element(arr, arr+n);
//        if(i < k-1) {
//            auto it = find(arr, arr+n, min);
//            int index = distance(arr, it);
//            if(it != arr+n) {
//                arr[index] = max;
//            }
//        }
//    }
//
//    return min;
//}

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int arr[] =  {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    
    int ans = findKthSmallestEl(arr, n, k);
    
    cout << ans << endl;
    //printArr(arr, n);
}

