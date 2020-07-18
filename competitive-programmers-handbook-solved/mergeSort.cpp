// Merge Sort
#include <iostream>
#include <string>
#include <cmath>
using namespace std;


void merge(int *array, int l, int m, int r) {
    int i, j, k, nl, nr;
    //size of left and right sub-arrays
    nl = m-l+1; nr = r-m;
    int larr[nl], rarr[nr];
    //fill left and right sub-arrays
    for(i = 0; i<nl; i++)
        larr[i] = array[l+i];
    for(j = 0; j<nr; j++)
        rarr[j] = array[m+1+j];
    i = 0; j = 0; k = l;
    //marge temp arrays to real array
    while(i < nl && j<nr) {
        if(larr[i] <= rarr[j]) {
            array[k] = larr[i];
            i++;
        }else{
            array[k] = rarr[j];
            j++;
        }
        k++;
    }
    while(i<nl) {       //extra element in left array
        array[k] = larr[i];
        i++; k++;
    }
    while(j<nr) {     //extra element in right array
        array[k] = rarr[j];
        j++; k++;
    }
}

void mergeSort(int *arr, int a, int b) {
    int middle; //middle
    
    if(a < b) {
        
        middle = floor((a+b)/2);
        
        
        mergeSort(arr, a, middle);
        mergeSort(arr, middle+1, b);
        merge(arr, a, middle, b);
    }
    
    
    
    
}

int main()
{
     int arr[] =  {-1,2,4,-3,5,2,-5,2};
     int n = (sizeof(arr))/(sizeof(arr[0]));
    
     mergeSort(arr, 0, n-1);
    
    

     //print the array
     for(int i = 0; i < n; i++) {
         cout << arr[i] << " ";

     }

}
