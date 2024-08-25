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
        if(root==NULL)
            return {};

        queue<TreeNode*> trav;
        trav.push(root);
        vector<vector<int>> ans;

        while(trav.size()!=0){
            int n=trav.size();
            vector<int> x;

            while(n--){
                TreeNode *poi=trav.front();
                trav.pop();
                x.push_back(poi->val);

                if(poi->left!=NULL)
                    trav.push(poi->left);
                if(poi->right!=NULL)
                    trav.push(poi->right);

            }

            ans.push_back(x);
        }

        return ans;



        
    }
};
