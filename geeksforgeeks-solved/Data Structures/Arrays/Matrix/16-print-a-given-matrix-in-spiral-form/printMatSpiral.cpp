/*
 * Topic:
 * Print a given matrix in spiral form
 *
 * Description:
 * Given a 2D array, print it in spiral form. 
 */
#include <iostream>
#include <vector>
#include <math.h>
#define Row 3
#define Col 6
using namespace std;


void printMatrixSpiral(int arr[Row][Col]) {
    vector<int> inner;
    
    int middleRow = (min(Row, Col))/2;
    
    int a = 0;
    for(a = 0; a < middleRow; a++) {
        for(int i = a; i < Col-a; i++) {
            cout << arr[a][i] << " ";
        }
        
        for(int i = a+1; i < Row-a; i++) {
            cout << arr[i][Col-(a+1)] << " ";
        }
        
        for(int i = (Col-(a+1))-1; i >= a; i--) {
            cout << arr[Row-(a+1)][i] << " ";
        }
        
        for(int i = (Row-(a+1))-1; i > a; i--) {
            cout << arr[i][a] << " ";
        }
    }
    
    // for the last single row
    for(int i = a; i < Col-a; i++) {
        cout << arr[middleRow][i] << " ";
    }
    cout << "\n";
    
}

int main() {
//     int mat[N][N] = {{12, 1, 14, 3, 16},
//         {14, 2, 1, 3, 35},
//         {14, 1, 14, 3, 11},
//         {14, 25, 3, 2, 1},
//         {1, 18, 3, 21, 14}
//     };
    
    int mat[Row][Col]  = { { 1, 2, 3, 4, 5, 6 },
        { 7, 8, 9, 10, 11, 12 },
        { 13, 14, 15, 16, 17, 18 } };
    
    printMatrixSpiral(mat);
    
    return 0;
}
