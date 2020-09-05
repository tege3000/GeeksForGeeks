/*
 * Topic:
 * Count minimum steps to get the given desired array
 *
 * Description:
 * Consider an array with n elements and value of all the
 * elements is zero. We can perform following operations on the array.
 *
 * Incremental operations:Choose 1 element from the array and increment
 * its value by 1.
 *
 * Doubling operation: Double the values of all the elements of array.
 */

#include <iostream>
#include <vector>
using namespace std;
int countMinSteps(int arr[], int n) {
    int count = 0;
    
    int allZeros = 0;
    
    
    while(allZeros != 1) {
        int allEven = 0;
        int allOdd = 0;
        
        
        for(int i = 0; i < n; i++) {
            if(!(arr[i] % 2 == 0)) {
                arr[i]--;
                count++;
            }
        }
        
        for(int i = 0; i < n; i++) {
            if(arr[i] % 2 == 0) {
                allEven = 1;
            }
            else {
                allEven = 0;
                break;
            }
        }
        
        for(int i = 0; i < n; i++) {
            if(arr[i] == 0) {
                allZeros = 1;
            }
            else {
                allZeros = 0;
                break;
            }
        }
        
        if(allEven == 1 && allZeros == 0) {
            for(int i = 0; i < n; i++) {
                arr[i] /= 2;
            }
            count++;
        }
    
        for(int i = 0; i < n; i++) {
            if(arr[i] == 0) {
                allZeros = 1;
            }
            else {
                allZeros = 0;
                break;
            }
        }
        
    }
    
    return count;
    
}


int main() {
    int arr[] = {16, 16, 16};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << countMinSteps(arr, n) << endl;
    return 0;
    
    
}
