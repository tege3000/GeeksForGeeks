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

#define N 4
using namespace std;

int isCircularRotation(int arr[N][N], int n) {
    
    
    int allElEqual = 0;
    int passed = 0;
    for(int i = 0; i < N; i++) {
        int tmp[N];
        for(int j = 0; j < N; j++) {
            tmp[i] = arr[0][i];
        }
        
        for(int j = 0; j < N; j++) {
            rotate(tmp, tmp+(j+1), tmp+n);
            
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
    int mat[N][N] = {
        {1, 2, 3, 4},
        {4, 1, 2, 3},
        {3, 4, 1, 2},
        {2, 3, 4, 1}
    };
    
    isCircularRotation(mat, N) == 1 ? cout << "Yes\n" : cout << "No\n";
 
    return 0;
                  
}
