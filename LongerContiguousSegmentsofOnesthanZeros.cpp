// Given a binary string s, return true if the longest contiguous segment of 1's is strictly longer than the longest contiguous segment of 0's in s, or return false otherwise.

// For example, in s = "110100010" the longest continuous segment of 1s has length 2, and the longest continuous segment of 0s has length 3.
// Note that if there are no 0's, then the longest continuous segment of 0's is considered to have a length 0. The same applies if there is no 1's.

// Example 1:

// Input: s = "1101"
// Output: true
// Explanation:
// The longest contiguous segment of 1s has length 2: "1101"
// The longest contiguous segment of 0s has length 1: "1101"
// The segment of 1s is longer, so return true.
// Example 2:

// Input: s = "111000"
// Output: false
// Explanation:
// The longest contiguous segment of 1s has length 3: "111000"
// The longest contiguous segment of 0s has length 3: "111000"
// The segment of 1s is not longer, so return false.
// Example 3:

// Input: s = "110100010"
// Output: false
// Explanation:
// The longest contiguous segment of 1s has length 2: "110100010"
// The longest contiguous segment of 0s has length 3: "110100010"
// The segment of 1s is not longer, so return false.
 

// Constraints:

// 1 <= s.length <= 100
// s[i] is either '0' or '1'.

class Solution {
public:
    bool checkZeroOnes(string s) {
        if(s.length() == 1 && s[0] == '1')
            return true;
        else if(s.length() == 1 && s[0] == '0')
            return false;
        
        int ones_cnt = 1;
        int zeros_cnt = 1;
        int max1 = INT_MIN, max0 = INT_MIN;
        int n = s.length();
        for(int i = 0; i < n; ++i){
            if(s[i] == '1'){
                if(s[i] == s[i+1])
                    ++ones_cnt;
                else
                    ones_cnt = 1;    
                
                if(ones_cnt > max1)
                    max1 = ones_cnt;
                
            }else{
                if(s[i] == s[i+1])
                    ++zeros_cnt;
                else
                    zeros_cnt = 1;
                
                if(zeros_cnt > max0)
                    max0 = zeros_cnt;
                }
        }
        return (max1 > max0) ? true: false;
    }
};