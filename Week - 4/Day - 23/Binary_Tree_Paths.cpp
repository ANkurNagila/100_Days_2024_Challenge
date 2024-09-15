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
    void help(TreeNode *root,string str,vector<string> &ans){
        if(root==NULL)
            return ;

        str=str + "->" + to_string(root->val);

        if(root->left==NULL && root->right==NULL){
            ans.push_back(str);
            return ;
        }

        if(root->left!=NULL)
            help(root->left,str,ans);
        
        if(root->right!=NULL)
            help(root->right,str,ans);
    }


    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string str=to_string(root->val);

        if(root==NULL)
            return ans;

        if(root->left==NULL && root->right==NULL){
            ans.push_back(str);
            return ans;
        }

        if(root->left!=NULL)
            help(root->left,str,ans);
        
        if(root->right!=NULL)
            help(root->right,str,ans);

        return ans;
    }
};