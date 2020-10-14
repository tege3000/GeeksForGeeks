/*
 * Topic: Minimum swaps required to bring all elements
 * less than or equal to k together
 *
 * Description: Given an array of n positive integers and
 * a number k. Find the minimum number of swaps required
 * to bring all the numbers less than or equal to k together.
 *
 */

#include <iostream>

using namespace std;
void swap(int arr[], int i, int j) {
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}

void minSwaps(int arr[], int n, int k) {
    int count = 0;
 
    for(int i = 0; i < n; i++){
        if(arr[i] > k) {
            for(int j = i+1; j < n; j++) {
                if(arr[j] <=k) {
                    swap(arr, i, j);
                    count++;
                    break;
                }
            }
        }
       
    }
    
    
    
    cout << count << endl;
}

int main() {
    int arr[] = {2, 7, 9, 5, 8, 7, 4};
    //int arr[] = {2, 1, 5, 6, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 5;
    
    minSwaps(arr, n, k);
    //printArr(arr, n);
    return 0;
}
