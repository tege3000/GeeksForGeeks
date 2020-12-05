/*
 * Topic: Decimal representation of given binary string is divisible
 * by 5 or not
 *
 * Description: The problem is to check whether the decimal
 * representation of the given binary number is divisible by 5 or not.
 * Take care, the number could be very large and may not fit even in
 * long long int. The approach should be such that there are zero or
 * minimum number of multiplication and division operations. No leading
 * 0’s are there in the input.
 */
#include <iostream>
#include <math.h>
using namespace std;

bool divisibleBy5(string num, int n) {
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
    
    if((sumEvenPlaces-sumOddPlaces) % 5 == 0) {
        return true;
    }
    
    return false;
}

string isDecNumDivisibleBy5(string num) {
    string base10Num = "";
    string c;
    int conv = 0;
    int sum = 0;
    
    for(int i = num.size()-1; i >= 0; i--) {
        if(num[i] == '1') {
            c = num[i];
            conv = stoi(c) * pow(2, (num.size()-1) - i);
            sum += conv;
        }
    }
    
    int res = sum, rem;
    string remS = "";
    
    while(res != 0) {
        cout << "here" << endl;
        rem = res % 5;
        res /= 5;
        
        cout << res << " " << rem << "\n";
        
        string r = to_string(rem);
        cout << r << endl;
        
        remS.insert(0, r);
    }
    
    cout << remS << endl;
    
    if(divisibleBy5(remS, remS.size())) {
        return "YES";
    }
    
    return "NO";
}


int main() {
    string s = "1010";
    cout << isDecNumDivisibleBy5(s) << "\n";
}
