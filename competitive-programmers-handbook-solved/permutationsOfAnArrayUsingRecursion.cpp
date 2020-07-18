#include <iostream>

using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


void permute(int *a, int start, int r)
{
    if (start == r-1){
        // print all elements of the array
        for(int i = 0; i < r; i++) {
            cout<< *(a+i) << " ";
        }
        cout << endl;
        return;
    }
    else
    {
        for (int i = start; i < r; i++)
        {
            swap((a+start), (a+i));
            permute(a, start+1, r);
            swap((a+start), (a+i)); //backtrack
        }
    }
}

int main()
{
    int arr[] = {1,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    permute(arr, 0, n);
    return 0;
}


