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

    sort(v1.begin(), v1.end());

    for(int i = 0; i < n; i++) {
        cout << v1[i] << " ";
    }
    cout << "\n";

    return 0;
}
