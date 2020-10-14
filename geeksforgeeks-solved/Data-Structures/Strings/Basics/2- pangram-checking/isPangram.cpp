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
    
    
    //TODO: Figure out algorithm
    for(int i = 0; i < s.size(); i++) {
        
    }
    
    return true;
}

int main() {
    string s = "hello";
    
    if(isPangram(s)) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }
    
    return 0;
}
