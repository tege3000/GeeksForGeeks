#include <iostream>

using namespace std;

void binarySearch(int arr[], int a, int b, int val) {

    while(a <=b) {
        int k = (a+b)/2;

        if(arr[k] == val) {
            cout << arr[k] << " found at index " << k << "\n";
            break;
        }
        else if(arr[k] < val) {
            //increment a to the right side
            a = k+1; // a is the start index
        }
        else {
            //decrement b the left side
            b = k-1; // b is the end index
        }
    }

}


int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = 8;
    
    binarySearch(arr,0,n-1,3);
    
    
    
}