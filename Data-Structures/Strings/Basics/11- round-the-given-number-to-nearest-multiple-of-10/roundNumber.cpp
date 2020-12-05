/*
 * Topic:
 * Round the given number to nearest multiple of 10
 *
 * Description:
 * Given a positive integer n, round it to nearest
 * whole number having zero as last digit.
 */
#include <iostream>
#include <string>

using namespace std;

int roundNumber(string num) {
    int n = num.size();
    char l = num[n-1];
    int lastDigit = l - '0';
    int result = stoi(num);
    
    if(lastDigit <= 5) {
        result -= lastDigit;
    }
    else {
        result += (10-lastDigit);
    }
    
    return result;
}

int main() {
    
    string num = "10";
    
    cout << roundNumber(num) << "\n";
    return 0;
}
