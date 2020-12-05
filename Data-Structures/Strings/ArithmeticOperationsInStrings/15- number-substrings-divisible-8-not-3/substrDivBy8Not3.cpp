/*
 * Topic: Number of substrings divisible by 8 but not by 3
 *
 * Description: Given a string of digits “0-9”. The task is
 * find the number of substrings which are divisible by 8
 * but not by 3.
 */
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int numSubstrDivBy8Not3(string s) {
    int count = 0;
    vector <long int> v1;

    for(int i = 0; i < s.size(); i++) {
        string ch;
        for(int j = i; j < s.size(); j++) {
            ch += s[j];
            v1.push_back(stol(ch));
        }
    }

    for(int i = 0; i < v1.size(); i++) {
        if((v1[i] % 8 == 0) && !(v1[i] % 3 == 0)) {
            count++;
        }
    }

    return count;
}

int main() {
    string s = "6564525600";
    cout << numSubstrDivBy8Not3(s) << "\n";
}
