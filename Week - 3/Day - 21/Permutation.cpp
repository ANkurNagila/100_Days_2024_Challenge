class Solution {
public:
    void help(vector<int> &nums,int n,vector<vector<int>> &ans){
        if(n==nums.size()){
            ans.push_back(nums);
            return ;
        }

        for(int i=n;i<nums.size();i++){
            swap(nums[i],nums[n]);
            help(nums,n+1,ans);
            swap(nums[i],nums[n]);
        }
    }


    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=0;

        help(nums,n,ans);
        return ans;
    }
};