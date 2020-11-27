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

//stuck in reasoning... finish up later
string stringReduction(string s) {
    string ans;
    
    string fornow;
    for(int i = 0; i < s.size(); i++) {
        if(i != 0) {
            if(s[i] != fornow[i-1]) {
                fornow.push_back(s[i]);
                int start = 0;
                char changeTo = ' ';
                for(char j = 'a'; j <= 'c'; j++) {
                    if(fornow[start] != j) {
                        changeTo = j;
                    }
                    start++;
                }
                
            }
            else {
                fornow = s[i];
            }
            
        }
        else {
            fornow.push_back(s[i]);
        }
    }
    
    return ans;
}

int main() {
    string str = "abcbbaacb";
    cout << stringReduction(str);
}
