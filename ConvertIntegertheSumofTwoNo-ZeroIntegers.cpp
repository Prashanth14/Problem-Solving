// No-Zero integer is a positive integer that does not contain any 0 in its decimal representation.

// Given an integer n, return a list of two integers [A, B] where:

// A and B are No-Zero integers.
// A + B = n
// The test cases are generated so that there is at least one valid solution. If there are many valid solutions you can return any of them.

// Example 1:

// Input: n = 2
// Output: [1,1]
// Explanation: A = 1, B = 1. A + B = n and both A and B do not contain any 0 in their decimal representation.
// Example 2:

// Input: n = 11
// Output: [2,9]
 

// Constraints:

// 2 <= n <= 104


class Solution {
public:
    bool isNonzero(int n){
        while(n){
            if(n % 10 == 0)
                return false;
            n /= 10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int> ans;
        for(int i = 1 ; i < n; ++i){
            if(isNonzero(i) && isNonzero(n - i)){
                ans.push_back(i);
                ans.push_back(n-i);
                return ans;
            }
        }
        
        return {0,0};
    }
};