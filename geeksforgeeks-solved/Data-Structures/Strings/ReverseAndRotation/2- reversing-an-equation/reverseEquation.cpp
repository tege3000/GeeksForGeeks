/*
 * Topic: Reversing an Equation
 *
 * Description: Given a mathematical equation using
 * numbers/variables and +, -, *, /. Print the
 * equation in reverse.
 */
#include <iostream>
#include <vector>
using namespace std;

string reverseEquation(string a) {
    string ans = a;
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    string s = "a+b*c-d/e";
    cout << reverseEquation(s) << endl;
}

