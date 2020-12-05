/*
 * Topic: Convert to a string that is repetition of a substring
 * of k length
 *
 * Description: Given a string, find if it is possible to convert
 * it to a string that is repetition of substring with k characters.
 * To convert, we can replace one substring of length k with k characters.
 */
#include <iostream>
#include <unordered_map>
using namespace std;

bool checkString(string s, int k) {
    if(s.size() % k != 0) {
        return false;
    }
    unordered_map <string, int> mp;
    for(int i = 0; i < s.size(); i += k) {
        mp[s.substr(i, k)]++;
    }
    
    string minEl = "";
    string maxEl = "";
    int miEl = 0;
    int maEl = 0;
    
    if(mp.size() != 2) {
        return false;
    }
    else {
        for(auto i : mp) {
            if(i.second == 1) {
                minEl = i.first;
                miEl = i.second;
            }
            
            if(i.second >= 1) {
                maxEl = i.first;
                maEl = i.second;
            }
        }
    }
    
    if(miEl == 1 && maEl >= 1) {
        return true;
    }
    
    return false;
}


int main() {
    checkString("abababcd", 2)? cout << "Yes" : cout << "No";
    cout << "\n";

    checkString("abcbedabcabc", 3)? cout << "Yes" : cout << "No";
    cout << "\n";
    
    checkString("bcacc", 3)? cout << "Yes" : cout << "No";
    cout << "\n";
    
    checkString("bcacbcac", 2)? cout << "Yes" : cout << "No";
    cout << "\n";

    checkString("bcdbcdabcedcbcd", 3)? cout << "Yes" : cout << "No";
    cout << "\n";
}
