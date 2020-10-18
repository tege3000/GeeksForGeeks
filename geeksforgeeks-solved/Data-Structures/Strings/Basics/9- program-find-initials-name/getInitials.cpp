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

string getInitials(string s) {
    vector<string> names;
    
    istringstream iss(s);
    
    for(string s; iss >> s;) {
        names.push_back(s);
    }
    
    
    string result;
    for(int i = 0; i < names.size(); i++) {
        result.push_back(toupper(names[i][0]));
        if(i != names.size() - 1) {
            result.push_back(' ');
        }
    }
    
    return result;
}

int main() {
    
    string str = "abhishek kumar singh";
    
    cout << getInitials(str) << "\n";
    
    return 0;
}
