/*
 * Topic:
 * Change string to a new character set
 *
 * Description:
 * Given a 26 letter character set, which is equivalent
 * to character set of English alphabet i.e. (abcd….xyz)
 * and act as a relation. We are also given several sentences
 * and we have to translate them with the help of given new
 * character set.
 */
#include <iostream>
#include <unordered_map>

using namespace std;

string getNewChar(string s, string charSet) {
    int n = s.size();
    unordered_map <char, char> mp;
    string alphabets = "abcdefghijklmnopqrstuvwxyz";
    for(int i = 0; i < 26; i++) {
        mp[charSet[i]] = alphabets[i];
    }
    string result = "";
    
    for(int i = 0; i < n; i++) {
        result.push_back(mp[s[i]]);
    }
    
    return result;
}

int main() {
    
    string charSet = "qwertyuiopasdfghjklzxcvbnm";
    string s = "egrt";
    cout << getNewChar(s, charSet) << "\n";
    return 0;
}
