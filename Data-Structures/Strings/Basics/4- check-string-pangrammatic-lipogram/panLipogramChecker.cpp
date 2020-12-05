/*
 * Topic:
 * Check if a string is Pangrammatic Lipogram
 *
 * Description:
 * Given a string, our task is to check whether
 * this string is a pangrammatic lipogram or not?
 */
#include <iostream>
#include <unordered_map>

using namespace std;

// Secong approach - More Efficient
void panLipogramChecker(string s) {
    unordered_map <char, int> mp;
    
    for(char i='a'; i <= 'z'; i++) {
        mp[i] = 0;
    }
    
    for(int i = 0; i < s.size(); i++) {
        if(s[i] != ' ') {
            mp[tolower(s[i])]++;
        }
    }
    
    int count = 0;
    for(auto i : mp) {
        if(i.second < 1) {
            count++;
        }
    }
    
    if(count == 0) {
        cout << "It is just a panagram\n";
    }
    else if(count == 1) {
        cout << "It is a panagrammatic lipogram\n";
    }
    else {
        cout << "It is just a lipogram\n";
    }
}

//// Initial approach - Not Efficient
//void panLipogramChecker(string s) {
//    string alphaL = "abcdefghijklmnopqrstuvwxyz";
//    string alphaU = "ABCDEFGHIJKLMONPQRSTUVWXYZ";
//
//    string output;
//    for(int i = 0; i < alphaL.size(); i++) {
//        if(s.find(alphaL[i]) == -1 && s.find(alphaU[i]) == -1) {
//            output.push_back(alphaL[i]);
//        }
//    }
//
//    if(output.size() == 1) {
//        cout << "It is a panagrammatic lipogram\n";
//    }
//    else if (output.size() == 0) {
//        cout  << "It is just a panagram\n";
//    }
//    else {
//        cout << "It is just a lipogram\n";
//    }
//}

int main() {
    string str = "The quick brown fox jumped over the lazy dog";
    panLipogramChecker(str);
    
    str = "The quick brown fox jumps over the lazy dog";
    panLipogramChecker(str);

    str = "The quick brown fox jum over the lazy dog";
    panLipogramChecker(str);
    return 0;
}
