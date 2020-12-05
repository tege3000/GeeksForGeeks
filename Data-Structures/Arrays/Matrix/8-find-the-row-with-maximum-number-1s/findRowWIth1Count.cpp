/*
 * Topic:
 * Find the row with maximum number of 1s
 *
 * Description:
 * Given a boolean 2D array, where each row is sorted.
 * Find the row with the maximum number of 1s.
 */
#include <iostream>
#define N 4
using namespace std;


// Modified version of binary search to find index of first
// occurrence of an element in an array
int binSearch(int arr[N], int start, int end, int val) {
    int result = -1;
    while(start <= end) {
        int mid = (start+end)/2;
        if(arr[mid] == val) {
            result = mid;
            end = mid-1;
        }
        else if(arr[mid] > val) {
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    
    return result;
}

// Second Implementation
// Works in O(nlogn) time
int findRowWithMaxNumOf1s(int arr[N][N]) {
    int countOf1s = 0;
    int maxCount = 0;
    int ans = 0;
    for(int i = 0; i < N; i++) {
        int index = binSearch(arr[i], 0, N-1, 1);
        if(index != -1) {
            countOf1s = N - index;
            if(countOf1s > maxCount) {
                maxCount = countOf1s;
                ans = i;
            }
            
        }
    }
    
    return ans;
}

// Initial Implementation
// Works in O(n^2) time
//int findRowWithMaxNumOf1s(int arr[N][N]) {
//    int maxCount = 0;
//    int currCount = 0;
//    int row = 0;
//    for(int i = 0; i < N; i++) {
//        currCount = count(arr[i], arr[i]+N, 1);
//        if(currCount > maxCount) {
//            maxCount = currCount;
//            row = i;
//        }
//    }
//
//    return row;
//}


int main() {
    int mat[N][N] = {{0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 0}
    };
    
    cout << findRowWithMaxNumOf1s(mat) << endl;
    
    return 0;
}
