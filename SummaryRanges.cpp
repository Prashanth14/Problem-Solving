// You are given a sorted unique integer array nums.

// A range [a,b] is the set of all integers from a to b (inclusive).

// Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.

// Each range [a,b] in the list should be output as:

// "a->b" if a != b
// "a" if a == b
 
// Example 1:

// Input: nums = [0,1,2,4,5,7]
// Output: ["0->2","4->5","7"]
// Explanation: The ranges are:
// [0,2] --> "0->2"
// [4,5] --> "4->5"
// [7,7] --> "7"
// Example 2:

// Input: nums = [0,2,3,4,6,8,9]
// Output: ["0","2->4","6","8->9"]
// Explanation: The ranges are:
// [0,0] --> "0"
// [2,4] --> "2->4"
// [6,6] --> "6"
// [8,9] --> "8->9"
 

// Constraints:

// 0 <= nums.length <= 20
// -231 <= nums[i] <= 231 - 1
// All the values of nums are unique.
// nums is sorted in ascending order.



class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> output;
        //If input vectot is empty then return empty string vector
        if(nums.size()==0)
            return output;
        
        //check for nums size = 1
        string str ="";
        if(nums.size()==1){
            str = to_string(nums[0]);
            output.push_back(str);
            
            return output;
        }
        
        // check for nums size = 2
        if( nums.size() == 2 && nums[1] == nums[0]+1){
            str = str+ to_string(nums[0]) + '-' + '>' + to_string(nums[1]);
            output.push_back(str);
            return output;
        }else if(nums.size() == 2 && nums[1] != nums[0]+1){
            str = str+ to_string(nums[0]);
            output.push_back(str);
            str="";
            str = str+ to_string(nums[1]);
            output.push_back(str);
            return output;                      
        }
            

        int first, last;
        first = nums[0];
        
        
        for(int i = 1; i< nums.size(); i++){
            if(nums[i] == nums[i-1]+1 ){
                if(i+1 == nums.size()){
                    str = str + to_string(first) + '-' + '>' + to_string(nums[i]);
                    output.push_back(str);
                }
                continue;
            }else{
                last = nums[i-1];
                // if first and last value are positive
                if(first != last){
                    str = str + to_string(first) + '-' + '>' + to_string(last);
                }else{
                    str = str + to_string(first);
                }
                output.push_back(str);
                
                str = "";
                first = nums[i];
                if(i+1 == nums.size()){
                    str = str + to_string(first);
                    output.push_back(str);
                    i++;
                } 
            }
        }
        return output;
    }
};


