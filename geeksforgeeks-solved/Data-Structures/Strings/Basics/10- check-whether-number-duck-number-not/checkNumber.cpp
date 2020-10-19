/*
 * Topic:
 * Check Whether a number is Duck Number or not
 *
 * Description:
 * A Duck number is a positive number which has zeroes present
 * in it, For example 3210, 8050896, 70709 are all Duck numbers.
 * Please note that a numbers with only leading 0s is not
 * considered as Duck Number. For example, numbers like 035 or
 * 0012 are not considered as Duck Numbers. A number like 01203
 * is considered as Duck because there is a non-leading 0 present in it.
 */
#include <iostream>

using namespace std;

bool isDuckNumber(string num) {
    int n = num.size();
    int foundNonZeroNum = 0;
    int index = 0;
    for(int i = 0; i < n; i++) {
        if(num[i] != '0') {
            foundNonZeroNum = 1;
            index = i;
            break;
        }
    }
    
    for(int i = index+1; i < n; i++) {
        if(num[i] == '0') {
            return true;
        }
    }
    
    return false;
}

int main() {
    
    string num = "1023";
    
    if(isDuckNumber(num)) {
        cout << "It is a duck number.\n";
    }
    else {
        cout << "It is not a duck number.\n";
    }
    
    return 0;
}
