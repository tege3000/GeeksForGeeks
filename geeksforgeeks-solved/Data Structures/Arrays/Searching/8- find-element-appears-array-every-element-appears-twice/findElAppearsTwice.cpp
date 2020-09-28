/*
 * Topic: Find the element that appears once in
 * an array where every other element appears twice
 *
 * Description: Given an array of integers. All numbers
 * occur twice except one number which occurs once. Find
 * the number in O(n) time & constant extra space.
 */

#include <iostream>
#include <set>

using namespace std;


//// Efficient way to solve this problem
//// Uses XORs. XOR of all array elements gives us the number
//// with a single occurrence. The idea is based on the
//// following two facts.
////
//// a) XOR of a number with itself is 0.
//// b) XOR of a number with 0 is number itself.
////
//// Works in O(n) time
//int findElAppearsTwice(int arr[], int n) {
//    int ans = arr[0];
//    for(int i = 1; i < n; i++) {
//        ans ^= arr[i];
//    }
//
//    return ans;
//}

// Another approach, not as efficient as the one above,
// but easier to understand
int findElAppearsTwice(int arr[], int n) {
    set <int> distinct;
    for(int i = 0; i < n; i++) {
        distinct.insert(arr[i]);
    }
    
    int sum_distinct = 0, sum_arr = 0;
    
    for(int i = 0; i < n; i++) {
        sum_arr += arr[i];
    }
    
    for(auto i : distinct) {
        sum_distinct += i;
    }
    
    return (2*sum_distinct) - sum_arr;
}

int main() {
    int arr[] = {7, 3, 5, 4, 5, 3, 4};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << findElAppearsTwice(arr, n) << endl;
    return 0;
}
