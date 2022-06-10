// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

// Example 1:

// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2]
// Example 2:

// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [9,4]
// Explanation: [4,9] is also accepted.
 

// Constraints:

// 1 <= nums1.length, nums2.length <= 1000
// 0 <= nums1[i], nums2[i] <= 1000


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> n1;
        set<int> n2;
        vector<int> ans;
        for(int i = 0; i < nums1.size(); i++){
            n1.insert(nums1[i]);
        }
         for(int i = 0; i < nums2.size(); i++){
            n2.insert(nums2[i]);
        }
        set<int>::iterator itr1, itr2;
        itr1 = n1.begin(), itr2 = n2.begin();
        while(itr1 != n1.end() && itr2 != n2.end()){
            if(*itr1 == *itr2){
                ans.push_back(*itr1);
                itr1++;
                itr2++;
            }else if(*itr1 > *itr2){
                itr2++;
            }else{
                itr1++;
            }
            
        }
       return ans;
    }
};