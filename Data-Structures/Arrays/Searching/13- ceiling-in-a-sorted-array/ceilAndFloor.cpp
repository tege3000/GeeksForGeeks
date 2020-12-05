/*
 * Topic: Ceiling in a sorted array
 *
 * Description: Given a sorted array and a value x,
 * the ceiling of x is the smallest element in array
 * greater than or equal to x, and the floor is the
 * greatest element smaller than or equal to x. Assume
 * than the array is sorted in non-decreasing order.
 * Write efficient functions to find floor and ceiling of x.
 */
#include <iostream>
using namespace std;

// Initial approach
// Works in O(n) time
void ceilAndFloor(int arr[], int n, int val) {
    int pos;
    if(binary_search(arr, arr+n, val)) {
        pos = distance(arr, find(arr, arr+n, val));
        cout << "floor is " << arr[pos] << ", ceil is " << arr[pos] << "\n";
    }
    else {
        for(int i = 0; i < n; i++) {
            if(val < arr[i] && val > arr[i-1]) {
                if(i-1 >= 0 && i+1 <= n-1) {
                    cout << "floor is " << arr[i-1] << ", ceil is " << arr[i] << "\n";
                }
                break;
            }
        }
        
        if(val > arr[n-1]) {
            cout << "floor is " << arr[n-1] << " , ceil does not exist" << endl;
        }
        
        if(val < arr[0]) {
            cout << "floor does not exist" << ", ceil is " << arr[0] << endl;
        }
    }
    
}


int main() {
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int val = 0;
    ceilAndFloor(arr, arr_size, val);
    val = 1;
    ceilAndFloor(arr, arr_size, val);
    val = 5;
    ceilAndFloor(arr, arr_size, val);
    val = 20;
    ceilAndFloor(arr, arr_size, val);
    return 0;
}
