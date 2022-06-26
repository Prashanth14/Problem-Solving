// An n x n matrix is valid if every row and every column contains all the integers from 1 to n (inclusive).

// Given an n x n integer matrix matrix, return true if the matrix is valid. Otherwise, return false.

// Example 1:


// Input: matrix = [[1,2,3],[3,1,2],[2,3,1]]
// Output: true
// Explanation: In this case, n = 3, and every row and column contains the numbers 1, 2, and 3.
// Hence, we return true.
// Example 2:


// Input: matrix = [[1,1,1],[1,2,3],[1,2,3]]
// Output: false
// Explanation: In this case, n = 3, but the first row and the first column do not contain the numbers 2 or 3.
// Hence, we return false.
 

// Constraints:

// n == matrix.length == matrix[i].length
// 1 <= n <= 100
// 1 <= matrix[i][j] <= n

class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        set<int> row_nums;
        set<int> col_nums;
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        for(int i = 0; i< rows; ++i){
            for(int j = 0; j < cols; ++j){
                if(row_nums.find(matrix[i][j]) == row_nums.end()){
                    row_nums.insert(matrix[i][j]);
                }else{
                    return false;
                }
                
                if(col_nums.find(matrix[j][i]) == col_nums.end()){
                    col_nums.insert(matrix[j][i]);
                }else{
                    return false;
                }
            }
            row_nums.clear();
            col_nums.clear();
        }
        return true;
    }
};