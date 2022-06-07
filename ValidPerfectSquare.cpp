// Given a positive integer num, write a function which returns True if num is a perfect square else False.

// Follow up: Do not use any built-in library function such as sqrt.

// Example 1:

// Input: num = 16
// Output: true
// Example 2:

// Input: num = 14
// Output: false
 

// Constraints:

// 1 <= num <= 2^31 - 1

class Solution {
public:
    bool isPerfectSquare(int num) {
        int l = 0, h = num;
        while(l <= h){
            long int mid = (l + h)/2;
            if(mid * mid == num){
                return true;
            }else if(mid * mid < num){
                l = mid +1;
            }else{
                h = mid -1;
            }
        }
        return false;
    }
};