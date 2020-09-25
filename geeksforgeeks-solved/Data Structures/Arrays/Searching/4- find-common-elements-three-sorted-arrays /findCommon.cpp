/*
 * Topic: Find common elements in three sorted arrays
 *
 * Description: Given three arrays sorted in non-decreasing
 * order, print all common elements in these arrays.
 */
#include <iostream>
using namespace std;

void findCommon(int ar1[], int ar2[], int ar3[], int n1, int n2, int n3) {
    if(n1 <= n2 & n1 <= n3) {
        for(int i = 0; i < n1; i++) {
            if((find(ar2, ar2+n2, ar1[i]) != ar2+n2) && (find(ar3, ar3+n3, ar1[i]) != ar3+n3)) {
                cout << ar1[i] << " ";
            }
        }
        cout << "\n";
    }
    else if(n2 <= n1 && n2 <= n3) {
        for(int i = 0; i < n2; i++) {
            if((find(ar1, ar1+n1, ar2[i]) != ar1+n1) && (find(ar3, ar3+n3, ar2[i]) != ar3+n3)) {
                cout << ar2[i] << " ";
            }
        }
        cout << "\n";
    }
    else {
        for(int i = 0; i < n3; i++) {
            if((find(ar1, ar1+n1, ar3[i]) != ar1+n1) && (find(ar2, ar2+n2, ar3[i]) != ar2+n2)) {
                cout << ar3[i] << " ";
            }
        }
        cout << "\n";
    }
    
}

int main()
{
    int ar1[] = {1, 5, 5};
    int ar2[] = {3, 4, 5, 5, 10};
    int ar3[] = {5, 5, 10, 20};
    int n1 = sizeof(ar1)/sizeof(ar1[0]);
    int n2 = sizeof(ar2)/sizeof(ar2[0]);
    int n3 = sizeof(ar3)/sizeof(ar3[0]);
    
    cout << "Common Elements are ";
    findCommon(ar1, ar2, ar3, n1, n2, n3);
    return 0;
}

