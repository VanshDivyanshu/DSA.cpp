/*

Problem statement
Sam is curious about symmetric patterns, so he decided to create one.

For every value of ‘N’, return the symmetry as shown in the example.

Example:
Input: ‘N’ = 3

Output: 
* * * * * * 
* *     * * 
*         * 
*         * 
* *     * * 
* * * * * * 

*/


//psuedocode

void symmetry(int n) {
/*
    // Write your code here.
    int iniS=0;
    for(int i=0; i<n; i++){
        //stars
        for(int j=1; j<=n-i; j++){
            cout<< "*";
        }
        //spaces
        for(int j=0; j<iniS; j++){
            cout<< " ";
        }
        //stars
        for(int j=1; j<=n-i; j++){
            cout<< "*";
        }
        iniS +=2;
        cout<<endl;
    }
    iniS=8;
    for(int i=1; i<=n; i++){
        //stars
        for(int j=1; j<=i; j++){
            cout<< "*";
        }
        //spaces
        for(int j=0; j<iniS; j++){
            cout<< " ";
        }
        //stars
        for(int j=1; j<=i; j++){
            cout<< "*";
        }
        iniS -=2;
        cout<<endl;
    }
*/
for(int i=0;i<2*n;i++)

{
    if(i<n){
    for(int j=n;j>i;j--){
        cout<<"* ";
    }
    for(int j=0;j<i;j++){
        cout<<"   ";
    }
    for(int j=n;j>i;j--){
        cout<<"* ";
    }
    cout<<endl;
    }
    int l=n-1;
    if(i>=n){
        for(l;l<i;l++){
        cout<<"* ";
    }
    for(int j=2*n;j>i+1;j--){
        cout<<"   ";
    }
    int l=n-1;
    for(l;l<i;l++){
        cout<<"* ";

    }
    cout<<endl;
    }
}
}