/*

Q. Print n to 1 using backtracking

*/

#include <bits/stdc++.h>
using namespace std;

void f(int n, int i){
    if ( n < i ) return;
    f( n, i+1 );
    cout<<i<< " ";
}

int main() {
    int n;
    cout<<"Enter :"<<endl;
    cin>>n;
    f(n ,1);
    return 0;
}