/*
 * Topic: Minimum sum of squares of character counts in a
 * given string after removing k characters
 *
 * Description: Given a string of lowercase alphabets and
 * a number k, the task is to print the minimum value of
 * the string after removal of ‘k’ characters. The value of
 * a string is defined as the sum of squares of the count of
 * each distinct character. For example consider the string
 * “saideep”, here frequencies of characters are s-1, a-1,
 * i-1, e-2, d-1, p-1 and value of the string is 1^2 + 1^2 +
 * 1^2 + 1^2 + 1^2 + 2^2 = 9.
 *
 * Expected Time Complexity: O(k*logn)
 */
#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

bool comp(pair<char, int> l, pair<char, int> r) {
    return l.second < r.second;
}

int minSumOfSquares(string s, int k) {
    sort(s.begin(), s.end());
    vector<pair<char, int>> v1;
    int count = 1;
    for(int i = 0; i < s.size()-1; i++) {
        if(s[i] == s[i+1]) {
            count++;
            
            // to handle a case like "aabbccc"
            if(i == s.size()-2) {
                pair <char, int> p1 = make_pair(s[i], count);
                v1.push_back(p1);
            }
        }
        else {
            pair <char, int> p1 = make_pair(s[i], count);
            v1.push_back(p1);
            count = 1;
            
            // to handle a case like "aabbccd"
            if(i == s.size()-2) {
                pair <char, int> p1 = make_pair(s[i+1], count);
                v1.push_back(p1);
            }
        }
    }
    
    sort(v1.begin(), v1.end(), comp);
    string nS;
    for(auto i : v1) {
        for(int j = 0; j < i.second; j++) {
            nS.push_back(i.first);
        }
    }
    
    nS.erase(nS.size()-k);
    
    int sum = 0;
    count = 1;
    for(int i = 0; i < nS.size()-1; i++) {
        if(nS[i] == nS[i+1]) {
            count++;
            if(i == nS.size()-2) {
                sum += pow(count, 2);
            }
        }
        else {
            sum += pow(count, 2);
            count = 1;
            
            if(i == nS.size()-2) {
                sum += pow(count, 2);
            }
            
        }
    }
    
    return sum;
}

int main() {
    string s = "abccc";
    int k = 1;
    
    cout << minSumOfSquares(s, k) << "\n";
}
