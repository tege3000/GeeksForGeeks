/*
 * Topic: Shortest Un-ordered Subarray
 *
 * Description: An array is given of n length,
 * and problem is that we have to find the length
 * of shortest unordered {neither increasing nor decreasing}
 * sub array in given array.
 */
#include <iostream>
#include <limits.h>
using namespace std;

int shortestUnorderedSubArray(int arr[], int n) {
    int len = 1;
    int minLen = 0;
    for(int i = 1; i < n-1; i++) {
        if((arr[i] < arr[i+1] && arr[i] < arr[i-1]) || (arr[i] > arr[i+1] && arr[i] > arr[i-1])) {
            minLen = 3;
            break;
        }
        len++;
    }
    return minLen;
}

int main()
{
    
    int arr[] = {7,9,10,8,11};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << shortestUnorderedSubArray(arr, n) << endl;
    
    return 0;
}

