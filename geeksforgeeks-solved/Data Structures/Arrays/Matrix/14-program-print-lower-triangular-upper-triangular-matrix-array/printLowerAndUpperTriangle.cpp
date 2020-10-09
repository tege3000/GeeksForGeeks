/*
 * Topic:
 * Program to print Lower triangular and Upper
 * triangular matrix of an array
 *
 * Description:
 * Given a two dimensional array, Write a program
 * to print lower triangular matrix and upper
 * triangular matrix.
 *
 * Lower triangular matrix is a matrix which contain
 * elements below principle diagonal including principle
 * diagonal elements and rest of the elements are 0.
 *
 * Upper triangular matrix is a matrix which contain elements
 * above principle diagonal including principle diagonal
 * elements and rest of the elements are 0.
 */
#include <iostream>
#define R 3
#define C 3
using namespace std;

void upper(int arr[R][C]) {
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            if(j >= i) {
                cout << arr[i][j] << " ";
            }
            else {
                cout << 0 << " ";
            }
        }
        cout << "\n";
    }
}

void lower(int arr[R][C]) {
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            if(j <= i) {
                cout << arr[i][j] << " ";
            }
            else {
                cout << 0 << " ";
            }
        }
        cout << "\n";
    }
}


int main() {
    int mat[R][C] = {{1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
 
    
    lower(mat);
    cout << "\n";
    upper(mat);
  
    return 0;
}
