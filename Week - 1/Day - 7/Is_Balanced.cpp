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
    int count(TreeNode* root){
        if(root==NULL)
            return 0;

        int count_left=count(root->left);
        int count_right=count(root->right);
        
        return max(count_left,count_right)+1;

    }

    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;

        int count_left=count(root->left);
        int count_right=count(root->right);

        if(abs(count_left-count_right)>1)
            return false;

        return isBalanced(root->left) && isBalanced(root->right) && true;
        
        
    }
};
