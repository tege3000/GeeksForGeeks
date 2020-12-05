/*
 * Topic:
 * Removing punctuations from a given string
 *
 * Description:
 * Given a string, remove the punctuation from the string
 * if the given character is a punctuation character as
 * classified by the current C locale. The default C locale
 * classifies these (any many more) characters as punctuation:
 * !"#$%&'()*+,-./:;?@[\]^_`{|}~
 */
#include <iostream>
using namespace std;

// Better Approach -
// I just learnt that c++ stl has
// a function to check if a character is classified
// as a punctuation under the C locale
string removePunctuations(string s) {
    
    for(int i = 0; i < s.size(); i++) {
        if(ispunct(s[i])) {
            s.erase(s.begin()+i);
            i--;
        }
    }
           
    return s;
           
}

int main() {
   string s = "Welcome???@@##$ to#$% Geeks%$^for$%^&Geeks";
   cout << removePunctuations(s) << "\n";
   
   string s2 = "Hello!!!, he said ---and went.";
   cout << removePunctuations(s2) << "\n";
   return 0;
}
