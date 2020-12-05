/*
 * Topic: Maximum segment value after putting k
 * breakpoints in a number
 *
 * Description: Given a large number as string s and
 * an integer k which denotes the number of breakpoints
 * we must put in the number k <= string length. The
 * task is to find maximum segment value after putting
 * exactly k breakpoints.
 */
#include <iostream>
using namespace std;

int getMaxSegmentValue(string s, int k) {
    string num;
    string tempMax;
    int maxNum = 0;
    for(int i = 0; i < s.size(); i++) {
        if((i) < k) {
            num.push_back(s[i]);
        }
        else if((i+1) % k) {
            tempMax = num;
            maxNum = max(maxNum, stoi(tempMax));
            num = "";
        }
        
    }
    
    return maxNum;
}

int main() {
    string s = "999";
    int k = 2;
    cout << getMaxSegmentValue(s, k) << "\n";
    
}
