#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int n; // number of arrays
    int q; // number of queries

    scanf("%d %d", &n, &q);

    int k; // variable length of arrays
    int val;
    vector<vector<int>> outerVec; // vector of vectors to store the different arrays

    for(int i = 0; i < n; i++) {
        scanf("%d", &k);

        vector <int> innerVector;

        for(int i = 0; i < k; i++) {
            cin >> val;
            innerVector.push_back(val); 
        }

        outerVec.push_back(innerVector);   
    }

    int index_i;
    int index_j;

    //for each query
    for(int i = 0; i < q; i++) {
        scanf("%d %d", &index_i, &index_j);

        cout << outerVec.at(index_i).at(index_j) << endl;
        
    }

   return 0;

}
