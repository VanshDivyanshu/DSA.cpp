/*

Q. Print 1 to n using backtracking

*/

#include <bits/stdc++.h>
using namespace std;

void f(int i, int n){
    if ( i < 1 ) return;
    f( i-1, n );
    cout<<i<< " ";
}

int main() {
    int n;
    cout<<"Enter :"<<endl;
    cin>>n;
    f(n, n);
    return 0;
}