/*
 * Topic: Longest common subsequence with permutations allowed
 *
 * Description: Given two strings in lowercase, find the longest
 * string whose permutations are subsequences of given two strings.
 * The output longest string must be sorted.
 */
#include <iostream>
#include <vector>
#include <math.h>
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


string longestCommonSubsequence(string a, string b) {
    // get all subsequences first
    sort(a.begin(), a.end());
    vector<string> allSubsequencesA = getAllSubsequences(a);
    vector<string> allSubsequencesB = getAllSubsequences(b);

    string res = "";
    int maxLength = 0;
    string og = "";
    for(int i = 0; i < allSubsequencesA.size(); i++) {
        og = allSubsequencesA[i];
        // if permutation of subsequencesA is subsequence of B then find longest size
        do {
            if(find(allSubsequencesB.begin(), allSubsequencesB.end(), og) != allSubsequencesB.end()) {
                if(og.size() > maxLength) {
                    maxLength = og.size();
                    res = allSubsequencesA[i];
                }
                
                break;
            }
        }
        while(next_permutation(og.begin(), og.end()));
    }
    
    return res;
}

int main() {
    string a = "pink", b = "kite";
    cout << longestCommonSubsequence(a, b) << endl;
    
    string a1 = "working", b1 = "women";
    cout << longestCommonSubsequence(a1, b1) << endl;
    
    string a2 = "geeks", b2 = "cake";
    cout << longestCommonSubsequence(a2, b2) << endl;
    
    string a3 = "aaaa", b3 = "baba";
    cout << longestCommonSubsequence(a3, b3) << endl;
    
    return 0;
}

