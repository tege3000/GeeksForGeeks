/*
 * Topic: Number of elements less than or equal to a
 * given number in a given subarray | Set 2 (Including Updates)
 *
 * Description: Given an array ‘a[]’ and number of queries q there
 * will be two type of queries
 *      1. Query 0 update(i, v) : Two integers i and v which means
 *         set a[i] = v
 *      2. Query 1 count(l, r, k): We need to print number of integers
 *         less than equal to k in the subarray l to r.
 *
 *Given a[i], v <= 10000
 */
#include <iostream>
#include <vector>
using namespace std;

void update(int arr[], int i, int v) {
    arr[i] = v;
}

int count(int arr[], int n, int l, int r, int k) {
    int count = 0;
    int tmp[n];
    for(int i = 0; i < n; i++) {
        tmp[i] = arr[i];
    }
    
    sort(tmp+l, tmp+(r+1));
    if(tmp[r] <= k) {
        return r+1-l;
    }
    
    if(tmp[l] > k) {
        return 0;
    }
    
    for(int i = l; i <= r; i++) {
        if(tmp[i] <= k) {
            count++;
        }
    }
    
    return count;
}

int main()
{
    
    int arr[] = {5, 1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    vector<vector<int>> queries = {{1, 1, 3, 1}, {0, 3, 10}, {1, 3, 3, 4}, {0, 2, 1}, {0, 0, 2}, {1, 0, 4, 5}};
    int m = queries.size();
    for(int i = 0; i < m; i++) {
        if(queries[i][0] == 1) {
            cout << count(arr, n, queries[i][1], queries[i][2], queries[i][3]) << endl;
        }
        else {
            update(arr, queries[i][1], queries[i][2]);
        }
    }
    
    return 0;
}

