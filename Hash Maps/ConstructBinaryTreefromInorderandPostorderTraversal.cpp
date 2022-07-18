// 106. Construct Binary Tree from Inorder and Postorder Traversal
// Medium

// 4903

// 76

// Add to List

// Share
// Given two integer arrays inorder and postorder where inorder is the inorder traversal of a binary tree and postorder is the postorder traversal of the same tree, construct and return the binary tree.


// Example 1:


// Input: inorder = [9,3,15,20,7], postorder = [9,15,7,20,3]
// Output: [3,9,20,null,null,15,7]
// Example 2:

// Input: inorder = [-1], postorder = [-1]
// Output: [-1]
 

// Constraints:

// 1 <= inorder.length <= 3000
// postorder.length == inorder.length
// -3000 <= inorder[i], postorder[i] <= 3000
// inorder and postorder consist of unique values.
// Each value of postorder also appears in inorder.
// inorder is guaranteed to be the inorder traversal of the tree.
// postorder is guaranteed to be the postorder traversal of the tree.


class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size()!=postorder.size())
            return NULL;
        map<int,int> hm;
        for(int i=0;i<inorder.size();i++)
            hm[inorder[i]]=i;
        TreeNode* root=solve(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,hm);
        return root;
    }
    TreeNode* solve(vector<int> &inorder,int is,int ie,vector<int> &postorder,int ps,int pe,map<int,int> &hm){
        if(ps>pe || is>ie)
            return NULL;
        TreeNode* root=new TreeNode(postorder[pe]);
        int inRoot=hm[postorder[pe]];
        int numsleft=inRoot-is;
        root->left=solve(inorder,is,inRoot-1,postorder,ps,ps+numsleft-1,hm);
        root->right=solve(inorder,inRoot+1,ie,postorder,ps+numsleft,pe-1,hm);
        return root;
    }
};