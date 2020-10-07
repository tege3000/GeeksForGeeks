/*
 * Topic:
 * Rotate a Matrix by 180 degree
 *
 * Description:
 * Given a square matrix the task is that we turn it by 180 degrees
 * in anti-clockwise direction without using any extra space.
 */
#include <iostream>
#include <iomanip>

//NOTE: you need to change this value when making new test cases
#define N 4

using namespace std;

void reverseMatrixCol(int arr[N][N]) {
    int end = N-1;
    for(int i = 0; i < (N/2); i++) {
        for(int j = 0; j < N; j++) {
            swap(arr[i][j], arr[end][j]);
        }
        end--;
    }
}

void reverseMatrixRow(int arr[N][N]) {
    for(int i = 0; i < N; i++) {
        reverse(arr[i], arr[i]+N);
    }
}

void rotateMatrix(int arr[N][N]) {
    reverseMatrixCol(arr);
    reverseMatrixRow(arr);
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
        { 9, 0, 1, 2 },
        { 3, 4, 5, 6 }
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
