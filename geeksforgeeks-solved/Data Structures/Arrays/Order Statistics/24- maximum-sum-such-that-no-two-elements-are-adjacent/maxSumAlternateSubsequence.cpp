/*
 * Topic: Maximum sum such that no two elements
 * are adjacent
 *
 *
 * Description: Given an array of positive numbers,
 * find the maximum sum of a subsequence with the
 * constraint that no 2 numbers in the sequence should
 * be adjacent in the array. So 3 2 7 10 should return
 * 13 (sum of 3 and 10) or 3 2 5 10 7 should return 15
 * (sum of 3, 5 and 7).Answer the question in most
 * efficient way
 */
#include <iostream>

using namespace std;

// second approach
// O(n) time
void maxSumAlternateSubsequence(int arr[], int n) {
    int a, b, b_new;
    
    a = arr[0];
    b = 0;
    b_new = 0;
    
    for(int i = 1; i < n; i++) {
        b_new = max(a, b);
        a = b + arr[i];
        b = b_new;
    }
    

    cout << "Ouptut: " << max(a, b) << endl;
}

//// first approach
//// O(n) time
//void maxSumAlternateSubsequence(int arr[], int n) {
//    int sum = 0, maxSum = 0;
//    for(int i = 0; i < n; i++) {
//        sum = 0;
//        for(int j = i; j < n; j=j+2) {
//            sum += arr[j];
//        }
//        maxSum = max(sum, maxSum);
//
//    }
//
//    cout << "Output: " << maxSum << endl;
//
//}

int main() {
    int arr[] = {1,20,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    maxSumAlternateSubsequence(arr, n);
    return 0;
}
