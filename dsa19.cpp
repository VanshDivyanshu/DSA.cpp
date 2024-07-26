/*
Problem statement
Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Increasing Number Triangle.

Example:
Input: ‘N’ = 3

Output: 

1
2 3
4 5 6

*/


//psuedocode


void nNumberTriangle(int n) {
    // Write your code here.
    int num =1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<< num<< " " ;
            num = num + 1;
        }
        cout<<endl;
    }
}