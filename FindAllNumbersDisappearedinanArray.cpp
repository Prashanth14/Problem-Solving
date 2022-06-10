// Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

// Example 1:

// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [5,6]
// Example 2:

// Input: nums = [1,1]
// Output: [2]
 

// Constraints:

// n == nums.length
// 1 <= n <= 105
// 1 <= nums[i] <= n


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n= nums.size();
        vector<int> ans;
       
        set<int> uniq_arr;
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i< nums.size(); i++){
            uniq_arr.insert(nums[i]);
        }
        
       
        int i = 1;
        if(uniq_arr.size() == 1 && *(uniq_arr.begin()) == 1 && uniq_arr.size() < n){
            for(int i = *(uniq_arr.begin()) +1 ; i <= n; i++){
                ans.push_back(i);
            }
        }else if(uniq_arr.size() == 1 && uniq_arr.size() < n){
             for(int i = 1 ; i <= n; i++){
                if(i != *(uniq_arr.begin())){
                    ans.push_back(i);
                }
                
            }
        }else{
            for(auto x:uniq_arr){
                while(i != x){
                    ans.push_back(i++);
                    
                }
               i++;
            }
            if(ans.size() != n - uniq_arr.size()){
                while(i<=n){
                ans.push_back(i);
                i++;
            }
            }
            
        }
        return ans;
    }
};