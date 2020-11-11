/*
 * Topic: Count words in a given string
 *
 * Description: Given a string, count number of words in it.
 * The words are separated by following characters: space (‘ ‘)
 * or new line (‘\n’) or tab (‘\t’) or a combination of these.
 */
#include <iostream>
using namespace std;

int countWords(string s) {
    int count = 0;
    int foundSpecial = 0;
    
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ' || s[i] == '\n' || s[i] == '\t') {
            if(foundSpecial == 0) {
                count++;
            }
            
            foundSpecial = 1;
        }
        else {
            foundSpecial = 0;
        }
    }
    
    return count;
}

int main() {
    string str = "One two     three\n four\tfive ";
    cout << countWords(str) << "\n";
}
