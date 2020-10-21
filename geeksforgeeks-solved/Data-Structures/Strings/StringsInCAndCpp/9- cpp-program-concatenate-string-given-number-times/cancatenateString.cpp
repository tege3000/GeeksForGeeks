/*
 * Topic: C++ program to concatenate a string given number of times
 *
 * Description: Write a function which returns a new string which
 * is made by concatenating a given string n number of times.
 */
#include <iostream>
using namespace std;

string cancatenateString(int n, string s) {
    string result;
    
    for(int i = 0; i < n; i++) {
        result += s;
    }
    
    return result;
}

int main() {
    string s = "geeks";
    cout << cancatenateString(3, s)<< "\n";
}
