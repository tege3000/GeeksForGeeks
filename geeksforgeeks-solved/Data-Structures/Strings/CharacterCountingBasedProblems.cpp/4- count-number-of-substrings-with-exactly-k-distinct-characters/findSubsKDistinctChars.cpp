/*
 * Topic: Count number of substrings with exactly k distinct characters
 *
 * Description: Given a string of lowercase alphabets, count all possible
 * substrings (not necessarily distinct) that has exactly k distinct characters.
 */
#include <iostream>
#include <limits.h>
#include <set>
using namespace std;

int findSubsKDistinctChars(string s, int k) {
    int count = 0;
    for(int i = 0; i < s.size(); i++) {
        string sub = "";
        for(int j = i; j < s.size(); j++) {
            sub.push_back(s[j]);
            set <char> distinct;
            
            for(int z = 0; z < sub.size(); z++) {
                distinct.insert(sub[z]);
            }
            
            if(distinct.size() == k) {
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    string str = "abc";
    int k = 2;
    cout << findSubsKDistinctChars(str, k) << "\n";
    
    string str2 = "aba";
    int k2 = 2;
    cout << findSubsKDistinctChars(str2, k2) << "\n";
    
    string str3 = "aa";
    int k3 = 1;
    cout << findSubsKDistinctChars(str3, k3) << "\n";
}

