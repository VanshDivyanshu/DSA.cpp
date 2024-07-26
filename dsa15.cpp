/*
Problem statement
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Diamond.

Example:
Input: ‘N’ = 3

Output: 

  *
 ***
*****
*****
 ***
  *
*/

//psuedocode

void nStarDiamond(int n) {
    // Write your code here.
    for(int i = 0; i <n;i++){
        //Space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //Stars
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        //Space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
          cout<<endl;
    }
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