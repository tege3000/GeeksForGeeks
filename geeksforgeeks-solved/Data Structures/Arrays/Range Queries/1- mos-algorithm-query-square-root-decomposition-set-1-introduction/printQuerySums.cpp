/*
 * Topic: MO’s Algorithm (Query Square Root Decomposition)
 * | Set 1 (Introduction)
 *
 *
 * Description: Let us consider the following problem to
 * understand MO’s Algorithm. We are given an array and a
 * set of query ranges, we are required to find the sum of
 * every query range.
 */
#include <iostream>

using namespace std;

struct Query {
    int left;
    int right;
};

// first implementation
// naive approach
// O(mn) time
void printQuerySums(int arr[], int n, struct Query q[], int m) {
    int a, b, sum;
    for(int i = 0; i < m; i++) {
        a = q[i].left;
        b = q[i].right;
        sum  = 0;
        
        for(int j = a; j < b+1; j++) {
            sum +=arr[j];
        }
        
        cout <<  "Sum of array[] elements in range [" << a << ", " << b << "] " << "is " << sum << endl;
        
    }
    
}

int main() {
    int a[] = {1, 1, 2, 1, 3, 4, 5, 2, 8};
    int n = sizeof(a)/sizeof(a[0]);
    
    struct Query q[] = {{0, 4}, {1, 3}, {2, 4}};
    int m = sizeof(q)/sizeof(q[0]);
    printQuerySums(a, n, q, m);
    return 0;
}
