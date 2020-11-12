/*
 * Topic: Program to find Smallest and Largest Word in a String
 *
 * Description: Given a string, find the minimum and the maximum
 * length words in it.
 */
#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

// decided to use structs to remember their usage.
// didnt really have to
struct minMax {
    int minL;
    int maxL;
};

minMax minMaxLengthWords(string s) {
    minMax result;
    vector<string> words;
    string word;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ') {
            cout << word << " ";
            words.push_back(word);
            word = "";
        }
        else {
            word.push_back(s[i]);
        }
    }
    cout << "\n";
    
    int minLen = INT_MAX;
    int maxLen = 0;
    
    for(int i = 0; i < words.size(); i++) {
        int sz = words[i].size();
        minLen = min(sz, minLen);
        maxLen = max(sz, maxLen);
    }
    
    result.minL = minLen;
    result.maxL = maxLen;
    
    return result;
}

int main() {
    string sentence = "GeeksforGeeks A Computer Science portal for Geeks";
    minMax result = minMaxLengthWords(sentence);

    // to take input in string use getline(cin, a);
    cout << "Minimum length word: " << result.minL << endl
    << "Maximum length word: "
    << result.maxL << endl;
}
