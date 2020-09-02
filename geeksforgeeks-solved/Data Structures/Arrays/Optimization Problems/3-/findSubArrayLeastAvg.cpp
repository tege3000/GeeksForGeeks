/*
 * Topic: Find the subarray with least average
 *
 * Description: Given an array arr[] of size n and integer
 * k such that k <= n.
 */


#include <iostream>

using namespace std;

void findSubArrayLeastAvg(int arr[], int n, int k) {
    int avg = 1000000000; // arbitrary large value
    int l, r;
 
    for(int i = 0; i < n-k; i++) {
        int sum = 0;
        for(int j = i; j < i+k; j++) {
            sum += arr[j];
        }
        if(sum/k < avg) {
            avg = sum/k;
            l = i;
            r =  r = i+k-1;
        }
    }
    
    cout << "Subarray between indexes " << l << " and " << r << " has minimum avegrage\n";
}

int main() {
    
    int arr[] =  {3, 7, 5, 20, -10, 0, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    
    findSubArrayLeastAvg(arr,n, k);
}
