/*
 * Topic: Find repeated character present first in a string
 *
 * Description: Given a string, find the repeated character
 * present first in the string.
 */
#include <iostream>
#include <algorithm>
using namespace std;

char findRepeatedFirst(string s) {
    for(int i = 0; i < s.size(); i++) {
        if(count(s.begin(), s.end(), s[i]) > 1) {
            return s[i];
        }
    }
    
    return '0';
}

int main() {
    string str = "geeksforgeeks";
    
    if(findRepeatedFirst(str) == '0') {
        cout << "No repeated character in string \n";
    }
    else {
        cout << findRepeatedFirst(str) << endl;
    }
}
