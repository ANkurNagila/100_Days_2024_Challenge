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
    bool check(TreeNode* p,TreeNode* q){
        if(p==NULL && q==NULL)
            return true;
        
        else if((p!=NULL && q==NULL) || (p==NULL && q!=NULL))
            return false;

        if(p->val!=q->val)
            return false;

        return true && check(p->right,q->right) && check(p->left,q->left);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL)
            return false;

        bool extra=check(root,subRoot);
        bool l=isSubtree(root->left,subRoot);
        bool r=isSubtree(root->right,subRoot);
        
        return l||r||extra;
    }
};
