/* 

Q. Print Name N times using Recursion

*/

#include <bits/stdc++.h>
using namespace std;

void f(int i, int n) {
    if ( i > n ) {
        return;
    }
    cout<<"Vansh"<<endl;
    f ( i + 1, n);
}

int main () {
    int n;
    cout<<"Enter the n value ?"<<endl;
    cin>>n;
    f(1, n);
    return 0;
}