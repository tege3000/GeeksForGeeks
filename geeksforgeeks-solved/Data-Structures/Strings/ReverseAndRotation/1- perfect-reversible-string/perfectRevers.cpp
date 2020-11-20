/*
 * Topic: Perfect reversible string
 *
 * Description: You are given a string ‘str’, the task
 * is to check that reverses of all possible substrings
 * of ‘str’ are present in ‘str’ or not.
 */
#include <iostream>
#include <vector>
using namespace std;

// Efficient solution which is based on the fact that reverse
// of all substrings of ‘str’ will exist in ‘str’ if and only 
// if the entire string ‘str’ is palindrome
bool isReversible(string a) {
    string b = a;
    reverse(b.begin(), b.end());
    
    return a == b ? true : false;
}

// bool isReversible(string a) {
//     for(int i = 0; i < a.size(); i++) {
//         int count = 1;
//         for(int j = i; j < a.size(); j++) {
//             string b = a.substr(i, count);
            
//             reverse(b.begin(), b.end());
//             if(!(a.find(b) != -1)) {
//                 return false;
//             }
//             count++;
//         }
//     }  
//     return true;
// }

int main() {
    string str="ab";
    if (isReversible(str)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    cout << "\n";
    
    string str1="aba";
    if (isReversible(str1)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    cout << "\n";
    
    string str2="abab";
    if (isReversible(str2)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    cout << "\n";
    return 0;
}

