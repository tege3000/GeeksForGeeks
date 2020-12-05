/*
 * Topic: Number of substrings divisible by 6 in a string of integers
 *
 * Description: Given a string consisting of integers 0 to 9. The task
 * is to count the number of substrings which when convert into integer
 * are divisible by 6. Substring does not contain leading zeroes.
 */
#include <iostream>
using namespace std;

int numSubstringsDivisibleBy6(string s) {
    int count = 0;
    for(int i = 0; i < s.size(); i++) {
        string num = "";
        for(int j = i; j < s.size(); j++) {
            num.push_back(s[j]);
            if(stoi(num) % 6 == 0) {
                if(num[0] == '0' && num.size() > 1) {
                    continue;
                }
                count++;
            }
        }
        
    }
    
    return count;
}

int main() {
    string s = "4806";
    cout << numSubstringsDivisibleBy6(s);
}
