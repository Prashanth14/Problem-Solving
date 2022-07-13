// Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

// Example 1:

// Input: root = [3,9,20,null,null,15,7]
// Output: [[3],[9,20],[15,7]]
// Example 2:

// Input: root = [1]
// Output: [[1]]
// Example 3:

// Input: root = []
// Output: []
 

// Constraints:

// The number of nodes in the tree is in the range [0, 2000].
// -1000 <= Node.val <= 1000

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root)
            return {};
        
        queue<TreeNode*> Q;
        Q.push(root);
        
        vector<vector<int>> res;
        TreeNode *temp;
        int len;
        
        while(!Q.empty()){
            len = Q.size();
            vector<int> vals;
            for(int i = 0; i < len; ++i){
                temp = Q.front();
                Q.pop();
                vals.push_back(temp -> val);
                if(temp -> left){
                    Q.push(temp -> left);
                }
                if(temp -> right){
                    Q.push(temp -> right);
                }
            } 
            res.push_back(vals);
        }
        return res;
    }
};