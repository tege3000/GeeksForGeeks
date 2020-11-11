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

char decryptedString(string s, int k) {
    string res;
    int firstIndex = 0;
    int lastIndex = 0;
    int digitLen = 0;
    for(int i = 0; i < s.size(); i++) {
        if(isdigit(s[i]) ) {
            digitLen = 0;
            string digits;

            for(int j = i; j < s.size(); j++) {
                if(!isdigit(s[j])) {
                    break;
                }
                
                digits.push_back(s[j]);
                digitLen++;
            }
            
            for(int j = 0; j < stoi(digits); j++) {
                for(int z = firstIndex; z < lastIndex; z++) {
                    res.push_back(s[z]);
                }
            }
            
            i += (digitLen-1);
            firstIndex = i+1;
            lastIndex += (digitLen-1);
        }
        lastIndex++;
    }
    cout << "output " << res << endl;
    
    return res[k-1];
}

int main() {
    string s = "ab4c12ed3";
    int k = 21;
    cout << s << endl;
    cout << decryptedString(s, k) << "\n";
    
    string s2 = "a2b2c3";
    int k2 = 5;
    cout << s2 << endl;
    cout << decryptedString(s2, k2) << "\n";

    string s3 = "ab4c2ed3";
    int k3 = 9;
    cout << s3 << endl;
    cout << decryptedString(s3, k3) << "\n";
}

