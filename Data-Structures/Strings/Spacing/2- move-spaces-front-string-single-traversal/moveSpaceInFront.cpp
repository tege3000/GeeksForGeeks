/*
 * Topic: Move spaces to front of string in single traversal
 *
 * Description: Given a string that has set of words and spaces, 
 * write a program to move all spaces to front of string, by 
 * traversing the string only once.
 */
#include <iostream>
using namespace std;

void moveSpaceInFront(string s) {
    int spaceCount = 0;
    
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ') {
            s.erase(s.begin()+i);
            spaceCount++;
        }
    }
    
    for(int i = 0; i < spaceCount; i++) {
        s.insert(s.begin(), ' ');
    }
    
    cout << s << endl;
}

int main() {
    string str = "Hey there, it's GeeksforGeeks";
    moveSpaceInFront(str);
}
