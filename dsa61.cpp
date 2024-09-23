/*

Given an array arr[] sorted in ascending order of size N and an integer K. Check if K is present in the array or not.


Example 1:

Input:
N = 5, K = 6
arr[] = {1,2,3,4,6}
Output: 1
Exlpanation: Since, 6 is present in 
the array at index 4 (0-based indexing),
output is 1.
 

Example 2:

Input:
N = 5, K = 2
arr[] = {1,3,4,5,6}
Output: -1
Exlpanation: Since, 2 is not present 
in the array, output is -1.

*/



#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int searchInSorted(int arr[], int N, int K) {
        int count = -1;
        for ( int i = 0; i<N; i++ ){
            if ( arr[i] == K ){
                count = 1;
            }
        }
        return count;
    }
};

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;
    }
    return 0;
}
