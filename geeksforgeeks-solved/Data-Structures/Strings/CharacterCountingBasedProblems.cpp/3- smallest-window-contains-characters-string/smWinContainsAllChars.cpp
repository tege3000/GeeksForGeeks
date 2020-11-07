/*
 * Topic: Smallest window that contains all characters of string itself
 *
 * Description: Given a string, find the smallest window length with all 
 * distinct characters of the given string. For eg. str = “aabcbcdbca”, 
 * then the result would be 4 as of the smallest window will be “dbca” .
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

