/*

Problem Statement:

Given an integer x, return true if x is a palindrome, and false otherwise.

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

*/



// pseudocode

class Solution {
public:
    bool isPalindrome(int x) {
        int revN = 0;
        int ld;
        int dup = x;
        int y = x;
        while (x > 0 ) {
            ld = x % 10;
            revN = (revN*10) + ld;
            x = x/10;
        }
        while (y<0) {
            ld = y % 10;
            revN = (revN*10)- + ld;
            y = y/10;
        }
        if (dup == revN) {
            return true;
        }
        else {
            return false;
        }
    }
};