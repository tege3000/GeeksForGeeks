/*
 * Topic: Calculate sum of all numbers present
 * in a string
 *
 * Description: Given a string containing alphanumeric
 * characters, calculate sum of all numbers present in
 * the string.
 */
#include <iostream>
using namespace std;
int sum(string s) {
    int ans = 0;
    
    string nS;
    for(int i = 0; i < s.size(); i++) {
        if(isdigit(s[i])) {
            nS.push_back(s[i]);
        }
        else {
            if(i != 0) {
                if(isalpha(s[i]) && isalpha(s[i-1])) {
                    nS = "";
                }
                else {
                    ans += stoi(nS);
                    nS = "";
                }
            }
        }
    }
    
    // takes care of trailing numbers
    if(isdigit(s[s.size()-1])) {
        ans += stoi(nS);
    }
    
    return ans;
}

int main() {
    string s1 = "1abc23";
    string s2 = "geeks4geeks";
    string s3 = "1abc2x30yz67";
    string s4 = "123abc";

    
    cout << sum(s1) << "\n";
    cout << sum(s2) << "\n";
    cout << sum(s3) << "\n";
    cout << sum(s4) << "\n";
}
