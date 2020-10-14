/*
 * Topic: K maximum sum combinations from two arrays
 *
 * Description: Given two equally sized arrays (A, B)
 * and N (size of both arrays).
 * A sum combination is made by adding one element from
 * array A and another element of array B. Display the
 * maximum K valid sum combinations from all the possible
 * sum combinations.
 */
#include <iostream>
#include <vector>

using namespace std;

void kMaxSumCombinations(int arr[], int brr[], int n, int k) {
    vector <int> sums;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            sums.push_back(arr[i] + brr[j]);
        }
    }
    
    sort(sums.begin(), sums.end(), greater<int>());
    
    for(int i = 0; i < k; i++) {
        cout << sums[i] << endl;
    }
    cout << "\n";
    
}

int main() {
    int arr[] =  {4, 2, 5, 1};
    int brr[] = {8, 0, 3, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    
    kMaxSumCombinations(arr, brr, n, k);
}
