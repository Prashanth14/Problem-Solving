// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.

 

// Example 1:

// Input: nums = [1,3,5,6], target = 5
// Output: 2
// Example 2:

// Input: nums = [1,3,5,6], target = 2
// Output: 1
// Example 3:

// Input: nums = [1,3,5,6], target = 7
// Output: 4


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, h = nums.size(), m;
        if(nums[h-1] < target)
            return h;
        
        while(l <= h){
            m = (l+h)/2;
            if(nums[m] == target){
                return m;
                break;
            }else if(nums[m] < target){
                l = m+1;
            }else if(nums[m] > target){
                h = m-1;
            }
        }
       return l;
    }
};