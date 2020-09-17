/*
 * Topic: Minimum number of swaps required to sort an array
 *
 * Description: Given an array of n distinct elements, find
 * the minimum number of swaps required to sort the array.
 */
#include <iostream>
#include <limits.h>

using namespace std;

// Second Implementation
//
// NOTE: This algorithm works on any kind of array
// with values not necessarily ranging from 1..n
int minSwaps(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        int pos = distance(arr, min_element(arr+i, arr+n));
        if(arr[i] != arr[pos]) {
            swap(arr[i], arr[pos]);
            count++;
        }
      
    }
    return count;
}

// // First Implementation
// //
// // NOTE: This algorithm only works for distinct arrays whose
// // values are from 1...n
// int minSwaps(int arr[], int n) {
//     int count = 0;
//     for(int i = 0; i < n; i++) {
//         if(arr[i] != i+1) {
//             int pos = distance(arr, find(arr+i, arr+n, i+1));
//             swap(arr[i], arr[pos]);
//             count++;
//         }
//     }
//     return count;
// }

int main()
{
    
    int arr[] = {1, 5, 4, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << minSwaps(arr, n) << endl;
    
    return 0;
}

