// The array-form of an integer num is an array representing its digits in left to right order.

// For example, for num = 1321, the array form is [1,3,2,1].
// Given num, the array-form of an integer, and an integer k, return the array-form of the integer num + k.

// Example 1:

// Input: num = [1,2,0,0], k = 34
// Output: [1,2,3,4]
// Explanation: 1200 + 34 = 1234
// Example 2:

// Input: num = [2,7,4], k = 181
// Output: [4,5,5]
// Explanation: 274 + 181 = 455
// Example 3:

// Input: num = [2,1,5], k = 806
// Output: [1,0,2,1]
// Explanation: 215 + 806 = 1021



class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
       reverse(num.begin(), num.end());
        vector<int> sum;
        int i = 0, j = 0, carry = 0;
        
        while(i < num.size() || k > 0 || carry != 0){
            int val1 = 0, val2 = 0;
            if(i < num.size()){
                val1 = num[i++];
            }
            
            val2 = k % 10;
            k /= 10;
            int s = val1 + val2 + carry;
            sum.push_back( s % 10);
            carry = s / 10;
            
        }
        reverse(sum.begin(), sum.end());
        return sum;
    }
};