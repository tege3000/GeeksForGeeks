/*
 * Topic:
 * Program for scalar multiplication of a matrix
 *
 * Description:
 * Given a matrix and a scalar element k, our task
 * is to find out the scalar product of that matrix.
 */
#include <iostream>
#define R 3
#define C 3
using namespace std;

void displayMatrix(int arr[R][C]) {
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

void scalarMultiplication(int arr[R][C], int k) {
    int index = 0;
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            arr[i][j] *= k;
        }
    }
}

int main() {
    int mat[R][C] = {{1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int k = 4;
    
    scalarMultiplication(mat, k);
    displayMatrix(mat);
    return 0;
}
