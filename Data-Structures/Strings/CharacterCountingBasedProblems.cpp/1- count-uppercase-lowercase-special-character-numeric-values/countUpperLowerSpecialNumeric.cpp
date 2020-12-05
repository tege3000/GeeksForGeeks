/*
 * Topic: Smallest number with sum of digits as N and divisible by 10^N
 *
 * Description: Find the smallest number such that the sum of its digits
 * is N and it is divisible by 10^N.
 */
#include <iostream>
using namespace std;

void countUpperLowerSpecialNumeric(string s) {
    int upper = 0;
    int lower = 0;
    int special = 0;
    int numeric = 0;

    for(int i = 0; i < s.size(); i++) {
        if(ispunct(s[i])) {
            special++;
        }
    }

    cout << "Upper case letters: " << upper << endl; 
    cout << "Lower case letters : " << lower << endl; 
    cout << "Number : " << numeric << endl; 
    cout << "Special characters : " << special << endl;
}

int main() {
    string str = "#GeeKs01fOr@gEEks07"; 
    countUpperLowerSpecialNumeric(str); 
}

