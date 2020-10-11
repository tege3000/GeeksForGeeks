#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n; 

    set <int> s1;
    int val, type;
    for(int i = 0; i < n; i++) {
        cin >> type;
        cin >> val;

        if(type == 1) {
            s1.insert(val);
        }
        else if(type == 2) {
            s1.erase(val);
        }
        else if(type == 3) {
            if(s1.find(val) != s1.end()) {
                cout << "Yes" << "\n";
            }
            else {
                cout << "No" << "\n";
            }
        }
    }  
    return 0;
}



