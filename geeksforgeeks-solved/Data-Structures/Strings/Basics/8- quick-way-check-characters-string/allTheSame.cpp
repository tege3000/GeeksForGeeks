/*
 * Topic:
 * Quick way to check if all the characters of a string are same 
 * Description:
 * Given a string, check if all the characters of the string are same or not.
 */
#include <iostream>
#include <set>
using namespace std;

// Second Method
// seems like i was overdoing it by using sets in the first approach
// Works in O(n) time
bool allTheSame(string s) {
    
    for(int i = 0; i < s.size(); i++) {
        if(s[0] != s[i]) {
            return false;
        }
    }
    
    return true;
}

//// Initial Method
//// Works in O(nlogn) time
//bool allTheSame(string s) {
//    set <char> s1;
//
//    for(int i = 0; i < s.size(); i++) {
//        s1.insert(s[i]);
//    }
//
//    if(s1.size() == 1) {
//        return true;
//    }
//    return false;
//}

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
