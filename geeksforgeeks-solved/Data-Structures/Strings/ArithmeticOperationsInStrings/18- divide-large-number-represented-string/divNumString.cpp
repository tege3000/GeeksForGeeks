/*
 * Topic: Divide large number represented as string
 *
 * Description: Given a large number (represented as a string)
 * which has to divide by another number (represented as int data type).
 * The large number can be very large which does not even fit in long
 * long in C++. The task is to find the division of these numbers.
 */
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int divide(string dividend, string divisor) {
    string quotient = "";
    string val;
    
    val = dividend[0];
    int count = 1;
    int start = 0;
    
    for(int i = 0; i < dividend.size(); i++) {
        if(stoi(divisor) > stoi(dividend.substr(0, count))) {
            count++;
            val = dividend.substr(0, count);
            continue;
        }

        quotient.insert(start, to_string(stoi(val)/stoi(divisor)));
        
        
        string num1, num2;
        
        num2 = to_string((quotient[start] - '0') * stoi(divisor));
        
        val = to_string(stoi(val) - stoi(num2));
        val.push_back(dividend[i+1]);
        
        start++;
    }

    return stoi(quotient);
}

int main() {
    string dividend1 = "157";
    string divisor1 = "2";
    cout << divide(dividend1, divisor1) << "\n";

    
    string dividend2  = "1260257";
    string divisor2 = "37";
    cout << divide(dividend2, divisor2) << "\n";

    
    // TODO: MAKE CODE WORK FOR BIG INTEGER VALUES
//    string dividend3  = "12313413534672234";
//    string divisor3 = "754";
//    cout << divide(dividend3, divisor3) << "\n";
}
