/*
 * Topic: Given two strings, find if first string
 * is a subsequence of second
 *
 * Description: Given two strings str1 and str2, find
 * if str1 is a subsequence of str2. A subsequence is a
 * sequence that can be derived from another sequence by
 * deleting some elements without changing the order of
 * the remaining elements (source: wiki). Expected time
 * complexity is linear.
 */
#include <iostream>
using namespace std;
string findStringSubsequence(string s1, string s2) {
    int currPos = 0;
    for(int i = 0; i < s1.size(); i++) {
        currPos = s2.find(s1[i]);
        if(currPos != -1) {
            s2.erase(0, currPos+1);
        }
        else {
            return "False";
        }
    }
    return  "True";
}

int main() {
    string s1 = "AXY";
    string s2 = "ADXCPY";
    cout << findStringSubsequence(s1, s2) <<  endl;
    
    string s3 = "AXY";
    string s4 = "YADXCP";
    cout << findStringSubsequence(s2, s3) <<  endl;
    
    string s5 = "gksrek";
    string s6 = "geeksforgeeks";
    cout << findStringSubsequence(s5, s6) <<  endl;
    return 0;
}

