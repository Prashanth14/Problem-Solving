// Given an integer array nums, return the greatest common divisor of the smallest number and largest number in nums.

// The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.

// Example 1:

// Input: nums = [2,5,6,9,10]
// Output: 2
// Explanation:
// The smallest number in nums is 2.
// The largest number in nums is 10.
// The greatest common divisor of 2 and 10 is 2.
// Example 2:

// Input: nums = [7,5,6,8,3]
// Output: 1
// Explanation:
// The smallest number in nums is 3.
// The largest number in nums is 8.
// The greatest common divisor of 3 and 8 is 1.
// Example 3:

// Input: nums = [3,3]
// Output: 3
// Explanation:
// The smallest number in nums is 3.
// The largest number in nums is 3.
// The greatest common divisor of 3 and 3 is 3.
 

// Constraints:

// 2 <= nums.length <= 1000
// 1 <= nums[i] <= 1000


class Solution {
public:
//     vector<int> minmax(vector<int>& nums){
//         int n = nums.size(), max, min, i = 0;
//         vector<int> ans;
//         if(n % 2 == 0){
//             if(nums[0] > nums[1]){
//                 max = nums[0];
//                 min = nums[1];
//             }else{
//                 max = nums[1];
//                 min = nums[0];
//             }
//             i = 2;
//         }else{
//             min = nums[0];
//             max = nums[0];
//             i = 1;
//         }
        
//         for(i; i < n-1; i += 2){
//             if(nums[i] < nums[i+1]){
//                 if(nums[i +1] > max){
//                     max = nums[i+1];
//                 }
//                 if(nums[i] < min){
//                     min = nums[i];
//                 }
//             }else{
//                 if(nums[i] > max){
//                     max = nums[i];
//                 }
//                 if(nums[i+1] < min){
//                     min = nums[i+1];
//                 }
//             }
//         }
//         ans.push_back(min);
//         ans.push_back(max);
//         return ans;
        
//     }
    
    int findGCD(vector<int>& nums) {
        // vector<int> min_max_vals = minmax(nums);
        // int min = min_max_vals[0];
        // int max = min_max_vals[1];
        
        int n = nums.size(), max, min, i = 0;
        vector<int> ans;
        if(n % 2 == 0){
            if(nums[0] > nums[1]){
                max = nums[0];
                min = nums[1];
            }else{
                max = nums[1];
                min = nums[0];
            }
            i = 2;
        }else{
            min = nums[0];
            max = nums[0];
            i = 1;
        }
        
        for(i; i < n-1; i += 2){
            if(nums[i] < nums[i+1]){
                if(nums[i +1] > max){
                    max = nums[i+1];
                }
                if(nums[i] < min){
                    min = nums[i];
                }
            }else{
                if(nums[i] > max){
                    max = nums[i];
                }
                if(nums[i+1] < min){
                    min = nums[i+1];
                }
            }
        }
        
        while(1){
            int rem = max % min;
            if(rem == 0)
                break;
            
            if(rem > min){
                max = rem;
            }else{
                max = min;
                min = rem;
            }
        }
        return min;
    }
};