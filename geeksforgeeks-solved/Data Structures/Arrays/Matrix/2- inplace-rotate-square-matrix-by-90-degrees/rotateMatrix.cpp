/*
 * Topic:
 * Inplace rotate square matrix by 90 degrees | Set 1
 *
 * Description:
 * Given a square matrix, turn it by 90 degrees in
 * anti-clockwise direction without using any extra space.
 */
#include <iostream>
#include <vector>
#include <set>
#define N 4

using namespace std;

void rotateMatrix(int arr[N][N]) {
    int tmp = 0;
    
    int prev, last;
    
    int row = 0, col = N-1;
    prev = arr[row][col];
    
    for(int i = 0; i < 4; i++) {
        if(i == 0 || i == 2) {
            col = abs(col - (N-1));
            last = arr[row][col];
            arr[row][col] = prev;
            prev = last;
        }
        else {
            row += (N-1);
            if(row > (N-1)) {
                row = 0;
            }
            last = arr[row][col];
            arr[row][col] = prev;
            prev = last;
        }
    }
    
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
    // Test Case 1
    int mat[N][N] = {
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 },
        { 13, 14, 15, 16 }
    };
    
    // Tese Case 2
    /* int mat[N][N] = {
     {1, 2, 3},
     {4, 5, 6},
     {7, 8, 9}
     };
     */
    
    // Tese Case 3
    /*int mat[N][N] = {
     {1, 2},
     {4, 5}
     };*/
    
    // displayMatrix(mat);
    
    rotateMatrix(mat);
    
    // Print rotated matrix
    displayMatrix(mat);
    
    return 0;
}
