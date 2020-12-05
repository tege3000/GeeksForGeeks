

/*
 * Topic:
 * Function to copy string (Iterative and Recursive)
 *
 * Description:
 * Given two strings, copy one string to other using
 * recursion. We basically need to write our own recursive
 * version of strcpy in C/C++
 */
#include <iostream>

using namespace std;


// // Iterative Solution
// string copyString(string s1, string s2) {
//     s2.clear();
//     for(int i = 0; i < s1.size(); i++) {
//         s2.push_back(s1[i]);
//     }
    
//     return s2;
// }

// Recursive Solution
string copyString(string s1, string s2, int i) {
    if(i == 0) {
        s2.clear();
    }
    else if(i >= s1.size()) {
        return s2;
    }
    
    s2.push_back(s1[i]);
    return copyString(s1, s2, i+1);
}


int main() {
    string s1 = "hello";
    string s2 = "geeksforgeeks";
    
    
    cout << "s2: " << copyString(s1, s2, 0) << "\n";
    return 0;
}
