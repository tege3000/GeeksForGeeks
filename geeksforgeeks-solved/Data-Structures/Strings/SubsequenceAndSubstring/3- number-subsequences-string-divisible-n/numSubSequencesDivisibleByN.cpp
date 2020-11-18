/*
 * Topic: Number of subsequences in a string divisible by n
 *
 * Description: Given a string consisting of digits 0-9,
 * count the number of subsequences in it divisible by m.
 */
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

// for a string of numbers, get all subsequences
vector <string> getAllSubsequences(string s) {
    vector<string> subsequences;
    
    // for n characters, there are 2^n possibilities
    int numSubs = pow(2, s.size());
    
    vector<vector<int>> truthTable;
    for(int i = 0; i < numSubs; i++) {
        vector <int> inner;
        for(int j = 0; j < s.size(); j++) {
            inner.push_back(0);
        }
        truthTable.push_back(inner);
    }
    
    // generate truth table
    for(int i = 0; i < s.size(); i++) {
        int numRecurring = pow(2, s.size()-(i+1));
        int start = 0;
        int end = numRecurring;
        for(int j = 0; j < pow(2, i+1); j++) {
            end = numRecurring + start;
            if(j % 2 == 0) {
                // fill up with zeros
                for(int k = start; k < end; k++) {
                    truthTable[k][i] = 0;
                }
            }
            else {
                // fill up with 1s
                for(int k = start; k < end; k++) {
                    truthTable[k][i] = 1;
                }
            }
            
            start += numRecurring;
        }
    }
    
    for(int i = 0; i < numSubs; i++) {
        string num = "";
        for(int j = 0; j < s.size(); j++) {
            if(truthTable[i][j] == 1) {
                num += s[j];
            }
        }
        
        if(num.size() >= 1) {
            subsequences.push_back(num);
        }
    }
    
    return subsequences;
}


int numSubSequencesDivisibleByN(string s, int n) {
    // get all subsequences first
    vector<string> allSubsequences = getAllSubsequences(s);
    
    int count = 0;
    for(int i = 0; i < allSubsequences.size(); i++) {
        if(stoi(allSubsequences[i]) % n == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    string str = "1234";
    int n = 4;
    cout << numSubSequencesDivisibleByN(str, n) << "\n";
    
    string str2 = "330";
    int n2 = 6;
    cout << numSubSequencesDivisibleByN(str2, n2) << "\n";
    
    string str3 = "676";
    int n3 = 6;
    cout << numSubSequencesDivisibleByN(str3, n3) << "\n";
    
    return 0;
}

