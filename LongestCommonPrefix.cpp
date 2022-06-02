// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

 

// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min = 1000, count = 0;
        string min_str;
        for(int i = 0; i < strs.size(); i++){
            if(strs[i].length() < min){
                min = strs[i].length();
                min_str = strs[i];
            }
        }
        
        for(int i = 0; i < min; i++){
            for(int j = 0; j < strs.size(); j++){
                if(strs[j][i] != min_str[i]){
                    return min_str.substr(0, count);
                }
            }
            count++;
        }
        return min_str.substr(0, count);
    }
};