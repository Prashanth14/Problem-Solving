// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

// Example 1:

// Input: x = 123
// Output: 321
// Example 2:

// Input: x = -123
// Output: -321
// Example 3:

// Input: x = 120
// Output: 21
 

// Constraints:

// -231 <= x <= 231 - 1


class Solution {
public:
    int reverse(int x) {
        bool neg = false;
        long rev = 0;
        if(x <= INT_MIN || x >= INT_MAX){
            return 0;
        }else{
            x *= -1;
            neg = true;
        }
            
        while(x){
            rev = rev * 10 + (x % 10);
            if(rev >= INT_MAX || rev <= INT_MIN)
                return 0;
            x /= 10;
        }
        if(neg == true)
            rev *= -1;
        return rev >= INT_MAX || rev <= INT_MIN ? 0: rev;
    }
};