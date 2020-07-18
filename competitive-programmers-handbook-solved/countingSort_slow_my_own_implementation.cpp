// Example program
#include <iostream>

using namespace std;

void printArr(int *arr, int n) {
    //print the array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
        
    }
    cout << "\n";
}

void countSort(int *arr, int c) {
    cout << "Sorted Array is: " << "\n";
    for(int i = 0; i < c; i++) {
        if(arr[i] == 0) {
            continue;
        }
        else if(arr[i] == 1) {
            cout << i<< " ";
        }
        else {
            for(int j = 0; j < arr[i]; j++) {
                cout << i << " ";
            }
        }
    }
    cout << "\n";
}

int main()
{
    int arr[] =  {1,3,6,9,9,3,5,9};
    int n = (sizeof(arr))/(sizeof(arr[0]));
    
    
    int c = 0;
    for(int i = 0; i < n; i++) {
        //find the highest value
        if(arr[i] > c) {
            c = arr[i];
        }
    }
    int len = c+1;
    
    int arr2[len];
    int val;
    
    for(int i = 0; i < len; i++) {
        int numCount = 0;
        val = i;
        
        for(int j = 0; j < n; j++) {
            if(arr[j] == val) {
                numCount++;
            }
        }
        
        
        arr2[i] = numCount;
    }
    printArr(arr,n);
    printArr(arr2,len);
    
    countSort(arr2, len);
    
    
    
}
