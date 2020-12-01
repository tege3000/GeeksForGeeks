/*
 * Topic: Smallest length string with repeated replacement of two distinct adjacent
 *
 * Description: Given a string of any combination of three letters ‘a’, ‘b’, and ‘c’,
 * find length of the smallest string that can be obtained by applying the following
 * operation repeatedly:
 * Take any two adjacent, distinct characters and replace them with the third.
 */
#include <iostream>
using namespace std;

bool allSame(string s) {
    for(int i = 0; i < s.size(); i++) {
        if(s[0] != s[i]) {
            return false;
        }
    }
    return true;
}

string stringReduction(string s) {
    while(allSame(s) == false) {
        for(int i = 0; i < s.size()-1; i++) {
            if(s[i] != s[i+1]) {
                char elToInsert = ' ';
                if(s[i] != 'a' && s[i+1] != 'a') {
                    elToInsert = 'a';
                }
                
                if(s[i] != 'b' && s[i+1] != 'b') {
                    elToInsert = 'b';
                }
                
                if(s[i] != 'c' && s[i+1] != 'c') {
                    elToInsert = 'c';
                }
                
                s.erase(i, 2);
                s.insert(s.begin()+i, elToInsert);
            }
            else {
                continue;
            }
        }
    }
    
    return s;
}

int main() {
    string str = "abcbbaacb";
    cout << stringReduction(str).size() << endl;
}
