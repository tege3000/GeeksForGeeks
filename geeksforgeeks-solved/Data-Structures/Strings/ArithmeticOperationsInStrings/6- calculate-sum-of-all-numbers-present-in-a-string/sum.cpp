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
    int j = 0;
    
    for(int i = 0; i < s.size(); i = j) {
        string nS;
        if(isdigit(s[i])) {
            for(j = i; j < s.size(); j++) {
                if(isalpha(s[j])) {
                    break;
                }
                else {
                    nS.push_back(s[j]);
                }
            }
            
            ans += stoi(nS);
        }
        else {
            j++;
        }
    }
    
    return ans;
}

int main() {
    string s = "123abc";
    
    cout << sum(s) << "\n";
}
