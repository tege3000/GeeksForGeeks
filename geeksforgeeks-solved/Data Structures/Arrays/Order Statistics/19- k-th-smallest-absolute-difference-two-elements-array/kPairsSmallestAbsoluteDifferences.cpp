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
    vector <int> tmp;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            tmp.push_back(abs(arr[i] - arr[j]));
        }
    }
    
    cout << tmp[k-1] << endl;
}


int main() {
    int arr[] = {10, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 1;
    
    kPairsSmallestAbsoluteDifferences(arr, n, k);
    return 0;
}
