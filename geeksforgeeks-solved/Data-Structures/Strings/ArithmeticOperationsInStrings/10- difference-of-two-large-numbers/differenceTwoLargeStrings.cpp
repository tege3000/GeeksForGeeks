/*
 * Topic: Difference of two large numbers
 *
 * Description: Given two numbers as strings.
 * The numbers may be very large (may not fit
 * in long long int), the task is to find
 * difference of these two numbers.
 */
#include <iostream>
#include <vector>
using namespace std;

string diffTwoLargeStrings(string str1, string str2) {
    int maxLen = max(str1.size(), str2.size());
    
    string zeros;
    for(int i = 0; i < (maxLen - str2.size()); i++) {
        zeros.push_back('0');
    }
    
    if(str1.size() < str2.size()) {
        str1.insert(0, zeros);
    }
    else if(str1.size() > str2.size()) {
        str2.insert(0, zeros);
    }
    
    vector<int> nStr1;
    vector<int> nStr2;
    
    for(int i = 0; i < maxLen; i++) {
        string val;
        val = str1[i];
        nStr1.push_back(stoi(val));
        
        val = str2[i];
        nStr2.push_back(stoi(val));
    }
    
    string ans;

    int diff;
    
    for(int i = maxLen-1; i >= 0; i--) {
        if(nStr1[i] >= nStr2[i]) {
            diff = nStr1[i] - nStr2[i];
            
            ans.push_back('0' + diff);
        }
        else {
            for(int j = i-1; j >= 0; j--) {
                int start = j;
                
                if(nStr1[start] >= nStr2[start]) {
                    while((nStr1[start] >= nStr2[start]) && start < i) {
                        nStr1[start]--;
                        nStr1[start+1] += 10;
                        start++;
                    }
                    break;
                }
                
                
            }
            
            diff = nStr1[i] - nStr2[i];
        
            ans.push_back('0' + diff);
        }
    }
    
    reverse(ans.begin(), ans.end());
    
    return ans;
}

int main() {
    string s1 = "11443333311111111100";
    string s2 = "1144422222221111";
    cout << diffTwoLargeStrings(s1, s2) << "\n";
    
    string s3 = "122387876566565674";
    string s4 = "31435454654554";
    cout << diffTwoLargeStrings(s3, s4) << "\n";
    
}
