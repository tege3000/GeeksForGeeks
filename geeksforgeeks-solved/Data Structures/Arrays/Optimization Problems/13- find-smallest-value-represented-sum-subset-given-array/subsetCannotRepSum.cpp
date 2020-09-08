/*
 * Topic:
 * Find the smallest positive integer value that cannot
 * be represented as sum of any subset of a given array
 *
 * Description:
 * Given a sorted array (sorted in non-decreasing order)
 * of positive numbers, find the smallest positive integer
 * value that cannot be represented as sum of elements of
 * any subset of given set.
 */
#include <vector>
#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;

int subsetCannotRepSum(int arr[], int n) {
    // all subsets will be in vector "subsets"
    vector<vector<int>> subsets;
    for (int i = 0; i < pow(2, n); i++) {
        int t = i;
        vector<int> v;
        for (int j = 0; j < n; j++) {
            if (t & 1)
                v.push_back(arr[j]);
            t >>= 1;
        }
        subsets.push_back(v);
    }
    
    vector<int> sums;
    for(int i = 0; i < subsets.size(); i++) {
        int sum = 0;
        for(int j = 0; j < subsets[i].size(); j++) {
            sum += subsets[i][j];
        }
        
        sums.push_back(sum);
    }
    
    for(int i = 1; i <= INT_MAX; i++) {
        if(!(find(sums.begin(), sums.end(), i) != sums.end())) {
            return i;
        }
    }
    
    return 0;
}


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int ans = subsetCannotRepSum(arr, n);
    
    cout << ans << endl;
    return 0;
    
    
}
