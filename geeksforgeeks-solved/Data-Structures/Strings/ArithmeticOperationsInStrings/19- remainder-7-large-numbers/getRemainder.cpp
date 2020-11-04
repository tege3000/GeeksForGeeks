/*
 * Topic: Remainder with 7 for large numbers
 *
 * Description: Given a large number as a string,
 * find the remainder of number when divided by 7.
 */
#include <iostream>
#include <vector>
using namespace std;

int getRemainder(string num, vector <int> series) {
    int j = 0;
    int res = 0;
    int ans = 0;
    int isNumBigger = 0;
    reverse(num.begin(), num.end());
    
    for(int i = 0; i < num.size(); i++) {
        if(j >= series.size()) {
            j = 0;
            ans += res % 7;
            res = 0;
            isNumBigger = 1;
        }
        
        res += (num[i] - '0') * series[j];
        j++;
    }
    
    if(isNumBigger == 0) {
        ans = res % 7;
    }
    
    return ans;
}


int main() {
    vector<int> series = {1, 3, 2, -1, -3, -2};
    string num = "12345";
    
    cout << getRemainder(num, series) << "\n";
}
