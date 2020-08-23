/*
 * Topic: Find the smallest and second smallest
 * elements in an array
 *
 *
 * Description: Write an efficient C program to
 * find smallest and second smallest element in an array.
 */
#include <iostream>
#include <set>
#include <vector>

using namespace std;

void findSmallestAndSecondSmallestEl(int arr[], int n) {
    set <int> distinct;
    
    for(int i = 0; i < n; i++) {
        distinct.insert(arr[i]);
    }
    
    set<int>::iterator it = distinct.begin();
    cout << "The smallest element is " << *it;
    
    advance(it, 1);
    if(it != distinct.end()) {
        cout << " and second smallest element is " << *it << endl;
    }
    else {
        cout << "\nsecond largest element does not exist" << endl;
    }
    
}


int main() {
    int arr[] = {12, 13, 1, 10, 34, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    findSmallestAndSecondSmallestEl(arr, n);
    return 0;
}
