/*
 * Topic: Shuffle a given array using Fisher–Yates shuffle Algorithm
 *
 * Description: Given an array, write a program to generate
 * a random permutation of array elements. This question is
 * also asked as “shuffle a deck of cards” or “randomize a given array”.
 * Here shuffle means that every permutation of array element should
 * equally likely.
 */

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

/*
 * Idea behind fisher-yates randomize algorithm:
 *
 * The idea is to start from the last element, swap it
 * with a randomly selected element from the whole array
 * (including last). Now consider the array from 0 to n-2
 * (size reduced by 1), and repeat the process till we hit
 * the first element.
 */
void randomizeArr(int arr[], int n) {
    srand(time(NULL));
    
    for(int i = n-1; i > 0; i--) {
        int randomIndex = rand() % (i+1);
        
        swap(&arr[i], &arr[randomIndex]);
    }
}

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int arr[] =  {2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    randomizeArr(arr, n);
    printArr(arr, n);
}

