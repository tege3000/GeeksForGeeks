/*
 * Topic: K’th Non-repeating Character
 *
 * Description: Given a string and a number k, find the k’th
 * non-repeating character in the string. Consider a large input
 * string with lacs of characters and a small character set.
 * How to find the character by only doing only one traversal
 * of input string?
 */
#include <iostream>
#include <algorithm>
using namespace std;

char findNonRepeating(string s, int k) {
    char finalAns = ' ';
    int countOcc = 0;
    for(int i = 0; i < s.size(); i++) {
        if(count(s.begin(), s.end(), s[i]) == 1) {
            countOcc++;
            finalAns = s[i];
        }
    }
    
    if(countOcc == k) {
        return finalAns;
    }
    return '0';
}

int main() {
    string str = "geeksforgeeks";
    int k = 3;
    
    if(findNonRepeating(str, k) == '0') {
        cout << "Less than k non-repeating characters in input.\n";
    }
    else {
        cout << findNonRepeating(str, k) << endl;
    }
}
