/*
 * Topic:
 * Missing characters to make a string Pangram
 *
 * Description:
 * Pangram is a sentence containing every letter in
 * the English alphabet. Given a string, find all
 * characters that are missing from the string, i.e.,
 * the characters that can make string a Pangram. We
 * need to print output in alphabetic order.
 */
#include <iostream>

using namespace std;

string findMissing(string s) {
    string alphaL = "abcdefghijklmnopqrstuvwxyz";
    string alphaU = "ABCDEFGHIJKLMONPQRSTUVWXYZ";
    
    
    // NOTE: lower case, and upper case characters
    // are considered the same
    string output;
    for(int i = 0; i < alphaL.size(); i++) {
        if(s.find(alphaL[i]) == -1 && s.find(alphaU[i]) == -1) {
            output.push_back(alphaL[i]);
        }
    }
    
    return output;
    
}

int main() {
    string s = "The quick brown fox jumps";
//    string s2 = "welcome to geeksforgeeks";
    
    cout << findMissing(s) << "\n";
    return 0;
}
