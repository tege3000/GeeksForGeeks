/*
 * Topic: Smallest number with sum of digits as N and divisible by 10^N
 *
 * Description: Find the smallest number such that the sum of its digits
 * is N and it is divisible by 10^N.
 */
#include <iostream>
using namespace std;

string findSmallestNum(int n) {
    string res = "";
    int sum = 0;
    
    while(sum != n) {
        for(int i = 9; i >=0; i--) {
            if(i+sum <= n) {
                res.insert(0, to_string(i));
                sum += i;
                break;
            }
        }
    }
    
    for(int i = 0; i < n; i++) {
        res.push_back('0');
    }
    
    return res;
}

int main() {
    int n = 20;
    
    cout << findSmallestNum(n) << "\n";
}

