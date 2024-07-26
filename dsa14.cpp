/*
Problem statement
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the Reverse N-Star Triangle.

Example:
Input: ‘N’ = 3

Output: 

*****
 ***
  *
*/

//psuedocode

void nStarTriangle(int n) {
    // Write your code here.
    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        
        //stars
        for(int j=0;j<2*n-(2*i+1); j++){
            cout<<"*";
        }

        //spaces
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}