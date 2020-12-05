/*
 * Topic: Calculate maximum value using ‘+’ or ‘*’
 * sign between two numbers in a string
 *
 * Description: Given a string of numbers, the task
 * is to find the maximum value from the string, you
 * can add a ‘+’ or ‘*’ sign between any two numbers.
 */
#include <iostream>
using namespace std;

int calcMaxValue(string s) {
    string a, b;
    a = s[0];
    int maxSum = stoi(a);

    for(int i = 0; i < s.size()-1; i++) {
        a = s[i];
        b = s[i+1];
        
        if((stoi(a) + stoi(b)) > (stoi(a) * stoi(b))) {
            maxSum += stoi(b);
        }
        else {
            maxSum *= stoi(b);
        }
    }
    
    return maxSum;
}

int main() {
    string s = "891";
    cout << calcMaxValue(s) << "\n";
    
}
