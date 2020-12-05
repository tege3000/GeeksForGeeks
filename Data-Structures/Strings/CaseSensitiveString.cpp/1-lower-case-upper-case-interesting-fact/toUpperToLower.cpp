/*
 * Topic: Lower case to upper case – An interesting fact
 * 
 * Description: Problem: Given a string containing only 
 * lowercase letters, generate a string with the same 
 * letters, but in uppercase.
 */
#include <iostream>
using namespace std;
string toUpper(string s) {
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 'a' + 'A';
        }
    }
    
    return s;
}

string toLower(string s) {
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] - 'A' + 'a';
        }
    }
    
    return s;
}

int main() {
    string s = "OtitoDilichukWu";
    cout << toUpper(s) << endl;
    cout << toLower(s) << endl;

}
