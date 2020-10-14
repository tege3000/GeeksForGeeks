/*
 * Topic:
 * Find distinct elements common to all rows of a matrix
 *
 * Description:
 * Given a n x n matrix. The problem is to find all the
 * distinct elements common to all rows of the matrix.
 * The elements can be printed in any order.
 */
#include <iostream>
#include <set>
#define N 5
using namespace std;

// Initial Implementation
// Works in O(n^3) time
void findDistinctCommonEls(int arr[N][N]) {
    set <int> s1;
    
    for(int i = 0; i < N; i++) {
        s1.insert(arr[0][i]);
    }
    
    set <int> ans;
    
    
    for(int i = 1; i < N; i++) {
        
    }
    
  
    for(int i = 1; i < N; i++) {
        for(auto j : s1) {
            if(find(arr[i], arr[i]+N, j) != arr[i]+N) {
                ans.insert(j);
            }
            else {
                ans.erase(j);
            }
        }
    }
    
    for(auto i : ans) {
        cout << i << " ";
    }
    cout << "\n";
        
    
}


int main() {
     int mat[N][N] = {{12, 1, 14, 3, 16},
         {14, 2, 1, 3, 35},
         {14, 1, 14, 3, 11},
         {14, 25, 3, 2, 1},
         {1, 18, 3, 21, 14}
     };
    
//    int mat[N][N]  = {  {2, 1, 4, 3},
//        {1, 2, 3, 2},
//        {3, 6, 2, 3},
//        {5, 2, 5, 3}  };
    
    findDistinctCommonEls(mat);
    
    return 0;
}
