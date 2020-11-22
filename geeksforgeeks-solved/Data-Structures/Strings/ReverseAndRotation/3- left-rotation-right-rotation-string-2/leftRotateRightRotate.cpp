/*
 * Topic: Left Rotation and Right Rotation of a String
 *
 * Description: Given a string of size n, write functions
 * to perform the following operations on a string
 *
 * 1. Left (Or anticlockwise) rotate the given string by d
 * elements (where d <= n)
 * 2. Right (Or clockwise) rotate the given string by d
 * elements (where d <= n).
 */
#include <iostream>
#include <vector>
using namespace std;

void leftrotate(string s, int d) {
    string t;
    for(int i = d; i < s.size()+d; i++) {
        t.push_back(s[(i%s.size())]);
    }
    
    for(int i = 0; i < t.size(); i++) {
        cout << t[i];
    }
    cout << "\n";
}

void rightrotate(string s, int d) {
    string t;
    for(int i = s.size()-d; i < (s.size()-d) + s.size(); i++) {
        t.push_back(s[i%s.size()]);
    }
    
    for(int i = 0; i < t.size(); i++) {
        cout << t[i];
    }
    cout << "\n";
}

int main() {
    string str1 = "GeeksforGeeks";
    leftrotate(str1, 2);
    
    string str2 = "GeeksforGeeks";
    rightrotate(str2, 2);
    return 0;
}

