/*
 * Topic: Given a sorted dictionary of an alien language,
 * find order of characters
 *
 * Description: Given a sorted dictionary (array of words)
 * of an alien language, find order of characters in the language.
 */
#include <iostream>
#include <vector>
using namespace std;

void printOrder(vector<string> arr, int n) {
    vector<char> sorted;
    for(int i = 0; i < arr.size()-1; i++) {
        for(int j = 0; j < arr.size(); j++) {
            if(arr[i][j] < arr[i+1][j]) {
                if((find(sorted.begin(), sorted.end(), arr[i+1][j]) != sorted.end())) {
                    sorted.insert(sorted.begin()+distance(sorted.begin(), find(sorted.begin(), sorted.end(), arr[i+1][j]))+1, arr[i][j]);
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
    printOrder(words, 3);
    return 0;
}

