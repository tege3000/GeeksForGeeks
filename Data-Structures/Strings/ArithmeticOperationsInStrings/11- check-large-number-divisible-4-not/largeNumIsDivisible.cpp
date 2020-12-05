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
 * IDEA: 
 * Since input number may be very large, we cannot use
 * n % 4 to check if a number is divisible by 4 or not,
 * especially in languages like C/C++. The idea is based on
 * following fact.
 *
 * A number is divisible by 4 if number formed by last two
 * digits of it is divisible by 4.
 * 
 * HOW IT WORKS:
 * Let us consider 76952, we can write it as
 * 76942 = 7*10000 + 6*1000 + 9*100 + 5*10 + 2
 * 
 * The proof is based on below observation:
 * Remainder of 10i divided by 4 is 0 if i greater than or equal 
 * to two. Note than 100, 1000, ... etc lead to remainder 0 when
 *  divided by 4.
 * 
 * So remainder of "7*10000 + 6*1000 + 9*100 + 
 * 5*10 + 2" divided by 4 is equivalent to remainder 
 * of following : 
 * 0 + 0 + 0 + 5*10 + 2 = 52
 * Therefore we can say that the whole number is 
 * divisible by 4 if 52 is divisible by 4.
 */
bool largeNumDivisibleBy4(string num, int n) {
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
    
    if(largeNumDivisibleBy4(num, n)) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }
}
