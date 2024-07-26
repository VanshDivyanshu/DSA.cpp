/*
Problem statement
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Triangle.

Example:
Input: ‘N’ = 3

Output: 

  *
 ***
*****
*/

//psuedocode

void nStarTriangle(int n) {
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

}