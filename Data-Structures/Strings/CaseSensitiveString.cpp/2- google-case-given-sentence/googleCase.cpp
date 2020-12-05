/*
 * Topic: gOOGLE cASE of a given sentence
 *
 * Description: Problem: Given a sentence, the task is to rewrite
 * in Google Case. It is a style of writing where we replace all
 * lower case letters into upper case letters leaving the initial
 * of all the words.
 */
#include <iostream>
using namespace std;

string convert(string s) {
    int count = 0;
    string res = "";
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ') {
            count = 0;
        }
        else {
            if(count == 0) {
                if(isupper(s[i])) {
                    s[i] = tolower(s[i]);
                }
            }
            else {
                s[i] = toupper(s[i]);
            }
            count++;
        }
    }
    
    return s;
}



int main() {
    string str = "I got intern at geeksforgeeks";
    cout << convert(str) << endl;
    
}
