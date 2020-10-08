/*
 * Topic:
 * Check if all rows of a matrix are circular rotations
 * of each other
 *
 * Description:
 * Given a matrix of n*n size, the task is to find whether
 * all rows are circular rotations of each other or not.
 */
#include <iostream>
#include <algorithm>

#define N 3
using namespace std;

int isCircularRotation(int arr[N][N], int n) {
    int passed = 0;
    for(int i = 0; i < N; i++) {
        int tmp[N];
        for(int j = 0; j < N; j++) {
            tmp[j] = arr[0][j]; // always set tmp to the elements in first row
        }
        
        for(int j = 0; j < N; j++) {
            int allElEqual = 0;
            rotate(tmp, tmp+1, tmp+N);
            
            for(int a = 0; a < N; a++) {
                if(arr[i][a] == tmp[a]) {
                    allElEqual = 1;
                }
                else {
                    allElEqual = 0;
                    break;
                }
            }

            if(allElEqual == 1) {
                passed = 1;
                break;
            }
            else {
                passed = 0;
            }
            
        }
        
        if(passed == 0) {
            return -1;
        }
    }
    
    return 1;
}

int main() {
//    Test Case 1
//    int mat[N][N] = {{1, 2, 3, 4},
//        {4, 1, 2, 3},
//        {3, 4, 1, 2},
//        {2, 3, 4, 1}
//    };
    
//    Test Case 2
    int mat[N][N] = {
        {1, 2, 3},
        {3, 1, 2},
        {2, 3, 1}
    };
    
//    Test Case 3
//    int mat[N][N] = {
//        {1, 2, 3},
//        {3, 2, 1},
//        {1, 3, 2}
//    };
    
    isCircularRotation(mat, N) == 1 ? cout << "Yes\n" : cout << "No\n";
    
    return 0;
    
}
