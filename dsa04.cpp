/*
The n-th term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -

    F(n) = F(n - 1) + F(n - 2), 
    Where, F(1) = 1, F(2) = 1


Provided 'n' you have to find out the n-th Fibonacci Number. Handle edges cases like when 'n' = 1 or 'n' = 2 by using conditionals like if else and return what's expected.

"Indexing is start from 1"
*/


#include<iostream>
using namespace std;

int F(int n){
        if (n<=0){
                return 0;
        }
        else if (n==1||n==2){
                return 1;
        }
        else {
                return F(n-1) + F(n-2);
        }
}

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n;
        cin>>n;
        cout<<F(n)<<endl;
        
}