/*
 * Topic:
 * Find one extra character in a string
 *
 * Description:
 * Given two strings which are of lengths n and n+1.
 * The second string contains all the character of the
 * first string, but there is one extra character. Your
 * task to find the extra character in the second string.
 */
#include <iostream>
#include <unordered_map>

using namespace std;

char findExtraChar(string a, string b) {
    char result;
    
    unordered_map <char, int> mp;
    
    // adding string with length n-1 first
    for(int i = 0; i < b.size(); i++) {
        mp[b[i]]++;
    }
    
    // adding smaller string with length n
    for(int i = 0; i < a.size(); i++) {
        mp[a[i]]--;
    }
    
    for(auto i : mp) {
        if(i.second == 1) {
            result = i.first;
        }
    }
    
    return result;
}

int main() {
    
    string a = "abcd";
    string b = "cbdad";
    
    cout << "Extra character is " << findExtraChar(a, b) << "\n";
    return 0;
}
