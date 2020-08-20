/*
 * Topic: Find k pairs with smallest sums in two arrays
 *
 * Description: Given two integer arrays arr1[] and arr2[]
 * sorted in ascending order and an integer k. Find k pairs
 * with smallest sums such that one element of a pair belongs
 * to arr1[] and other element belongs to arr2[]
 */
#include <iostream>
#include <vector>

using namespace std;

// first implementation - simple method
// O(n1 * n2 * log (n1 * n2)) time
void kPairsSmallestSums(int arr1[] , int arr2[], int n1, int n2, int k) {
    int arr[n1*n2][2];
    
    int sum[n1*n2];
    int start = 0;
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            arr[start][0] = arr1[i];
            arr[start][1] = arr2[j];
            sum[start] = arr1[i] + arr2[j];
            start++;
        }
    }
    
    int sums[n1*n2];
    for(int i = 0; i < n1*n2; i++) {
        sums[i] = arr[i][0] + arr[i][1];
    }
    
    int unsortedSums[n1*n2];
    for(int i = 0; i < n1*n2; i++) {
        unsortedSums[i] = sums[i];
        cout << sums[i] << " ";
    }
    cout << "\n";
    sort(sums, sums+(n1*n2));
    
    // using these to deal with cases where there are duplicate sums
    int count1 = 1, count2 = 0;
    
    for(int i = 0; i < k; i++) {
        if(sums[i] == sums[i-1]) {
            count1++;
        }
        for(int j = 0; j < n1*n2; j++) {
            
            if(sums[i] == unsortedSums[j]) {
                count2++;
                if(count1 == count2) {
                    cout << arr[j][0] << " " << arr[j][1] << endl;
                }
            }
        }
        count1 = 1;
        count2 = 0;
    }
    
}


int main() {
    int arr1[] = {1, 3, 11};
    int arr2[] = {2, 4, 8};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int k = 4;
    
    kPairsSmallestSums(arr1,arr2, n1,n2, k);
    return 0;
}
