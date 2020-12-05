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

// Method 2
string reverseEquation(string a) {
    string ans = a;
    reverse(ans.begin(), ans.end());
    return ans;
}

//// Method 1
//string reverseEquation(string a) {
//    string ans;
//    for(int i = a.size(); i >= 0; i--) {
//        ans.push_back(a[i]);
//    }
//    return ans;
//}

int main() {
    string s = "a+b*c-d/e";
    cout << reverseEquation(s) << endl;
}

