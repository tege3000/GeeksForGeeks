/*
 * Topic: Print all longest common sub-sequences in
 *  lexicographical order
 *
 * Description: You are given two strings.Now you have 
 * to print all longest common sub-sequences in 
 * lexicographical order?
 */
#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <set>
using namespace std;

// for a string of numbers, get all subsequences
// NOTE: This is a naive approach, learn better way later.
vector <string> getAllSubsequences(string s) {
    vector<string> subsequences;
    
    // for n characters, there are 2^n possibilities
    int numSubs = pow(2, s.size());
    
    vector<vector<int>> truthTable;
    for(int i = 0; i < numSubs; i++) {
        vector <int> inner;
        for(int j = 0; j < s.size(); j++) {
            inner.push_back(0);
        }
        truthTable.push_back(inner);
    }
    
    // generate truth table
    for(int i = 0; i < s.size(); i++) {
        int numRecurring = pow(2, s.size()-(i+1));
        int start = 0;
        int end = numRecurring;
        for(int j = 0; j < pow(2, i+1); j++) {
            end = numRecurring + start;
            if(j % 2 == 0) {
                // fill up with zeros
                for(int k = start; k < end; k++) {
                    truthTable[k][i] = 0;
                }
            }
            else {
                // fill up with 1s
                for(int k = start; k < end; k++) {
                    truthTable[k][i] = 1;
                }
            }
            
            start += numRecurring;
        }
    }
    
    for(int i = 0; i < numSubs; i++) {
        string num = "";
        for(int j = 0; j < s.size(); j++) {
            if(truthTable[i][j] == 1) {
                num += s[j];
            }
        }
        
        if(num.size() >= 1) {
            subsequences.push_back(num);
        }
    }
    
    return subsequences;
}


void prinlAllLCSSorted(string a, string b) {
    // get all subsequences first
    vector<string> allSubsequences1 = getAllSubsequences(a);
    vector<string> allSubsequences2 = getAllSubsequences(b);
    
    set<string> common;
    
    for(int i = 0; i < allSubsequences1.size(); i++) {
        if(find(allSubsequences2.begin(), allSubsequences2.end(), allSubsequences1[i]) != allSubsequences2.end()) {
            common.insert(allSubsequences1[i]);
        }
    }
    
    int maxSize = 0;
    for(auto i : common) {
        int m = i.size();
        maxSize = max(m, maxSize);
    }

    for(auto i : common) {
        if(i.size() == maxSize) {
            cout << i << endl;
        }
    }

    cout << "\n";
}

int main() {
    string str1 = "abcabcaa", str2 = "acbacba";
    prinlAllLCSSorted(str1, str2);
    return 0;
}

