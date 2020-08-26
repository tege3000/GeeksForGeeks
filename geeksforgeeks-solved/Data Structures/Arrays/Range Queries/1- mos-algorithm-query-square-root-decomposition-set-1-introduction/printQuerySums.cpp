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

struct Query  {
    int left;
    int right;
};

bool compare(Query lhs, Query rhs) {
    return lhs.right < rhs.right;
}

// second approach
void printQuerySums(int arr[], int n, Query q[], int m) {
    sort(q, q+m, compare);
    
    int l, r, sum = 0;
    
    for(int i = 0; i < m; i++) {
        l = q[i].left;
        r = q[i].right;
        
        
        if(i != 0) {
            if(l < q[i-1].left) {
                for(int j = l; j < q[i-1].left; j++) {
                    sum += arr[j];
                }
            }
            
            if(l > q[i-1].left) {
                for(int j = q[i-1].left; j < l; j++) {
                    sum -= arr[j];
                }
                
            }
            
            if(r >= q[i-1].right) {
                for(int j = q[i-1].right+1; j <= r; j++) {
                    sum += arr[j];
                }
            }
            
            cout <<  "Sum of array[] elements in range [" << l << ", " << r << "] " << "is " << sum << endl;

            
        }
        else {
            for(int j = l; j <= r; j++) {
                sum += arr[j];
            }
            
            cout <<  "Sum of array[] elements in range [" << l << ", " << r << "] " << "is " << sum << endl;
        }
    }
}

//// first implementation
//// naive approach
//// O(mn) time
//void printQuerySums(int arr[], int n, int q[][2], int m) {
//    int a, b, sum;
//    for(int i = 0; i < m; i++) {
//        a = q[i][0];
//        b = q[i][1];
//        sum  = 0;
//
//        for(int j = a; j < b+1; j++) {
//            sum +=arr[j];
//        }
//
//        cout <<  "Sum of array[] elements in range [" << a << ", " << b << "] " << "is " << sum << endl;
//
//    }
//
//}

int main() {
    int a[] = {1, 1, 2, 1, 3, 4, 5, 2, 8};
    int n = sizeof(a)/sizeof(a[0]);
    
    //int q[3][2] = {{0, 4}, {1, 3}, {2, 4}};
    Query q[] = {{0, 4}, {1, 3}, {2, 4}};
    int m = sizeof(q)/sizeof(q[0]);
    printQuerySums(a, n, q, m);
    return 0;
}
