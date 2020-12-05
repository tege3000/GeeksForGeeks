/*
 * Topic: Print reverse of a string using recursion
 *
 * Description: Write a recursive function to print
 * reverse of a given string.
 */
#include <iostream>
#include <vector>
using namespace std;

void reverse(string a, int index) {
    if(index == -1) {
        return;
    }
    cout << a[index];
    reverse(a, index-1);
}

int main() {
    string a = "Geeks for Geeks";
    reverse(a, a.size());
    cout << "\n";
    return 0;
}

