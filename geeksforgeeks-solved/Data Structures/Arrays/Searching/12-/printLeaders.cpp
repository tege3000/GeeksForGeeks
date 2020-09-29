/*
 * Topic: Leaders in an array
 *
 * Description: Write a program to print all the
 * LEADERS in the array. An element is leader if
 * it is greater than all the elements to its right
 * side. And the rightmost element is always a leader.
 * For example int the array {16, 17, 4, 3, 5, 2},
 * leaders are 17, 5 and 2.
 */
#include <iostream>
using namespace std;

// Initial approach
// Works in O(n^2) time
void printLeaders(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        if(arr[i] > *max_element(arr+i+1, arr+n)) {
            cout << arr[i] << " ";
        }
    }
    cout << "\n";
}

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    printLeaders(arr, arr_size);
    return 0;
}
