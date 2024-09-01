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
    int maxi;
public:
    int help(TreeNode *root){
        if(root==NULL)
            return -1;
        
        int l=help(root->left)+1;
        int r=help(root->right)+1;
        
        maxi=max(maxi,max(l,max(l+r,r)));

        return max(l,r);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        maxi=0;
        help(root);
        return maxi;
    }
};
