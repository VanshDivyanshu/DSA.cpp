/*
Problem statement
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Rotated Triangle.

Example:
Input: ‘N’ = 3

Output: 

*
**
***
**
*

*/

//psuedocode

void nStarTriangle(int n) {
    // Write your code here.
    for(int i =1; i<=2*n-1;i++){
        int stars = i;
        if(i>n){
            stars=2*n-i;
        }
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}