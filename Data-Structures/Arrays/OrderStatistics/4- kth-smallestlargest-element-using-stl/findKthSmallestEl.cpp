/*
 * Topic: K’th Smallest/Largest Element using STL
 *
 * Description: Given an array and a number k where
 * k is smaller than size of array, we need to find
 * the k’th smallest element in the given array.
 */

#include <iostream>
#include <set>

using namespace std;

int findKthSmallestEl(int arr[], int n, int k) {
    set <int> distinct;
    for(int i = 0; i < n; i++) {
        distinct.insert(arr[i]);
    }
    
    auto it = distinct.begin();
    for(int i = 0; i < k; i++) {
        it++;
    }
    
    return *it;
}

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int arr[] =  {12, 3, 5, 7, 4, 19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    
    int ans = findKthSmallestEl(arr, n, k);
    
    cout << ans << endl;
    printArr(arr, n);
}

