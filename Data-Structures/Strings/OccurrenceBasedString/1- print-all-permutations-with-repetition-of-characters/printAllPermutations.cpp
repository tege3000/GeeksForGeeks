/*
 * Topic: Print all permutations with repetition of characters
 *
 * Description: Given a string of length n, print all permutation
 * of the given string. Repetition of characters is allowed.
 * Print these permutations in lexicographically sorted order
 */
#include <iostream>
#include <map>
#include <vector>
using namespace std;

void printPermutations(vector<char> result) {
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << "\n";
}

void getPermutations(string str, vector<int> count, vector<char> result, int level) {
    if(level == result.size()) {
        printPermutations(result);
        return;
    }
    
    for(int i = 0; i < str.size(); i++) {
        // look for next available character with count of 1
        if(count[i] == 0) {
            continue;
        }
        
        result[level] = str[i];
        count[i]--;
        getPermutations(str, count, result, level+1);
        count[i]++;
    }
}

void permutations(string s) {
    map<char, int> mp;
    
    for(int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }
    
    string str;
    vector<int> count;
    
    for(auto i : mp) {
        str.push_back(i.first);
        count.push_back(i.second);
    }
    
    vector<char> result(s.size(), ' ');
    
    getPermutations(str, count, result, 0);
}

int main() {
    string str = "ABC";
    
    permutations(str);
}
