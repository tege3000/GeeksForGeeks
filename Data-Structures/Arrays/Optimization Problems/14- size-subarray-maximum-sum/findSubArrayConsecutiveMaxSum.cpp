/*
 * Topic:
 * Size of The Consecutive Subarray With Maximum Sum
 *
 * Description:
 * An array is given, find length of the subarray
 * having maximum sum.
 */
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int findSubArrayConsecutiveMaxSum(int arr[], int n) {
    // all subsets will be in vector "subsets"
    vector<vector<int>> subsets;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            vector<int> inner;
            for(int k = i; k <= j; k++) {
                inner.push_back(arr[k]);
            }
            subsets.push_back(inner);
        }
    }
    
    vector<int> sums;
    int maxSum = 0;
    int length = 0;
    for(int i = 0; i < subsets.size(); i++) {
        int sum = 0;
        for(int j = 0; j < subsets[i].size(); j++) {
            sum += subsets[i][j];
        }
        if(sum > maxSum) {
            maxSum = sum;
            length = subsets[i].size();
        }
    }

    
    return length;
}


int main() {
    int arr1[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    cout << findSubArrayConsecutiveMaxSum(arr1, n1) << endl;
    
    return 0;
    
    
}
