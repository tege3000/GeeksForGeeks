#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    vector<int> v1; 
    int val;
    for(int i = 0; i < n; i++) {
        cin >> val;
        v1.push_back(val);
    }

    int pos1_start, pos2_start, pos2_end;
    cin >> pos1_start;
    cin >> pos2_start >> pos2_end;

    v1.erase(v1.begin()+pos1_start-1);
    v1.erase(v1.begin()+pos2_start-1, v1.begin()+pos2_end-1);

    cout << v1.size() << "\n";
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << "\n";
    return 0;
}
