/*
 * Topic: C++ Program to remove spaces from a string
 *
 * Description: Given a string, remove all spaces from it.
 * For example “g e e k” should be converted to “geek” and
 * ” g e ” should be converted to “ge”.
 */
#include <iostream>
using namespace std;

string removeSpaces(string s) {
    string result;
    for(int i = 0; i < s.size(); i++) {
        if(s[i]!= ' ') {
            result.push_back(s[i]);
        }
    }
    
    return result;
}


int main() {
    string str1 = "gee    k   ";
    cout << removeSpaces(str1) << endl;
    
    string str2 = " g e e k ";
    cout << removeSpaces(str2);
}
