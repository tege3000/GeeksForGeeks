/*
 * Topic: Distinct strings with odd and even changes allowed
 *
 * Description: Given an array of lower case strings, the task
 * is to find the number of strings that are distinct. Two strings
 * are distinct if on applying the following operations on one
 * string the second string cannot be formed.
 * A character on odd index can be swapped with another character at odd index only.
 * A character on even index can be swapped with another character on even index only.
 */
#include <iostream>
#include <vector>
using namespace std;

// Count of non-empty substrings is n*(n+1)/2
int countNonEmptySubstr(int n) {
    return n*(n+1)/2;
}

int distinctStringOddEven(vector<string> arr) {
    int count = 0;
    int n = arr.size();
    int numSubsets = countNonEmptySubstr(n);
 
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            for(int z = 0; z < arr[i].size(); z++) {
                if(find(arr[j].begin(), arr[j].end(), arr[i][z]) != arr[j].end()) {
                    int pos = distance(arr[j].begin(), find(arr[j].begin(), arr[j].end(), arr[i][z]));
                    swap(arr[i][z], arr[i][pos]);
                    
                    if(arr[i] == arr[j] && arr[i][z] != arr[i][pos]) {
                        count++;
                        swap(arr[i][z], arr[i][pos]);
                        break;
                    }
                    else {
                        swap(arr[i][z], arr[i][pos]);
                    }
                }
            }
        }
    }
 
    return count;
}

int main() {
    vector<string> arr = {"abcd", "cbad", "bacd"};
    cout << distinctStringOddEven(arr) << "\n";
    
    vector<string> arr2 = {"abc", "cba"};
    cout << distinctStringOddEven(arr2) << "\n";
}

