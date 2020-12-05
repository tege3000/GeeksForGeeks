/*
 * Topic: Given a sorted and rotated array,
 * find if there is a pair with a given sum
 *
 * Description: How to count all pairs having sum x?
 *
 *
 * MY SOLUTION
 */

#include <iostream>

using namespace std;


int findSumPairsCount(int arr[], int n, int x) {
    int right = distance(arr, max_element(arr+0, arr+n));
    int left = (right+1)%n;
    int count = 0;
    
    while(left != right) {
        if(arr[left] + arr[right] == x) {
            count++;
            
            //if left is just beside right
            if(left == (right-1+n)%n){
                return count;
            }
            
            left = (left+1)%n;
            right = (right-1+n)%n;
        }
        else if(arr[left] + arr[right] < x) {
            left = (left+1)%n;
        }
        else {
            right = (n+right-1)%n;
            
        }
    }
    
    return count;
}


int main() {
    int arr [] = {11, 15, 6, 7, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 16; // sum were looking for
    
    int ans = findSumPairsCount(arr, n, x);
    
    cout << ans << endl;
}
