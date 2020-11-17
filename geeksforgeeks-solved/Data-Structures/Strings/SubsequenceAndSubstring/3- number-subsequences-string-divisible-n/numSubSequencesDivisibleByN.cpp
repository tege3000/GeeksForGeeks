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

// TODO: Finish up later,
// Current Idea: Trying to use Truth Tables to get all subsequences
int numSubSequencesDivisibleByN(string s, int n) {
    // get all subsequences first
    vector<int> subsequences;
    
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
    
    
    // need to fix this part of code. Not populating truth table as intended
    int start = 0;
    for(int i = 0; i < s.size(); i++) {
        int numRecurring = numSubs / pow(2, s.size()-(i+1));
        
        for(int j = 0; j < numRecurring; j++) {
            start = 0;
            if(j % 2 == 0) {
                // fill up with zeros
                for(int k = start; k < (start+pow(2, s.size()-(i+1))); k++) {
                    truthTable[k][i] = 0;
                }
            }
            else {
                start += pow(2, s.size()-(i+1));
                // fill up with 1s
                for(int k = start; k < (start+pow(2, s.size()-(i+1))); k++) {
                    truthTable[k][i] = 1;
                }
            }
        }

    }
    
    for(int i = 0; i < numSubs; i++) {
        for(int j = 0; j < s.size(); j++) {
            cout << truthTable[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}

int main() {
    string str = "1234";
    int n = 4;
    cout << numSubSequencesDivisibleByN(str, n);
    
    return 0;
}

