/*
 * Topic: Two Pointers Technique
 *
 * Description: Two pointers is really an easy and
 * effective technique which is typically used for
 * searching pairs in a sorted array.
 *
 * Given a sorted array A (sorted in ascending order),
 * having N integers, find if there exists any pair of
 * elements (A[i], A[j]) such that their sum is equal to X.
 */
#include <iostream>
using namespace std;

// Works in O(n) time
bool isPairSum(int arr[], int n, int x) {
    int right = n-1;
    int left = 0;
    while(left <= right) {
        if(arr[left] + arr[right] == x) {
            return true;
        }
        else if((arr[left]+ arr[right]) > x) {
            right--;
        }
        else if((arr[left]+ arr[right]) < x) {
            left++;
        }
    }
    return false;
}

int main() {
    int arr[] = {10, 20, 35, 50, 75, 80};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 70;
    
    if(isPairSum(arr, n ,x)) {
        cout << "YES \n";
    }
    else {
        cout << "NO \n";
    }
    return 0;
}
