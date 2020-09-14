/*
 * Topic:
 * Sort elements by frequency | Set 1
 *
 * Description:
 * Print the elements of an array in the decreasing frequency
 * if 2 numbers have same frequency then print the one which
 * came first.
 */
#include <iostream>
#include <vector>
using namespace std;

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout <<  arr[i] << " ";
    }
    cout << "\n";
}

bool comp(pair<int, int> l, pair <int, int> r) {
    return l.second > r.second;
}

void sortByFreq(int arr[], int n) {
    
    vector<int> distinct;
    for(int i = 0; i < n; i++) {
        if(find(distinct.begin(), distinct.end(), arr[i]) == distinct.end()) {
            distinct.push_back(arr[i]);
        }
    }

    int cnt = 0;
    vector<pair<int,int>> v1;
    for(auto i : distinct) {
        cnt = count(arr, arr+n, i);
        pair<int, int> p1 = make_pair(i, cnt);
        v1.push_back(p1);
    }
    
    sort(v1.begin(), v1.end(), comp);
    int start = 0;
    int end = 0;
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i].first << " " << v1[i].second << endl;
        while(start < v1[i].second + end) {
            arr[start] = v1[i].first;
            start++;
        }
        end = start;
    }
    
    
}

int main() {
    int arr[] = {2, 5, 2, 8, 5, 6, 8, 8};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    
    sortByFreq(arr, n);
    
    printArr(arr, n);
    
    return 0;
}
