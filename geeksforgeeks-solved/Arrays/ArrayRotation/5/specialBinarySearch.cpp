// Program to Search an element in a sorted and rotated array

/* An element in a sorted array can be found in O(log n) time
 * via binary search. But suppose we rotate an ascending order
 * sorted array at some pivot unknown to you beforehand.
 * So for instance, 1 2 3 4 5 might become 3 4 5 1 2. Devise a way
 * to find an element in the rotated array in O(log n) time.
 *
 * MY SOLUTION
 */

#include <iostream>

using namespace std;
void search(int arr[], int start, int end, int el) {
    int found = 0;
    while( start <= end) {
        int pivot = (start+end)/2;
        if(el == arr[pivot]) {
            cout << el << " fonud at index " << pivot << endl;
            found = 1;
            break;
        }
        else if(el > arr[0]) {
            // search left
            end = pivot - 1;
        }
        else if(el < arr[0]){
            //search right
            start = pivot + 1;
        }
        else {
            cout << el << " fonud at index " << 0 << endl;
            found = 1;
            break;
        }

    }
    
    if(found !=1) {
        cout << "Not Found" << endl;
    }

}

int main() {
    int arr [] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int el = 5;
    
    search(arr, 0, n-1, el);
        
    
    
}
