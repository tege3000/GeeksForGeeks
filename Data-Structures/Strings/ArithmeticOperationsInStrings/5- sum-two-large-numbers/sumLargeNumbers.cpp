/*
 * Topic: Sum of two large numbers
 *
 * Description: Given two numbers as strings.
 * The numbers may be very large (may not fit in
 * long long int), the task is to find sum of
 * these two numbers.
 */
#include <iostream>
using namespace std;
string sumLargeNumbers(string str1, string str2) {
    string res;
    
    int maxLen = max(str1.size(), str2.size());
    
    string zeros;
    for(int i = 0; i < (maxLen - str2.size()); i++) {
        zeros.push_back('0');
    }
    
    if(str1.size() < str2.size()) {
        str1.insert(0, zeros);
    }
    else if(str1.size() > str2.size()) {
        str2.insert(0, zeros);
    }
    
    string sumStr;
    string a, b;
    int sum;
    int carry = 0;
    char numSum;
    for(int i = maxLen - 1; i >= 0; i--) {
        a = str1[i];
        b = str2[i];
        sum = stoi(a) + stoi(b) + carry;
        
        sumStr = to_string(sum);
        if(sumStr.size() > 1) {
            string x, y;
            
            x = sumStr[0];
            y = sumStr[1];

            numSum = '0' + stoi(y);
            carry = stoi(x);
        }
        else {
            numSum = '0' + sum;
            carry = 0;
        }
        
        res.push_back(numSum);
    }

    reverse(res.begin(), res.end());
    return res;
}

int main() {
//    string str1 = "3333311111111111", str2 = "44422222221111";
    string str1 = "7777555511111111", str2 = "3332222221111";
    
    cout << sumLargeNumbers(str1, str2) << "\n";
}
