/*
 * Topic:
 * Merge an array of size n into another array of size m+n
 *
 * Description:
 * There are two sorted arrays. First one is of size m+n
 * containing only m elements. Another one is of size n and
 * contains n elements. Merge these two arrays into the first
 * array of size m+n such that the output is sorted.
 */
#include <iostream>
using namespace std;

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}


// Initial Implementation
void merge(int arr1[], int arr2[], int m, int n) {
    int start = 0;
    int tmp[m];
    for(int i = 0; i < m; i++) {
        if(arr1[i] != -1) {
            tmp[start] = arr1[i];
            start++;
        }
    }
    
    for(int i = m - n; i < m; i++) {
        tmp[i] = -1;
    }
    
    for(int i = 0; i < n; i++) {
        int el = arr2[i];
        for(int j = 0; j < m; j++) {
            if(el <= tmp[j]) {
                //shift all elements to the right
                for(int k = j+m-n-1; k >= j+1; k--) {
                    tmp[k] = tmp[k-1];
                }
                
                tmp[j] = el;
                break;
            }
            else {
                if(j == m-2 ) {
                    tmp[j+1] = el;
                }
            }
        }
    }
    
    for(int i = 0; i < m; i++) {
        arr1[i] = tmp[i];
    }
}



int main() {
    /* Initialize arrays */
    int mPlusN[] = {2, 8, -1, -1, -1, 13, -1, 15, 20};
    int N[] = {5, 7, 9, 25};
    
    int n = sizeof(N) / sizeof(N[0]);
    int m = sizeof(mPlusN) / sizeof(mPlusN[0]);
    
    
    /*Merge N[] into mPlusN[] */
    merge(mPlusN, N, m, n);
    
    /* Print the resultant mPlusN */
    printArr(mPlusN, m);
    
    return 0;
}
