/*
 * Topic: Given an array A[] and a number x, check for pair
 * in A[] with sum as x
 *
 * Description: Write a program that, given an array A[] of
 * n numbers and another number x, determines whether or not
 * there exist two elements in S whose sum is exactly x.
 */
#include <iostream>
using namespace std;

// Second Approach - Using two pointer method
// Works in O(nlogn) time
void findPair(int arr[], int n, int sum) {
    int left = 0, right = n-1;
    int found = 0;
    sort(arr, arr+n);
    for(int i = 0; i < n; i++) {
        if(sum > arr[left] + arr[right]) {
            left++;
        }
        else if(sum < arr[left] + arr[right]) {
            right--;
        }
        else {
            cout << arr[left] << ", " << arr[right] << endl;
            found = 1;
            break;
        }
    }
    
    if(found == 0) {
        cout << -1 << endl;
    }
    
}

//// First Approach,
//// Works in O(n^2) time
//void findPair(int arr[], int n, int sum) {
//    int found = 0;
//    for(int i = 0; i < n; i++) {
//        for(int j = i+1; j < n; j++) {
//            if(arr[i] + arr[j] == sum) {
//                cout << arr[i] << ", " << arr[j] << endl;
//                found = 1;
//            }
//        }
//    }
//    if(found == 0) {
//        cout << -1 << endl;
//    }
//}

int main() {
    int arr[] = {0, -1, 2, -3, 1};
    int sum = -2;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    findPair(arr, n, sum);
    
    return 0;
}

