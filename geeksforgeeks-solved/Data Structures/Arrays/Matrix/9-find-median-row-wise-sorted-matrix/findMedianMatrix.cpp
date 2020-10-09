/*
 * Topic:
 * Find median in row wise sorted matrix
 *
 * Description:
 * We are given a row wise sorted matrix of size r*c,
 * we need to find the median of the matrix given.
 * It is assumed that r*c is always odd.
 */
#include <iostream>
#define R 3
#define C 3
using namespace std;

int findMedianMatrix(int arr[R][C]) {
    int tmp[R*C];
    int index = 0;
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            tmp[index] = arr[i][j];
            index++;
        }
    }
    
    sort(tmp, tmp+(R*C));
    
    int middle = ((R*C)-1)/2;
    
    if(((R*C)-1) % 2 == 0) {
        return tmp[middle];
    }
  
    return (tmp[middle] + tmp[middle+1])/2;
}

int main() {
    int mat[R][C] = {{0, 3, 5},
        {2, 6, 9},
        {3, 6, 9}
    };
    
    cout << findMedianMatrix(mat) << endl;
    
    return 0;
}
