#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> permutation;
    int n = 4;

    for (int i = 0; i < n; i++) {
        permutation.push_back(i+1);
    }
    do {
        // process permutation
        for(int i = 0; i < n; i++) {
            cout << permutation[i] << " ";
        }
        cout << endl;

    } while (next_permutation(permutation.begin(),permutation.end()));

}


