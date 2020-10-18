/*
 * Topic:
 * Quick way to check if all the characters of a string are same *
 * Description:
 * Write a function to check whether a given input is an integer or a string.
 *
 * In this context,
 * Given a string, check if all the characters of the string are same or not.
 */
#include <iostream>
#include <set>
using namespace std;

bool allTheSame(string s) {
    set <char> s1;
    
    for(int i = 0; i < s.size(); i++) {
        s1.insert(s[i]);
    }
    
    if(s1.size() == 1) {
        return true;
    }
    return false;
}

int main() {
    
    string str = "gggg";
    
    if(allTheSame(str)) {
        cout << "Yes" << "\n";
    }
    else {
        cout << "No" << "\n";
    }
    
    
    return 0;
}
