#include <iostream>

using namespace std;
void rearrange(int arr[], int n) {
    int tmp[n];
    for(int i = 0; i < n; i++) {
        tmp[i] = arr[i];
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(tmp[j] == i) {
                arr[i] = i;
                break;
            }
            else {
                arr[i] = -1;
            }
        }
    }

}
void  printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    cout << "\n";
}

int main() {
    int arr [] = {19, 7, 0, 3, 18, 15, 12, 6, 1, 8, 11, 10, 9, 5, 13, 16, 2, 14, 17, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    rearrange(arr, n);
    printArr(arr, n);
    return 0;
}
