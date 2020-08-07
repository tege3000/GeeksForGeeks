/*
 * Topic: Rearrange an array in maximum minimum form | Set 1
 *
 * Description: Given a sorted array of positive integers,
 * rearrange the array alternately i.e first element should
 * be maximum value, second minimum value, third second max,
 * fourth second min and so on.
 */

#include <iostream>

using namespace std;

void rearrangeMaxMin(int arr[], int n) {
    int half = (n-1)/2;
    
    int tmp1[half+1];
    int tmp2[n-half+1];
    
    for(int i = 0; i < half+1; i++) {
        tmp1[i] = arr[i];
    }
    
    for(int i = half+1; i < n; i++) {
        tmp2[i] = arr[i];
    }
    
    reverse(tmp2, tmp2+n);
    
    int start1 = 0, start2 = 0;
    
    for(int i = 0; i < n; i++) {
        if(i%2 == 0) {
            arr[i] = tmp2[start1];
            start1++;
        }
        else {
            arr[i] = tmp1[start2];
            start2++;
        }
    }
    
}

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    rearrangeMaxMin(arr, n);
    printArr(arr, n);
}
