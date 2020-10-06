/*
 * Topic:
 * Rotate a matrix by 90 degree without using any extra space | Set 2
 *
 * Description:
 * Given a square matrix, turn it by 90 degrees in anti-clockwise
 * direction without using any extra space.
 *
 * This is a more efficient approach, which involves transposing the matrix
 * then reversing each column of the matrix
 */
#include <iostream>
#include <iomanip>

//NOTE: you need to change this value when making new test cases
#define N 4

using namespace std;

void transposeMatrix(int arr[N][N]) {
    for(int i = 0; i < N; i++) {
        for(int j = i; j < N; j++) {
            swap(arr[j][i], arr[i][j]);
        }
    }
}

void reverseMatrixCol(int arr[N][N]) {
    int end = N-1;
    for(int i = 0; i < (N/2); i++) {
        for(int j = 0; j < N; j++) {
            swap(arr[i][j], arr[end][j]);
        }
        end--;
    }
}

void rotateMatrix(int arr[N][N]) {
    transposeMatrix(arr);
    reverseMatrixCol(arr);
}


void displayMatrix(int arr[N][N]) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    //    // Test Case 1
    int mat[N][N] = {
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 },
        { 13, 14, 15, 16 }
    };
    
    ////         Tese Case 2
    //         int mat[N][N] = {
    //         {1, 2, 3},
    //         {4, 5, 6},
    //         {7, 8, 9}
    //         };
    
    
    // Tese Case 3
    //    int mat[N][N] = {
    //     {1, 2},
    //     {4, 5}
    //     };
    
    rotateMatrix(mat);
    
    // Print rotated matrix
    displayMatrix(mat);
    
    return 0;
}
