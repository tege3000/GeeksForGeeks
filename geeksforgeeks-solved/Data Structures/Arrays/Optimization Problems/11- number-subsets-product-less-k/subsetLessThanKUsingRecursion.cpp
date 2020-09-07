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
using namespace std;

int subsetLessThanK(string subsets[], int n, int k) {
    int prod = 1;
    for(int j = 0; j < n; j++) {
        if(subsets[j] != "") {
            prod *= stoi(subsets[j]);
        }
    }
    
    if(prod <= k) {
        return 1;
    }
    return 0;
    
}

int helper(string givenArr[], string subsets[], int n, int i, int k) {
    int count = 0;
    
    if(i == n) {
        int ans = subsetLessThanK(subsets, n, k);
        return ans;
    
    }
    else {
        subsets[i] = "";
        count += helper(givenArr, subsets, n, i+1, k);
        subsets[i] = givenArr[i];
        count += helper(givenArr, subsets, n, i+1, k);
    }
    
    return count;
}

void getAllSubsets(string arr[], int n, int k) {
    string subsets[n];
    int count = helper(arr, subsets, n, 0, k);
    
    cout << count-1 << endl;
    
}



int main() {
    string arr[] = {"4", "2", "3", "6", "5"};
    int k = 25;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    getAllSubsets(arr, n, k);
    
}
