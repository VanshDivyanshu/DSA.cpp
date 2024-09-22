/*

Problem Statement:

MOVE ZEROES TO END

*/


// psuedocode


class Solution {
public:
    void moveZeroes(vector<int>& a) {
        vector<int> temp;
        int n = a.size();
        for( int i = 0; i<n;i++){
            if(a[i]!= 0) temp.push_back(a[i]);
        }

        int nz = temp.size();
        for ( int i = 0; i<nz; i++){
            a[i] = temp[i];
        }
        
        for ( int i = nz; i<n; i++){
            a[i] = 0;
        }
     
    }
};