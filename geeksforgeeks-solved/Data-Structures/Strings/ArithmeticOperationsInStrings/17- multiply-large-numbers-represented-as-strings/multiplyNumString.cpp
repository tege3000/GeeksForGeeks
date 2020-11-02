/*
 * Topic: Multiply Large Numbers represented as Strings
 *
 * Description: Given two positive numbers as strings.
 * The numbers may be very large (may not fit in long long int),
 * the task is to find product of these two numbers.
 */
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

/*
 * NOTE: This approach will not eork for BIG Integers
 */

int multiply(string num1, string num2) {
    string top, bottom;
    
    if(num1.size() > num2.size()) {
        top = num1;
        bottom = num2;
    }
    else {
        top = num2;
        bottom = num1;
    }
    
    vector<int> v1;
    int val;
    int fRes = 0;
    string valS;
    
    for(int i = bottom.size()-1; i >= 0; i--) {
        string res = "";
        int carry = 0;
        string ch;

        for(int j = top.size()-1; j >= 0; j--) {
            val = (bottom[i] - '0') * (top[j] - '0');

            valS = to_string(val+carry);
            if(valS.size() != 1) {
                carry = valS[0] - '0';
                ch = valS[1];
                res.insert(0, ch);
            }
            else {
                carry = 0;
                ch = valS[0];
                res.insert(0, ch);
            }
            
            if(j == 0) {
                res.insert(0, to_string(carry));
            }
        }
        
        for(int j = 0; j < (bottom.size()-1)-i; j++) {
            res.push_back('0');
        }
        
        v1.push_back(stoi(res));
    }

    return accumulate(v1.begin(), v1.end(), 0);
}

int main() {
    string num1 = "4154";
    string num2 = "51454";
    
    cout << multiply(num1, num2) << "\n";
}
