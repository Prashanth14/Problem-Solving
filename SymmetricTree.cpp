// Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

// Example 1:


// Input: root = [1,2,2,3,4,4,3]
// Output: true
// Example 2:


// Input: root = [1,2,2,null,3,null,3]
// Output: false
 

// Constraints:

// The number of nodes in the tree is in the range [1, 1000].
// -100 <= Node.val <= 100

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
    bool solve(TreeNode *r1, TreeNode *r2){
        //if one of the Left or right subtree is null then return false
        if(!r1 && r2 || r1 && !r2)
            return false;
        //if symmetric node values are not equal then return fasle;
        if(r1 && r2){
            if(r1 -> val != r2 -> val)
                return false;
            if(!solve(r1->left, r2->right) || !solve(r1->right, r2->left))
                return false;
        }
        return true;
    }
    
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;
        
        return solve( root->left, root->right );
    }
};