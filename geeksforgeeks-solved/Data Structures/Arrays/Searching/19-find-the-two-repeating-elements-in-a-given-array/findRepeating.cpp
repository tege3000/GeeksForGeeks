/*
 * Topic: Find the two repeating elements in a given array
 *
 * Description: You are given an array of n+2 elements.
 * All elements of the array are in range 1 to n. And all
 * elements occur once except two numbers which occur twice.
 * Find the two repeating numbers.
 * For example, array = {4, 2, 4, 5, 2, 3, 1} and n = 5
 * The above array has n + 2 = 7 elements with all elements
 * occurring once except 2 and 4 which occur twice. So the
 * output should be 4 2.
 */
#include <iostream>
using namespace std;

// Better approach
// Works in O(n) time
void findRepeating(int arr[], int n) {
    int countArr[*max_element(arr, arr+n)];
    for(int i = 0; i < n; i++) {
        countArr[arr[i]]++;
        
        if(countArr[arr[i]] == 2) {
            cout << arr[i] << " ";
        }
    }

}

//// Initial implementation
//// Works in O(nlogn) time
//void findRepeating(int arr[], int n) {
//    sort(arr, arr+n);
//    int count = 1;
//    for(int i = 0; i < n; i++) {
//        if(arr[i] == arr[i+1]) {
//            cout << arr[i] << " ";
//        }
//    }
//
//    cout << "\n";
//}

int main() {
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    findRepeating(arr, n);
    return 0;
}
