/*
 * Topic:
 * Rotate Matrix Elements
 *
 * Description:
 * Given a matrix, clockwise rotate elements in it.
 */
#include <iostream>
#include <vector>

// when using other test cases, change these values
#define Row 4
#define Col 4
using namespace std;

// display array
void printArr(int arr[Row][Col]) {
    for(int i = 0; i < Row; i++) {
        for(int j = 0; j < Col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

void rotateMatrix(int arr[Row][Col]) {
    
    for(int a = 0; a < (min(Row, Col))/2; a++) {
        vector<int> inner;
        for(int i = a; i < Col-a; i++) {
            inner.push_back(arr[a][i]);
        }
        
        for(int i = a+1; i < Row-a; i++) {
            inner.push_back(arr[i][Col-(a+1)]);
        }
        
        for(int i = (Col-(a+1))-1; i >= a; i--) {
            inner.push_back(arr[Row-(a+1)][i]);
        }
        
        for(int i = (Row-(a+1))-1; i > a; i--) {
            inner.push_back(arr[i][a]);
        }
        

        // rotate right
        // NOTE: In Cpp stl rotate works in an anticlockwise fashion.
        // (It rotates left on default)
        // 
        // So when rotating clockwise, you have to rotate by 
        // [len(array) - k] times to the left(anticlockwise), where k is 
        // how many times you want to rotate to the right (clockwise)
        rotate(inner.begin(), inner.begin()+(inner.size()-1), inner.end());
        
        // now populate array with new rotated values
        int start = 0;
        for(int i = a; i < Col-a; i++) {
            arr[a][i] = inner[start];
            start++;
        }
        
        for(int i = a+1; i < Row-a; i++) {
            arr[i][Col-(a+1)] = inner[start];
            start++;
        }
        
        for(int i = (Col-(a+1))-1; i >= a; i--) {
            arr[Row-(a+1)][i] = inner[start];
            start++;
        }
        
        for(int i = (Row-(a+1))-1; i > a; i--) {
            arr[i][a] = inner[start];
            start++;
        }
    }
    
    printArr(arr);
    
}

int main() {
    // Test Case 1
    int a[Row][Col] = { {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9,  10, 11, 12},
        {13, 14, 15, 16}  };
    
    // Tese Case 2
//    int a[Row][Col] = {{1, 2, 3},
//     {4, 5, 6},
//     {7, 8, 9}
//     };
    
//    // Test Case 3
//    int a[Row][Col] = {{1, 2, 3, 4, 5},
//        {6, 7, 8, 9, 10},
//        {11, 12, 13, 14, 15},
//        {16, 17, 18, 19, 20}
//    };
    
    rotateMatrix(a);
    return 0;
}
