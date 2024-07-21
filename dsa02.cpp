/*
You don't need to read input or print anything. Your task is to complete the function compareNM() which takes two integer n and m as input parameters and returns string
'lesser' if n < m
'equal' if n == m
'greater' if n > m
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string compareNM(int n, int m){
        // code here
        if(n < m){
            return "lesser";
        }
        else if(n == m){
            return "equal";
        }else{
            return "greater";
        }
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m ; cin>>n>>m;
        Solution obj;
        cout<<obj.compareNM(n,m)<<"\n";
    }
    return 0;
}
