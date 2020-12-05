/*
 * Topic: Sorting array of strings (or words) using Trie
 *
 * Description: Given an array of strings, print them in
 * alphabetical (dictionary) order. If there are duplicates
 * in input array, we need to print them only once.
 */
#include <iostream>
#include <vector>
using namespace std;

bool comp(string a, string b) {
    if(a[0] == b[0]) {
        for(int i = 1; i < a.size(); i++) {
            if(a[i] != b[i]) {
                return a[i] < b[i];
            }
        }
    }
    
    return a[0] < b[0];
}

void printSorted(vector<string> arr, int n) {
    // currently not using trie to sort
    sort(arr.begin(), arr.end(), comp);
    
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    vector<string> arr = { "geeks", "for", "geeks", "a", "portal",
        "to", "learn", "can", "be", "computer",
        "science", "zoom", "yup", "fire", "in", "data" };
    int n = sizeof(arr) / sizeof(arr[0]);
    printSorted(arr, n);
    return 0;
}

