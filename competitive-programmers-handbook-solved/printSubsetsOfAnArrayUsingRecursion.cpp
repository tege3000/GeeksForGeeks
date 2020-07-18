#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printSubsetValue(int arr[], int subsetArray[], int n, int i) {
    if(i == n) {
        
        cout << "{ ";
        for(int i = 0; i < n; i++) {
            if(subsetArray[i] != 0) {
                cout << subsetArray[i] << " ";
            }
        }
        cout << "}\n";
    }
    else {
        // recursive calls for the leftmost leaf
        subsetArray[i] = 0;
        printSubsetValue(arr,subsetArray, n, i+1);
        
        // recursive calls for the rightmost leaf
        subsetArray[i] = arr[i];
        printSubsetValue(arr,subsetArray, n, i+1);
    }
}

void printAllSubsets(int arr[], int n) {
    int subsetArray[n];

    int i = 0;

    printSubsetValue(arr, subsetArray, n, i);
    
}


int main()
{
    int arr[] =  {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);


    printAllSubsets(arr, n);
    
   
}
