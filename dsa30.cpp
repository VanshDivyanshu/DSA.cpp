/*

Problem Statement:

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21

*/



// psuedocode


class Solution {
public:
    int reverse(int x) {
        int revN = 0;
        int ld;
        while (x > 0 || x<0) {
            ld = x % 10;
            revN = (revN*10) + ld;
            x = x/10;
        }
        return revN;
    }
};