/*
 * Topic: Find the smallest window in a string containing all
 * characters of another string
 *
 * Description: Given two strings string1 and string2, the task
 * is to find the smallest substring in string1 containing all
 * characters of string2 efficiently.
 */
#include <iostream>
#include <limits.h>
#include <set>
using namespace std;

// Brute Force Solution
string findSmallestWindowSubString(string s, string p) {
    int minSubs = INT_MAX;
    string ans = "";
    for(int i = 0; i < s.size(); i++) {
        string sub = "";
        for(int j = i; j < s.size(); j++) {
            sub.push_back(s[j]);
            string subCopy = sub;
            int allFound = 1;
            for(int k = 0; k < p.size(); k++) {
                auto it = find(subCopy.begin(), subCopy.end(), p[k]);
                
                if(it != subCopy.end()) {
                    int pos = distance(subCopy.begin(), it);
                    subCopy.erase(subCopy.begin()+pos);
                }
                else {
                    allFound = 0;
                    break;
                }
            }
            
            if(allFound == 1){
                if(sub.size() < minSubs) {
                    minSubs = sub.size();
                    ans = sub;
                }
            }
            
        }
    }
    
    return ans;
}

string smallestWinContainsAllChars(string s) {
    set<char> s1;
    
    for(int i = 0; i < s.size(); i++) {
        s1.insert(s[i]);
    }
    
    string distinct;
    
    for(auto i : s1) {
        distinct.push_back(i);
    }
    
    return findSmallestWindowSubString(s, distinct);
}

int main() {
    string str = "aabcbcdbca";
    cout << "Smallest window is : " << smallestWinContainsAllChars(str) << "\n";
    
    string str2 = "aaab";
    cout << "Smallest window is : " << smallestWinContainsAllChars(str2) << "\n";
}

