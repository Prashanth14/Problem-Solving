// Write an algorithm to determine if a number n is happy.

// A happy number is a number defined by the following process:

// Starting with any positive integer, replace the number by the sum of the squares of its digits.
// Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
// Those numbers for which this process ends in 1 are happy.
// Return true if n is a happy number, and false if not.

// Example 1:

// Input: n = 19
// Output: true
// Explanation:
// 12 + 92 = 82
// 82 + 22 = 68
// 62 + 82 = 100
// 12 + 02 + 02 = 1
// Example 2:

// Input: n = 2
// Output: false
 

 class Solution {
public:
    int sumOfSquares(int num){
        int sum = 0, rem = 0;
        while(num){
            rem = num % 10;
            sum += rem * rem;
            num /= 10;
        }
        return sum;
    }
    bool isHappy(int num) {
        if(num == 1)
            return true;
        
        long dig_square_sum = sumOfSquares(num);
        if (dig_square_sum == 1)
            return true;
        
        while(dig_square_sum >1){
            dig_square_sum = sumOfSquares(dig_square_sum);

            if(dig_square_sum == 1)
                return true;
            if(dig_square_sum == 4)
                return false;
        }
        return false;
    }
};