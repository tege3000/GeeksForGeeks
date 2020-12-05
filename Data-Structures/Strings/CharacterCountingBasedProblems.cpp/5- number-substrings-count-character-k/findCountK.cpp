/*
 * Topic: Number of substrings with count of each character as k
 *
 * Description: Given a string and an integer k, find number of
 * substrings in which all the different characters occurs exactly k times.
 */
#include <iostream>
#include <set>
using namespace std;

int findCountK(string s, int k) {
    int ans = 0;
    for(int i = 0; i < s.size(); i++) {
        string sub = "";
        for(int j = i; j < s.size(); j++) {
            sub.push_back(s[j]);
            set <char> distinct;
            
            for(int z = 0; z < sub.size(); z++) {
                distinct.insert(sub[z]);
            }
            int allCountEqualK = 0;
            for(auto z : distinct) {
                if(count(sub.begin(), sub.end(), z) == k) {
                    allCountEqualK = 1;
                }
                else {
                    allCountEqualK = 0;
                    break;
                }
            }
            
            if(allCountEqualK == 1) {
                ans++;
            }
        }
    }
    
    return ans;
}

int main() {
    string str = "aabbcc";
    int k = 2;
    cout << findCountK(str, k) << "\n";
    
    string str2 = "aabccc";
    int k2 = 2;
    cout << findCountK(str2, k2) << "\n";
}

