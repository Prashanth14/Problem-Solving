// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.

 

// Example 1:

// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]
// Example 2:

// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]
 

// Constraints:

// 2 <= nums.length <= 105
// -30 <= nums[i] <= 30
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
 

// Follow up: Can you solve the problem in O(1) extra space complexity? (The output array does not count as extra space for space complexity analysis.)


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(), l2r_mul = 1, r2l_mul = 1;
        vector<int> res(n,1);
        for(int i = 0; i< n; ++i){
            //left to right product
            res[i] = res[i] * l2r_mul;
            l2r_mul = l2r_mul * nums[i];
            
            //right to left multiplication
            res[n - i - 1] = res[n - i - 1] * r2l_mul;
            r2l_mul = r2l_mul * nums[n - i -1];
        }
        return res;
    }
};