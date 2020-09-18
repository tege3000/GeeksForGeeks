/*
 * Topic: Sort an array of 0s, 1s and 2s
 *
 * Description: Given an array A[] consisting 0s, 1s and 2s.
 * The task is to write a function that sorts the given array.
 * The functions should put all 0s first, then all 1s and all
 * 2s in last.
 */
#include <iostream>
using namespace std;

void sortArr0s1s2s(int arr[], int n) {
    int count0s = count(arr, arr+n, 0);
    int count1s = count(arr, arr+n, 1);
    int count2s = count(arr, arr+n, 2);
    
    for(int i = 0; i < n; i++) {
        if(i < count0s) {
            arr[i] = 0;
        }
        else if(i >= count0s && i < (count0s+count1s)){
            arr[i] = 1;
        }
        else {
            arr[i] = 2;
        }
    }
    
    //print array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

}

int main()
{
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    
    sortArr0s1s2s(arr, n);
    
    return 0;
}

