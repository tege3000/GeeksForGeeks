/*
 * Topic: Find Second largest element in an array
 *
 *
 * Description: Given an array of integers, our task
 * is to write a program that efficiently finds the
 * second largest element present in the array.
 */
#include <iostream>
#include <set>
#include <vector>

using namespace std;


void findSecondLargestEl(int arr[], int n) {
    set <int> distinct;
    
    for(int i = 0; i < n; i++) {
        distinct.insert(arr[i]);
    }
    
    if(distinct.size() <= 1) {
        cout << "The second largest element does not exist" << endl;
    }
    else {
        set<int>::iterator it = distinct.begin();
        advance(it, distinct.size()-2); // advance to second last index
        cout << *it << endl;
    }
    
}


int main() {
    //int arr[] = {10, 10, 10};
    //int arr[] = {12, 35, 1, 10, 34, 1};
    int arr[] = {10, 5, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    findSecondLargestEl(arr, n);
    return 0;
}
