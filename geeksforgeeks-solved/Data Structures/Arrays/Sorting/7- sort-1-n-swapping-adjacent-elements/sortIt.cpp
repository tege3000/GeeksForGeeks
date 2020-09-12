/*
 * Topic:
 * Sort 1 to N by swapping adjacent elements
 *
 * Description:
 * Given an array, A of size N consisting of elements
 * 1 to N. A boolean array B consisting of N-1 elements
 * indicates that if B[i] is 1, then A[i] can be swapped
 * with A[i+1].
 * Find out if A can be sorted by swapping elements.
 */
#include <iostream>
using namespace std;

// Efficient approach
// O(n) time
void sortIt(int A[], int B[], int n, int m) {
    int canBeSorted = 0;
    for(int i = 0; i < n; i++) {
        int min_pos = distance(A, min_element(A+i, A+n));
        
        if(A[min_pos] != A[i]) {
            if(B[i] == 1) {
                swap(A[min_pos], A[i]);
                canBeSorted = 1;
            }
            else {
                canBeSorted = 0;
                break;
            }
        }
    }
    
    if(canBeSorted == 1) {
        cout << "A can be sorted" << endl;
    }
    else {
        cout << "A cannot be sorted \n";
    }
    
}



int main() {
    int A[] = {1, 2, 5, 3, 4, 6 };
    int B[] = {0, 1, 1, 1, 0};
    
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);
    
    sortIt(A, B, n, m);

    
    return 0;
}
