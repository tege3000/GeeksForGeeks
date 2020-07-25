/*
 * Topic: Find the Rotation Count in Rotated Sorted array
 *
 * Description: Consider an array of distinct numbers sorted
 * in increasing order. The array has been rotated (clockwise)
 * k number of times. Given such an array, find the value of k.
 */


#include <iostream>
using namespace std;
int findRotationCount(int arr[], int n) {
    int* max = max_element(arr+0, arr+n);
    int pos = distance(arr, max); //index of max element
    if(pos == n-1) {
        return 0;
    }
    else {
        return pos+1;
    }
    
}

int main(){
    // rotated input array
    int arr[] = {7, 9, 11, 12, 15};
    int n = sizeof(arr) / sizeof(int);
    int k = findRotationCount(arr, n);
    cout << k << endl;
    return 0;
}

