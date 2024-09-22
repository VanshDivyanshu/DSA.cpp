/*

Problem Statement:

LEFT ROTATE AN ARRAY BY 1 PLACE

*/


// psuedocode


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        temp = nums[0];
        n = nums.size();
        for ( int i = 1; i < n ; i++ ) {
            nums[ i - 1 ] = nums [ i ];
        }   
        nums [ n - 1 ] = temp;
    }
};