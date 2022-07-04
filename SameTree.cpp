// Given the roots of two binary trees p and q, write a function to check if they are the same or not.

// Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

// Example 1:


// Input: p = [1,2,3], q = [1,2,3]
// Output: true
// Example 2:


// Input: p = [1,2], q = [1,null,2]
// Output: false
// Example 3:


// Input: p = [1,2,1], q = [1,1,2]
// Output: false
 

// Constraints:

// The number of nodes in both trees is in the range [0, 100].
// -104 <= Node.val <= 104

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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // if both the trees are empty
        if(!p && !q)
            return true;
        
        // if one of the tree is empty and other tree is not empty
        if(!p && q || p && !q)
            return false;
        
        // check every node val in the both the trees are equal or not.
        int a = p -> val;
        int b = q -> val;
        if( a != b)
            return false;
        //Check for the left sub tree and right subtree of both the Trees
        return ( (isSameTree(p -> left, q -> left) ) && (isSameTree(p -> right, q -> right)) );
    }
};