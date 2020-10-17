/*
 * Topic:
 * Program to check if input is an integer or a string *
 *
 * Description:
 * Write a function to check whether a given input is an integer or a string.
 *
 * In this context,
 * Definition of an integer :
 * Every element should be a valid digit, i.e '0-9'.
 *
 * Definition of a string :
 * Any one element should be an invalid digit, i.e any symbol other than '0-9'.
 */
#include <iostream>
using namespace std;

bool isInt(string in) {
    for(int i = 0; i < in.size(); i++) {
        if(ispunct(in[i]) || isalpha(in[i])) {
            return false;
        }
    }
    
    return true;
        
}

int main() {
    
    string str = "122B";
    
    if(isInt(str)) {
        cout << "Is an Integer" << "\n";
    }
    else {
        cout << "Is a String" << "\n";
    }
    
    
    return 0;
}
