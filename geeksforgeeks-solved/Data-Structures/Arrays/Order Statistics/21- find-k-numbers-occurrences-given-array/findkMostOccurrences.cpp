/*
 * Topic: Find k numbers with most occurrences in the given array
 *
 *
 * Description: Given an array of n numbers and a positive integer k.
 * The problem is to find k numbers with most occurrences, i.e., the
 * top k numbers having the maximum frequency. If two numbers have the
 * same frequency then the larger number should be given preference.
 * The numbers should be displayed in decreasing order of their frequencies.
 * It is assumed that the array consists of k numbers with most occurrences.
 */
#include <iostream>
#include <vector>

using namespace std;

// second implementation
// O(nlogn) time
void findkMostOccurrences(int arr[], int n, int k) {
    int max = *max_element(arr, arr+n);
    int tmp[max+1];
    
    for(int i = 0; i < max+1; i++) {
        tmp[i] = 0;
    }
    
    for(int i = 0; i < n; i++) {
        tmp[arr[i]]++;
    }
    
    vector<vector<int>> tmp2;
    
    for(int i = 0; i < max+1; i++) {
        vector <int> inner;
        inner.push_back(tmp[i]);
        inner.push_back(i);
        
        tmp2.push_back(inner);
    }
    
    
    sort(tmp2.begin(), tmp2.end());
    reverse(tmp2.begin(), tmp2.end());
    for(int i = 0; i < k ; i++) {
        cout << tmp2[i][1] << " ";
    }
    
    cout << "\n";
}

// first implementation
// O(n^2 log(n)) time
//
//void findkMostOccurrences(int arr[], int n, int k) {
//    sort(arr, arr+n);
//
//    vector<vector<int>> outer;
//    int freq = 0, stop = 0;
//    for(int i = 0; i < n; i = stop) {
//        freq = 0;
//        vector<int> inner;
//
//        for(int j = i; j < n; j++) {
//            if(arr[i] == arr[j]) {
//                freq++;
//                stop = j+1;
//            }
//            else {
//                stop = j;
//                break;
//            }
//        }
//        inner.push_back(freq);
//        inner.push_back(arr[i]);
//
//
//        outer.push_back(inner);
//    }
//
//
//    sort(outer.begin(), outer.end());
//    reverse(outer.begin(), outer.end());
//
//    for(int i = 0; i < k; i++) {
//        cout << outer[i][1] << " ";
//    }
//
//
//}


int main() {
    //int arr[] = {3, 1, 4, 4, 5, 2, 6, 1};
    int arr[] = {7, 10, 11, 5, 2, 5, 5, 7, 11, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    //int k = 2;
    int k = 4;
    findkMostOccurrences(arr, n, k);
    return 0;
}
