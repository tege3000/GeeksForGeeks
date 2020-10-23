/*
 * Topic: Check if a given string is sum-string
 *
 * Description: Given a string of digits, determine
 * whether it is a ‘sum-string’. A string S is called
 * a sum-string if a rightmost substring can be written
 * as sum of two substrings before it and same is
 * recursively true for substrings before it.
 */
#include <iostream>
#include <vector>

using namespace std;

// FINISH LATER:
//
// RIGHT NOW GOAL IS TO LOG ALL THE VARIOUS SUBSTRINGS TO UNDERSTAND
// IF MY LOOPS ARE SET UP CORRECTLY
//
// TODO: FIX THIS ERROR:
// libc++abi.dylib: terminating with uncaught exception of type std::invalid_argument: stoi: no conversion
bool checkSumString(string s) {
    int l = 0;
    int len = 0;
    string first, second, third;
    int firstN, secondN, thirdN;
    int count = 0;
    for(int i = 0; i < s.size(); i = i+len) {
        for(int x = i+1; x < s.size(); x++) {
            for(int j = x; j < s.size(); j++) {
        
                first = s.substr(i, x);
                second = s.substr(x, j);
                l = s.substr(x,j).size();
                third = s.substr(x+l, j);
                
                firstN = stoi(first);
                secondN = stoi(second);
                thirdN = stoi(third);

                
                if(second.size() > third.size()) {
                    break;
                }
                
                
                cout << firstN << " " << secondN << " " << thirdN << "\n";
//                if(first + second == third) {
//                    if(count == 0) {
//                        len = l;
//                    }
//                    count++;
//                }
            }
        }
        
    }
    return true;
}

int main() {
    string s = "12243660";
    if(checkSumString(s)) {
        cout << "Is a Sum String\n";
    }
    else {
        cout << "Is not a Sum String\n";
    }
}
