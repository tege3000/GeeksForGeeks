/*
 * Topic:
 * Program to find the initials of a name.
 *
 * Description:
 * Given a string name, we have to find the initials of the name
 */
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;
// Second approach - More intuitive, but less efficient than previous
// approach
string getInitials(string s) {
    string result;
    
    result.push_back((char)toupper(s[0]));
    result.push_back(' ');
    
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == ' ') {
            result.push_back((char)toupper(s[i+1]));
            result.push_back(' ');
        }
    }
    
    return result;
}

//// Initial approach - Uses istringstream to split the string at spaces
//string getInitials(string s) {
//    vector<string> names;
//
//    istringstream iss(s);
//
//    for(string s; iss >> s;) {
//        names.push_back(s);
//    }
//
//    string result;
//    for(int i = 0; i < names.size(); i++) {
//        result.push_back((char)toupper(names[i][0]));
//        if(i != names.size() - 1) {
//            result.push_back(' ');
//        }
//    }
//
//    return result;
//}

int main() {
    
    string str = "abhishek kumar singh";
    
    cout << getInitials(str) << "\n";
    
    return 0;
}
