/*
 * Topic: Longest subsequence where every character
 * appears at-least k times
 *
 * Description: Given a string and a number k, find
 * the longest subsequence of a string where every
 * character appears at-least k times.
 */
#include <iostream>
#include <unordered_map>
using namespace std;

string longestSubsequence(string s, int k) {
    unordered_map <char, int> mp;
    for(int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }
    
    string ans;
    for(int i = 0; i < s.size(); i++) {
        for(auto j : mp) {
            if(j.second >= k && j.first == s[i]) {
                ans.push_back(s[i]);
            }
        }
    }
    
    return ans;
}

int main() {
    string s = "geeksforgeeks";
    int k = 2;
    cout << longestSubsequence(s, k) <<  endl;
    
    string s2 = "aabbaabacabb";
    int k2 = 5;
    cout << longestSubsequence(s2, k2) <<  endl;
    return 0;
}

