/*
 * Topic: Count all distinct pairs with difference equal to k
 *
 * Description: Given an integer array and a positive integer k,
 * count all distinct pairs with difference equal to k.

 */
#include <iostream>
using namespace std;

// Better approach
// Works in O(nlogn) time, because its sorts and then uses binary search
int countDistinctPairs(int arr[], int n, int k) {
    int count = 0;
    
    sort(arr, arr+n);
    
    for(int i = 0; i < n; i++) {
        if(binary_search(arr+i, arr+n, arr[i]+k)) {
            count++;
        }
    }
    
    return count;
}


//// Initial Approcach
//// Works in O(n^2) time
//int countDistinctPairs(int arr[], int n, int k) {
//    int count = 0;
//    for(int i = 0; i < n; i++) {
//        for(int j = i+1; j < n; j++) {
//            if(abs(arr[i] - arr[j]) == k) {
//                count++;
//            }
//        }
//    }
//
//    return count;
//}

int main() {
    int arr[] = {8, 12, 16, 4, 0, 20}, k = 4;
    int n = sizeof(arr)/sizeof(arr[0]);

    
    cout << countDistinctPairs(arr, n, k) << "\n";
    
    return 0;
}

