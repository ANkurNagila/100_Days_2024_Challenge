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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL)
            return {};

        vector<vector<int>> ans;
        queue<TreeNode*> x;
        x.push(root);
        int flag=0;

        while(x.size()!=0){
            vector<int> temp;
            int size=x.size();

            while(size--){
                TreeNode* i=x.front();
                temp.push_back(i->val);
                
                if(i->left!=NULL)
                    x.push(i->left);

                if(i->right!=NULL)
                    x.push(i->right);
                x.pop();
            }

            if(flag==1){
                flag=0;
                reverse(temp.begin(),temp.end());
            }
            else
                flag=1;

            ans.push_back(temp);
        }

        return ans;
        
    }
};