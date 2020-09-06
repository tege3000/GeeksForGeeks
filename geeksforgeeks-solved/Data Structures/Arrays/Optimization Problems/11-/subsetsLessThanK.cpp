/*
 * Topic:
 * Number of subsets with product less than k
 *
 * Description:
 * You are given an array of n-elements, you have to find
 * the number of subsets whose product of elements is less
 * than or equal to a given integer k.
 */
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int subsetLessThanK(int values[], int len, int k) {
    int found = 0;
    int count = 0;
    
    // all subsets will be in vector "subsets"
    vector<vector<int>> subsets;
    for (int i = 0; i < pow(2, len); i++) {
        int t = i;
        vector<int> v;
        for (int j = 0; j < len; j++) {
            if (t & 1)
                v.push_back(values[j]);
            t >>= 1;
        }
        subsets.push_back(v);
    }
    
    // print all of the subsets (optional)
    cout << "subsets:\n";
    
    for(int i = 0; i < subsets.size(); i++) {
         int prod = 1;
        for(int j = 0; j < subsets[i].size(); j++) {
             prod *= value;
        }
        if(prod < k) {
            count++;
        }
        
    }
    
    if(found != 0) {
        return count;
    }
    else {
        return 0;
    }
    
    
}


int main() {
    int arr[] = {2, 4, 5, 3}, k = 12;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int ans = subsetLessThanK(arr, n, k);
    if(ans != 0) {
        cout << ans << endl;
    }
    else {
        cout << "Not Possible" << endl;
    }
    return 0;
    
    
}
