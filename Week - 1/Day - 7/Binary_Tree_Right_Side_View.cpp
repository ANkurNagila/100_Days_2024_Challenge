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
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL)
            return {};

        queue<TreeNode*> trav;
        trav.push(root);
        vector<int> ans;

        while(trav.size()!=0){
            int n=trav.size();
            ans.push_back(trav.front()->val);


            while(n--){
                TreeNode *poi=trav.front();
                trav.pop();

                if(poi->right!=NULL)
                    trav.push(poi->right);
                if(poi->left!=NULL)
                    trav.push(poi->left);

            }
        }

        return ans;



    }
};
