/*
 * Topic:
 * Print All Distinct Elements of a given integer array
 *
 * Description:
 * Given an integer array, print all distinct elements in array.
 * The given array may contain duplicates and the output should
 * print every element only once.
 * The given array is not sorted. And distinct elements printed
 * should follow same order of arrangement
 */
#include <iostream>
#include <vector>
using namespace std;

// First Implementation
// O(n^2) time
void printDistinct(int arr[], int n) {
    vector<int> distinct;
    for(int i = 0; i < n; i++) {
        if(find(distinct.begin(), distinct.end(), arr[i]) == distinct.end()) {
            distinct.push_back(arr[i]);
            cout << arr[i] << " ";
        }
    }
    cout << "\n";
    
}

int main() {
    int arr[] = {12, 10, 9, 45, 2, 10, 10, 45};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printDistinct(arr, n);
    
    
    return 0;
}
