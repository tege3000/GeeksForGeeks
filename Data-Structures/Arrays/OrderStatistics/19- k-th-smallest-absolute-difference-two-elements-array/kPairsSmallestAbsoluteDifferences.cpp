/*
 * Topic: k-th smallest absolute difference of two elements
 * in an array
 *
 * Description: We are given an array of size n containing
 * positive integers. The absolute difference between values
 * at indices i and j is |a[i] – a[j]|. There are n*(n-1)/2
 * such pairs and we are asked to print the kth (1 <= k <= n*(n-1)/2)
 * smallest absolute difference among all these pairs.
 */
#include <iostream>
#include <vector>

using namespace std;

void kPairsSmallestAbsoluteDifferences(int arr[], int n, int k) {
    int size = n*(n-1)/2;
    int tmp[size];
    int start = 0;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            tmp[start] = abs(arr[i] - arr[j]);
            start++;
        }
    }
    
    sort(tmp, tmp+size);
    
    cout << tmp[k-1] << endl;
}


int main() {
    int arr[] = {1,2 ,3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    
    kPairsSmallestAbsoluteDifferences(arr, n, k);
    return 0;
}
