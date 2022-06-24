// Given an m x n matrix of distinct numbers, return all lucky numbers in the matrix in any order.

// A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column.

// Example 1:

// Input: matrix = [[3,7,8],[9,11,13],[15,16,17]]
// Output: [15]
// Explanation: 15 is the only lucky number since it is the minimum in its row and the maximum in its column.
// Example 2:

// Input: matrix = [[1,10,4,2],[9,3,8,7],[15,16,17,12]]
// Output: [12]
// Explanation: 12 is the only lucky number since it is the minimum in its row and the maximum in its column.
// Example 3:

// Input: matrix = [[7,8],[1,2]]
// Output: [7]
// Explanation: 7 is the only lucky number since it is the minimum in its row and the maximum in its column.
 

// Constraints:

// m == mat.length
// n == mat[i].length
// 1 <= n, m <= 50
// 1 <= matrix[i][j] <= 105.
// All elements in the matrix are distinct.


class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> lucky;
        vector<int> max_col;
        vector<int> min_row;
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        // store minimum values of each row in the vector
        for(int i = 0; i < rows; ++i){
            int mini = matrix[i][0];
            for(int j = 1; j < cols; ++j){
                mini = min(mini, matrix[i][j]);
            }
            min_row.push_back(mini);
        }
        
        // store maximum values of each row in the vector
        for(int i = 0; i < cols; ++i){
            int maxi = matrix[0][i];
            for(int j = 1; j < rows; ++j){
                maxi = max(maxi, matrix[j][i]);
            }
            max_col.push_back(maxi);
        }
        
        // if any two values matches from min vector and max vector then it is the lucky number
        for(int i = 0; i < rows; ++i){
            for(int j = 0; j < cols; ++j){
                if(max_col[j] == min_row[i])
                    lucky.push_back( min_row[i]);
            }
        }
        
        return lucky;
    }
};