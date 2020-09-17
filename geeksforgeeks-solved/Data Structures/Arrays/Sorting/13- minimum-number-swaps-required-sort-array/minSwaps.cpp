/*
 * Topic: Minimum number of swaps required to sort an array
 *
 * Description: Given an array of n distinct elements, find
 * the minimum number of swaps required to sort the array.
 */
#include <iostream>
#include <limits.h>

using namespace std;
int minSwaps(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] != i+1) {
            int pos = distance(arr, find(arr+i, arr+n, i+1));
            swap(arr[i], arr[pos]);
            count++;
        }
    }
    return count;
}

int main()
{
    
    int arr[] = {1, 5, 4, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << minSwaps(arr, n) << endl;
    
    return 0;
}

