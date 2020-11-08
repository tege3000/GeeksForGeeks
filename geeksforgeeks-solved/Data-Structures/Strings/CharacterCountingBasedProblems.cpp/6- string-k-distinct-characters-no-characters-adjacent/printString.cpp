/*
 * Topic: String with k distinct characters and no same characters adjacent
 *
 * Description: Given N and K, print a string that has n characters. The
 * string should have exactly k distinct characters and no adjacent positions.
 */
#include <iostream>
using namespace std;

void printString(int n, int k) {
    int count = 0;
    string s;
    for(char i = 'a'; i <= 'z'; i++) {
        if(count == k) {
            break;
        }
        
        s.push_back(i);
        count++;
    }
    
    int start = 0;
    for(int i = k; i < n; i++) {
        s.push_back(s[start]);
        start++;
    }
    
    cout << s << endl;
    
}

int main() {
    int n = 5;
    int k = 2;
    
    printString(n, k);
}

