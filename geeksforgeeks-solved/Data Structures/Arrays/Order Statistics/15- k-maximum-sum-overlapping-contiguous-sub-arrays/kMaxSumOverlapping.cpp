/*
 * Topic: K maximum sums of overlapping contiguous
 * sub-arrays
 *
 * Description: Given an Array of Integers and an
 * Integer value k, find out k sub-arrays(may be overlapping)
 * which have k maximum sums.
 */
#include <iostream>
#include <vector>
#include <set>

using namespace std;

void kMaxSumOverlapping(int arr[], int n, int k) {
    vector<int> sol;
    for(int i = 0; i < n; i++) {
        if(arr[i] > k) {
            sol.push_back(arr[i]);
        }
    }
    int sum = 0;
    int maxSum = 0;
    int index = 0;
    
    if(sol.size() < k){
        for(int i = 0; i < n; i++) {
            if(find(sol.begin(), sol.end(), arr[i]) != sol.end()) {
                sum = arr[i];
                
                for(int j = i-1; j >= index; j--) {
                    sum += arr[j];
                    if(sum > k) {
                        sol.push_back(sum);
            
                    }
                    
                }
                
                sum = arr[i];
                for(int j = i+1; j < n; j++) {
                    sum += arr[j];
                    if(sum > k) {
                        sol.push_back(sum);
     
                    }
                }
                
                index = i+1;
            }
            
            
        }
    }
    
    sort(sol.begin(), sol.end(), greater<int>());

    for(int i = 0; i < k; i++) {
        cout << sol[i] << " ";
    }
    
    cout << "\n";
}

int main() {
    //int arr[] =  {4, -8, 9, -4, 1, -8, -1, 6};
    int arr[] =  {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    
    kMaxSumOverlapping(arr, n, k);
    return 0;
}
