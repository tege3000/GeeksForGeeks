/*
 * Topic: Find all elements in array which have at-least
 * two greater elements
 *
 * Description: Given an array of n distinct elements,
 * the task is to find all elements in array which have
 * at-least two greater elements than themselves.
 */

#include <iostream>

using namespace std;

// second approach
// time complexity O(nlogn)
void findElsGreater(int arr[], int n) {
    sort(arr, arr+n);
    
    for(int i = 0; i < n-2; i++) {
        cout << arr[i] << " ";
    }
    
    cout << "\n";
}

//// initial approach
//// apparrently this is the naive approach
//// time complexity O(n^2)
//void findElsGreater(int arr[], int n) {
//    int count;
//    for(int i = 0; i < n; i++) {
//        count = 0;
//        for(int j = 0; j < n; j++) {
//            if(arr[i] < arr[j]) {
//                count++;
//            }
//        }
//
//        if(count >= 2) {
//            cout << arr[i] << " ";
//        }
//    }
//
//    cout << "\n";
//}

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int arr[] {7, -2, 3, 4, 9, -1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    findElsGreater(arr, n);
}

