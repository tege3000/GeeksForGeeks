#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    int el;
    char comma;
    vector <int> result;

    while(ss >> el) {
        result.push_back(el);
        ss >> comma;
    }
    
  

    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
