/*
 * Topic: Find repeated character present first in a string
 *
 * Description: Given a string, find the repeated character
 * present first in the string.
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

string findRepeatedWordFirst(string s) {
    string word = "";
    vector<string> words;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ') {
            words.push_back(word);
            word = "";
        }
        else {
            word.push_back(s[i]);
        }
    }
    
    // for the last word
    words.push_back(word);

    for(int i = 0; i < words.size(); i++) {
        if(count(words.begin(), words.end(), words[i]) > 1) {
            return words[i];
        }
    }
    
    return "none";
}

int main() {
    string str = "Ravi had been saying that he had been there";

    if(findRepeatedWordFirst(str) == "none") {
        cout << "No repeated word in string \n";
    }
    else {
        cout << findRepeatedWordFirst(str) << endl;
    }

    string str2 = "Ravi had been saying that";

    if(findRepeatedWordFirst(str2) == "none") {
        cout << "No repeated word in string \n";
    }
    else {
        cout << findRepeatedWordFirst(str2) << endl;
    }
    
    string str3 = "he had had he";
    
    if(findRepeatedWordFirst(str3) == "none") {
        cout << "No repeated word in string \n";
    }
    else {
        cout << findRepeatedWordFirst(str3) << endl;
    }
}
