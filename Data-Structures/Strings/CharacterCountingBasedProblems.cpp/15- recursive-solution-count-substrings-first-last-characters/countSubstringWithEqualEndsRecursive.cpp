/*
 * Topic: Recursive solution to count substrings with same first
 * and last characters
 *
 * Description: We are given a string S, we need to find count
 * of all contiguous substrings starting and ending with same character.
 */
#include <iostream>
using namespace std;

int countSubstringWithEqualEnds(string s, int i, int j, int count) {
    if(j >= s.size()) {
        i++;
        j = i;
    }
    
    if(i >= s.size()) {
        return count;
    }
    
    if(s[i] == s[j]) {
        count++;
    }
    
    return countSubstringWithEqualEnds(s, i, j+1, count);
}

int main() {
    string s = "abcab";
    int count = 0;
    int i = 0, j = 0;
    cout << countSubstringWithEqualEnds(s, i, j, count) << endl;
}
