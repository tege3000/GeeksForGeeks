/*
 * Topic: Number of substrings of a string
 *
 * Description: Find total number of non-empty substrings
 * of a string with N characters. Here we use the word proper
 * because we do not consider string itself as part of output.
 */
#include <iostream>
using namespace std;

int countNonEmptySubstr(string s) {
    int count = 0;
    
    for(int i = 0; i < s.size(); i++) {
        for(int j = i; j < s.size(); j++) {
            count++;
        }
    }
    
    return count;
}

int main() {
    string s = "abcd";
    cout << countNonEmptySubstr(s) << "\n";
}

