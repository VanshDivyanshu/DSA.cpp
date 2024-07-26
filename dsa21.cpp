/*
Problem statement
Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Increasing Letter Triangle.

Example:
Input: ‘N’ = 3

Output: 

A
A B
A B C

*/

//psuedocode


void nLetterTriangle(int n) {
    // Write your code here.
    for(int i=0; i<n; i++){
        for(char ch='A'; ch<='A'+i; ch++){
            cout<< ch << " ";
        }
        cout<<endl;
    }
}