
/*
 * Topic: Check if a large number is divisible by 11 or not
 *
 * Description: Given a number, the task is to check if the
 * number is divisible by 11 or not. The input number may be
 * large and it may not be possible to store it even if we
 * use long long int.
 */
#include <iostream>
using namespace std;
/*
 * IDEA:
 * Since input number may be very large, we cannot use
 * n % 11 to check if a number is divisible by 11 or not,
 * especially in languages like C/C++. The idea is based on
 * following fact.
 *
 * A number is divisible by 11 if difference of following two
 * is divisible by 11.
 *
 * 1. Sum of digits at odd places.
 * 2. Sum of digits at even places.
 *
 * HOW IT WORKS:
 * Let us consider 7694, we can write it as
 * 7694 = 7*1000 + 6*100 + 9*10 + 4
 *
 * The proof is based on below observation:
 * Remainder of 10i divided by 11 is 1 if i is even
 * Remainder of 10i divided by 11 is -1 if i is odd
 *
 * So the powers of 10 only result in values either 1
 * or -1.
 *
 * Remainder of "7*1000 + 6*100 + 9*10 + 4"
 * divided by 11 can be written as :
 * 7*(-1) + 6*1 + 9*(-1) + 4*1
 *
 * The above expression is basically difference
 * between sum of even digits and odd digits.
 *
 */
bool largeNumDivisibleBy4(string num, int n, int k) {
    string numS;
    int sumEvenPlaces = 0;
    int sumOddPlaces = 0;
    for(int i = 0; i < n; i++) {
        numS = num[i];

        if(i % 2 == 0) {
            sumEvenPlaces += stoi(numS);
        }
        else {
            sumOddPlaces += stoi(numS);
        }
    }
    
    if((sumEvenPlaces-sumOddPlaces) % 11 == 0) {
        return true;
    }
    
    return false;
}

int main() {
    string num = "1234567589333892";
    int n = num.size();
    int k = 11;
    
    if(largeNumDivisibleBy4(num, n, k)) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }
}
