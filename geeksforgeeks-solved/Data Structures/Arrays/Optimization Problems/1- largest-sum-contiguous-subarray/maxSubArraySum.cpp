/*
 * Topic: Largest Sum Contiguous Subarray
 *
 *
 * Description: Write an efficient program to find the sum
 * of contiguous subarray within a one-dimensional array of
 * numbers which has the largest sum.are required to find
 * the sum of every query range.
 */
#include <iostream>

using namespace std;

int maxSubArraySum(int a[], int n) {
    int max_ending_here = 0;
    int max_so_far = 0;
    for(int i = 0; i < n; i++) {
        max_ending_here += a[i];
        max_ending_here = max(max_ending_here+a[i], 0);
        max_so_far = max(max_so_far, max_ending_here);
    }
    return max_so_far;
}

int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum << endl;
    return 0;
}
