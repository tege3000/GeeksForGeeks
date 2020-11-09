/*
 * Topic: Find k’th character of decrypted string | Set 1
 *
 * Description: Given an encoded string where repetitions of
 * substrings are represented as substring followed by count
 * of substrings. For example, if encrypted string is “ab2cd2”
 * and k=4 , so output will be ‘b’ because decrypted string is
 * “ababcdcd” and 4th character is ‘b’.
 *
 * Note: Frequency of encrypted substring can be of more than
 * one digit. For example, in “ab12c3”, ab is repeated 12 times.
 * No leading 0 is present in frequency of substring.
 */
#include <iostream>
using namespace std;


// Algorithm currently not working
string decryptedString(string s, int k) {
    string res;
    string digits;
    int firstIndex = 0;
    int lastIndex = 0;
    int digitLen = 0;
    for(int i = 0; i < s.size(); i++) {
        if(isdigit(s[i]) ) {
            for(int j = i; j < s.size(); j++) {
                if(!isdigit(s[j])) {
                    break;
                }
                digits.push_back(s[j]);
                digitLen++;
            }
            
            for(int j = 0; j < (s[i]-'0'); j++) {
                res.insert(res.size()-1, s.substr(firstIndex, i));
            }
            
            lastIndex = 0;
            firstIndex = i + digitLen;
        }
        lastIndex++;
    }
    
    return res;
}

int main() {
    string s = "ab4c12ed3";
    int k = 21;
    cout << decryptedString(s, k) << "\n";
}

