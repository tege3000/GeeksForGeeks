/*
 * Topic: Check if an array has a majority element
 *
 * Description: Given an array, the task is to find if
 * the input array contains a majority element or not.
 */
#include <iostream>
#include <unordered_map>

using namespace std;

// Better approach - uses hashing
// Works in O(n) time
int hasMajority(int arr[], int n) {
    
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }
    
    for(auto i: mp) {
        if(i.second > n/2) {
            return true;
        }
    }
    
    return false;
}

//// Simple - Initial approach
//// Works in O(nlogn) time
//int hasMajority(int arr[], int n) {
//    int count = 1;
//    sort(arr, arr+n);
//
//    for(int i = 0; i < n; i++) {
//        if(arr[i] == arr[i+1]) {
//            count++;
//        }
//        else {
//            if(count > n/2) {
//                return true;
//            }
//            count = 1;
//        }
//    }
//
//    return false;
//
//}


int main() {
    int arr[] = {2, 3, 9, 2, 2};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    
    if(hasMajority(arr, arr_size)) {
        cout << "Yes \n";
    }
    else {
        cout << "No \n";
    }
    return 0;
}
