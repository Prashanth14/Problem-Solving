// Given an integer array nums of size n, return the number with the value closest to 0 in nums. If there are multiple answers, return the number with the largest value.

 

// Example 1:

// Input: nums = [-4,-2,1,4,8]
// Output: 1
// Explanation:
// The distance from -4 to 0 is |-4| = 4.
// The distance from -2 to 0 is |-2| = 2.
// The distance from 1 to 0 is |1| = 1.
// The distance from 4 to 0 is |4| = 4.
// The distance from 8 to 0 is |8| = 8.
// Thus, the closest number to 0 in the array is 1.
// Example 2:

// Input: nums = [2,-1,1]
// Output: 1
// Explanation: 1 and -1 are both the closest numbers to 0, so 1 being larger is returned.
 

// Constraints:

// 1 <= n <= 1000
// -105 <= nums[i] <= 105

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n = nums.size();
        if(n == 1 && nums[0] == 0) return nums[0];
        vector<int> neg;
        vector<int> pos;
       
        for(int i = 0; i < n; ++i){
            if(nums[i] < 0)
                neg.push_back(nums[i]);
            else
                pos.push_back(nums[i]);
                
        }
        
        sort(neg.begin(), neg.end());
        sort(pos.begin(), pos.end());
        if(neg.size() != 0 && pos.size() != 0){
            if(neg[neg.size()-1]*-1 >= pos[0])
                return pos[0];
        }
        if(neg.size() == 0 && pos.size() != 0)
            return pos[0];
        
        return neg[neg.size()-1];
    }
};