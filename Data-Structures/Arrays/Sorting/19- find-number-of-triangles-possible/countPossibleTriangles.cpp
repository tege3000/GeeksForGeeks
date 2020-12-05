/*
 * Topic: Count the number of possible triangles
 *
 * Description: Given an unsorted array of positive
 * integers, find the number of triangles that can
 * be formed with three different array elements as
 * three sides of triangles. For a triangle to be
 * possible from 3 values, the sum of any of the two
 * values (or sides) must be greater than the third
 * value (or third side).
 */
#include <iostream>
using namespace std;

int countPossibleTriangles(int arr[], int n) {
    int count = 0;
    sort(arr, arr+n);
    int first = 0, second = 0;
    for(int i = 0; i < n; i++) {
        first = arr[i];
        for(int j = i+1; j < n; j++) {
            second = arr[j];
            for(int k = j+1; k < n; k++) {
                if(first + second > arr[k]) {
                    count++;
                }
            }
        }
    }
    
    return count;
}

int main() {
    int arr[] = {10, 21, 22, 100, 101, 200, 300};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << countPossibleTriangles(arr, n) << "\n";
    
    return 0;
}

