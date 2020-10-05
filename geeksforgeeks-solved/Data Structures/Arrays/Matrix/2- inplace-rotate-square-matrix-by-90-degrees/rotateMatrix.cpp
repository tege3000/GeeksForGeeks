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
    int prev = 0, last = 0;
    int rCounter = 0;
    int colCounter = 0;
    
    // Progress Made: Successfully rotated outer most cycle of matrix
    // TODO: Make algorithm iterative for all cycles, instead of just 1
    for(int start = 0; start < N-1; start++) {
        prev = arr[start][N-1];
        for(int i = 0; i < 4; i++) {
            if(i == 0) {
                rCounter = 0;
                colCounter = start;
                last = arr[rCounter][colCounter];
                arr[rCounter][colCounter] = prev;
                prev = last;
            }
            else if(i == 1) {
                rCounter = (N-1) - start;
                colCounter = 0;
                last = arr[rCounter][colCounter];
                arr[rCounter][colCounter] = prev;
                prev = last;
            }
            else if(i == 2) {
                rCounter = N-1;
                colCounter = (N-1)  - start;
                last = arr[rCounter][colCounter];
                arr[rCounter][colCounter] = prev;
                prev = last;
            }
            else {
                rCounter = start;
                colCounter = N-1;
                last = arr[rCounter][colCounter];
                arr[rCounter][colCounter] = prev;
                prev = last;
            }
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
//    // Test Case 1
    int mat[N][N] = {
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 },
        { 13, 14, 15, 16 }
    };
    
//     Tese Case 2
//     int mat[N][N] = {
//     {1, 2, 3},
//     {4, 5, 6},
//     {7, 8, 9}
//     };
    
    
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
