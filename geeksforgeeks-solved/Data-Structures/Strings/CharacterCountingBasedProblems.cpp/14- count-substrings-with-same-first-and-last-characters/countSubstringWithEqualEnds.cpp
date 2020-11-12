/*
 * Topic: Count substrings with same first and last characters
 *
 * Description: We are given a string S, we need to find count
 * of all contiguous substrings starting and ending with same character.
 */
#include <iostream>
using namespace std;

// Space Efficient Method
int countSubstringWithEqualEnds(string s) {
    int count = 0;
    
    // The key is to iterate through the elements in the substring in a 
    // way to get the first and last elements easily.
    for(int i = 0; i < s.size(); i++) {
        for(int j = i; j < s.size(); j++) {
            if(s[i] == s[j]) {
                count++;
            }
        }
        
    }
    
    return count;
}

// brute force solution
//int countSubstringWithEqualEnds(string s) {
//    int count = 0;
//    int initSize = s.size();
//
//    for(int i = 0; i < s.size(); i++) {
//        for(int j = 1; j <= initSize; j++) {
//            string subs = s.substr(i, j);
//
//            if(subs[0] == subs[subs.size()-1]) {
//                count++;
//            }
//        }
//
//        initSize--;
//    }
//
//    return count;
//}

int main() {
    string s = "abcab";
    cout << countSubstringWithEqualEnds(s) << endl;
}
