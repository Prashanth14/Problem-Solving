// Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

// Example 1:

// Input: nums = [1,1,1,2,2,3], k = 2
// Output: [1,2]
// Example 2:

// Input: nums = [1], k = 1
// Output: [1]
 

// Constraints:

// 1 <= nums.length <= 105
// k is in the range [1, the number of unique elements in the array].
// It is guaranteed that the answer is unique.


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        set<pair<int,int>> s;
        map<int, int> mp;
        
        for(auto num:nums){
            mp[num]++;
        }
        
        for(auto m:mp){
            s.insert({-m.second,m.first});
        }
        
        vector<int> ans;
        for(auto it:s){
            ans.push_back(it.second);
            if(ans.size() == k)
                break;
        }
        return ans;
    }
};
