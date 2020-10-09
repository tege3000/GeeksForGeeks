/*
 * Topic:
 * Program to multiply two matrices
 *
 * Description:
 * Given two matrices, the task to multiply them.
 * Matrices can either be square or rectangular.
 */
#include <iostream>
#define N 2
using namespace std;

void displayMatrix(int arr[N][N]) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

void multiplyMatrix(int arr1[N][N], int arr2[N][N]) {
    int res[N][N];
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            int sum = 0;
            for(int col = 0; col < N; col++) {
                sum += (arr1[i][col] * arr2[col][j]);
            }
            
            res[i][j] = sum;
        }
    }
    
    displayMatrix(res);
}

int main() {
    int mat1[N][N] = {{2, 4},
        {3, 4}};
    int mat2[N][N] = {{1, 2},
        {1, 3}};
    
    multiplyMatrix(mat1, mat2);
   
    return 0;
}
