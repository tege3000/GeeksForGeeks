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

// TODO: Finish up algorithm
vector<string> getPermutations(map<char, int> mp) {
    vector<string> permutations;
    
    for(auto i : mp) {
        char letter = i.first;
        int count = i.second;
        
    }
    
    return permutations;
    
}

void printPermutations(string s) {
    map<char, int> mp;
    
    for(int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }
    
    vector<string> permutations = getPermutations(mp);
    
    for(int i = 0; i < permutations.size(); i++) {
        cout << permutations[i] << endl;
    }
}



int main() {
    string str = "AB";
    
    printPermutations(str);
}
