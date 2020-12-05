/*
 * Topic:
 * Alternative Sorting
 *
 * Description:
 * Given an array of integers, print the array in
 * such a way that the first element is first maximum
 * and second element is first minimum and so on.
 */
#include <iostream>
using namespace std;
// second appraoch
// O(nlogn) time
void alternativeSorting(int arr[], int n) {
    int tmp[n];
    
    for(int i = 0; i < n; i++) {
        tmp[i] = arr[i];
    }
    
    sort(tmp, tmp+n);
    int end = n-1;
    int start = 0;
    for(int i = 0; i < n; i= i+2) {
        arr[i] = tmp[end];
        arr[i+1] = tmp[start];
        start++;
        end--;
    }
}


// Initial approach
// O(nlogn) time
//
//void alternativeSorting(int arr[], int n) {
//    int tmp[n];
//
//    for(int i = 0; i < n; i++) {
//        tmp[i] = arr[i];
//    }
//
//
//    sort(tmp, tmp+n, greater<int>());
//
//    int start = 0;
//    for(int i = 0; i < n; i = i+2) {
//        arr[i] = tmp[start];
//        start++;
//    }
//
//    sort(tmp, tmp+n);
//
//    start = 0;
//    for(int i = 1; i < n; i = i+2) {
//        arr[i] = tmp[start];
//        start++;
//    }
//
//}

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int arr[] = {1, 6, 9, 4, 3, 7, 8, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    alternativeSorting(arr, n);
    
    printArr(arr, n);
    
    
}
