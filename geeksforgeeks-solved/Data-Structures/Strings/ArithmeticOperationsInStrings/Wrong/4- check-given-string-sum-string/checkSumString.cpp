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


// I deleted my last attempt Because it was still not working as intended.
// Need to try this again later.
bool checkSumString(string s) {

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
