/*
 * Topic:
 * Sort the given matrix
 *
 * Description:
 * Given a n x n matrix. The problem is to sort the given
 * matrix in strict order. Here strict order means that matrix
 * is sorted in a way such that all elements in a row are
 * sorted in increasing order and for row ‘i’, where 1 <= i <= n-1,
 * first element of row 'i' is greater than or equal to the
 * last element of row 'i-1'.
 */
#include <iostream>
#include <algorithm>

#define N 3
using namespace std;

int sortMatrix(int arr[N][N]) {
    int tmp[N*N];
    int index = 0;
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            tmp[index] = arr[i][j];
            index++;
        }
    }
    
    sort(tmp, tmp+(N*N));
    
    index = 0;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            arr[i][j] = tmp[index];
            index++;
        }
    }
    
    
    return 1;
}

void printMatrix(int arr[N][N]) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}
int main() {
    //    Test Case 1
    int mat[N][N] = { {5, 4, 7},
        {1, 3, 8},
        {2, 9, 6} };
    
    
    sortMatrix(mat);
    printMatrix(mat);
    return 0;
    
}
