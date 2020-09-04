/*
 * Topic:
 * Minimum number of jumps to reach end
 *
 * Description:
 * Given an array of integers where each element represents
 * the max number of steps that can be made forward from that
 * element. Write a function to return the minimum number of
 * jumps to reach the end of the array (starting from the first
 * element). If an element is 0, they cannot move through that
 * element.
 */

#include <iostream>

using namespace std;

int findMinJumps(int arr[], int n) {
    int count = 0;
    int jump = 0;
    int pos_max = 0;
    for(int i = 0; i < n; i = pos_max) {
        jump = arr[i];
        if(i != n-1) {
            count++;
        }
        if(jump >= n - i) {
            break;
        }
        pos_max = distance(arr, max_element(arr+i+1, arr+i+jump+1));
    }
    
    return count;
}


int main() {
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << findMinJumps(arr, n) << endl;
    return 0;
  
    
}
