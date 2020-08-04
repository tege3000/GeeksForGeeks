/*
 * Topic: Double the first element and move zero to end
 *
 *
 * Description: Given an array of integers of size n.
 * Assume ‘0’ as invalid number and all other as valid number.
 * Convert the array in such a way that if next number is a
 * valid number and same as current number, double its value and
 * replace the next number with 0. After the modification, rearrange
 * the array such that all 0’s are shifted to the end.
 */

#include <iostream>
using namespace std;
void rotate(int arr[], int start, int n) {
    int first = arr[start];
    for(int i = start; i < n; i++) {
        arr[i] = arr[i+1];
    }
    
    arr[n-1] = first;
}

void moveZeros(int arr[], int n) {
    int start = 0;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[start] = arr[i];
            start++;
        }
    }
    
    for(int i = start; i < n; i++) {
        arr[i] = 0;
    }
}

//// second approach
//// O(n) time complexity
void doubleVal(int arr [], int n) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == arr[i+1] && arr[i] != 0) {
            arr[i] *= 2;
            arr[i+1] = 0;
        }

    }

    moveZeros(arr, n);
}


// First approach
// O(n^2) time complexity
//void doubleVal(int arr [], int n) {
//    int counter=0;
//    int found;
//    for(int i = 0; i < n; i = counter) {
//        if(arr[i] == arr[i+1] && arr[i] != 0) {
//            arr[i] *= 2;
//            arr[i+1] = 0;
//
//            rotate(arr, i+1, n);
//            counter++;
//        }
//        else if(arr[i] == 0) {
//            found = 0;
//            for(int j = i; j < n; j++) {
//                if(arr[j] != 0) {
//                    found = 1;
//                    break;
//                }
//            }
//            if(found == 0) {
//                break;
//            }
//            else {
//                rotate(arr, i, n);
//                counter = i;
//            }
//        }
//        else {
//            counter++;
//        }
//
//    }
//
//}

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    cout << "\n";
}

int main() {
    int arr[] = {0, 2, 2, 2, 0, 6, 6, 0, 0, 8};
    //int arr[] = {2, 2, 0, 4, 0, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    doubleVal(arr, n);
    printArr(arr, n);
}
