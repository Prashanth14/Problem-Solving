// Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

// Example 1:

// Input: num = 38
// Output: 2
// Explanation: The process is
// 38 --> 3 + 8 --> 11
// 11 --> 1 + 1 --> 2 
// Since 2 has only one digit, return it.
// Example 2:

// Input: num = 0
// Output: 0
 

// Constraints:

// 0 <= num <= 231 - 1


class Solution {
public:
    int sum(int num){
        int sum = 0;
        while(num){
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
    int addDigits(int num) {
        long dig_sum = sum(num);
        while(dig_sum > 9){
            dig_sum = sum(dig_sum);
            if(dig_sum < 9)
                break;
        }
            
        return dig_sum;
    }
};
