/*
 * Topic: To check divisibility of any large number by 999
 *
 * Description: You are given an n-digit large number, you
 * have to check whether it is divisible by 999 without
 * dividing or finding modulo of number by 999.
 */
#include <iostream>
#include <string>
using namespace std;

/*
 * Idea: A number is divisible by 999 if sum of its 3-digit-groups
 * is divisible by 999
 */
bool checkDivBy999(string s) {
    string nS = s;
    int sumSize = 4;
    while(sumSize > 3) {
        string three = "";
        int count = 0;
        int sum = 0;
        for(int i = nS.size()-1; i >= 0; i--) {
            if(count == 3) {
                reverse(three.begin(), three.end());
                sum += stoi(three);
                three = "";
                count = 0;
            }
            
            three.push_back(nS[i]);
            count++;
            if(i == 0) {
                reverse(three.begin(), three.end());
                sum += stoi(three);
                three = "";
            }
        }
        
        if(sum == 999) {
            return true;
        }
        
        nS = to_string(sum);
        sumSize = nS.size();
    }
    
    return false;
}

int main() {
    string s = "999999999";
    
    if(checkDivBy999(s)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}
