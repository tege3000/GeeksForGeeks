/*
 * Topic: Extract maximum numeric value from a given
 * string | Set 2 (Regex approach)
 *
 * Description: Given an alphanumeric string, extract
 * maximum numeric value from that string.
 */
#include <iostream>
#include <regex>
using namespace std;

// Second approach (using regex)
int extractMax(string s) {
    int maxEl = 0;
    smatch m;
    regex r("[0-9]+");
    while (regex_search(s,m,r)) {
        for (auto x:m) {
            maxEl = max(maxEl, stoi(x));
        }
        
        // sets s to the remaing string after match
        s = m.suffix().str();
    }

    return maxEl;
}

// // Initial approach (not using regex approach)
// int extractMax(string s) {
//     string nS;
//     int maxEl = 0;
//     int number = 0;
//     for(int i = 0; i < s.size(); i++) {
//         if(isdigit(s[i])) {
//             nS.push_back(s[i]);
//         }
//         else {
//             // takes care of leading numbers i.e 122...
//             if(i != 0) {
//                 if(isalpha(s[i]) && isalpha(s[i-1])) {
//                     nS = "";
//                 }
//                 else {
//                     maxEl = max(maxEl, stoi(nS));
//                     nS = "";
//                 }
//             }
//         }
//     }
    
//     // takes care of trailing numbers  i.e ...123
//     if(isdigit(s[s.size()-1])) {
//         maxEl = max(maxEl, stoi(nS));
//     }
    
//     return maxEl;
// }

int main() {
    string s1 = "100klh564abc365bg";
    string s2 = "abchsd0365sdhs";
    
    cout << extractMax(s1) << "\n";
    cout << extractMax(s2) << "\n";
}
