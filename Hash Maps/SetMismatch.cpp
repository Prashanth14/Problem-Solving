// You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

// You are given an integer array nums representing the data status of this set after the error.

// Find the number that occurs twice and the number that is missing and return them in the form of an array.

// Example 1:

// Input: nums = [1,2,2,4]
// Output: [2,3]
// Example 2:

// Input: nums = [1,1]
// Output: [1,2]
 

// Constraints:

// 2 <= nums.length <= 104
// 1 <= nums[i] <= 104


class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> res;
        int n = nums.size();
        for(int i = 0; i < n; ++i){
            mp[nums[i]]++;
        }
        
        for(auto x : mp){
            if(x.second > 1){
                res.push_back(x.first);
            }
        }
        for(int i=1;i<=nums.size();i++){
            if(mp[i]==0)
                res.push_back(i);
        }   
        return res;
    }
};