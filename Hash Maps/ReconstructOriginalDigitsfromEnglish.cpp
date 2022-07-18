// Given a string s containing an out-of-order English representation of digits 0-9, return the digits in ascending order.

// Example 1:

// Input: s = "owoztneoer"
// Output: "012"
// Example 2:

// Input: s = "fviefuro"
// Output: "45"
 

// Constraints:

// 1 <= s.length <= 105
// s[i] is one of the characters ["e","g","f","i","h","o","n","s","r","u","t","w","v","x","z"].
// s is guaranteed to be valid.

class Solution {
public:
    string originalDigits(string s) {
        vector<int> nums(10, 0);
        vector<int> count(26, 0);
        
        for(auto c:s)
            count[c - 'a']++;
        
        nums[0] = count['z'-'a'];
        nums[2] = count['w'-'a'];
        nums[4] = count['u'-'a'];
        nums[6] = count['x'-'a'];
        nums[8] = count['g'-'a'];
        
        nums[1] = count['o' - 'a'] - nums[2] - nums[4] - nums[0];
        nums[3] = count['h' - 'a'] - nums[8];
        nums[5] = count['f' - 'a'] - nums[4];
        nums[7] = count['s' - 'a'] - nums[6];
        nums[9] = count['i' - 'a'] - nums[5] - nums[6] - nums[8];
        
        string res;
        for(int i= 0; i< 10; ++i){
            int c = nums[i];
            while(c > 0){
                res += to_string(i);
                --c;
            }
        }
        return res;
    }
};