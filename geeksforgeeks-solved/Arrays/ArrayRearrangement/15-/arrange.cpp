/*
 * Topic: Arrange given numbers to form the biggest number | Set 1
 *
 * Description: Given an array of numbers, arrange them in a way
 * that yields the largest value. For example, if the given numbers
 * are {54, 546, 548, 60}, the arrangement 6054854654 gives the 
 * largest value. And if the given numbers are 
 * {1, 34, 3, 98, 9, 76, 45, 4}, then the arrangement 998764543431 
 * gives the largest value.
 *
 */

#include <iostream>
#include <vector>

using namespace std;

void printArr(string arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

string compareValues(string x, string y) {
    string res1 = x + y;
    string res2 = y + x;
    
    if(stoi(res1) > stoi(res2)) {
        return res1;
    }
    else {
        return res2;
    }
}

void arrange(string arr[], int n) {
    vector<pair<char, int>> v1;
    
    for(int i = 0; i < n; i++) {
        pair <char, int> inner;
        
        inner = make_pair(arr[i][0], i);
        v1.push_back(inner);
    }
    
    sort(v1.begin(), v1.end());
    reverse(v1.begin(), v1.end());
    
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i].first << " " << v1[i].second << endl;
    }
    
    string ans = "";
    string s1, s2;
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i].first == v1[i+1].first) {
            for(int k = 0; k < n; k++) {
                if(v1[i].second == k) {
                    s1 = arr[k];
                }
                
                if(v1[i+1].second == k) {
                    s2 = arr[k];
                }
            }
            ans = ans + compareValues(s1, s2);
            i++;
            
        }
        else {
            for(int j = 0; j < n; j++) {
                if(v1[i].second == j) {
                    ans = ans + arr[j];
                }
            }
            
        }
        
    }
    
    cout << ans << endl;
}
int main() {
    //string arr[] = {"54", "546", "548", "60"};
    string arr[] = {"1", "34", "3", "98", "9", "76", "45", "4"};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    arrange(arr,n);
}
