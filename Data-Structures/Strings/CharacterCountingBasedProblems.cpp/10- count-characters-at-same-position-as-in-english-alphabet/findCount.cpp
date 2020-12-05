/*
 * Topic: Count characters at same position as in English alphabet
 *
 * Description: Given a string of lower and uppercase characters,
 * the task is to find that how many characters are at same
 * position as in English alphabet.
 */

#include <iostream>
using namespace std;

int findCount(string s) {
    char start = 'a';
    int count = 0;
    for(int i = 0; i < s.size(); i++) {
        if(tolower(s[i], locale()) == start) {
            count++;
        }
        start++;
    }
    
    return count;
}

int main() {
    string str = "AbgdeF";
    cout << findCount(str) << "\n";
    
    string str2 = "ABcED";
    cout << findCount(str2) << "\n";
    
    string str3 = "geeksforgeeks";
    cout << findCount(str3) << "\n";
    
    string str4 = "alphabetical";
    cout << findCount(str4) << "\n";
}
