/*

Problem statement
Sam is curious about symmetric patterns, so he decided to create one.

For every value of ‘N’, return the symmetry as shown in the example.

Example:
Input: ‘N’ = 3

Output: 
*         *
* *     * *
* * * * * *
* *     * *
*         *

*/

//psuedocode

void symmetry(int n) {
    // Write your code here
    /*int spaces=2*n-2;
    for(int i=1; i<=2*n-1; i++){
        int stars = i;
        if(i>n) stars=2*n - i;
        //stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        //spaces
        for(int j=1; j<=spaces; j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n) spaces -=2;
        else spaces+=2;
    }*/

    for(int i=n-1;i>=0;i--){

        for(int j=0;j<n-i;j++){

            cout<<"* ";

        }

        for(int j=0;j<4*i;j++){

            cout<<" ";

        }

        for(int j=0;j<n-i;j++){

            cout<<"* ";

        }

        cout<<endl;

    }

    for(int i=1;i<n;i++){

        for(int j=0;j<n-i;j++){

            cout<<"* ";

        }

        for(int j=0;j<4*i;j++){

            cout<<" ";

        }

        for(int j=0;j<n-i;j++){

            cout<<"* ";

        }

        cout<<endl;

    }


}