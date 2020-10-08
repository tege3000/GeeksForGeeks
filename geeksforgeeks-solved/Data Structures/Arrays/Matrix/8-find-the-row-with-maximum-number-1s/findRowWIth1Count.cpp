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

int findRowWithMaxNumOf1s(int arr[N][N]) {
    int maxCount = 0;
    int currCount = 0;
    int row = 0;
    for(int i = 0; i < N; i++) {
        currCount = count(arr[i], arr[i]+N, 1);
        if(currCount > maxCount) {
            maxCount = currCount;
            row = i;
        }
    }
    
    return row;
}


int main() {
    int mat[N][N] = {{0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 0}
    };
    
    cout << findRowWithMaxNumOf1s(mat) << endl;
    
    return 0;
}
