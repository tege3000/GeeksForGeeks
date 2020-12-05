/*
 * Topic: Maximum and minimum sums from two numbers with
 * digit replacements
 *
 * Description: Given two positive numbers calculate the
 * minimum and maximum possible sums of two numbers. We
 * are allowed to replace digit 5 with digit 6 and vice
 * versa in either or both the given numbers.
 */
#include <iostream>
#include <vector>

using namespace std;
int maxSum (int x1, int x2) {
    string num1 = to_string(x1);
    string num2 = to_string(x2);
    
    for(int i = 0; i < num1.size(); i++) {
        if(num1[i] == '5') {
            num1[i] = '6';
        }
    }
    
    for(int i = 0; i < num2.size(); i++) {
        if(num2[i] == '5') {
            num2[i] = '6';
        }
    }
    
    return stoi(num1) + stoi(num2);
}

int minSum (int x1, int x2) {
    string num1 = to_string(x1);
    string num2 = to_string(x2);
    
    for(int i = 0; i < num1.size(); i++) {
        if(num1[i] == '6') {
            num1[i] = '5';
        }
    }
    
    for(int i = 0; i < num2.size(); i++) {
        if(num2[i] == '6') {
            num2[i] = '5';
        }
    }
    
    return stoi(num1) + stoi(num2);
}

int main() {
    int x1 = 5466;
    int x2 = 4555;
    
    cout << "Minimum Sum: " << minSum(x1, x2) << "\n";
    cout << "Maximum Sum: " << maxSum(x1, x2) << "\n";
}
