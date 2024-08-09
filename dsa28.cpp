/*

Problem statement
Ninja has been given a task to print the required pattern and he asked for your help with the same.

You must print a matrix corresponding to the given number pattern.

Example:
Input: ‘N’ = 4

Output: 

4444444
4333334
4322234
4321234
4322234
4333334
4444444

*/


//psuedocode


void getNumberPattern(int n) {
    // Write your code here.
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            int top=i;
            int left=j;
            int right=(2*n - 2) - i;
            int down=(2*n -2) - j;
            cout<< (n -min(min(top,down),min(left,right)));
        }
        cout<<endl;
    }
}