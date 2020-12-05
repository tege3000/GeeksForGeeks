/*
 * Topic: Find Union and Intersection of two unsorted arrays
 *
 * Description: Given two unsorted arrays that represent two
 * sets (elements in every array are distinct), find union
 * and intersection of two arrays.
 */
#include <iostream>
#include <set>

using namespace std;

void unionArr(int arr1[], int arr2[], int n1, int n2) {
    int unionOfArrs[n1+n2];
    for(int i = 0; i < n1; i++) {
        unionOfArrs[i] = arr1[i];
    }
    
    int start = n1;
    for(int i = 0; i < n2; i++) {
        unionOfArrs[start] = arr2[i];
        start++;
    }
    
    set <int> distinctUnion;
    
    for(int i = 0; i < (n1+n2); i++) {
        distinctUnion.insert(unionOfArrs[i]);
    }
    
    cout << "Union : ";
    for(auto i: distinctUnion) {
        cout << i << " ";
    }
    cout << "\n";
    
}

void intersection(int arr1[], int arr2[], int n1, int n2) {
    // doing this to save time, even though it
    // might be negligible if input is very large
    int intersectionArr[max(n1, n2)];
    int start = 0;
    for(int i = 0; i < n1; i++) {
        if(find(arr2, arr2+n2, arr1[i]) != arr2+n2) {
            intersectionArr[start] = arr1[i];
            start++;
        }
    }
    
    sort(intersectionArr, intersectionArr+start);
    cout << "Intersection: ";
    for(int i = 0; i < start; i++) {
        cout << intersectionArr[i] << " ";
    }
    
    cout << "\n";
    
}

int main()
{
    
    int arr1[] = {7, 1, 5, 2, 3, 6};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    
    int arr2[] = {3, 8, 6, 20, 7};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    
    unionArr(arr1, arr2, n1, n2);
    intersection(arr1, arr2, n1, n2);
    
    return 0;
}

