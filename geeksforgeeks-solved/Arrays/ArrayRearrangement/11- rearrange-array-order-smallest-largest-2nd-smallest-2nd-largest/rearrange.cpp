/*
 * Topic: Rearrange an array in order – smallest,
 * largest, 2nd smallest, 2nd largest
 *
 *
 * Description: Given an array of integers, task is to print
 * the array in the order – smallest number, Largest number,
 * 2nd smallest number, 2nd largest number, 3rd smallest number,
 * 3rd largest number and so on…..
 */

#include <iostream>
using namespace std;
void rearrange(int arr [], int n) {
    int tmp[n];
    for(int i = 0; i < n; i++) {
        tmp[i] = arr[i];
    }
    
    sort(tmp, tmp+n);
    
    int start = 0;
    int end = n-1;
    for(int i = 0; i < n; i++) {
        if(i%2 == 0) {
            arr[i] = tmp[start];
            start++;
        }
        else {
            arr[i] = tmp[end];
            end--;
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
    int arr[] = {5, 8, 1, 4, 2, 9, 3, 7, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    rearrange(arr, n);
    printArr(arr, n);
}
