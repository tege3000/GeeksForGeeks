/*
 * Topic: Rearrange array in alternating positive
 * & negative items with O(1) extra space
 *
 * Description: Given an array of positive and negative
 * numbers, arrange them in an alternate fashion such that
 * every positive number is followed by negative and vice-versa
 * maintaining the order of appearance.
 * Number of positive and negative numbers need not be equal.
 * If there are more positive numbers they appear at the end
 * of the array. If there are more negative numbers, they too
 * appear in the end of the array
 */


#include  <iostream>
using namespace std;

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout <<"\n";
}

// NOTE: This solution works, but it doesnt meet the questions
// constraint of using O(1) space. Instead it uses O(n) extra space
void rearrange(int arr[], int n) {
    int max = *max_element(arr+0, arr+n);
    int tmp[n];
    int j = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) {
            tmp[j] = arr[i];
            j++;
        }
    }
    
    int tmp2[n];
    for(int i = 0; i < n; i++) {
        tmp2[i] = arr[i];
    }
   

    int start = 0;
    int start2 = 0;
    for(int i = 0; i < n; i++) {
        if(i%2 == 0 && tmp[start] != 0 && tmp[start] <= max) {
            arr[i] = tmp[start];
            start++;
        }
        else {

            for(int j = start2; j < n; j++) {
                if(tmp2[j] >= 0) {
                    arr[i] = tmp2[j];
                    start2 = j+1;
                    break;
                }
            }
            
        }
    }
}


int main() {
    //int arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    int arr[] = {1, 2, 3, -4, -1, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    rearrange(arr, n);
    printArr(arr, n);
    return 0;
}
