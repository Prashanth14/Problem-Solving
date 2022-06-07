// Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

// Example 1:

// Input: rowIndex = 3
// Output: [1,3,3,1]
// Example 2:

// Input: rowIndex = 0
// Output: [1]
// Example 3:

// Input: rowIndex = 1
// Output: [1,1]



class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> res(rowIndex+1);
        for(int i = 0; i <= rowIndex; i++){
            res[i].resize(i+1);
            res[i][0] = res[i][i] = 1;
            
            for(int j = 1; j < i; j++){
                res[i][j] = res[i-1][j-1] + res[i-1][j];
            }
        }
        return res[rowIndex];
    }
};