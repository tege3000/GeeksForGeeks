/*
 * Topic: Count words present in a string
 *
 * Description: Given an array of words and a string,
 * we need to count all words that are present in given string.
 */
#include <iostream>
#include <vector>
#include <set>
using namespace std;

int countWords(string str, vector<string> words) {
    int count = 0;
    set <string> distinct;
    
    for(int i = 0; i < words.size(); i++) {
        distinct.insert(words[i]);
    }
    
    for(auto i : distinct) {
        if(str.find(i) != -1) {
            count++;
        }
    }
    
    return count;
}

int main() {
    vector<string> words = {"welcome", "to", "geeks", "portal"};
    
    string str = "geeksforgeeks is a computer science portal for geeks.";
    cout << countWords(str, words) << "\n";
    
    
    vector<string> words2 = {"Save", "Water", "Save", "Yourself"};
    
    string str2 = "Save";
    cout << countWords(str2, words2) << "\n";
}
