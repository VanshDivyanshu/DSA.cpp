/*

Problem Statement:

Given a number n. Count the number of digits in n which evenly divide n. Return an integer, total number of digits of n which divides n 
evenly.


Examples :

Input: n = 12
Output: 2
Explanation: 1, 2 when both divide 12 leaves remainder 0.

Input: n = 2446
Output: 1
Explanation: Here among 2, 4, 6 only 2 divides 2446 evenly while 4 and 6 do not.

Input: n = 23
Output: 0
Explanation: 2 and 3, none of them divide 23 evenly.

*/


#include<bits/stdc++.h> 
using namespace std;

class Solution{
public:
    int evenlyDivides(int N){
        int count=0;
        int temp=N;
        while(N!=0){
            int d = N%10;
            if(d!=0 && temp%d==0){
                count++;
            }
            N=N/10;
        }
        return count;
        
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
