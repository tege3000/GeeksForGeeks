/*
 * Topic: Given a sorted dictionary of an alien language,
 * find order of characters
 *
 * Description: Given a sorted dictionary (array of words)
 * of an alien language, find order of characters in the language.
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printOrder(vector<string> arr) {
    vector<char> sorted;
    int maxLen = 0;
    for(int i = 0; i < arr.size(); i++) {
        int len = arr[i].size();
        maxLen = max(len, maxLen);
    }
    
    for(int i = 0; i < arr.size()-1; i++) {
        for(int j = 0; j < arr.size(); j++) {
            if(arr[i][j] != arr[i+1][j]) {
                if(sorted.size() == maxLen) {
                    int pos1 = distance(sorted.begin(), find(sorted.begin(), sorted.end(), arr[i][j]));
                    int pos2 = distance(sorted.begin(), find(sorted.begin(), sorted.end(), arr[i+1][j]));
                    
                    if(pos1 > pos2) {
                        swap(sorted[pos1], sorted[pos2]);
                    }
                }
                else if((find(sorted.begin(), sorted.end(), arr[i+1][j]) != sorted.end())) {
                    sorted.insert(sorted.begin()+distance(sorted.begin(), find(sorted.begin(), sorted.end(), arr[i+1][j])), arr[i][j]);
                }
                else if((find(sorted.begin(), sorted.end(), arr[i][j]) != sorted.end())) {
                    sorted.insert(sorted.begin()+distance(sorted.begin(), find(sorted.begin(), sorted.end(), arr[i][j]))+1, arr[i+1][j]);
                }
                else {
                    sorted.push_back(arr[i][j]);
                    sorted.push_back(arr[i+1][j]);
                }
                
                break;
            }
        }
    }
    
    for(int i = 0; i < sorted.size(); i++) {
        cout << sorted[i] << " ";
    }
    
    cout << "\n";
}

int main() {
    vector<string> words = {"baa", "abcd", "abca", "cab", "cad"};
    printOrder(words);
    
    vector<string> words2 = {"caa", "aaa", "aab"};
    printOrder(words2);
    
    return 0;
}

