/*
 * Topic: Put spaces between words starting with capital letters
 *
 * Description: You are given an array of characters which is 
 * basically a sentence. However there is no space between different
 * words and the first letter of every word is in uppercase. You 
 * need to print this sentence after following amendments:
 * 
 * (i) Put a single space between these words.
 * (ii) Convert the uppercase letters to lowercase.
 */
#include <iostream>
#include <cctype>

using namespace std;

void amendSentence(string s) {
    for(int i = 0; i < s.size(); i++) {
        if(isupper(s[i])) {
            s[i] = tolower(s[i]);
            s.insert(s.begin()+i, ' ');
            i++;
        }
    }
    
    cout << s << endl;
}

int main() {
    string str = "BruceWayneIsBatman";
    amendSentence(str);
    
    string str2 = "You";
    amendSentence(str2);

}
