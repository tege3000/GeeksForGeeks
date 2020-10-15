/*
 * Topic:
 * Removing punctuations from a given string
 *
 * Description:
 * Given a string, remove the punctuation from the string
 * if the given character is a punctuation character as
 * classified by the current C locale. The default C locale
 * classifies these characters as punctuation:
 * !"#$%&'()*+,-./:;?@[\]^_`{|}~
 */
#include <iostream>
using namespace std;

// Secong approach - More Efficient
string removePunctuations(string s) {
    // NOTE: HAD TO ADD ESCAPE CHARACTERS
    // FOR " AND \ IN THE PUNCTUATIONS STRING
    string punctuations = "!\"#$%&'()*+,-./:;?@[\\]^_`{|}~";
    
    for(int i = 0; i < s.size(); i++) {
        if(punctuations.find(s[i]) != -1) {
            s.erase(s.begin()+i);
            i--;
        }
    }
    return s;
    
}

int main() {
    string s = "%welcome' to @geeksforgeeks";
    cout << removePunctuations(s) << "\n";
    
    string s2 = "Hello!!!, he said ---and went.";
    cout << removePunctuations(s2) << "\n";
    return 0;
}
