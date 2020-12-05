/*
 * Topic:
 * Pangram Checking
 *
 * Description:
 * Given a string check if it is Pangram or not.
 * A pangram is a sentence containing every letter
 * in the English Alphabet.
 *
 * Examples : The quick brown fox jumps over the lazy
 * dog ” is a Pangram [Contains all the characters from ‘a’ to ‘z’]
 *
 * “The quick brown fox jumps over the dog” is not a Pangram
 * [Doesn’t contains all the characters from ‘a’ to ‘z’, as ‘l’,
 * ‘z’, ‘y’ are missing]
 */
#include <iostream>

using namespace std;

bool isPangram(string s) {
    string LOWER_ALPHABETS = "abcdefghijklmnopqrstuvwxyz";
    string UPPER_ALPHABETS = "ABCDEFGHIJKLMONPQRSTUVWXYZ";
    
    
    for(int i = 0; i < LOWER_ALPHABETS.size(); i++) {
        if(!((s.find(LOWER_ALPHABETS[i]) != -1) || (s.find(UPPER_ALPHABETS[i]) != -1))) {
            return false;
        }
    }
    
    return true;
}

int main() {
    string s = "The quick brown fox jumps over the lazy dog";
    
    if(isPangram(s)) {
        cout << s << " IS a panagram\n";
    }
    else {
        cout << s << " IS NOT a panagram\n";
    }
    
    return 0;
}
