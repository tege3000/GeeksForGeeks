/*
 * Topic: K-th Largest Sum Contiguous Subarray
 *
 * Description: Given an array of integers. Write a
 * program to find the K-th largest sum of contiguous
 * subarray within the array of numbers which has
 * negative and positive numbers.
 */
#include <iostream>
#include <vector>

using namespace std;

int kthLargestSum(int arr[], int n, int k) {
    vector <int> v1;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum = arr[i];
        v1.push_back(sum);
        for(int j = i+1; j < n; j++) {
            sum += arr[j];
            v1.push_back(sum);
        }
    }
    
    sort(v1.begin(), v1.end(), greater<int>());
    
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << "\n";
    
    return v1[k-1];
}

int main() {
    int arr[] =  {10, -10, 20, -40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 6;
    
    int minProd = kthLargestSum(arr, n, k);
    cout << minProd << endl;
    return 0;
}
