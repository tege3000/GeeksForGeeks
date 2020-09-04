/*
 * Topic:
 * Smallest subarray with sum greater than a given value
 *
 * Description:
 * Given an array of integers and a number x, find the
 * smallest subarray with sum greater than the given value.
 */

#include <iostream>
#include <vector>
#include <numeric>
#include <limits.h>


using namespace std;

int smallestSubArray(int arr[], int n, int x) {
    vector<vector<int>> v1;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            vector<int> inner;
            inner.push_back(arr[i]);
            for(int k = i+1; k <= j; k++) {
                inner.push_back(arr[k]);
            }
            v1.push_back(inner);
        }
        
    }
    int minLength = INT_MAX;
    int len = INT_MAX;
    int foundSum = 0;
    for(int i = 0; i < v1.size(); i++) {
        
        int sum = accumulate(v1[i].begin(), v1[i].end(), 0);
        
        if(sum > x) {
            len = v1[i].size();
            minLength = min(len, minLength);
            foundSum = 1;
        }
        
    }
    if(foundSum == 1) {
        return minLength;
    }
    else {
        return 0;
    }
}


int main() {
    int arr[] = {1, 11, 100, 1, 0, 200, 3, 2, 1, 250};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 280;
    
    int ans = smallestSubArray(arr, n, x);
    if(ans != 0) {
        cout << ans << endl;
    }
    else {
        cout << "Not Possible" << endl;
    }
    return 0;
  
    
}
