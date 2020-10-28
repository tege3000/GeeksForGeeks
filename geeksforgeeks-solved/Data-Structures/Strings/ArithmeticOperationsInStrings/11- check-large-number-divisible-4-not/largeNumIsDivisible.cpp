/*
 * Topic: Check if a large number is divisible by 4 or not
 *
 * Description: Given a number, the task is to check if a
 * number is divisible by 4 or not. The input number may
 * be large and it may not be possible to store even if we
 * use long long int.
 */
#include <iostream>
using namespace std;
/*
 * Idea: Since input number may be very large, we cannot use
 * n % 4 to check if a number is divisible by 4 or not,
 * especially in languages like C/C++. The idea is based on
 * following fact.
 *
 * A number is divisible by 4 if number formed by last two
 * digits of it is divisible by 4.
 */
bool isDivisible(string num, int n) {
    string lastTwoDigits;
    lastTwoDigits.push_back(num[n-2]);
    lastTwoDigits.push_back(num[n-1]);
    
    int numInt = stoi(lastTwoDigits);
    
    if(numInt % 4 == 0) {
        return true;
    }
    
    return false;
}

int main() {
    string num = "1124";
    int n = num.size();
    
    if(isDivisible(num, n)) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }
}
