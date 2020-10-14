/*
 * Topic:
 * Find the minimum distance between two numbers
 *
 * Description:
 * Given an unsorted array arr[] and two numbers x and y,
 * find the minimum distance between x and y in arr[].
 * The array might also contain duplicates. You may assume
 * that both x and y are different and present in arr[].
 */


#include <iostream>

using namespace std;

int findMinDistance(int arr[], int n, int x, int y) {
    int pos1 = distance(arr, find(arr, arr+n, x));
    int pos2 = distance(arr, find(arr, arr+n, y));
    
    int maxPos = max(pos1, pos2);
    int minDistance = abs(pos2 - pos1);
    
    for(int i = maxPos+1; i < n; i = maxPos+1) {
        pos1 = distance(arr, find(arr+i, arr+n, x));
        pos2 = distance(arr, find(arr+i, arr+n, y));
        
        maxPos = max(pos1, pos2);
        minDistance = min(minDistance, abs(pos2 - pos1));
    }
    return minDistance;
}

int main() {
    int arr[] = {2, 5, 3, 5, 4, 4, 2, 3}, x = 3, y = 2;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Minimum distance between " << x << " and " << y << " is " << findMinDistance(arr, n, x, y) << endl;
}
