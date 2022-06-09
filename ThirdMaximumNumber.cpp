// Given an integer array nums, return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.

// Example 1:

// Input: nums = [3,2,1]
// Output: 1
// Explanation:
// The first distinct maximum is 3.
// The second distinct maximum is 2.
// The third distinct maximum is 1.
// Example 2:

// Input: nums = [1,2]
// Output: 2
// Explanation:
// The first distinct maximum is 2.
// The second distinct maximum is 1.
// The third distinct maximum does not exist, so the maximum (2) is returned instead.
// Example 3:

// Input: nums = [2,2,3,1]
// Output: 1
// Explanation:
// The first distinct maximum is 3.
// The second distinct maximum is 2 (both 2's are counted together since they have the same value).
// The third distinct maximum is 1.
 

// Constraints:

// 1 <= nums.length <= 104
// -231 <= nums[i] <= 231 - 1



class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        //if size of the array is  less than 3
        if(nums.size() < 3){
            return nums[nums.size()-1];
        }
        //If the size of the array is equal to 3
        if(nums.size() == 3){
            if(nums[0] == nums[1] || nums[1] == nums[2])
                return nums[nums.size()-1];
            else
                return nums[0];
        }
        
        // if the array size is greater than 3
        int n = nums.size(), count = 1;
        int max = nums[nums.size()-1];
        for(int i = n-2; i >= 0; i--){
            if( nums[i] == max )
                continue;
            else{
                max = nums[i];
                count++;
                if(count == 3){
                    break;
                }   
            }    
        }
        if(count != 3)
            return nums[nums.size()-1];
        return max;
    }
};
