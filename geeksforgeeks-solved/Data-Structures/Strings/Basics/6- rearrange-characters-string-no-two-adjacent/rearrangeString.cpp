/*
 * Topic:
 * Rearrange characters in a string such that no two adjacent are same
 *
 * Description:
 * Given a string with repeated characters, the task is to rearrange
 * characters in a string so that no two adjacent characters are same.
 * Note : It may be assumed that the string has only lowercase English alphabets.
 */
#include <iostream>
#include <map>
using namespace std;

string rearrangeString(string s) {
    // TODO: figure this out!, seems like an interesting one
    map<char, int> mp;
    for(int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }
    
    int maxCount = 0;
    int el = 0;
    for(auto i : mp) {
        if(i.second > maxCount) {
            maxCount = i.second;
            el = i.first;
        }
    }
    
    int insertCount = 0;
    for(int i = 0; i < s.size(); i += 2) {
        s[i] = el;
        insertCount++;
    }
    
    if(maxCount != insertCount) {
        return "Not Possible";
    }
    
    int start = 1;
    for(auto i : mp) {
        if(i.first != el) {
            int count = 0;
            for(int j = start; j < s.size(); j = j+2) {
                if(count < i.second) {
                    s[j] = i.first;
                    count++;
                }
                else {
                    start = j;
                    break;
                }
            }

        }
    }
    
    return s;
}

int main() {
    string s = "aaaabc";
    cout << rearrangeString(s) << "\n";
    
    
    return 0;
}
