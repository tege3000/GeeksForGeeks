/*
 * Topic: Majority Element
 *
 * Description: Write a function which takes an array
 * and prints the majority element (if it exists), otherwise
 * prints “No Majority Element”. A majority element in an array
 * A[] of size n is an element that appears more than n/2 times
 * (and hence there is at most one such element).
 */
#include <iostream>

using namespace std;

void majority(int arr[], int n) {
    int count = 1;
    sort(arr, arr+n);
    int worked = 0;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == arr[i+1]) {
            count++;
        }
        else {
            if(count > n/2) {
                cout << arr[i] << " ";
                worked = 1;
            }
            count = 1;
        }
    }
    
    if(worked  == 0) {
        cout << "No majority element found \n";
    }
    
    cout << "\n";
}


int main() {
    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    majority(arr, arr_size);
    return 0;
}
